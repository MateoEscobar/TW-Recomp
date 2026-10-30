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

// Function: sub_0031B030
// Address: 0x31b030 - 0x31b1b0
void sub_0031B030_0x31b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B030_0x31b030");
#endif

    switch (ctx->pc) {
        case 0x31b030u: goto label_31b030;
        case 0x31b034u: goto label_31b034;
        case 0x31b038u: goto label_31b038;
        case 0x31b03cu: goto label_31b03c;
        case 0x31b040u: goto label_31b040;
        case 0x31b044u: goto label_31b044;
        case 0x31b048u: goto label_31b048;
        case 0x31b04cu: goto label_31b04c;
        case 0x31b050u: goto label_31b050;
        case 0x31b054u: goto label_31b054;
        case 0x31b058u: goto label_31b058;
        case 0x31b05cu: goto label_31b05c;
        case 0x31b060u: goto label_31b060;
        case 0x31b064u: goto label_31b064;
        case 0x31b068u: goto label_31b068;
        case 0x31b06cu: goto label_31b06c;
        case 0x31b070u: goto label_31b070;
        case 0x31b074u: goto label_31b074;
        case 0x31b078u: goto label_31b078;
        case 0x31b07cu: goto label_31b07c;
        case 0x31b080u: goto label_31b080;
        case 0x31b084u: goto label_31b084;
        case 0x31b088u: goto label_31b088;
        case 0x31b08cu: goto label_31b08c;
        case 0x31b090u: goto label_31b090;
        case 0x31b094u: goto label_31b094;
        case 0x31b098u: goto label_31b098;
        case 0x31b09cu: goto label_31b09c;
        case 0x31b0a0u: goto label_31b0a0;
        case 0x31b0a4u: goto label_31b0a4;
        case 0x31b0a8u: goto label_31b0a8;
        case 0x31b0acu: goto label_31b0ac;
        case 0x31b0b0u: goto label_31b0b0;
        case 0x31b0b4u: goto label_31b0b4;
        case 0x31b0b8u: goto label_31b0b8;
        case 0x31b0bcu: goto label_31b0bc;
        case 0x31b0c0u: goto label_31b0c0;
        case 0x31b0c4u: goto label_31b0c4;
        case 0x31b0c8u: goto label_31b0c8;
        case 0x31b0ccu: goto label_31b0cc;
        case 0x31b0d0u: goto label_31b0d0;
        case 0x31b0d4u: goto label_31b0d4;
        case 0x31b0d8u: goto label_31b0d8;
        case 0x31b0dcu: goto label_31b0dc;
        case 0x31b0e0u: goto label_31b0e0;
        case 0x31b0e4u: goto label_31b0e4;
        case 0x31b0e8u: goto label_31b0e8;
        case 0x31b0ecu: goto label_31b0ec;
        case 0x31b0f0u: goto label_31b0f0;
        case 0x31b0f4u: goto label_31b0f4;
        case 0x31b0f8u: goto label_31b0f8;
        case 0x31b0fcu: goto label_31b0fc;
        case 0x31b100u: goto label_31b100;
        case 0x31b104u: goto label_31b104;
        case 0x31b108u: goto label_31b108;
        case 0x31b10cu: goto label_31b10c;
        case 0x31b110u: goto label_31b110;
        case 0x31b114u: goto label_31b114;
        case 0x31b118u: goto label_31b118;
        case 0x31b11cu: goto label_31b11c;
        case 0x31b120u: goto label_31b120;
        case 0x31b124u: goto label_31b124;
        case 0x31b128u: goto label_31b128;
        case 0x31b12cu: goto label_31b12c;
        case 0x31b130u: goto label_31b130;
        case 0x31b134u: goto label_31b134;
        case 0x31b138u: goto label_31b138;
        case 0x31b13cu: goto label_31b13c;
        case 0x31b140u: goto label_31b140;
        case 0x31b144u: goto label_31b144;
        case 0x31b148u: goto label_31b148;
        case 0x31b14cu: goto label_31b14c;
        case 0x31b150u: goto label_31b150;
        case 0x31b154u: goto label_31b154;
        case 0x31b158u: goto label_31b158;
        case 0x31b15cu: goto label_31b15c;
        case 0x31b160u: goto label_31b160;
        case 0x31b164u: goto label_31b164;
        case 0x31b168u: goto label_31b168;
        case 0x31b16cu: goto label_31b16c;
        case 0x31b170u: goto label_31b170;
        case 0x31b174u: goto label_31b174;
        case 0x31b178u: goto label_31b178;
        case 0x31b17cu: goto label_31b17c;
        case 0x31b180u: goto label_31b180;
        case 0x31b184u: goto label_31b184;
        case 0x31b188u: goto label_31b188;
        case 0x31b18cu: goto label_31b18c;
        case 0x31b190u: goto label_31b190;
        case 0x31b194u: goto label_31b194;
        case 0x31b198u: goto label_31b198;
        case 0x31b19cu: goto label_31b19c;
        case 0x31b1a0u: goto label_31b1a0;
        case 0x31b1a4u: goto label_31b1a4;
        case 0x31b1a8u: goto label_31b1a8;
        case 0x31b1acu: goto label_31b1ac;
        default: break;
    }

    ctx->pc = 0x31b030u;

