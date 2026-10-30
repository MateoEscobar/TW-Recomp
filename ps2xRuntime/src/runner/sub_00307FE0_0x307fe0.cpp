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

// Function: sub_00307FE0
// Address: 0x307fe0 - 0x3080c8
void sub_00307FE0_0x307fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307FE0_0x307fe0");
#endif

    switch (ctx->pc) {
        case 0x307ff4u: goto label_307ff4;
        case 0x307ffcu: goto label_307ffc;
        case 0x308008u: goto label_308008;
        case 0x30803cu: goto label_30803c;
        case 0x308060u: goto label_308060;
        case 0x308088u: goto label_308088;
        case 0x3080acu: goto label_3080ac;
        default: break;
    }

    ctx->pc = 0x307fe0u;

    // 0x307fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x307fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x307fe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x307fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x307fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307fec: 0xc0c1d9a  jal         func_307668
    ctx->pc = 0x307FECu;
    SET_GPR_U32(ctx, 31, 0x307FF4u);
    ctx->pc = 0x307FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FECu;
    // 0x307ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307668u, 0x307FECu, 0x307FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FF4u;
label_307ff4:
    // 0x307ff4: 0xc0c1de2  jal         func_307788
    ctx->pc = 0x307FF4u;
    SET_GPR_U32(ctx, 31, 0x307FFCu);
    ctx->pc = 0x307FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FF4u;
    // 0x307ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307788u, 0x307FF4u, 0x307FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FFCu;
label_307ffc:
    // 0x307ffc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x307ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308000: 0xc059750  jal         func_165D40
    ctx->pc = 0x308000u;
    SET_GPR_U32(ctx, 31, 0x308008u);
    ctx->pc = 0x308004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308000u;
    // 0x308004: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x308000u, 0x308008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308008u;
label_308008:
    // 0x308008: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30800c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308010: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x308010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x308014: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x308014u;
    {
        const bool branch_taken_0x308014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308014) {
            ctx->pc = 0x308018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308014u;
            // 0x308018: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308048u;
            goto label_308048;
        }
    }
    ctx->pc = 0x30801Cu;
    // 0x30801c: 0x908200d9  lbu         $v0, 0xD9($a0)
    ctx->pc = 0x30801cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 217)));
    // 0x308020: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308020u;
    {
        const bool branch_taken_0x308020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308020u;
        // 0x308024: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308020) {
            ctx->pc = 0x308044u;
            goto label_308044;
        }
    }
    ctx->pc = 0x308028u;
    // 0x308028: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x30802c: 0x24c610c8  addiu       $a2, $a2, 0x10C8
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4296));
    // 0x308030: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x308030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x308034: 0xc05905e  jal         func_164178
    ctx->pc = 0x308034u;
    SET_GPR_U32(ctx, 31, 0x30803Cu);
    ctx->pc = 0x308038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308034u;
    // 0x308038: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x308034u, 0x30803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30803Cu;
label_30803c:
    // 0x30803c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30803Cu;
    {
        const bool branch_taken_0x30803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30803Cu;
        // 0x308040: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30803c) {
            ctx->pc = 0x30808Cu;
            goto label_30808c;
        }
    }
    ctx->pc = 0x308044u;
label_308044:
    // 0x308044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308048:
    // 0x308048: 0x906200df  lbu         $v0, 0xDF($v1)
    ctx->pc = 0x308048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 223)));
    // 0x30804c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30804Cu;
    {
        const bool branch_taken_0x30804c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30804Cu;
        // 0x308050: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30804c) {
            ctx->pc = 0x308088u;
            goto label_308088;
        }
    }
    ctx->pc = 0x308054u;
    // 0x308054: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x308054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x308058: 0xc05916e  jal         func_1645B8
    ctx->pc = 0x308058u;
    SET_GPR_U32(ctx, 31, 0x308060u);
    ctx->pc = 0x30805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308058u;
    // 0x30805c: 0x8c44caa8  lw          $a0, -0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1645B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1645B8u, 0x308058u, 0x308060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308060u;
label_308060:
    // 0x308060: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x308060u;
    {
        const bool branch_taken_0x308060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308060u;
        // 0x308064: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308060) {
            ctx->pc = 0x308088u;
            goto label_308088;
        }
    }
    ctx->pc = 0x308068u;
    // 0x308068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30806c: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x30806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x308070: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x308070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x308074: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x308074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x308078: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x308078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x30807c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30807cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308080: 0xc05905e  jal         func_164178
    ctx->pc = 0x308080u;
    SET_GPR_U32(ctx, 31, 0x308088u);
    ctx->pc = 0x308084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308080u;
    // 0x308084: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x308080u, 0x308088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308088u;
label_308088:
    // 0x308088: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x308088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30808c:
    // 0x30808c: 0x908200df  lbu         $v0, 0xDF($a0)
    ctx->pc = 0x30808cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 223)));
    // 0x308090: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308090u;
    {
        const bool branch_taken_0x308090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308090u;
        // 0x308094: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308090) {
            ctx->pc = 0x3080B4u;
            goto label_3080b4;
        }
    }
    ctx->pc = 0x308098u;
    // 0x308098: 0x808300e0  lb          $v1, 0xE0($a0)
    ctx->pc = 0x308098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x30809c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30809Cu;
    {
        const bool branch_taken_0x30809c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30809c) {
            ctx->pc = 0x3080A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30809Cu;
            // 0x3080a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3080B8u;
            goto label_3080b8;
        }
    }
    ctx->pc = 0x3080A4u;
    // 0x3080a4: 0xc059856  jal         func_166158
    ctx->pc = 0x3080A4u;
    SET_GPR_U32(ctx, 31, 0x3080ACu);
    ctx->pc = 0x3080A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080A4u;
    // 0x3080a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3080A4u, 0x3080ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080ACu;
label_3080ac:
    // 0x3080ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3080acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3080b0: 0xa06200e0  sb          $v0, 0xE0($v1)
    ctx->pc = 0x3080b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 2));
label_3080b4:
    // 0x3080b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3080b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3080b8:
    // 0x3080b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3080b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3080bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3080BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3080C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080BCu;
        // 0x3080c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3080BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3080C4u;
    // 0x3080c4: 0x0  nop
    ctx->pc = 0x3080c4u;
    // NOP
    ctx->pc = 0x3080c8u;
}
