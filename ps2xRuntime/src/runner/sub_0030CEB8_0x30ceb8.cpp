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

// Function: sub_0030CEB8
// Address: 0x30ceb8 - 0x30cf98
void sub_0030CEB8_0x30ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CEB8_0x30ceb8");
#endif

    switch (ctx->pc) {
        case 0x30ceb8u: goto label_30ceb8;
        case 0x30cebcu: goto label_30cebc;
        case 0x30cec0u: goto label_30cec0;
        case 0x30cec4u: goto label_30cec4;
        case 0x30cec8u: goto label_30cec8;
        case 0x30ceccu: goto label_30cecc;
        case 0x30ced0u: goto label_30ced0;
        case 0x30ced4u: goto label_30ced4;
        case 0x30ced8u: goto label_30ced8;
        case 0x30cedcu: goto label_30cedc;
        case 0x30cee0u: goto label_30cee0;
        case 0x30cee4u: goto label_30cee4;
        case 0x30cee8u: goto label_30cee8;
        case 0x30ceecu: goto label_30ceec;
        case 0x30cef0u: goto label_30cef0;
        case 0x30cef4u: goto label_30cef4;
        case 0x30cef8u: goto label_30cef8;
        case 0x30cefcu: goto label_30cefc;
        case 0x30cf00u: goto label_30cf00;
        case 0x30cf04u: goto label_30cf04;
        case 0x30cf08u: goto label_30cf08;
        case 0x30cf0cu: goto label_30cf0c;
        case 0x30cf10u: goto label_30cf10;
        case 0x30cf14u: goto label_30cf14;
        case 0x30cf18u: goto label_30cf18;
        case 0x30cf1cu: goto label_30cf1c;
        case 0x30cf20u: goto label_30cf20;
        case 0x30cf24u: goto label_30cf24;
        case 0x30cf28u: goto label_30cf28;
        case 0x30cf2cu: goto label_30cf2c;
        case 0x30cf30u: goto label_30cf30;
        case 0x30cf34u: goto label_30cf34;
        case 0x30cf38u: goto label_30cf38;
        case 0x30cf3cu: goto label_30cf3c;
        case 0x30cf40u: goto label_30cf40;
        case 0x30cf44u: goto label_30cf44;
        case 0x30cf48u: goto label_30cf48;
        case 0x30cf4cu: goto label_30cf4c;
        case 0x30cf50u: goto label_30cf50;
        case 0x30cf54u: goto label_30cf54;
        case 0x30cf58u: goto label_30cf58;
        case 0x30cf5cu: goto label_30cf5c;
        case 0x30cf60u: goto label_30cf60;
        case 0x30cf64u: goto label_30cf64;
        case 0x30cf68u: goto label_30cf68;
        case 0x30cf6cu: goto label_30cf6c;
        case 0x30cf70u: goto label_30cf70;
        case 0x30cf74u: goto label_30cf74;
        case 0x30cf78u: goto label_30cf78;
        case 0x30cf7cu: goto label_30cf7c;
        case 0x30cf80u: goto label_30cf80;
        case 0x30cf84u: goto label_30cf84;
        case 0x30cf88u: goto label_30cf88;
        case 0x30cf8cu: goto label_30cf8c;
        case 0x30cf90u: goto label_30cf90;
        case 0x30cf94u: goto label_30cf94;
        default: break;
    }

    ctx->pc = 0x30ceb8u;

label_30ceb8:
    // 0x30ceb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30cebc:
    // 0x30cebc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30cec0:
    // 0x30cec0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30cec4:
    // 0x30cec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30cec8:
    // 0x30cec8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30cec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30cecc:
    // 0x30cecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30ced0:
    // 0x30ced0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_30ced4:
    // 0x30ced4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30ced8:
    // 0x30ced8: 0xc087502  jal         func_21D408