label_31b030:
    // 0x31b030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31b034:
    // 0x31b034: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31b038:
    // 0x31b038: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31b03c:
    // 0x31b03c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31b03cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b040:
    // 0x31b040: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31b044:
    // 0x31b044: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31b048:
    // 0x31b048: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31b04c:
    // 0x31b04c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31b050:
    // 0x31b050: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31b050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31b054:
    // 0x31b054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31b058:
    // 0x31b058: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31b05c:
    // 0x31b05c: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x31b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_31b060:
    // 0x31b060: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_31b064:
    // 0x31b064: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31b064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31b068:
    // 0x31b068: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_31b06c:
    if (ctx->pc == 0x31B06Cu) {
        ctx->pc = 0x31B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B068u;
        // 0x31b06c: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B070u;
        goto label_31b070;
    }
    ctx->pc = 0x31B068u;
    {
        const bool branch_taken_0x31b068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B068u;
        // 0x31b06c: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b068) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31B070u;
label_31b070:
    // 0x31b070: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x31b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31b074:
    // 0x31b074: 0xaea2002c  sw          $v0, 0x2C($s5)
    ctx->pc = 0x31b074u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 2));
label_31b078:
    // 0x31b078: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31b078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b07c:
    // 0x31b07c: 0x24740048  addiu       $s4, $v1, 0x48
    ctx->pc = 0x31b07cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31b080:
    // 0x31b080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b084:
    // 0x31b084: 0x0  nop
    ctx->pc = 0x31b084u;
    // NOP
label_31b088:
    // 0x31b088: 0xc137826  jal         func_4DE098
label_31b08c:
    if (ctx->pc == 0x31B08Cu) {
        ctx->pc = 0x31B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B088u;
        // 0x31b08c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B090u;
        goto label_31b090;
    }
    ctx->pc = 0x31B088u;
    SET_GPR_U32(ctx, 31, 0x31B090u);
    ctx->pc = 0x31B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B088u;
    // 0x31b08c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31B088u, 0x31B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B090u;
label_31b090:
    // 0x31b090: 0xc0e409a  jal         func_390268
label_31b094:
    if (ctx->pc == 0x31B094u) {
        ctx->pc = 0x31B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B090u;
        // 0x31b094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B098u;
        goto label_31b098;
    }
    ctx->pc = 0x31B090u;
    SET_GPR_U32(ctx, 31, 0x31B098u);
    ctx->pc = 0x31B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B090u;
    // 0x31b094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31B090u, 0x31B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B098u;
label_31b098:
    // 0x31b098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31b098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b09c:
    // 0x31b09c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_31b0a0:
    if (ctx->pc == 0x31B0A0u) {
        ctx->pc = 0x31B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B09Cu;
        // 0x31b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0A4u;
        goto label_31b0a4;
    }
    ctx->pc = 0x31B09Cu;
    {
        const bool branch_taken_0x31b09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B09Cu;
        // 0x31b0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b09c) {
            ctx->pc = 0x31B104u;
            goto label_31b104;
        }
    }
    ctx->pc = 0x31B0A4u;
label_31b0a4:
    // 0x31b0a4: 0xc087502  jal         func_21D408
