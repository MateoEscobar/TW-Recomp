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

// Function: sub_003E9FD8
// Address: 0x3e9fd8 - 0x3ea0b0
void sub_003E9FD8_0x3e9fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9FD8_0x3e9fd8");
#endif

    switch (ctx->pc) {
        case 0x3e9fd8u: goto label_3e9fd8;
        case 0x3e9fdcu: goto label_3e9fdc;
        case 0x3e9fe0u: goto label_3e9fe0;
        case 0x3e9fe4u: goto label_3e9fe4;
        case 0x3e9fe8u: goto label_3e9fe8;
        case 0x3e9fecu: goto label_3e9fec;
        case 0x3e9ff0u: goto label_3e9ff0;
        case 0x3e9ff4u: goto label_3e9ff4;
        case 0x3e9ff8u: goto label_3e9ff8;
        case 0x3e9ffcu: goto label_3e9ffc;
        case 0x3ea000u: goto label_3ea000;
        case 0x3ea004u: goto label_3ea004;
        case 0x3ea008u: goto label_3ea008;
        case 0x3ea00cu: goto label_3ea00c;
        case 0x3ea010u: goto label_3ea010;
        case 0x3ea014u: goto label_3ea014;
        case 0x3ea018u: goto label_3ea018;
        case 0x3ea01cu: goto label_3ea01c;
        case 0x3ea020u: goto label_3ea020;
        case 0x3ea024u: goto label_3ea024;
        case 0x3ea028u: goto label_3ea028;
        case 0x3ea02cu: goto label_3ea02c;
        case 0x3ea030u: goto label_3ea030;
        case 0x3ea034u: goto label_3ea034;
        case 0x3ea038u: goto label_3ea038;
        case 0x3ea03cu: goto label_3ea03c;
        case 0x3ea040u: goto label_3ea040;
        case 0x3ea044u: goto label_3ea044;
        case 0x3ea048u: goto label_3ea048;
        case 0x3ea04cu: goto label_3ea04c;
        case 0x3ea050u: goto label_3ea050;
        case 0x3ea054u: goto label_3ea054;
        case 0x3ea058u: goto label_3ea058;
        case 0x3ea05cu: goto label_3ea05c;
        case 0x3ea060u: goto label_3ea060;
        case 0x3ea064u: goto label_3ea064;
        case 0x3ea068u: goto label_3ea068;
        case 0x3ea06cu: goto label_3ea06c;
        case 0x3ea070u: goto label_3ea070;
        case 0x3ea074u: goto label_3ea074;
        case 0x3ea078u: goto label_3ea078;
        case 0x3ea07cu: goto label_3ea07c;
        case 0x3ea080u: goto label_3ea080;
        case 0x3ea084u: goto label_3ea084;
        case 0x3ea088u: goto label_3ea088;
        case 0x3ea08cu: goto label_3ea08c;
        case 0x3ea090u: goto label_3ea090;
        case 0x3ea094u: goto label_3ea094;
        case 0x3ea098u: goto label_3ea098;
        case 0x3ea09cu: goto label_3ea09c;
        case 0x3ea0a0u: goto label_3ea0a0;
        case 0x3ea0a4u: goto label_3ea0a4;
        case 0x3ea0a8u: goto label_3ea0a8;
        case 0x3ea0acu: goto label_3ea0ac;
        default: break;
    }

    ctx->pc = 0x3e9fd8u;

label_3e9fd8:
    // 0x3e9fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9fdc:
    // 0x3e9fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e9fe0:
    // 0x3e9fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e9fe4:
    // 0x3e9fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e9fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9fe8:
    // 0x3e9fe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e9fec:
    // 0x3e9fec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e9fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e9ff0:
    // 0x3e9ff0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e9ff4:
    // 0x3e9ff4: 0x40f809  jalr        $v0
