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

// Function: sub_0047F0C0
// Address: 0x47f0c0 - 0x47f1e8
void sub_0047F0C0_0x47f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F0C0_0x47f0c0");
#endif

    switch (ctx->pc) {
        case 0x47f0c0u: goto label_47f0c0;
        case 0x47f0c4u: goto label_47f0c4;
        case 0x47f0c8u: goto label_47f0c8;
        case 0x47f0ccu: goto label_47f0cc;
        case 0x47f0d0u: goto label_47f0d0;
        case 0x47f0d4u: goto label_47f0d4;
        case 0x47f0d8u: goto label_47f0d8;
        case 0x47f0dcu: goto label_47f0dc;
        case 0x47f0e0u: goto label_47f0e0;
        case 0x47f0e4u: goto label_47f0e4;
        case 0x47f0e8u: goto label_47f0e8;
        case 0x47f0ecu: goto label_47f0ec;
        case 0x47f0f0u: goto label_47f0f0;
        case 0x47f0f4u: goto label_47f0f4;
        case 0x47f0f8u: goto label_47f0f8;
        case 0x47f0fcu: goto label_47f0fc;
        case 0x47f100u: goto label_47f100;
        case 0x47f104u: goto label_47f104;
        case 0x47f108u: goto label_47f108;
        case 0x47f10cu: goto label_47f10c;
        case 0x47f110u: goto label_47f110;
        case 0x47f114u: goto label_47f114;
        case 0x47f118u: goto label_47f118;
        case 0x47f11cu: goto label_47f11c;
        case 0x47f120u: goto label_47f120;
        case 0x47f124u: goto label_47f124;
        case 0x47f128u: goto label_47f128;
        case 0x47f12cu: goto label_47f12c;
        case 0x47f130u: goto label_47f130;
        case 0x47f134u: goto label_47f134;
        case 0x47f138u: goto label_47f138;
        case 0x47f13cu: goto label_47f13c;
        case 0x47f140u: goto label_47f140;
        case 0x47f144u: goto label_47f144;
        case 0x47f148u: goto label_47f148;
        case 0x47f14cu: goto label_47f14c;
        case 0x47f150u: goto label_47f150;
        case 0x47f154u: goto label_47f154;
        case 0x47f158u: goto label_47f158;
        case 0x47f15cu: goto label_47f15c;
        case 0x47f160u: goto label_47f160;
        case 0x47f164u: goto label_47f164;
        case 0x47f168u: goto label_47f168;
        case 0x47f16cu: goto label_47f16c;
        case 0x47f170u: goto label_47f170;
        case 0x47f174u: goto label_47f174;
        case 0x47f178u: goto label_47f178;
        case 0x47f17cu: goto label_47f17c;
        case 0x47f180u: goto label_47f180;
        case 0x47f184u: goto label_47f184;
        case 0x47f188u: goto label_47f188;
        case 0x47f18cu: goto label_47f18c;
        case 0x47f190u: goto label_47f190;
        case 0x47f194u: goto label_47f194;
        case 0x47f198u: goto label_47f198;
        case 0x47f19cu: goto label_47f19c;
        case 0x47f1a0u: goto label_47f1a0;
        case 0x47f1a4u: goto label_47f1a4;
        case 0x47f1a8u: goto label_47f1a8;
        case 0x47f1acu: goto label_47f1ac;
        case 0x47f1b0u: goto label_47f1b0;
        case 0x47f1b4u: goto label_47f1b4;
        case 0x47f1b8u: goto label_47f1b8;
        case 0x47f1bcu: goto label_47f1bc;
        case 0x47f1c0u: goto label_47f1c0;
        case 0x47f1c4u: goto label_47f1c4;
        case 0x47f1c8u: goto label_47f1c8;
        case 0x47f1ccu: goto label_47f1cc;
        case 0x47f1d0u: goto label_47f1d0;
        case 0x47f1d4u: goto label_47f1d4;
        case 0x47f1d8u: goto label_47f1d8;
        case 0x47f1dcu: goto label_47f1dc;
        case 0x47f1e0u: goto label_47f1e0;
        case 0x47f1e4u: goto label_47f1e4;
        default: break;
    }

    ctx->pc = 0x47f0c0u;