label_31b0a8:
    if (ctx->pc == 0x31B0A8u) {
        ctx->pc = 0x31B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0A4u;
        // 0x31b0a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0ACu;
        goto label_31b0ac;
    }
    ctx->pc = 0x31B0A4u;
    SET_GPR_U32(ctx, 31, 0x31B0ACu);
    ctx->pc = 0x31B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0A4u;
    // 0x31b0a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B0A4u, 0x31B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0ACu;
label_31b0ac:
    // 0x31b0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b0b0:
    // 0x31b0b0: 0xc137832  jal         func_4DE0C8
label_31b0b4:
    if (ctx->pc == 0x31B0B4u) {
        ctx->pc = 0x31B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0B0u;
        // 0x31b0b4: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0B8u;
        goto label_31b0b8;
    }
    ctx->pc = 0x31B0B0u;
    SET_GPR_U32(ctx, 31, 0x31B0B8u);
    ctx->pc = 0x31B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0B0u;
    // 0x31b0b4: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x31B0B0u, 0x31B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0B8u;
label_31b0b8:
    // 0x31b0b8: 0x50520013  beql        $v0, $s2, . + 4 + (0x13 << 2)
label_31b0bc:
    if (ctx->pc == 0x31B0BCu) {
        ctx->pc = 0x31B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0B8u;
        // 0x31b0bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0C0u;
        goto label_31b0c0;
    }
    ctx->pc = 0x31B0B8u;
    {
        const bool branch_taken_0x31b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31b0b8) {
            ctx->pc = 0x31B0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0B8u;
            // 0x31b0bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B108u;
            goto label_31b108;
        }
    }
    ctx->pc = 0x31B0C0u;
label_31b0c0:
    // 0x31b0c0: 0xc0a40d2  jal         func_290348
label_31b0c4:
    if (ctx->pc == 0x31B0C4u) {
        ctx->pc = 0x31B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C0u;
        // 0x31b0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0C8u;
        goto label_31b0c8;
    }
    ctx->pc = 0x31B0C0u;
    SET_GPR_U32(ctx, 31, 0x31B0C8u);
    ctx->pc = 0x31B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0C0u;
    // 0x31b0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31B0C0u, 0x31B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0C8u;
label_31b0c8:
    // 0x31b0c8: 0x5052000f  beql        $v0, $s2, . + 4 + (0xF << 2)
label_31b0cc:
    if (ctx->pc == 0x31B0CCu) {
        ctx->pc = 0x31B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C8u;
        // 0x31b0cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0D0u;
        goto label_31b0d0;
    }
    ctx->pc = 0x31B0C8u;
    {
        const bool branch_taken_0x31b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31b0c8) {
            ctx->pc = 0x31B0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0C8u;
            // 0x31b0cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B108u;
            goto label_31b108;
        }
    }
    ctx->pc = 0x31B0D0u;
label_31b0d0:
    // 0x31b0d0: 0xc0a40ec  jal         func_2903B0
label_31b0d4:
    if (ctx->pc == 0x31B0D4u) {
        ctx->pc = 0x31B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0D0u;
        // 0x31b0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0D8u;
        goto label_31b0d8;
    }
    ctx->pc = 0x31B0D0u;
    SET_GPR_U32(ctx, 31, 0x31B0D8u);
    ctx->pc = 0x31B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0D0u;
    // 0x31b0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x31B0D0u, 0x31B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0D8u;
label_31b0d8:
    // 0x31b0d8: 0x5052000b  beql        $v0, $s2, . + 4 + (0xB << 2)
label_31b0dc:
    if (ctx->pc == 0x31B0DCu) {
        ctx->pc = 0x31B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0D8u;
        // 0x31b0dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0E0u;
        goto label_31b0e0;
    }
    ctx->pc = 0x31B0D8u;
    {
        const bool branch_taken_0x31b0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31b0d8) {
            ctx->pc = 0x31B0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0D8u;
            // 0x31b0dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B108u;
            goto label_31b108;
        }
    }
    ctx->pc = 0x31B0E0u;
label_31b0e0:
    // 0x31b0e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31b0e4:
    // 0x31b0e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31b0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31b0e8:
    // 0x31b0e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31b0ec:
    // 0x31b0ec: 0x40f809  jalr        $v0
