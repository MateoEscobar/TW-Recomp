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

// Function: sub_0021F0A0
// Address: 0x21f0a0 - 0x21f1d0
void sub_0021F0A0_0x21f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F0A0_0x21f0a0");
#endif

    switch (ctx->pc) {
        case 0x21f0a0u: goto label_21f0a0;
        case 0x21f0a4u: goto label_21f0a4;
        case 0x21f0a8u: goto label_21f0a8;
        case 0x21f0acu: goto label_21f0ac;
        case 0x21f0b0u: goto label_21f0b0;
        case 0x21f0b4u: goto label_21f0b4;
        case 0x21f0b8u: goto label_21f0b8;
        case 0x21f0bcu: goto label_21f0bc;
        case 0x21f0c0u: goto label_21f0c0;
        case 0x21f0c4u: goto label_21f0c4;
        case 0x21f0c8u: goto label_21f0c8;
        case 0x21f0ccu: goto label_21f0cc;
        case 0x21f0d0u: goto label_21f0d0;
        case 0x21f0d4u: goto label_21f0d4;
        case 0x21f0d8u: goto label_21f0d8;
        case 0x21f0dcu: goto label_21f0dc;
        case 0x21f0e0u: goto label_21f0e0;
        case 0x21f0e4u: goto label_21f0e4;
        case 0x21f0e8u: goto label_21f0e8;
        case 0x21f0ecu: goto label_21f0ec;
        case 0x21f0f0u: goto label_21f0f0;
        case 0x21f0f4u: goto label_21f0f4;
        case 0x21f0f8u: goto label_21f0f8;
        case 0x21f0fcu: goto label_21f0fc;
        case 0x21f100u: goto label_21f100;
        case 0x21f104u: goto label_21f104;
        case 0x21f108u: goto label_21f108;
        case 0x21f10cu: goto label_21f10c;
        case 0x21f110u: goto label_21f110;
        case 0x21f114u: goto label_21f114;
        case 0x21f118u: goto label_21f118;
        case 0x21f11cu: goto label_21f11c;
        case 0x21f120u: goto label_21f120;
        case 0x21f124u: goto label_21f124;
        case 0x21f128u: goto label_21f128;
        case 0x21f12cu: goto label_21f12c;
        case 0x21f130u: goto label_21f130;
        case 0x21f134u: goto label_21f134;
        case 0x21f138u: goto label_21f138;
        case 0x21f13cu: goto label_21f13c;
        case 0x21f140u: goto label_21f140;
        case 0x21f144u: goto label_21f144;
        case 0x21f148u: goto label_21f148;
        case 0x21f14cu: goto label_21f14c;
        case 0x21f150u: goto label_21f150;
        case 0x21f154u: goto label_21f154;
        case 0x21f158u: goto label_21f158;
        case 0x21f15cu: goto label_21f15c;
        case 0x21f160u: goto label_21f160;
        case 0x21f164u: goto label_21f164;
        case 0x21f168u: goto label_21f168;
        case 0x21f16cu: goto label_21f16c;
        case 0x21f170u: goto label_21f170;
        case 0x21f174u: goto label_21f174;
        case 0x21f178u: goto label_21f178;
        case 0x21f17cu: goto label_21f17c;
        case 0x21f180u: goto label_21f180;
        case 0x21f184u: goto label_21f184;
        case 0x21f188u: goto label_21f188;
        case 0x21f18cu: goto label_21f18c;
        case 0x21f190u: goto label_21f190;
        case 0x21f194u: goto label_21f194;
        case 0x21f198u: goto label_21f198;
        case 0x21f19cu: goto label_21f19c;
        case 0x21f1a0u: goto label_21f1a0;
        case 0x21f1a4u: goto label_21f1a4;
        case 0x21f1a8u: goto label_21f1a8;
        case 0x21f1acu: goto label_21f1ac;
        case 0x21f1b0u: goto label_21f1b0;
        case 0x21f1b4u: goto label_21f1b4;
        case 0x21f1b8u: goto label_21f1b8;
        case 0x21f1bcu: goto label_21f1bc;
        case 0x21f1c0u: goto label_21f1c0;
        case 0x21f1c4u: goto label_21f1c4;
        case 0x21f1c8u: goto label_21f1c8;
        case 0x21f1ccu: goto label_21f1cc;
        default: break;
    }

    ctx->pc = 0x21f0a0u;

