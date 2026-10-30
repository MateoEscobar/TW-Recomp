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

// Function: sub_0030B050
// Address: 0x30b050 - 0x30b168
void sub_0030B050_0x30b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B050_0x30b050");
#endif

    switch (ctx->pc) {
        case 0x30b050u: goto label_30b050;
        case 0x30b054u: goto label_30b054;
        case 0x30b058u: goto label_30b058;
        case 0x30b05cu: goto label_30b05c;
        case 0x30b060u: goto label_30b060;
        case 0x30b064u: goto label_30b064;
        case 0x30b068u: goto label_30b068;
        case 0x30b06cu: goto label_30b06c;
        case 0x30b070u: goto label_30b070;
        case 0x30b074u: goto label_30b074;
        case 0x30b078u: goto label_30b078;
        case 0x30b07cu: goto label_30b07c;
        case 0x30b080u: goto label_30b080;
        case 0x30b084u: goto label_30b084;
        case 0x30b088u: goto label_30b088;
        case 0x30b08cu: goto label_30b08c;
        case 0x30b090u: goto label_30b090;
        case 0x30b094u: goto label_30b094;
        case 0x30b098u: goto label_30b098;
        case 0x30b09cu: goto label_30b09c;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0a4u: goto label_30b0a4;
        case 0x30b0a8u: goto label_30b0a8;
        case 0x30b0acu: goto label_30b0ac;
        case 0x30b0b0u: goto label_30b0b0;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0b8u: goto label_30b0b8;
        case 0x30b0bcu: goto label_30b0bc;
        case 0x30b0c0u: goto label_30b0c0;
        case 0x30b0c4u: goto label_30b0c4;
        case 0x30b0c8u: goto label_30b0c8;
        case 0x30b0ccu: goto label_30b0cc;
        case 0x30b0d0u: goto label_30b0d0;
        case 0x30b0d4u: goto label_30b0d4;
        case 0x30b0d8u: goto label_30b0d8;
        case 0x30b0dcu: goto label_30b0dc;
        case 0x30b0e0u: goto label_30b0e0;
        case 0x30b0e4u: goto label_30b0e4;
        case 0x30b0e8u: goto label_30b0e8;
        case 0x30b0ecu: goto label_30b0ec;
        case 0x30b0f0u: goto label_30b0f0;
        case 0x30b0f4u: goto label_30b0f4;
        case 0x30b0f8u: goto label_30b0f8;
        case 0x30b0fcu: goto label_30b0fc;
        case 0x30b100u: goto label_30b100;
        case 0x30b104u: goto label_30b104;
        case 0x30b108u: goto label_30b108;
        case 0x30b10cu: goto label_30b10c;
        case 0x30b110u: goto label_30b110;
        case 0x30b114u: goto label_30b114;
        case 0x30b118u: goto label_30b118;
        case 0x30b11cu: goto label_30b11c;
        case 0x30b120u: goto label_30b120;
        case 0x30b124u: goto label_30b124;
        case 0x30b128u: goto label_30b128;
        case 0x30b12cu: goto label_30b12c;
        case 0x30b130u: goto label_30b130;
        case 0x30b134u: goto label_30b134;
        case 0x30b138u: goto label_30b138;
        case 0x30b13cu: goto label_30b13c;
        case 0x30b140u: goto label_30b140;
        case 0x30b144u: goto label_30b144;
        case 0x30b148u: goto label_30b148;
        case 0x30b14cu: goto label_30b14c;
        case 0x30b150u: goto label_30b150;
        case 0x30b154u: goto label_30b154;
        case 0x30b158u: goto label_30b158;
        case 0x30b15cu: goto label_30b15c;
        case 0x30b160u: goto label_30b160;
        case 0x30b164u: goto label_30b164;
        default: break;
    }

    ctx->pc = 0x30b050u;

