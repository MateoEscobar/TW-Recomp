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

// Function: sub_0033AFE0
// Address: 0x33afe0 - 0x33b128
void sub_0033AFE0_0x33afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AFE0_0x33afe0");
#endif

    switch (ctx->pc) {
        case 0x33afe0u: goto label_33afe0;
        case 0x33afe4u: goto label_33afe4;
        case 0x33afe8u: goto label_33afe8;
        case 0x33afecu: goto label_33afec;
        case 0x33aff0u: goto label_33aff0;
        case 0x33aff4u: goto label_33aff4;
        case 0x33aff8u: goto label_33aff8;
        case 0x33affcu: goto label_33affc;
        case 0x33b000u: goto label_33b000;
        case 0x33b004u: goto label_33b004;
        case 0x33b008u: goto label_33b008;
        case 0x33b00cu: goto label_33b00c;
        case 0x33b010u: goto label_33b010;
        case 0x33b014u: goto label_33b014;
        case 0x33b018u: goto label_33b018;
        case 0x33b01cu: goto label_33b01c;
        case 0x33b020u: goto label_33b020;
        case 0x33b024u: goto label_33b024;
        case 0x33b028u: goto label_33b028;
        case 0x33b02cu: goto label_33b02c;
        case 0x33b030u: goto label_33b030;
        case 0x33b034u: goto label_33b034;
        case 0x33b038u: goto label_33b038;
        case 0x33b03cu: goto label_33b03c;
        case 0x33b040u: goto label_33b040;
        case 0x33b044u: goto label_33b044;
        case 0x33b048u: goto label_33b048;
        case 0x33b04cu: goto label_33b04c;
        case 0x33b050u: goto label_33b050;
        case 0x33b054u: goto label_33b054;
        case 0x33b058u: goto label_33b058;
        case 0x33b05cu: goto label_33b05c;
        case 0x33b060u: goto label_33b060;
        case 0x33b064u: goto label_33b064;
        case 0x33b068u: goto label_33b068;
        case 0x33b06cu: goto label_33b06c;
        case 0x33b070u: goto label_33b070;
        case 0x33b074u: goto label_33b074;
        case 0x33b078u: goto label_33b078;
        case 0x33b07cu: goto label_33b07c;
        case 0x33b080u: goto label_33b080;
        case 0x33b084u: goto label_33b084;
        case 0x33b088u: goto label_33b088;
        case 0x33b08cu: goto label_33b08c;
        case 0x33b090u: goto label_33b090;
        case 0x33b094u: goto label_33b094;
        case 0x33b098u: goto label_33b098;
        case 0x33b09cu: goto label_33b09c;
        case 0x33b0a0u: goto label_33b0a0;
        case 0x33b0a4u: goto label_33b0a4;
        case 0x33b0a8u: goto label_33b0a8;
        case 0x33b0acu: goto label_33b0ac;
        case 0x33b0b0u: goto label_33b0b0;
        case 0x33b0b4u: goto label_33b0b4;
        case 0x33b0b8u: goto label_33b0b8;
        case 0x33b0bcu: goto label_33b0bc;
        case 0x33b0c0u: goto label_33b0c0;
        case 0x33b0c4u: goto label_33b0c4;
        case 0x33b0c8u: goto label_33b0c8;
        case 0x33b0ccu: goto label_33b0cc;
        case 0x33b0d0u: goto label_33b0d0;
        case 0x33b0d4u: goto label_33b0d4;
        case 0x33b0d8u: goto label_33b0d8;
        case 0x33b0dcu: goto label_33b0dc;
        case 0x33b0e0u: goto label_33b0e0;
        case 0x33b0e4u: goto label_33b0e4;
        case 0x33b0e8u: goto label_33b0e8;
        case 0x33b0ecu: goto label_33b0ec;
        case 0x33b0f0u: goto label_33b0f0;
        case 0x33b0f4u: goto label_33b0f4;
        case 0x33b0f8u: goto label_33b0f8;
        case 0x33b0fcu: goto label_33b0fc;
        case 0x33b100u: goto label_33b100;
        case 0x33b104u: goto label_33b104;
        case 0x33b108u: goto label_33b108;
        case 0x33b10cu: goto label_33b10c;
        case 0x33b110u: goto label_33b110;
        case 0x33b114u: goto label_33b114;
        case 0x33b118u: goto label_33b118;
        case 0x33b11cu: goto label_33b11c;
        case 0x33b120u: goto label_33b120;
        case 0x33b124u: goto label_33b124;
        default: break;
    }

    ctx->pc = 0x33afe0u;