label_47f0c0:
    // 0x47f0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47f0c4:
    // 0x47f0c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47f0c8:
    // 0x47f0c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47f0cc:
    // 0x47f0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f0d0:
    // 0x47f0d0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_47f0d4:
    if (ctx->pc == 0x47F0D4u) {
        ctx->pc = 0x47F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0D0u;
        // 0x47f0d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F0D8u;
        goto label_47f0d8;
    }
    ctx->pc = 0x47F0D0u;
    {
        const bool branch_taken_0x47f0d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0D0u;
        // 0x47f0d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f0d0) {
            ctx->pc = 0x47F0E0u;
            goto label_47f0e0;
        }
    }
    ctx->pc = 0x47F0D8u;
label_47f0d8:
    // 0x47f0d8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_47f0dc:
    if (ctx->pc == 0x47F0DCu) {
        ctx->pc = 0x47F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0D8u;
        // 0x47f0dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F0E0u;
        goto label_47f0e0;
    }
    ctx->pc = 0x47F0D8u;
    {
        const bool branch_taken_0x47f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0D8u;
        // 0x47f0dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f0d8) {
            ctx->pc = 0x47F1D0u;
            goto label_47f1d0;
        }
    }
    ctx->pc = 0x47F0E0u;
label_47f0e0:
    // 0x47f0e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f0e4:
    // 0x47f0e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f0e8:
    // 0x47f0e8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_47f0ec:
    if (ctx->pc == 0x47F0ECu) {
        ctx->pc = 0x47F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0E8u;
        // 0x47f0ec: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F0F0u;
        goto label_47f0f0;
    }
    ctx->pc = 0x47F0E8u;
    {
        const bool branch_taken_0x47f0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0E8u;
        // 0x47f0ec: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f0e8) {
            ctx->pc = 0x47F160u;
            goto label_47f160;
        }
    }
    ctx->pc = 0x47F0F0u;
label_47f0f0:
    // 0x47f0f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_47f0f4:
    if (ctx->pc == 0x47F0F4u) {
        ctx->pc = 0x47F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0F0u;
        // 0x47f0f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F0F8u;
        goto label_47f0f8;
    }
    ctx->pc = 0x47F0F0u;
    {
        const bool branch_taken_0x47f0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0F0u;
        // 0x47f0f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f0f0) {
            ctx->pc = 0x47F108u;
            goto label_47f108;
        }
    }
    ctx->pc = 0x47F0F8u;
label_47f0f8:
    // 0x47f0f8: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
label_47f0fc:
    if (ctx->pc == 0x47F0FCu) {
        ctx->pc = 0x47F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F0F8u;
        // 0x47f0fc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F100u;
        goto label_47f100;
    }
    ctx->pc = 0x47F0F8u;
    {
        const bool branch_taken_0x47f0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x47f0f8) {
            ctx->pc = 0x47F0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F0F8u;
            // 0x47f0fc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F194u;
            goto label_47f194;
        }
    }
    ctx->pc = 0x47F100u;
label_47f100:
    // 0x47f100: 0x1000002b  b           . + 4 + (0x2B << 2)
label_47f104:
    if (ctx->pc == 0x47F104u) {
        ctx->pc = 0x47F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F100u;
        // 0x47f104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F108u;
        goto label_47f108;
    }
    ctx->pc = 0x47F100u;
    {
        const bool branch_taken_0x47f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F100u;
        // 0x47f104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f100) {
            ctx->pc = 0x47F1B0u;
            goto label_47f1b0;
        }
    }
    ctx->pc = 0x47F108u;
label_47f108:
    // 0x47f108: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_47f10c:
    if (ctx->pc == 0x47F10Cu) {
        ctx->pc = 0x47F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F108u;
        // 0x47f10c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F110u;
        goto label_47f110;
    }
    ctx->pc = 0x47F108u;
    {
        const bool branch_taken_0x47f108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F108u;
        // 0x47f10c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f108) {
            ctx->pc = 0x47F1A8u;
            goto label_47f1a8;
        }
    }
    ctx->pc = 0x47F110u;
label_47f110:
    // 0x47f110: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x47f110u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47f114:
    // 0x47f114: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x47f114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_47f118:
    // 0x47f118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47f118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f11c:
    // 0x47f11c: 0xc1305f6  jal         func_4C17D8
