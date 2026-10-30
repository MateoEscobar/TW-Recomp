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

// Function: sub_00287FE0
// Address: 0x287fe0 - 0x2880d8
void sub_00287FE0_0x287fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287FE0_0x287fe0");
#endif

    switch (ctx->pc) {
        case 0x287ffcu: goto label_287ffc;
        case 0x288008u: goto label_288008;
        case 0x288028u: goto label_288028;
        case 0x288040u: goto label_288040;
        case 0x288050u: goto label_288050;
        case 0x288060u: goto label_288060;
        case 0x288070u: goto label_288070;
        case 0x288088u: goto label_288088;
        case 0x288098u: goto label_288098;
        case 0x2880a8u: goto label_2880a8;
        case 0x2880bcu: goto label_2880bc;
        default: break;
    }

    ctx->pc = 0x287fe0u;

    // 0x287fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x287fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x287fe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x287fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x287fe8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x287fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x287fec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x287fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x287ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287ff4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287FF4u;
    SET_GPR_U32(ctx, 31, 0x287FFCu);
    ctx->pc = 0x287FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FF4u;
    // 0x287ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287FF4u, 0x287FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FFCu;
label_287ffc:
    // 0x287ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288000: 0xc089b98  jal         func_226E60
    ctx->pc = 0x288000u;
    SET_GPR_U32(ctx, 31, 0x288008u);
    ctx->pc = 0x288004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288000u;
    // 0x288004: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x288000u, 0x288008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288008u;
label_288008:
    // 0x288008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28800c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x28800cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x288010: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x288010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x288014: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x288014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x288018: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x288018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x28801c: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x28801cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x288020: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x288020u;
    SET_GPR_U32(ctx, 31, 0x288028u);
    ctx->pc = 0x288024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288020u;
    // 0x288024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x288020u, 0x288028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288028u;
label_288028:
    // 0x288028: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x288028u;
    {
        const bool branch_taken_0x288028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288028u;
        // 0x28802c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288028) {
            ctx->pc = 0x2880C0u;
            goto label_2880c0;
        }
    }
    ctx->pc = 0x288030u;
    // 0x288030: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x288030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x288034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288038: 0xc089998  jal         func_226660
    ctx->pc = 0x288038u;
    SET_GPR_U32(ctx, 31, 0x288040u);
    ctx->pc = 0x28803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288038u;
    // 0x28803c: 0x34a5001f  ori         $a1, $a1, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x288038u, 0x288040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288040u;
label_288040:
    // 0x288040: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x288040u;
    {
        const bool branch_taken_0x288040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288040u;
        // 0x288044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288040) {
            ctx->pc = 0x2880C0u;
            goto label_2880c0;
        }
    }
    ctx->pc = 0x288048u;
    // 0x288048: 0xc09eeca  jal         func_27BB28
    ctx->pc = 0x288048u;
    SET_GPR_U32(ctx, 31, 0x288050u);
    ctx->pc = 0x28804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288048u;
    // 0x28804c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB28u, 0x288048u, 0x288050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288050u;
label_288050:
    // 0x288050: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288050u;
    {
        const bool branch_taken_0x288050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288050) {
            ctx->pc = 0x288080u;
            goto label_288080;
        }
    }
    ctx->pc = 0x288058u;
    // 0x288058: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x288058u;
    SET_GPR_U32(ctx, 31, 0x288060u);
    ctx->pc = 0x28805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288058u;
    // 0x28805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x288058u, 0x288060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288060u;
label_288060:
    // 0x288060: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288060u;
    {
        const bool branch_taken_0x288060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288060u;
        // 0x288064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288060) {
            ctx->pc = 0x288074u;
            goto label_288074;
        }
    }
    ctx->pc = 0x288068u;
    // 0x288068: 0xc0a001a  jal         func_280068
    ctx->pc = 0x288068u;
    SET_GPR_U32(ctx, 31, 0x288070u);
    ctx->pc = 0x28806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288068u;
    // 0x28806c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x288068u, 0x288070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288070u;
label_288070:
    // 0x288070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288074:
    // 0x288074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288078: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288078u;
    {
        const bool branch_taken_0x288078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288078u;
        // 0x28807c: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288078) {
            ctx->pc = 0x2880B4u;
            goto label_2880b4;
        }
    }
    ctx->pc = 0x288080u;
label_288080:
    // 0x288080: 0xc09eed4  jal         func_27BB50
    ctx->pc = 0x288080u;
    SET_GPR_U32(ctx, 31, 0x288088u);
    ctx->pc = 0x288084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288080u;
    // 0x288084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BB50u, 0x288080u, 0x288088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288088u;
label_288088:
    // 0x288088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x288088u;
    {
        const bool branch_taken_0x288088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288088u;
        // 0x28808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288088) {
            ctx->pc = 0x2880C0u;
            goto label_2880c0;
        }
    }
    ctx->pc = 0x288090u;
    // 0x288090: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x288090u;
    SET_GPR_U32(ctx, 31, 0x288098u);
    ctx->pc = 0x288094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288090u;
    // 0x288094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x288090u, 0x288098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288098u;
label_288098:
    // 0x288098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288098u;
    {
        const bool branch_taken_0x288098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288098u;
        // 0x28809c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288098) {
            ctx->pc = 0x2880ACu;
            goto label_2880ac;
        }
    }
    ctx->pc = 0x2880A0u;
    // 0x2880a0: 0xc0a001a  jal         func_280068
    ctx->pc = 0x2880A0u;
    SET_GPR_U32(ctx, 31, 0x2880A8u);
    ctx->pc = 0x2880A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880A0u;
    // 0x2880a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x2880A0u, 0x2880A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880A8u;
label_2880a8:
    // 0x2880a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2880a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2880ac:
    // 0x2880ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2880acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880b0: 0x240600c2  addiu       $a2, $zero, 0xC2
    ctx->pc = 0x2880b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_2880b4:
    // 0x2880b4: 0xc098682  jal         func_261A08
    ctx->pc = 0x2880B4u;
    SET_GPR_U32(ctx, 31, 0x2880BCu);
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x2880B4u, 0x2880BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880BCu;
label_2880bc:
    // 0x2880bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2880bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2880c0:
    // 0x2880c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2880c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2880c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2880c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2880c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2880c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2880cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2880ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2880d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2880D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880D0u;
        // 0x2880d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2880D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2880D8u;
}