label_3e9ff8:
    if (ctx->pc == 0x3E9FF8u) {
        ctx->pc = 0x3E9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FF4u;
        // 0x3e9ff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FFCu;
        goto label_3e9ffc;
    }
    ctx->pc = 0x3E9FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9FFCu);
        ctx->pc = 0x3E9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FF4u;
        // 0x3e9ff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9FF4u, 0x3E9FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9FFCu;
label_3e9ffc:
    // 0x3e9ffc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e9ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea000:
    // 0x3ea000: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ea000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3ea004:
    // 0x3ea004: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3ea008:
    if (ctx->pc == 0x3EA008u) {
        ctx->pc = 0x3EA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA004u;
        // 0x3ea008: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA00Cu;
        goto label_3ea00c;
    }
    ctx->pc = 0x3EA004u;
    {
        const bool branch_taken_0x3ea004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea004) {
            ctx->pc = 0x3EA008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA004u;
            // 0x3ea008: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA020u;
            goto label_3ea020;
        }
    }
    ctx->pc = 0x3EA00Cu;
label_3ea00c:
    // 0x3ea00c: 0x920200c8  lbu         $v0, 0xC8($s0)
    ctx->pc = 0x3ea00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 200)));
label_3ea010:
    // 0x3ea010: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ea014:
    if (ctx->pc == 0x3EA014u) {
        ctx->pc = 0x3EA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA010u;
        // 0x3ea014: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA018u;
        goto label_3ea018;
    }
    ctx->pc = 0x3EA010u;
    {
        const bool branch_taken_0x3ea010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea010) {
            ctx->pc = 0x3EA014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA010u;
            // 0x3ea014: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA020u;
            goto label_3ea020;
        }
    }
    ctx->pc = 0x3EA018u;
label_3ea018:
    // 0x3ea018: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ea01c:
    if (ctx->pc == 0x3EA01Cu) {
        ctx->pc = 0x3EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA018u;
        // 0x3ea01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA020u;
        goto label_3ea020;
    }
    ctx->pc = 0x3EA018u;
    {
        const bool branch_taken_0x3ea018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA018u;
        // 0x3ea01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea018) {
            ctx->pc = 0x3EA0A0u;
            goto label_3ea0a0;
        }
    }
    ctx->pc = 0x3EA020u;
label_3ea020:
    // 0x3ea020: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3ea024:
    if (ctx->pc == 0x3EA024u) {
        ctx->pc = 0x3EA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA020u;
        // 0x3ea024: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA028u;
        goto label_3ea028;
    }
    ctx->pc = 0x3EA020u;
    {
        const bool branch_taken_0x3ea020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea020) {
            ctx->pc = 0x3EA024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA020u;
            // 0x3ea024: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA064u;
            goto label_3ea064;
        }
    }
    ctx->pc = 0x3EA028u;
label_3ea028:
    // 0x3ea028: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x3ea028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3ea02c:
    // 0x3ea02c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3ea02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ea030:
    // 0x3ea030: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x3ea030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_3ea034:
    // 0x3ea034: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3ea038:
    if (ctx->pc == 0x3EA038u) {
        ctx->pc = 0x3EA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA034u;
        // 0x3ea038: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA03Cu;
        goto label_3ea03c;
    }
    ctx->pc = 0x3EA034u;
    {
        const bool branch_taken_0x3ea034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA034u;
        // 0x3ea038: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea034) {
            ctx->pc = 0x3EA09Cu;
            goto label_3ea09c;
        }
    }
    ctx->pc = 0x3EA03Cu;
label_3ea03c:
    // 0x3ea03c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3ea03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_3ea040:
    // 0x3ea040: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea044:
    if (ctx->pc == 0x3EA044u) {
        ctx->pc = 0x3EA048u;
        goto label_3ea048;
    }
    ctx->pc = 0x3EA040u;
    {
        const bool branch_taken_0x3ea040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea040) {
            ctx->pc = 0x3EA050u;
            goto label_3ea050;
        }
    }
    ctx->pc = 0x3EA048u;