label_33afe0:
    // 0x33afe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33afe4:
    // 0x33afe4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x33afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_33afe8:
    // 0x33afe8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x33afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_33afec:
    // 0x33afec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x33afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_33aff0:
    // 0x33aff0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x33aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_33aff4:
    // 0x33aff4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33aff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33aff8:
    // 0x33aff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33affc:
    // 0x33affc: 0xc042e7c  jal         func_10B9F0
label_33b000:
    if (ctx->pc == 0x33B000u) {
        ctx->pc = 0x33B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFFCu;
        // 0x33b000: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B004u;
        goto label_33b004;
    }
    ctx->pc = 0x33AFFCu;
    SET_GPR_U32(ctx, 31, 0x33B004u);
    ctx->pc = 0x33B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AFFCu;
    // 0x33b000: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B9F0u, 0x33AFFCu, 0x33B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B004u;
label_33b004:
    // 0x33b004: 0xc041228  jal         func_1048A0
label_33b008:
    if (ctx->pc == 0x33B008u) {
        ctx->pc = 0x33B00Cu;
        goto label_33b00c;
    }
    ctx->pc = 0x33B004u;
    SET_GPR_U32(ctx, 31, 0x33B00Cu);
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x33B004u, 0x33B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B00Cu;
label_33b00c:
    // 0x33b00c: 0xc0446b0  jal         func_111AC0
label_33b010:
    if (ctx->pc == 0x33B010u) {
        ctx->pc = 0x33B014u;
        goto label_33b014;
    }
    ctx->pc = 0x33B00Cu;
    SET_GPR_U32(ctx, 31, 0x33B014u);
    ctx->pc = 0x111AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AC0u, 0x33B00Cu, 0x33B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B014u;
label_33b014:
    // 0x33b014: 0x8e6427e4  lw          $a0, 0x27E4($s3)
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_33b018:
    // 0x33b018: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33b018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_33b01c:
    // 0x33b01c: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x33b01cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_33b020:
    // 0x33b020: 0x24a56fc8  addiu       $a1, $a1, 0x6FC8
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28616));
label_33b024:
    // 0x33b024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33b028:
    // 0x33b028: 0x25087008  addiu       $t0, $t0, 0x7008
    ctx->pc = 0x33b028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28680));
label_33b02c:
    // 0x33b02c: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x33b02cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_33b030:
    // 0x33b030: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33b034:
    // 0x33b034: 0x846c0050  lh          $t4, 0x50($v1)
    ctx->pc = 0x33b034u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33b038:
    // 0x33b038: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x33b038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33b03c:
    // 0x33b03c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33b040:
    // 0x33b040: 0x2409007e  addiu       $t1, $zero, 0x7E
    ctx->pc = 0x33b040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_33b044:
    // 0x33b044: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33b044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b048:
    // 0x33b048: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x33b048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b04c:
    // 0x33b04c: 0x40f809  jalr        $v0
label_33b050:
    if (ctx->pc == 0x33B050u) {
        ctx->pc = 0x33B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B04Cu;
        // 0x33b050: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B054u;
        goto label_33b054;
    }
    ctx->pc = 0x33B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B054u);
        ctx->pc = 0x33B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B04Cu;
        // 0x33b050: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B04Cu, 0x33B054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B054u;
label_33b054:
    // 0x33b054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33b054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b058:
    // 0x33b058: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_33b05c:
    if (ctx->pc == 0x33B05Cu) {
        ctx->pc = 0x33B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B058u;
        // 0x33b05c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B060u;
        goto label_33b060;
    }
    ctx->pc = 0x33B058u;
    {
        const bool branch_taken_0x33b058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B058u;
        // 0x33b05c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b058) {
            ctx->pc = 0x33B068u;
            goto label_33b068;
        }
    }
    ctx->pc = 0x33B060u;
label_33b060:
    // 0x33b060: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x33b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_33b064:
    // 0x33b064: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33b064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33b068:
    // 0x33b068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33b068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33b06c:
    // 0x33b06c: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x33b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_33b070:
    // 0x33b070: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x33b070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_33b074:
    // 0x33b074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b078:
    // 0x33b078: 0xac51b9d8  sw          $s1, -0x4628($v0)
    ctx->pc = 0x33b078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949336), GPR_U32(ctx, 17));
label_33b07c:
    // 0x33b07c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33b07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b080:
    // 0x33b080: 0x24e77038  addiu       $a3, $a3, 0x7038
    ctx->pc = 0x33b080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28728));