label_30b050:
    // 0x30b050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30b054:
    // 0x30b054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30b058:
    // 0x30b058: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_30b05c:
    // 0x30b05c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30b05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30b060:
    // 0x30b060: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b064:
    // 0x30b064: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30b064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30b068:
    // 0x30b068: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30b06c:
    // 0x30b06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b070:
    // 0x30b070: 0xc087502  jal         func_21D408
label_30b074:
    if (ctx->pc == 0x30B074u) {
        ctx->pc = 0x30B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B070u;
        // 0x30b074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B078u;
        goto label_30b078;
    }
    ctx->pc = 0x30B070u;
    SET_GPR_U32(ctx, 31, 0x30B078u);
    ctx->pc = 0x30B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B070u;
    // 0x30b074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30B070u, 0x30B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B078u;
label_30b078:
    // 0x30b078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30b078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b07c:
    // 0x30b07c: 0xc0a3630  jal         func_28D8C0
label_30b080:
    if (ctx->pc == 0x30B080u) {
        ctx->pc = 0x30B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B07Cu;
        // 0x30b080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B084u;
        goto label_30b084;
    }
    ctx->pc = 0x30B07Cu;
    SET_GPR_U32(ctx, 31, 0x30B084u);
    ctx->pc = 0x30B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B07Cu;
    // 0x30b080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30B07Cu, 0x30B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B084u;
label_30b084:
    // 0x30b084: 0xc0a3628  jal         func_28D8A0
label_30b088:
    if (ctx->pc == 0x30B088u) {
        ctx->pc = 0x30B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B084u;
        // 0x30b088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B08Cu;
        goto label_30b08c;
    }
    ctx->pc = 0x30B084u;
    SET_GPR_U32(ctx, 31, 0x30B08Cu);
    ctx->pc = 0x30B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B084u;
    // 0x30b088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30B084u, 0x30B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B08Cu;
label_30b08c:
    // 0x30b08c: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x30b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_30b090:
    // 0x30b090: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_30b094:
    // 0x30b094: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_30b098:
    if (ctx->pc == 0x30B098u) {
        ctx->pc = 0x30B09Cu;
        goto label_30b09c;
    }
    ctx->pc = 0x30B094u;
    {
        const bool branch_taken_0x30b094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b094) {
            ctx->pc = 0x30B0D0u;
            goto label_30b0d0;
        }
    }
    ctx->pc = 0x30B09Cu;
label_30b09c:
    // 0x30b09c: 0xc0a4e54  jal         func_293950
label_30b0a0:
    if (ctx->pc == 0x30B0A0u) {
        ctx->pc = 0x30B0A4u;
        goto label_30b0a4;
    }
    ctx->pc = 0x30B09Cu;
    SET_GPR_U32(ctx, 31, 0x30B0A4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30B09Cu, 0x30B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0A4u;
label_30b0a4:
    // 0x30b0a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0a8:
    // 0x30b0a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_30b0ac:
    if (ctx->pc == 0x30B0ACu) {
        ctx->pc = 0x30B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0A8u;
        // 0x30b0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0B0u;
        goto label_30b0b0;
    }
    ctx->pc = 0x30B0A8u;
    {
        const bool branch_taken_0x30b0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0A8u;
        // 0x30b0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0a8) {
            ctx->pc = 0x30B0B8u;
            goto label_30b0b8;
        }
    }
    ctx->pc = 0x30B0B0u;
label_30b0b0:
    // 0x30b0b0: 0xc0ba734  jal         func_2E9CD0
label_30b0b4:
    if (ctx->pc == 0x30B0B4u) {
        ctx->pc = 0x30B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0B0u;
        // 0x30b0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0B8u;
        goto label_30b0b8;
    }
    ctx->pc = 0x30B0B0u;
    SET_GPR_U32(ctx, 31, 0x30B0B8u);
    ctx->pc = 0x30B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0B0u;
    // 0x30b0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CD0u, 0x30B0B0u, 0x30B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0B8u;