label_3ea048:
    // 0x3ea048: 0x10000013  b           . + 4 + (0x13 << 2)
label_3ea04c:
    if (ctx->pc == 0x3EA04Cu) {
        ctx->pc = 0x3EA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA048u;
        // 0x3ea04c: 0x348200ff  ori         $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA050u;
        goto label_3ea050;
    }
    ctx->pc = 0x3EA048u;
    {
        const bool branch_taken_0x3ea048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA048u;
        // 0x3ea04c: 0x348200ff  ori         $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea048) {
            ctx->pc = 0x3EA098u;
            goto label_3ea098;
        }
    }
    ctx->pc = 0x3EA050u;
label_3ea050:
    // 0x3ea050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ea050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ea054:
    // 0x3ea054: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ea054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ea058:
    // 0x3ea058: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3ea058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3ea05c:
    // 0x3ea05c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3ea060:
    if (ctx->pc == 0x3EA060u) {
        ctx->pc = 0x3EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA05Cu;
        // 0x3ea060: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA064u;
        goto label_3ea064;
    }
    ctx->pc = 0x3EA05Cu;
    {
        const bool branch_taken_0x3ea05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA05Cu;
        // 0x3ea060: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea05c) {
            ctx->pc = 0x3EA098u;
            goto label_3ea098;
        }
    }
    ctx->pc = 0x3EA064u;
label_3ea064:
    // 0x3ea064: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ea064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea068:
    // 0x3ea068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3ea06c:
    if (ctx->pc == 0x3EA06Cu) {
        ctx->pc = 0x3EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA068u;
        // 0x3ea06c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA070u;
        goto label_3ea070;
    }
    ctx->pc = 0x3EA068u;
    {
        const bool branch_taken_0x3ea068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA068u;
        // 0x3ea06c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea068) {
            ctx->pc = 0x3EA09Cu;
            goto label_3ea09c;
        }
    }
    ctx->pc = 0x3EA070u;
label_3ea070:
    // 0x3ea070: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
label_3ea074:
    if (ctx->pc == 0x3EA074u) {
        ctx->pc = 0x3EA078u;
        goto label_3ea078;
    }
    ctx->pc = 0x3EA070u;
    {
        const bool branch_taken_0x3ea070 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x3ea070) {
            ctx->pc = 0x3EA08Cu;
            goto label_3ea08c;
        }
    }
    ctx->pc = 0x3EA078u;
label_3ea078:
    // 0x3ea078: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ea07c:
    // 0x3ea07c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ea07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ea080:
    // 0x3ea080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ea080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ea084:
    // 0x3ea084: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ea088:
    if (ctx->pc == 0x3EA088u) {
        ctx->pc = 0x3EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA084u;
        // 0x3ea088: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA08Cu;
        goto label_3ea08c;
    }
    ctx->pc = 0x3EA084u;
    {
        const bool branch_taken_0x3ea084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA084u;
        // 0x3ea088: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea084) {
            ctx->pc = 0x3EA098u;
            goto label_3ea098;
        }
    }
    ctx->pc = 0x3EA08Cu;
label_3ea08c:
    // 0x3ea08c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ea08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ea090:
    // 0x3ea090: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ea090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ea094:
    // 0x3ea094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ea094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ea098:
    // 0x3ea098: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3ea098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3ea09c:
    // 0x3ea09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ea09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0a0:
    // 0x3ea0a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ea0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea0a4:
    // 0x3ea0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ea0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea0a8:
    // 0x3ea0a8: 0x3e00008  jr          $ra
label_3ea0ac:
    if (ctx->pc == 0x3EA0ACu) {
        ctx->pc = 0x3EA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0A8u;
        // 0x3ea0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0B0u;
        goto label_fallthrough_0x3ea0a8;
    }
    ctx->pc = 0x3EA0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0A8u;
        // 0x3ea0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea0a8:
    ctx->pc = 0x3EA0B0u;
}