label_31b0f0:
    if (ctx->pc == 0x31B0F0u) {
        ctx->pc = 0x31B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0ECu;
        // 0x31b0f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0F4u;
        goto label_31b0f4;
    }
    ctx->pc = 0x31B0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B0F4u);
        ctx->pc = 0x31B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0ECu;
        // 0x31b0f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B0ECu, 0x31B0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B0F4u;
label_31b0f4:
    // 0x31b0f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x31b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_31b0f8:
    // 0x31b0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b0fc:
    // 0x31b0fc: 0xc0ab742  jal         func_2ADD08
label_31b100:
    if (ctx->pc == 0x31B100u) {
        ctx->pc = 0x31B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0FCu;
        // 0x31b100: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B104u;
        goto label_31b104;
    }
    ctx->pc = 0x31B0FCu;
    SET_GPR_U32(ctx, 31, 0x31B104u);
    ctx->pc = 0x31B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0FCu;
    // 0x31b100: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x31B0FCu, 0x31B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B104u;
label_31b104:
    // 0x31b104: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31b104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31b108:
    // 0x31b108: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31b108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31b10c:
    // 0x31b10c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_31b110:
    if (ctx->pc == 0x31B110u) {
        ctx->pc = 0x31B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B10Cu;
        // 0x31b110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B114u;
        goto label_31b114;
    }
    ctx->pc = 0x31B10Cu;
    {
        const bool branch_taken_0x31b10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B10Cu;
        // 0x31b110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b10c) {
            ctx->pc = 0x31B088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b088;
        }
    }
    ctx->pc = 0x31B114u;
label_31b114:
    // 0x31b114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31b114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b118:
    // 0x31b118: 0x10000002  b           . + 4 + (0x2 << 2)
label_31b11c:
    if (ctx->pc == 0x31B11Cu) {
        ctx->pc = 0x31B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B118u;
        // 0x31b11c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B120u;
        goto label_31b120;
    }
    ctx->pc = 0x31B118u;
    {
        const bool branch_taken_0x31b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B118u;
        // 0x31b11c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b118) {
            ctx->pc = 0x31B124u;
            goto label_31b124;
        }
    }
    ctx->pc = 0x31B120u;
label_31b120:
    // 0x31b120: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31b120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31b124:
    // 0x31b124: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31b124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31b128:
    // 0x31b128: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_31b12c:
    if (ctx->pc == 0x31B12Cu) {
        ctx->pc = 0x31B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B128u;
        // 0x31b12c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B130u;
        goto label_31b130;
    }
    ctx->pc = 0x31B128u;
    {
        const bool branch_taken_0x31b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B128u;
        // 0x31b12c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b128) {
            ctx->pc = 0x31B178u;
            goto label_31b178;
        }
    }
    ctx->pc = 0x31B130u;
label_31b130:
    // 0x31b130: 0xc137826  jal         func_4DE098
label_31b134:
    if (ctx->pc == 0x31B134u) {
        ctx->pc = 0x31B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B130u;
        // 0x31b134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B138u;
        goto label_31b138;
    }
    ctx->pc = 0x31B130u;
    SET_GPR_U32(ctx, 31, 0x31B138u);
    ctx->pc = 0x31B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B130u;
    // 0x31b134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31B130u, 0x31B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B138u;
label_31b138:
    // 0x31b138: 0xc0e409a  jal         func_390268
label_31b13c:
    if (ctx->pc == 0x31B13Cu) {
        ctx->pc = 0x31B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B138u;
        // 0x31b13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B140u;
        goto label_31b140;
    }
    ctx->pc = 0x31B138u;
    SET_GPR_U32(ctx, 31, 0x31B140u);
    ctx->pc = 0x31B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B138u;
    // 0x31b13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31B138u, 0x31B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B140u;
label_31b140:
    // 0x31b140: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_31b144:
    if (ctx->pc == 0x31B144u) {
        ctx->pc = 0x31B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B140u;
        // 0x31b144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B148u;
        goto label_31b148;
    }
    ctx->pc = 0x31B140u;
    {
        const bool branch_taken_0x31b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B140u;
        // 0x31b144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b140) {
            ctx->pc = 0x31B120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b120;
        }
    }
    ctx->pc = 0x31B148u;