label_30cedc:
    if (ctx->pc == 0x30CEDCu) {
        ctx->pc = 0x30CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CED8u;
        // 0x30cedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CEE0u;
        goto label_30cee0;
    }
    ctx->pc = 0x30CED8u;
    SET_GPR_U32(ctx, 31, 0x30CEE0u);
    ctx->pc = 0x30CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CED8u;
    // 0x30cedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30CED8u, 0x30CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CEE0u;
label_30cee0:
    // 0x30cee0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30cee4:
    // 0x30cee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30cee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30cee8:
    // 0x30cee8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30ceec:
    // 0x30ceec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30cef0:
    // 0x30cef0: 0x40f809  jalr        $v0
label_30cef4:
    if (ctx->pc == 0x30CEF4u) {
        ctx->pc = 0x30CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEF0u;
        // 0x30cef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CEF8u;
        goto label_30cef8;
    }
    ctx->pc = 0x30CEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30CEF8u);
        ctx->pc = 0x30CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEF0u;
        // 0x30cef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CEF0u, 0x30CEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30CEF8u;
label_30cef8:
    // 0x30cef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30cefc:
    // 0x30cefc: 0xc0a3630  jal         func_28D8C0
label_30cf00:
    if (ctx->pc == 0x30CF00u) {
        ctx->pc = 0x30CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEFCu;
        // 0x30cf00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF04u;
        goto label_30cf04;
    }
    ctx->pc = 0x30CEFCu;
    SET_GPR_U32(ctx, 31, 0x30CF04u);
    ctx->pc = 0x30CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CEFCu;
    // 0x30cf00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30CEFCu, 0x30CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF04u;
label_30cf04:
    // 0x30cf04: 0xc0a3628  jal         func_28D8A0
label_30cf08:
    if (ctx->pc == 0x30CF08u) {
        ctx->pc = 0x30CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF04u;
        // 0x30cf08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF0Cu;
        goto label_30cf0c;
    }
    ctx->pc = 0x30CF04u;
    SET_GPR_U32(ctx, 31, 0x30CF0Cu);
    ctx->pc = 0x30CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF04u;
    // 0x30cf08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30CF04u, 0x30CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF0Cu;
label_30cf0c:
    // 0x30cf0c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x30cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_30cf10:
    // 0x30cf10: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x30cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_30cf14:
    // 0x30cf14: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_30cf18:
    if (ctx->pc == 0x30CF18u) {
        ctx->pc = 0x30CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF14u;
        // 0x30cf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF1Cu;
        goto label_30cf1c;
    }
    ctx->pc = 0x30CF14u;
    {
        const bool branch_taken_0x30cf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF14u;
        // 0x30cf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf14) {
            ctx->pc = 0x30CF6Cu;
            goto label_30cf6c;
        }
    }
    ctx->pc = 0x30CF1Cu;
label_30cf1c:
    // 0x30cf1c: 0x2402008b  addiu       $v0, $zero, 0x8B
    ctx->pc = 0x30cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_30cf20:
    // 0x30cf20: 0xc0a4e54  jal         func_293950
label_30cf24:
    if (ctx->pc == 0x30CF24u) {
        ctx->pc = 0x30CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF20u;
        // 0x30cf24: 0xae2203b0  sw          $v0, 0x3B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF28u;
        goto label_30cf28;
    }
    ctx->pc = 0x30CF20u;
    SET_GPR_U32(ctx, 31, 0x30CF28u);
    ctx->pc = 0x30CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF20u;
    // 0x30cf24: 0xae2203b0  sw          $v0, 0x3B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30CF20u, 0x30CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF28u;
label_30cf28:
    // 0x30cf28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30cf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30cf2c:
    // 0x30cf2c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_30cf30:
    if (ctx->pc == 0x30CF30u) {
        ctx->pc = 0x30CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF2Cu;
        // 0x30cf30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF34u;
        goto label_30cf34;
    }
    ctx->pc = 0x30CF2Cu;
    {
        const bool branch_taken_0x30cf2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF2Cu;
        // 0x30cf30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf2c) {
            ctx->pc = 0x30CF58u;
            goto label_30cf58;
        }
    }
    ctx->pc = 0x30CF34u;