label_21f0a0:
    // 0x21f0a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21f0a4:
    // 0x21f0a4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x21f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_21f0a8:
    // 0x21f0a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x21f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_21f0ac:
    // 0x21f0ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f0b0:
    // 0x21f0b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x21f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_21f0b4:
    // 0x21f0b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21f0b8:
    // 0x21f0b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21f0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21f0bc:
    // 0x21f0bc: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21f0c0:
    // 0x21f0c0: 0x8e23017c  lw          $v1, 0x17C($s1)
    ctx->pc = 0x21f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_21f0c4:
    // 0x21f0c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f0c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f0c8:
    // 0x21f0c8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_21f0cc:
    if (ctx->pc == 0x21F0CCu) {
        ctx->pc = 0x21F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0C8u;
        // 0x21f0cc: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0D0u;
        goto label_21f0d0;
    }
    ctx->pc = 0x21F0C8u;
    {
        const bool branch_taken_0x21f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0C8u;
        // 0x21f0cc: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0c8) {
            ctx->pc = 0x21F1A8u;
            goto label_21f1a8;
        }
    }
    ctx->pc = 0x21F0D0u;
label_21f0d0:
    // 0x21f0d0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x21f0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21f0d4:
    // 0x21f0d4: 0xc043d5e  jal         func_10F578
label_21f0d8:
    if (ctx->pc == 0x21F0D8u) {
        ctx->pc = 0x21F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0D4u;
        // 0x21f0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0DCu;
        goto label_21f0dc;
    }
    ctx->pc = 0x21F0D4u;
    SET_GPR_U32(ctx, 31, 0x21F0DCu);
    ctx->pc = 0x21F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0D4u;
    // 0x21f0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21F0D4u, 0x21F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0DCu;
label_21f0dc:
    // 0x21f0dc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_21f0e0:
    if (ctx->pc == 0x21F0E0u) {
        ctx->pc = 0x21F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0DCu;
        // 0x21f0e0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0E4u;
        goto label_21f0e4;
    }
    ctx->pc = 0x21F0DCu;
    {
        const bool branch_taken_0x21f0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f0dc) {
            ctx->pc = 0x21F0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F0DCu;
            // 0x21f0e0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F110u;
            goto label_21f110;
        }
    }
    ctx->pc = 0x21F0E4u;
label_21f0e4:
    // 0x21f0e4: 0xc043d5e  jal         func_10F578
label_21f0e8:
    if (ctx->pc == 0x21F0E8u) {
        ctx->pc = 0x21F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0E4u;
        // 0x21f0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0ECu;
        goto label_21f0ec;
    }
    ctx->pc = 0x21F0E4u;
    SET_GPR_U32(ctx, 31, 0x21F0ECu);
    ctx->pc = 0x21F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0E4u;
    // 0x21f0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21F0E4u, 0x21F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0ECu;
label_21f0ec:
    // 0x21f0ec: 0xc043c20  jal         func_10F080
label_21f0f0:
    if (ctx->pc == 0x21F0F0u) {
        ctx->pc = 0x21F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0ECu;
        // 0x21f0f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0F4u;
        goto label_21f0f4;
    }
    ctx->pc = 0x21F0ECu;
    SET_GPR_U32(ctx, 31, 0x21F0F4u);
    ctx->pc = 0x21F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0ECu;
    // 0x21f0f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x21F0ECu, 0x21F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0F4u;
label_21f0f4:
    // 0x21f0f4: 0x1242002c  beq         $s2, $v0, . + 4 + (0x2C << 2)
label_21f0f8:
    if (ctx->pc == 0x21F0F8u) {
        ctx->pc = 0x21F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F4u;
        // 0x21f0f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0FCu;
        goto label_21f0fc;
    }
    ctx->pc = 0x21F0F4u;
    {
        const bool branch_taken_0x21f0f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F4u;
        // 0x21f0f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0f4) {
            ctx->pc = 0x21F1A8u;
            goto label_21f1a8;
        }
    }
    ctx->pc = 0x21F0FCu;
label_21f0fc:
    // 0x21f0fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21f100:
    // 0x21f100: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21f104:
    // 0x21f104: 0xc0440c6  jal         func_110318