label_47f120:
    if (ctx->pc == 0x47F120u) {
        ctx->pc = 0x47F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F11Cu;
        // 0x47f120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F124u;
        goto label_47f124;
    }
    ctx->pc = 0x47F11Cu;
    SET_GPR_U32(ctx, 31, 0x47F124u);
    ctx->pc = 0x47F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F11Cu;
    // 0x47f120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C17D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C17D8u, 0x47F11Cu, 0x47F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F124u;
label_47f124:
    // 0x47f124: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_47f128:
    if (ctx->pc == 0x47F128u) {
        ctx->pc = 0x47F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F124u;
        // 0x47f128: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F12Cu;
        goto label_47f12c;
    }
    ctx->pc = 0x47F124u;
    {
        const bool branch_taken_0x47f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F124u;
        // 0x47f128: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f124) {
            ctx->pc = 0x47F1D0u;
            goto label_47f1d0;
        }
    }
    ctx->pc = 0x47F12Cu;
label_47f12c:
    // 0x47f12c: 0xc130628  jal         func_4C18A0
label_47f130:
    if (ctx->pc == 0x47F130u) {
        ctx->pc = 0x47F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F12Cu;
        // 0x47f130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F134u;
        goto label_47f134;
    }
    ctx->pc = 0x47F12Cu;
    SET_GPR_U32(ctx, 31, 0x47F134u);
    ctx->pc = 0x47F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F12Cu;
    // 0x47f130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C18A0u, 0x47F12Cu, 0x47F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F134u;
label_47f134:
    // 0x47f134: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_47f138:
    if (ctx->pc == 0x47F138u) {
        ctx->pc = 0x47F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F134u;
        // 0x47f138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F13Cu;
        goto label_47f13c;
    }
    ctx->pc = 0x47F134u;
    {
        const bool branch_taken_0x47f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F134u;
        // 0x47f138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f134) {
            ctx->pc = 0x47F1CCu;
            goto label_47f1cc;
        }
    }
    ctx->pc = 0x47F13Cu;
label_47f13c:
    // 0x47f13c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x47f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47f140:
    // 0x47f140: 0xc11eff2  jal         func_47BFC8
label_47f144:
    if (ctx->pc == 0x47F144u) {
        ctx->pc = 0x47F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F140u;
        // 0x47f144: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F148u;
        goto label_47f148;
    }
    ctx->pc = 0x47F140u;
    SET_GPR_U32(ctx, 31, 0x47F148u);
    ctx->pc = 0x47F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F140u;
    // 0x47f144: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F140u, 0x47F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F148u;
label_47f148:
    // 0x47f148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47f14c:
    // 0x47f14c: 0xc11f024  jal         func_47C090
label_47f150:
    if (ctx->pc == 0x47F150u) {
        ctx->pc = 0x47F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F14Cu;
        // 0x47f150: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F154u;
        goto label_47f154;
    }
    ctx->pc = 0x47F14Cu;
    SET_GPR_U32(ctx, 31, 0x47F154u);
    ctx->pc = 0x47F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F14Cu;
    // 0x47f150: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47F14Cu, 0x47F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F154u;
label_47f154:
    // 0x47f154: 0x1000001e  b           . + 4 + (0x1E << 2)
label_47f158:
    if (ctx->pc == 0x47F158u) {
        ctx->pc = 0x47F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F154u;
        // 0x47f158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F15Cu;
        goto label_47f15c;
    }
    ctx->pc = 0x47F154u;
    {
        const bool branch_taken_0x47f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F154u;
        // 0x47f158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f154) {
            ctx->pc = 0x47F1D0u;
            goto label_47f1d0;
        }
    }
    ctx->pc = 0x47F15Cu;
label_47f15c:
    // 0x47f15c: 0x0  nop
    ctx->pc = 0x47f15cu;
    // NOP
label_47f160:
    // 0x47f160: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47f164:
    // 0x47f164: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x47f164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47f168:
    // 0x47f168: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_47f16c:
    // 0x47f16c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x47f16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_47f170:
    // 0x47f170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_47f174:
    if (ctx->pc == 0x47F174u) {
        ctx->pc = 0x47F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F170u;
        // 0x47f174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F178u;
        goto label_47f178;
    }
    ctx->pc = 0x47F170u;
    {
        const bool branch_taken_0x47f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F170u;
        // 0x47f174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f170) {
            ctx->pc = 0x47F188u;
            goto label_47f188;
        }
    }
    ctx->pc = 0x47F178u;
