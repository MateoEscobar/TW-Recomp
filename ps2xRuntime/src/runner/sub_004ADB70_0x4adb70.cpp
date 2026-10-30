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

// Function: sub_004ADB70
// Address: 0x4adb70 - 0x4adc28
void sub_004ADB70_0x4adb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADB70_0x4adb70");
#endif

    switch (ctx->pc) {
        case 0x4adb70u: goto label_4adb70;
        case 0x4adb74u: goto label_4adb74;
        case 0x4adb78u: goto label_4adb78;
        case 0x4adb7cu: goto label_4adb7c;
        case 0x4adb80u: goto label_4adb80;
        case 0x4adb84u: goto label_4adb84;
        case 0x4adb88u: goto label_4adb88;
        case 0x4adb8cu: goto label_4adb8c;
        case 0x4adb90u: goto label_4adb90;
        case 0x4adb94u: goto label_4adb94;
        case 0x4adb98u: goto label_4adb98;
        case 0x4adb9cu: goto label_4adb9c;
        case 0x4adba0u: goto label_4adba0;
        case 0x4adba4u: goto label_4adba4;
        case 0x4adba8u: goto label_4adba8;
        case 0x4adbacu: goto label_4adbac;
        case 0x4adbb0u: goto label_4adbb0;
        case 0x4adbb4u: goto label_4adbb4;
        case 0x4adbb8u: goto label_4adbb8;
        case 0x4adbbcu: goto label_4adbbc;
        case 0x4adbc0u: goto label_4adbc0;
        case 0x4adbc4u: goto label_4adbc4;
        case 0x4adbc8u: goto label_4adbc8;
        case 0x4adbccu: goto label_4adbcc;
        case 0x4adbd0u: goto label_4adbd0;
        case 0x4adbd4u: goto label_4adbd4;
        case 0x4adbd8u: goto label_4adbd8;
        case 0x4adbdcu: goto label_4adbdc;
        case 0x4adbe0u: goto label_4adbe0;
        case 0x4adbe4u: goto label_4adbe4;
        case 0x4adbe8u: goto label_4adbe8;
        case 0x4adbecu: goto label_4adbec;
        case 0x4adbf0u: goto label_4adbf0;
        case 0x4adbf4u: goto label_4adbf4;
        case 0x4adbf8u: goto label_4adbf8;
        case 0x4adbfcu: goto label_4adbfc;
        case 0x4adc00u: goto label_4adc00;
        case 0x4adc04u: goto label_4adc04;
        case 0x4adc08u: goto label_4adc08;
        case 0x4adc0cu: goto label_4adc0c;
        case 0x4adc10u: goto label_4adc10;
        case 0x4adc14u: goto label_4adc14;
        case 0x4adc18u: goto label_4adc18;
        case 0x4adc1cu: goto label_4adc1c;
        case 0x4adc20u: goto label_4adc20;
        case 0x4adc24u: goto label_4adc24;
        default: break;
    }

    ctx->pc = 0x4adb70u;

label_4adb70:
    // 0x4adb70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4adb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4adb74:
    // 0x4adb74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4adb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4adb78:
    // 0x4adb78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4adb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4adb7c:
    // 0x4adb7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4adb7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4adb80:
    // 0x4adb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4adb84:
    // 0x4adb84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4adb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4adb88:
    // 0x4adb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4adb8c:
    // 0x4adb8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4adb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4adb90:
    // 0x4adb90: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4adb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_4adb94:
    // 0x4adb94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4adb98:
    if (ctx->pc == 0x4ADB98u) {
        ctx->pc = 0x4ADB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB94u;
        // 0x4adb98: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADB9Cu;
        goto label_4adb9c;
    }
    ctx->pc = 0x4ADB94u;
    {
        const bool branch_taken_0x4adb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB94u;
        // 0x4adb98: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adb94) {
            ctx->pc = 0x4ADBA4u;
            goto label_4adba4;
        }
    }
    ctx->pc = 0x4ADB9Cu;
label_4adb9c:
    // 0x4adb9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4adba0:
    if (ctx->pc == 0x4ADBA0u) {
        ctx->pc = 0x4ADBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB9Cu;
        // 0x4adba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADBA4u;
        goto label_4adba4;
    }
    ctx->pc = 0x4ADB9Cu;
    {
        const bool branch_taken_0x4adb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB9Cu;
        // 0x4adba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adb9c) {
            ctx->pc = 0x4ADBBCu;
            goto label_4adbbc;
        }
    }
    ctx->pc = 0x4ADBA4u;