label_21f108:
    if (ctx->pc == 0x21F108u) {
        ctx->pc = 0x21F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F104u;
        // 0x21f108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F10Cu;
        goto label_21f10c;
    }
    ctx->pc = 0x21F104u;
    SET_GPR_U32(ctx, 31, 0x21F10Cu);
    ctx->pc = 0x21F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F104u;
    // 0x21f108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21F104u, 0x21F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F10Cu;
label_21f10c:
    // 0x21f10c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f110:
    // 0x21f110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f114:
    // 0x21f114: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x21f114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_21f118:
    // 0x21f118: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x21f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_21f11c:
    // 0x21f11c: 0x60f809  jalr        $v1
label_21f120:
    if (ctx->pc == 0x21F120u) {
        ctx->pc = 0x21F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F11Cu;
        // 0x21f120: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F124u;
        goto label_21f124;
    }
    ctx->pc = 0x21F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F124u);
        ctx->pc = 0x21F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F11Cu;
        // 0x21f120: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F11Cu, 0x21F124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F124u;
label_21f124:
    // 0x21f124: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x21f124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21f128:
    // 0x21f128: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21f12c:
    // 0x21f12c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x21f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_21f130:
    // 0x21f130: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21f130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_21f134:
    // 0x21f134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21f138:
    // 0x21f138: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21f13c:
    // 0x21f13c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f140:
    // 0x21f140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21f140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21f144:
    // 0x21f144: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21f148:
    // 0x21f148: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21f148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_21f14c:
    // 0x21f14c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21f150:
    // 0x21f150: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_21f154:
    // 0x21f154: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21f154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21f158:
    // 0x21f158: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x21f158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_21f15c:
    // 0x21f15c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x21f15cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_21f160:
    // 0x21f160: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x21f160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_21f164:
    // 0x21f164: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f168:
    // 0x21f168: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21f168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21f16c:
    // 0x21f16c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21f16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f170:
    // 0x21f170: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x21f170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21f174:
    // 0x21f174: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21f174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21f178:
    // 0x21f178: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21f178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21f17c:
    // 0x21f17c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21f17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21f180:
    // 0x21f180: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21f180u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21f184:
    // 0x21f184: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21f184u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_21f188:
    // 0x21f188: 0x8ce4aa84  lw          $a0, -0x557C($a3)
    ctx->pc = 0x21f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945412)));
label_21f18c:
    // 0x21f18c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x21f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_21f190:
    // 0x21f190: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x21f190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_21f194:
    // 0x21f194: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x21f194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_21f198:
    // 0x21f198: 0xc04404e  jal         func_110138
label_21f19c:
    if (ctx->pc == 0x21F19Cu) {
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1A0u;
        goto label_21f1a0;
    }
    ctx->pc = 0x21F198u;
    SET_GPR_U32(ctx, 31, 0x21F1A0u);
    ctx->pc = 0x21F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F198u;
    // 0x21f19c: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110138u, 0x21F198u, 0x21F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1A0u;
label_21f1a0:
    // 0x21f1a0: 0xae22017c  sw          $v0, 0x17C($s1)
    ctx->pc = 0x21f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
label_21f1a4:
    // 0x21f1a4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x21f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_21f1a8:
    // 0x21f1a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21f1ac:
    // 0x21f1ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x21f1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21f1b0:
    // 0x21f1b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x21f1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21f1b4:
    // 0x21f1b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x21f1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21f1b8:
    // 0x21f1b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21f1bc:
    // 0x21f1bc: 0x3e00008  jr          $ra
label_21f1c0:
    if (ctx->pc == 0x21F1C0u) {
        ctx->pc = 0x21F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1BCu;
        // 0x21f1c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1C4u;
        goto label_21f1c4;
    }
    ctx->pc = 0x21F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1BCu;
        // 0x21f1c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F1C4u;
label_21f1c4:
    // 0x21f1c4: 0x0  nop
    ctx->pc = 0x21f1c4u;
    // NOP
label_21f1c8:
    // 0x21f1c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21f1cc:
    // 0x21f1cc: 0x0  nop
    ctx->pc = 0x21f1ccu;
    // NOP
    ctx->pc = 0x21f1d0u;
}