label_47f178:
    // 0x47f178: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x47f178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_47f17c:
    // 0x47f17c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47f180:
    // 0x47f180: 0x1000000d  b           . + 4 + (0xD << 2)
label_47f184:
    if (ctx->pc == 0x47F184u) {
        ctx->pc = 0x47F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F180u;
        // 0x47f184: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F188u;
        goto label_47f188;
    }
    ctx->pc = 0x47F180u;
    {
        const bool branch_taken_0x47f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F180u;
        // 0x47f184: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f180) {
            ctx->pc = 0x47F1B8u;
            goto label_47f1b8;
        }
    }
    ctx->pc = 0x47F188u;
label_47f188:
    // 0x47f188: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x47f188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_47f18c:
    // 0x47f18c: 0x10000010  b           . + 4 + (0x10 << 2)
label_47f190:
    if (ctx->pc == 0x47F190u) {
        ctx->pc = 0x47F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F18Cu;
        // 0x47f190: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F194u;
        goto label_47f194;
    }
    ctx->pc = 0x47F18Cu;
    {
        const bool branch_taken_0x47f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F18Cu;
        // 0x47f190: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f18c) {
            ctx->pc = 0x47F1D0u;
            goto label_47f1d0;
        }
    }
    ctx->pc = 0x47F194u;
label_47f194:
    // 0x47f194: 0x40f809  jalr        $v0
label_47f198:
    if (ctx->pc == 0x47F198u) {
        ctx->pc = 0x47F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F194u;
        // 0x47f198: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F19Cu;
        goto label_47f19c;
    }
    ctx->pc = 0x47F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F19Cu);
        ctx->pc = 0x47F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F194u;
        // 0x47f198: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F194u, 0x47F19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F19Cu;
label_47f19c:
    // 0x47f19c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x47f19cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_47f1a0:
    // 0x47f1a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_47f1a4:
    if (ctx->pc == 0x47F1A4u) {
        ctx->pc = 0x47F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1A0u;
        // 0x47f1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F1A8u;
        goto label_47f1a8;
    }
    ctx->pc = 0x47F1A0u;
    {
        const bool branch_taken_0x47f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1A0u;
        // 0x47f1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f1a0) {
            ctx->pc = 0x47F1D0u;
            goto label_47f1d0;
        }
    }
    ctx->pc = 0x47F1A8u;
label_47f1a8:
    // 0x47f1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f1ac:
    // 0x47f1ac: 0x0  nop
    ctx->pc = 0x47f1acu;
    // NOP
label_47f1b0:
    // 0x47f1b0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x47f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47f1b4:
    // 0x47f1b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47f1b8:
    // 0x47f1b8: 0xc11eff2  jal         func_47BFC8
label_47f1bc:
    if (ctx->pc == 0x47F1BCu) {
        ctx->pc = 0x47F1C0u;
        goto label_47f1c0;
    }
    ctx->pc = 0x47F1B8u;
    SET_GPR_U32(ctx, 31, 0x47F1C0u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F1B8u, 0x47F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F1C0u;
label_47f1c0:
    // 0x47f1c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47f1c4:
    // 0x47f1c4: 0xc11f024  jal         func_47C090
label_47f1c8:
    if (ctx->pc == 0x47F1C8u) {
        ctx->pc = 0x47F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1C4u;
        // 0x47f1c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F1CCu;
        goto label_47f1cc;
    }
    ctx->pc = 0x47F1C4u;
    SET_GPR_U32(ctx, 31, 0x47F1CCu);
    ctx->pc = 0x47F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F1C4u;
    // 0x47f1c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47F1C4u, 0x47F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F1CCu;
label_47f1cc:
    // 0x47f1cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47f1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f1d0:
    // 0x47f1d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47f1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f1d4:
    // 0x47f1d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47f1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f1d8:
    // 0x47f1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47f1dc:
    // 0x47f1dc: 0x3e00008  jr          $ra
label_47f1e0:
    if (ctx->pc == 0x47F1E0u) {
        ctx->pc = 0x47F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1DCu;
        // 0x47f1e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F1E4u;
        goto label_47f1e4;
    }
    ctx->pc = 0x47F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F1DCu;
        // 0x47f1e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F1E4u;
label_47f1e4:
    // 0x47f1e4: 0x0  nop
    ctx->pc = 0x47f1e4u;
    // NOP
    ctx->pc = 0x47f1e8u;
}