label_31b148:
    // 0x31b148: 0xc087502  jal         func_21D408
label_31b14c:
    if (ctx->pc == 0x31B14Cu) {
        ctx->pc = 0x31B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B148u;
        // 0x31b14c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B150u;
        goto label_31b150;
    }
    ctx->pc = 0x31B148u;
    SET_GPR_U32(ctx, 31, 0x31B150u);
    ctx->pc = 0x31B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B148u;
    // 0x31b14c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31B148u, 0x31B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B150u;
label_31b150:
    // 0x31b150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b154:
    // 0x31b154: 0xc0a40d2  jal         func_290348
label_31b158:
    if (ctx->pc == 0x31B158u) {
        ctx->pc = 0x31B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B154u;
        // 0x31b158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B15Cu;
        goto label_31b15c;
    }
    ctx->pc = 0x31B154u;
    SET_GPR_U32(ctx, 31, 0x31B15Cu);
    ctx->pc = 0x31B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B154u;
    // 0x31b158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31B154u, 0x31B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B15Cu;
label_31b15c:
    // 0x31b15c: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
label_31b160:
    if (ctx->pc == 0x31B160u) {
        ctx->pc = 0x31B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B15Cu;
        // 0x31b160: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B164u;
        goto label_31b164;
    }
    ctx->pc = 0x31B15Cu;
    {
        const bool branch_taken_0x31b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x31b15c) {
            ctx->pc = 0x31B160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B15Cu;
            // 0x31b160: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B178u;
            goto label_31b178;
        }
    }
    ctx->pc = 0x31B164u;
label_31b164:
    // 0x31b164: 0xc0a40ec  jal         func_2903B0
label_31b168:
    if (ctx->pc == 0x31B168u) {
        ctx->pc = 0x31B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B164u;
        // 0x31b168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B16Cu;
        goto label_31b16c;
    }
    ctx->pc = 0x31B164u;
    SET_GPR_U32(ctx, 31, 0x31B16Cu);
    ctx->pc = 0x31B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B164u;
    // 0x31b168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x31B164u, 0x31B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B16Cu;
label_31b16c:
    // 0x31b16c: 0x1451ffed  bne         $v0, $s1, . + 4 + (-0x13 << 2)
label_31b170:
    if (ctx->pc == 0x31B170u) {
        ctx->pc = 0x31B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B16Cu;
        // 0x31b170: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B174u;
        goto label_31b174;
    }
    ctx->pc = 0x31B16Cu;
    {
        const bool branch_taken_0x31b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x31B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B16Cu;
        // 0x31b170: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b16c) {
            ctx->pc = 0x31B124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b124;
        }
    }
    ctx->pc = 0x31B174u;
label_31b174:
    // 0x31b174: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b178:
    // 0x31b178: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x31b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_31b17c:
    // 0x31b17c: 0xc05928a  jal         func_164A28
label_31b180:
    if (ctx->pc == 0x31B180u) {
        ctx->pc = 0x31B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B17Cu;
        // 0x31b180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B184u;
        goto label_31b184;
    }
    ctx->pc = 0x31B17Cu;
    SET_GPR_U32(ctx, 31, 0x31B184u);
    ctx->pc = 0x31B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B17Cu;
    // 0x31b180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A28u, 0x31B17Cu, 0x31B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B184u;
label_31b184:
    // 0x31b184: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31b184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31b188:
    // 0x31b188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b18c:
    // 0x31b18c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31b18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31b190:
    // 0x31b190: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31b190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31b194:
    // 0x31b194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31b194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31b198:
    // 0x31b198: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31b198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31b19c:
    // 0x31b19c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31b19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b1a0:
    // 0x31b1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b1a4:
    // 0x31b1a4: 0x3e00008  jr          $ra
label_31b1a8:
    if (ctx->pc == 0x31B1A8u) {
        ctx->pc = 0x31B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A4u;
        // 0x31b1a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1ACu;
        goto label_31b1ac;
    }
    ctx->pc = 0x31B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A4u;
        // 0x31b1a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B1ACu;
label_31b1ac:
    // 0x31b1ac: 0x0  nop
    ctx->pc = 0x31b1acu;
    // NOP
    ctx->pc = 0x31b1b0u;
}