label_30b0b8:
    // 0x30b0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b0bc:
    // 0x30b0bc: 0xc0a35d6  jal         func_28D758
label_30b0c0:
    if (ctx->pc == 0x30B0C0u) {
        ctx->pc = 0x30B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0BCu;
        // 0x30b0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0C4u;
        goto label_30b0c4;
    }
    ctx->pc = 0x30B0BCu;
    SET_GPR_U32(ctx, 31, 0x30B0C4u);
    ctx->pc = 0x30B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0BCu;
    // 0x30b0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30B0BCu, 0x30B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0C4u;
label_30b0c4:
    // 0x30b0c4: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x30b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_30b0c8:
    // 0x30b0c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_30b0cc:
    if (ctx->pc == 0x30B0CCu) {
        ctx->pc = 0x30B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0C8u;
        // 0x30b0cc: 0xae4303b0  sw          $v1, 0x3B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0D0u;
        goto label_30b0d0;
    }
    ctx->pc = 0x30B0C8u;
    {
        const bool branch_taken_0x30b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0C8u;
        // 0x30b0cc: 0xae4303b0  sw          $v1, 0x3B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0c8) {
            ctx->pc = 0x30B0F8u;
            goto label_30b0f8;
        }
    }
    ctx->pc = 0x30B0D0u;
label_30b0d0:
    // 0x30b0d0: 0xc0a4e54  jal         func_293950
label_30b0d4:
    if (ctx->pc == 0x30B0D4u) {
        ctx->pc = 0x30B0D8u;
        goto label_30b0d8;
    }
    ctx->pc = 0x30B0D0u;
    SET_GPR_U32(ctx, 31, 0x30B0D8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30B0D0u, 0x30B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0D8u;
label_30b0d8:
    // 0x30b0d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0dc:
    // 0x30b0dc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_30b0e0:
    if (ctx->pc == 0x30B0E0u) {
        ctx->pc = 0x30B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0DCu;
        // 0x30b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0E4u;
        goto label_30b0e4;
    }
    ctx->pc = 0x30B0DCu;
    {
        const bool branch_taken_0x30b0dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0DCu;
        // 0x30b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0dc) {
            ctx->pc = 0x30B0ECu;
            goto label_30b0ec;
        }
    }
    ctx->pc = 0x30B0E4u;
label_30b0e4:
    // 0x30b0e4: 0xc0bd6e2  jal         func_2F5B88
label_30b0e8:
    if (ctx->pc == 0x30B0E8u) {
        ctx->pc = 0x30B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0E4u;
        // 0x30b0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0ECu;
        goto label_30b0ec;
    }
    ctx->pc = 0x30B0E4u;
    SET_GPR_U32(ctx, 31, 0x30B0ECu);
    ctx->pc = 0x30B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0E4u;
    // 0x30b0e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5B88u, 0x30B0E4u, 0x30B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0ECu;
label_30b0ec:
    // 0x30b0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b0f0:
    // 0x30b0f0: 0xc0a35d6  jal         func_28D758
label_30b0f4:
    if (ctx->pc == 0x30B0F4u) {
        ctx->pc = 0x30B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0F0u;
        // 0x30b0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B0F8u;
        goto label_30b0f8;
    }
    ctx->pc = 0x30B0F0u;
    SET_GPR_U32(ctx, 31, 0x30B0F8u);
    ctx->pc = 0x30B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0F0u;
    // 0x30b0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30B0F0u, 0x30B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0F8u;
label_30b0f8:
    // 0x30b0f8: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x30b0f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_30b0fc:
    // 0x30b0fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30b100:
    if (ctx->pc == 0x30B100u) {
        ctx->pc = 0x30B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0FCu;
        // 0x30b100: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B104u;
        goto label_30b104;
    }
    ctx->pc = 0x30B0FCu;
    {
        const bool branch_taken_0x30b0fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0FCu;
        // 0x30b100: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0fc) {
            ctx->pc = 0x30B110u;
            goto label_30b110;
        }
    }
    ctx->pc = 0x30B104u;