label_30cf34:
    // 0x30cf34: 0x860a003a  lh          $t2, 0x3A($s0)
    ctx->pc = 0x30cf34u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
label_30cf38:
    // 0x30cf38: 0x9206003d  lbu         $a2, 0x3D($s0)
    ctx->pc = 0x30cf38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_30cf3c:
    // 0x30cf3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30cf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30cf40:
    // 0x30cf40: 0x9208003c  lbu         $t0, 0x3C($s0)
    ctx->pc = 0x30cf40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_30cf44:
    // 0x30cf44: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x30cf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_30cf48:
    // 0x30cf48: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x30cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30cf4c:
    // 0x30cf4c: 0xc60d0030  lwc1        $f13, 0x30($s0)
    ctx->pc = 0x30cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_30cf50:
    // 0x30cf50: 0xc0bce88  jal         func_2F3A20
label_30cf54:
    if (ctx->pc == 0x30CF54u) {
        ctx->pc = 0x30CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF50u;
        // 0x30cf54: 0x96090038  lhu         $t1, 0x38($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF58u;
        goto label_30cf58;
    }
    ctx->pc = 0x30CF50u;
    SET_GPR_U32(ctx, 31, 0x30CF58u);
    ctx->pc = 0x30CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF50u;
    // 0x30cf54: 0x96090038  lhu         $t1, 0x38($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A20u, 0x30CF50u, 0x30CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF58u;
label_30cf58:
    // 0x30cf58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30cf5c:
    // 0x30cf5c: 0xc0a35d6  jal         func_28D758
label_30cf60:
    if (ctx->pc == 0x30CF60u) {
        ctx->pc = 0x30CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF5Cu;
        // 0x30cf60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF64u;
        goto label_30cf64;
    }
    ctx->pc = 0x30CF5Cu;
    SET_GPR_U32(ctx, 31, 0x30CF64u);
    ctx->pc = 0x30CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF5Cu;
    // 0x30cf60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30CF5Cu, 0x30CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF64u;
label_30cf64:
    // 0x30cf64: 0x10000005  b           . + 4 + (0x5 << 2)
label_30cf68:
    if (ctx->pc == 0x30CF68u) {
        ctx->pc = 0x30CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF64u;
        // 0x30cf68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF6Cu;
        goto label_30cf6c;
    }
    ctx->pc = 0x30CF64u;
    {
        const bool branch_taken_0x30cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF64u;
        // 0x30cf68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cf64) {
            ctx->pc = 0x30CF7Cu;
            goto label_30cf7c;
        }
    }
    ctx->pc = 0x30CF6Cu;
label_30cf6c:
    // 0x30cf6c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30cf70:
    // 0x30cf70: 0xc0ab742  jal         func_2ADD08
label_30cf74:
    if (ctx->pc == 0x30CF74u) {
        ctx->pc = 0x30CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF70u;
        // 0x30cf74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF78u;
        goto label_30cf78;
    }
    ctx->pc = 0x30CF70u;
    SET_GPR_U32(ctx, 31, 0x30CF78u);
    ctx->pc = 0x30CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF70u;
    // 0x30cf74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x30CF70u, 0x30CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF78u;
label_30cf78:
    // 0x30cf78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30cf78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30cf7c:
    // 0x30cf7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30cf7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30cf80:
    // 0x30cf80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30cf80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30cf84:
    // 0x30cf84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30cf84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30cf88:
    // 0x30cf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30cf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30cf8c:
    // 0x30cf8c: 0x3e00008  jr          $ra
label_30cf90:
    if (ctx->pc == 0x30CF90u) {
        ctx->pc = 0x30CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF8Cu;
        // 0x30cf90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30CF94u;
        goto label_30cf94;
    }
    ctx->pc = 0x30CF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF8Cu;
        // 0x30cf90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CF94u;
label_30cf94:
    // 0x30cf94: 0x0  nop
    ctx->pc = 0x30cf94u;
    // NOP
    ctx->pc = 0x30cf98u;
}