label_33b084:
    // 0x33b084: 0xc0ce268  jal         func_3389A0
label_33b088:
    if (ctx->pc == 0x33B088u) {
        ctx->pc = 0x33B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B084u;
        // 0x33b088: 0x34c6f000  ori         $a2, $a2, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B08Cu;
        goto label_33b08c;
    }
    ctx->pc = 0x33B084u;
    SET_GPR_U32(ctx, 31, 0x33B08Cu);
    ctx->pc = 0x33B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B084u;
    // 0x33b088: 0x34c6f000  ori         $a2, $a2, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x33B084u, 0x33B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B08Cu;
label_33b08c:
    // 0x33b08c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x33b08cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_33b090:
    // 0x33b090: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x33b090u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_33b094:
    // 0x33b094: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x33b094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_33b098:
    // 0x33b098: 0x26107058  addiu       $s0, $s0, 0x7058
    ctx->pc = 0x33b098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28760));
label_33b09c:
    // 0x33b09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b0a0:
    // 0x33b0a0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x33b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33b0a4:
    // 0x33b0a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33b0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b0a8:
    // 0x33b0a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b0ac:
    // 0x33b0ac: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x33b0acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_33b0b0:
    // 0x33b0b0: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x33b0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_33b0b4:
    // 0x33b0b4: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x33b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_33b0b8:
    // 0x33b0b8: 0x40f809  jalr        $v0
label_33b0bc:
    if (ctx->pc == 0x33B0BCu) {
        ctx->pc = 0x33B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0B8u;
        // 0x33b0bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0C0u;
        goto label_33b0c0;
    }
    ctx->pc = 0x33B0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B0C0u);
        ctx->pc = 0x33B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0B8u;
        // 0x33b0bc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B0B8u, 0x33B0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B0C0u;
label_33b0c0:
    // 0x33b0c0: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x33b0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_33b0c4:
    // 0x33b0c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33b0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b0c8:
    // 0x33b0c8: 0xae2227f0  sw          $v0, 0x27F0($s1)
    ctx->pc = 0x33b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10224), GPR_U32(ctx, 2));
label_33b0cc:
    // 0x33b0cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33b0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b0d0:
    // 0x33b0d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x33b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33b0d4:
    // 0x33b0d4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33b0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33b0d8:
    // 0x33b0d8: 0xae42b9b8  sw          $v0, -0x4648($s2)
    ctx->pc = 0x33b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949304), GPR_U32(ctx, 2));
label_33b0dc:
    // 0x33b0dc: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x33b0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_33b0e0:
    // 0x33b0e0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x33b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_33b0e4:
    // 0x33b0e4: 0x40f809  jalr        $v0
label_33b0e8:
    if (ctx->pc == 0x33B0E8u) {
        ctx->pc = 0x33B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0E4u;
        // 0x33b0e8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B0ECu;
        goto label_33b0ec;
    }
    ctx->pc = 0x33B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B0ECu);
        ctx->pc = 0x33B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0E4u;
        // 0x33b0e8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B0E4u, 0x33B0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B0ECu;
label_33b0ec:
    // 0x33b0ec: 0x8e44b9b8  lw          $a0, -0x4648($s2)
    ctx->pc = 0x33b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_33b0f0:
    // 0x33b0f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33b0f4:
    // 0x33b0f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33b0f8:
    // 0x33b0f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x33b0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33b0fc:
    // 0x33b0fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x33b0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33b100:
    // 0x33b100: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33b100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33b104:
    // 0x33b104: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x33b104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b108:
    // 0x33b108: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x33b108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b10c:
    // 0x33b10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b110:
    // 0x33b110: 0xac44b9c0  sw          $a0, -0x4640($v0)
    ctx->pc = 0x33b110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949312), GPR_U32(ctx, 4));
label_33b114:
    // 0x33b114: 0xac60b9bc  sw          $zero, -0x4644($v1)
    ctx->pc = 0x33b114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949308), GPR_U32(ctx, 0));
label_33b118:
    // 0x33b118: 0x3e00008  jr          $ra
label_33b11c:
    if (ctx->pc == 0x33B11Cu) {
        ctx->pc = 0x33B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B118u;
        // 0x33b11c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B120u;
        goto label_33b120;
    }
    ctx->pc = 0x33B118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B118u;
        // 0x33b11c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B120u;
label_33b120:
    // 0x33b120: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_33b124:
    // 0x33b124: 0x0  nop
    ctx->pc = 0x33b124u;
    // NOP
    ctx->pc = 0x33b128u;
}