label_4adba4:
    // 0x4adba4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4adba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4adba8:
    // 0x4adba8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4adbac:
    if (ctx->pc == 0x4ADBACu) {
        ctx->pc = 0x4ADBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBA8u;
        // 0x4adbac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADBB0u;
        goto label_4adbb0;
    }
    ctx->pc = 0x4ADBA8u;
    {
        const bool branch_taken_0x4adba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBA8u;
        // 0x4adbac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adba8) {
            ctx->pc = 0x4ADBBCu;
            goto label_4adbbc;
        }
    }
    ctx->pc = 0x4ADBB0u;
label_4adbb0:
    // 0x4adbb0: 0xc12b652  jal         func_4AD948
label_4adbb4:
    if (ctx->pc == 0x4ADBB4u) {
        ctx->pc = 0x4ADBB8u;
        goto label_4adbb8;
    }
    ctx->pc = 0x4ADBB0u;
    SET_GPR_U32(ctx, 31, 0x4ADBB8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ADBB0u, 0x4ADBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADBB8u;
label_4adbb8:
    // 0x4adbb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4adbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4adbbc:
    // 0x4adbbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4adbc0:
    if (ctx->pc == 0x4ADBC0u) {
        ctx->pc = 0x4ADBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBBCu;
        // 0x4adbc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADBC4u;
        goto label_4adbc4;
    }
    ctx->pc = 0x4ADBBCu;
    {
        const bool branch_taken_0x4adbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBBCu;
        // 0x4adbc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adbbc) {
            ctx->pc = 0x4ADC0Cu;
            goto label_4adc0c;
        }
    }
    ctx->pc = 0x4ADBC4u;
label_4adbc4:
    // 0x4adbc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4adbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4adbc8:
    // 0x4adbc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4adbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4adbcc:
    // 0x4adbcc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4adbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4adbd0:
    // 0x4adbd0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4adbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4adbd4:
    // 0x4adbd4: 0x40f809  jalr        $v0
label_4adbd8:
    if (ctx->pc == 0x4ADBD8u) {
        ctx->pc = 0x4ADBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBD4u;
        // 0x4adbd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADBDCu;
        goto label_4adbdc;
    }
    ctx->pc = 0x4ADBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4ADBDCu);
        ctx->pc = 0x4ADBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBD4u;
        // 0x4adbd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADBD4u, 0x4ADBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ADBDCu;
label_4adbdc:
    // 0x4adbdc: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_4adbe0:
    if (ctx->pc == 0x4ADBE0u) {
        ctx->pc = 0x4ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBDCu;
        // 0x4adbe0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADBE4u;
        goto label_4adbe4;
    }
    ctx->pc = 0x4ADBDCu;
    {
        const bool branch_taken_0x4adbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBDCu;
        // 0x4adbe0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adbdc) {
            ctx->pc = 0x4ADBF4u;
            goto label_4adbf4;
        }
    }
    ctx->pc = 0x4ADBE4u;
label_4adbe4:
    // 0x4adbe4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4adbe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4adbe8:
    // 0x4adbe8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4adbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4adbec:
    // 0x4adbec: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4adbecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4adbf0:
    // 0x4adbf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4adbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4adbf4:
    // 0x4adbf4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4adbf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4adbf8:
    // 0x4adbf8: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4adbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_4adbfc:
    // 0x4adbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4adc00:
    if (ctx->pc == 0x4ADC00u) {
        ctx->pc = 0x4ADC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBFCu;
        // 0x4adc00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADC04u;
        goto label_4adc04;
    }
    ctx->pc = 0x4ADBFCu;
    {
        const bool branch_taken_0x4adbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADBFCu;
        // 0x4adc00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adbfc) {
            ctx->pc = 0x4ADC10u;
            goto label_4adc10;
        }
    }
    ctx->pc = 0x4ADC04u;
label_4adc04:
    // 0x4adc04: 0xc12b70a  jal         func_4ADC28
label_4adc08:
    if (ctx->pc == 0x4ADC08u) {
        ctx->pc = 0x4ADC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC04u;
        // 0x4adc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADC0Cu;
        goto label_4adc0c;
    }
    ctx->pc = 0x4ADC04u;
    SET_GPR_U32(ctx, 31, 0x4ADC0Cu);
    ctx->pc = 0x4ADC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADC04u;
    // 0x4adc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4ADC04u, 0x4ADC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADC0Cu;
label_4adc0c:
    // 0x4adc0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4adc0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4adc10:
    // 0x4adc10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4adc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4adc14:
    // 0x4adc14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4adc14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4adc18:
    // 0x4adc18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4adc18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4adc1c:
    // 0x4adc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4adc20:
    // 0x4adc20: 0x3e00008  jr          $ra
label_4adc24:
    if (ctx->pc == 0x4ADC24u) {
        ctx->pc = 0x4ADC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC20u;
        // 0x4adc24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ADC28u;
        goto label_fallthrough_0x4adc20;
    }
    ctx->pc = 0x4ADC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC20u;
        // 0x4adc24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4adc20:
    ctx->pc = 0x4ADC28u;
}