label_30b104:
    // 0x30b104: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30b108:
    // 0x30b108: 0x10000002  b           . + 4 + (0x2 << 2)
label_30b10c:
    if (ctx->pc == 0x30B10Cu) {
        ctx->pc = 0x30B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B108u;
        // 0x30b10c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B110u;
        goto label_30b110;
    }
    ctx->pc = 0x30B108u;
    {
        const bool branch_taken_0x30b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B108u;
        // 0x30b10c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b108) {
            ctx->pc = 0x30B114u;
            goto label_30b114;
        }
    }
    ctx->pc = 0x30B110u;
label_30b110:
    // 0x30b110: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30b110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b114:
    // 0x30b114: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_30b118:
    if (ctx->pc == 0x30B118u) {
        ctx->pc = 0x30B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B114u;
        // 0x30b118: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B11Cu;
        goto label_30b11c;
    }
    ctx->pc = 0x30B114u;
    {
        const bool branch_taken_0x30b114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b114) {
            ctx->pc = 0x30B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B114u;
            // 0x30b118: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B14Cu;
            goto label_30b14c;
        }
    }
    ctx->pc = 0x30B11Cu;
label_30b11c:
    // 0x30b11c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30b120:
    // 0x30b120: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30b124:
    // 0x30b124: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30b128:
    // 0x30b128: 0x40f809  jalr        $v0
label_30b12c:
    if (ctx->pc == 0x30B12Cu) {
        ctx->pc = 0x30B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B128u;
        // 0x30b12c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B130u;
        goto label_30b130;
    }
    ctx->pc = 0x30B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B130u);
        ctx->pc = 0x30B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B128u;
        // 0x30b12c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B128u, 0x30B130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B130u;
label_30b130:
    // 0x30b130: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x30b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_30b134:
    // 0x30b134: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_30b138:
    if (ctx->pc == 0x30B138u) {
        ctx->pc = 0x30B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B134u;
        // 0x30b138: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B13Cu;
        goto label_30b13c;
    }
    ctx->pc = 0x30B134u;
    {
        const bool branch_taken_0x30b134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30b134) {
            ctx->pc = 0x30B138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B134u;
            // 0x30b138: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B14Cu;
            goto label_30b14c;
        }
    }
    ctx->pc = 0x30B13Cu;
label_30b13c:
    // 0x30b13c: 0x92650020  lbu         $a1, 0x20($s3)
    ctx->pc = 0x30b13cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_30b140:
    // 0x30b140: 0xc0ba80e  jal         func_2EA038
label_30b144:
    if (ctx->pc == 0x30B144u) {
        ctx->pc = 0x30B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B140u;
        // 0x30b144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B148u;
        goto label_30b148;
    }
    ctx->pc = 0x30B140u;
    SET_GPR_U32(ctx, 31, 0x30B148u);
    ctx->pc = 0x30B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B140u;
    // 0x30b144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA038u, 0x30B140u, 0x30B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B148u;
label_30b148:
    // 0x30b148: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b14c:
    // 0x30b14c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30b14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b150:
    // 0x30b150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b154:
    // 0x30b154: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30b154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b158:
    // 0x30b158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b15c:
    // 0x30b15c: 0x3e00008  jr          $ra
label_30b160:
    if (ctx->pc == 0x30B160u) {
        ctx->pc = 0x30B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B15Cu;
        // 0x30b160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B164u;
        goto label_30b164;
    }
    ctx->pc = 0x30B15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B15Cu;
        // 0x30b160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B164u;
label_30b164:
    // 0x30b164: 0x0  nop
    ctx->pc = 0x30b164u;
    // NOP
    ctx->pc = 0x30b168u;
}
