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

// Function: sub_00181400
// Address: 0x181400 - 0x1814f0
void sub_00181400_0x181400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181400_0x181400");
#endif

    switch (ctx->pc) {
        case 0x181400u: goto label_181400;
        case 0x181404u: goto label_181404;
        case 0x181408u: goto label_181408;
        case 0x18140cu: goto label_18140c;
        case 0x181410u: goto label_181410;
        case 0x181414u: goto label_181414;
        case 0x181418u: goto label_181418;
        case 0x18141cu: goto label_18141c;
        case 0x181420u: goto label_181420;
        case 0x181424u: goto label_181424;
        case 0x181428u: goto label_181428;
        case 0x18142cu: goto label_18142c;
        case 0x181430u: goto label_181430;
        case 0x181434u: goto label_181434;
        case 0x181438u: goto label_181438;
        case 0x18143cu: goto label_18143c;
        case 0x181440u: goto label_181440;
        case 0x181444u: goto label_181444;
        case 0x181448u: goto label_181448;
        case 0x18144cu: goto label_18144c;
        case 0x181450u: goto label_181450;
        case 0x181454u: goto label_181454;
        case 0x181458u: goto label_181458;
        case 0x18145cu: goto label_18145c;
        case 0x181460u: goto label_181460;
        case 0x181464u: goto label_181464;
        case 0x181468u: goto label_181468;
        case 0x18146cu: goto label_18146c;
        case 0x181470u: goto label_181470;
        case 0x181474u: goto label_181474;
        case 0x181478u: goto label_181478;
        case 0x18147cu: goto label_18147c;
        case 0x181480u: goto label_181480;
        case 0x181484u: goto label_181484;
        case 0x181488u: goto label_181488;
        case 0x18148cu: goto label_18148c;
        case 0x181490u: goto label_181490;
        case 0x181494u: goto label_181494;
        case 0x181498u: goto label_181498;
        case 0x18149cu: goto label_18149c;
        case 0x1814a0u: goto label_1814a0;
        case 0x1814a4u: goto label_1814a4;
        case 0x1814a8u: goto label_1814a8;
        case 0x1814acu: goto label_1814ac;
        case 0x1814b0u: goto label_1814b0;
        case 0x1814b4u: goto label_1814b4;
        case 0x1814b8u: goto label_1814b8;
        case 0x1814bcu: goto label_1814bc;
        case 0x1814c0u: goto label_1814c0;
        case 0x1814c4u: goto label_1814c4;
        case 0x1814c8u: goto label_1814c8;
        case 0x1814ccu: goto label_1814cc;
        case 0x1814d0u: goto label_1814d0;
        case 0x1814d4u: goto label_1814d4;
        case 0x1814d8u: goto label_1814d8;
        case 0x1814dcu: goto label_1814dc;
        case 0x1814e0u: goto label_1814e0;
        case 0x1814e4u: goto label_1814e4;
        case 0x1814e8u: goto label_1814e8;
        case 0x1814ecu: goto label_1814ec;
        default: break;
    }

    ctx->pc = 0x181400u;

label_181400:
    // 0x181400: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_181404:
    // 0x181404: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x181404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_181408:
    // 0x181408: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x181408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_18140c:
    // 0x18140c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18140cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181410:
    // 0x181410: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x181410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_181414:
    // 0x181414: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_181418:
    // 0x181418: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x181418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_18141c:
    // 0x18141c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18141cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181420:
    // 0x181420: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x181420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_181424:
    // 0x181424: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x181424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_181428:
    // 0x181428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x181428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18142c:
    // 0x18142c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_181430:
    // 0x181430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181434:
    // 0x181434: 0xc137c70  jal         func_4DF1C0
label_181438:
    if (ctx->pc == 0x181438u) {
        ctx->pc = 0x181438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181434u;
        // 0x181438: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18143Cu;
        goto label_18143c;
    }
    ctx->pc = 0x181434u;
    SET_GPR_U32(ctx, 31, 0x18143Cu);
    ctx->pc = 0x181438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181434u;
    // 0x181438: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x181434u, 0x18143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18143Cu;
label_18143c:
    // 0x18143c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_181440:
    // 0x181440: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_181444:
    // 0x181444: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_181448:
    if (ctx->pc == 0x181448u) {
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181444u;
        // 0x181448: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18144Cu;
        goto label_18144c;
    }
    ctx->pc = 0x181444u;
    {
        const bool branch_taken_0x181444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181444u;
        // 0x181448: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181444) {
            ctx->pc = 0x181474u;
            goto label_181474;
        }
    }
    ctx->pc = 0x18144Cu;
label_18144c:
    // 0x18144c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_181450:
    // 0x181450: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_181454:
    // 0x181454: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_181458:
    // 0x181458: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18145c:
    // 0x18145c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_181460:
    // 0x181460: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_181464:
    // 0x181464: 0x40f809  jalr        $v0
label_181468:
    if (ctx->pc == 0x181468u) {
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18146Cu;
        goto label_18146c;
    }
    ctx->pc = 0x181464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18146Cu);
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181464u, 0x18146Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18146Cu;
label_18146c:
    // 0x18146c: 0x10000017  b           . + 4 + (0x17 << 2)
label_181470:
    if (ctx->pc == 0x181470u) {
        ctx->pc = 0x181470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18146Cu;
        // 0x181470: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181474u;
        goto label_181474;
    }
    ctx->pc = 0x18146Cu;
    {
        const bool branch_taken_0x18146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18146Cu;
        // 0x181470: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18146c) {
            ctx->pc = 0x1814CCu;
            goto label_1814cc;
        }
    }
    ctx->pc = 0x181474u;
label_181474:
    // 0x181474: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_181478:
    // 0x181478: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x181478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_18147c:
    // 0x18147c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x18147cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_181480:
    // 0x181480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181484:
    // 0x181484: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_181488:
    // 0x181488: 0xc10ca04  jal         func_432810
label_18148c:
    if (ctx->pc == 0x18148Cu) {
        ctx->pc = 0x18148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181488u;
        // 0x18148c: 0x24c62618  addiu       $a2, $a2, 0x2618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181490u;
        goto label_181490;
    }
    ctx->pc = 0x181488u;
    SET_GPR_U32(ctx, 31, 0x181490u);
    ctx->pc = 0x18148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181488u;
    // 0x18148c: 0x24c62618  addiu       $a2, $a2, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x181488u, 0x181490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181490u;
label_181490:
    // 0x181490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181494:
    // 0x181494: 0xc061668  jal         func_1859A0
label_181498:
    if (ctx->pc == 0x181498u) {
        ctx->pc = 0x181498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181494u;
        // 0x181498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18149Cu;
        goto label_18149c;
    }
    ctx->pc = 0x181494u;
    SET_GPR_U32(ctx, 31, 0x18149Cu);
    ctx->pc = 0x181498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181494u;
    // 0x181498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x181494u, 0x18149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18149Cu;
label_18149c:
    // 0x18149c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1814a0:
    if (ctx->pc == 0x1814A0u) {
        ctx->pc = 0x1814A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18149Cu;
        // 0x1814a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814A4u;
        goto label_1814a4;
    }
    ctx->pc = 0x18149Cu;
    {
        const bool branch_taken_0x18149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1814A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18149Cu;
        // 0x1814a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18149c) {
            ctx->pc = 0x1814D0u;
            goto label_1814d0;
        }
    }
    ctx->pc = 0x1814A4u;
label_1814a4:
    // 0x1814a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1814a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1814a8:
    // 0x1814a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1814a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1814ac:
    // 0x1814ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1814acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1814b0:
    // 0x1814b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1814b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1814b4:
    // 0x1814b4: 0xc061eaa  jal         func_187AA8
label_1814b8:
    if (ctx->pc == 0x1814B8u) {
        ctx->pc = 0x1814B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814B4u;
        // 0x1814b8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814BCu;
        goto label_1814bc;
    }
    ctx->pc = 0x1814B4u;
    SET_GPR_U32(ctx, 31, 0x1814BCu);
    ctx->pc = 0x1814B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814B4u;
    // 0x1814b8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x1814B4u, 0x1814BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814BCu;
label_1814bc:
    // 0x1814bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1814bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1814c0:
    // 0x1814c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1814c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814c4:
    // 0x1814c4: 0xc0552b8  jal         func_154AE0
label_1814c8:
    if (ctx->pc == 0x1814C8u) {
        ctx->pc = 0x1814C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814C4u;
        // 0x1814c8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814CCu;
        goto label_1814cc;
    }
    ctx->pc = 0x1814C4u;
    SET_GPR_U32(ctx, 31, 0x1814CCu);
    ctx->pc = 0x1814C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814C4u;
    // 0x1814c8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1814C4u, 0x1814CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814CCu;
label_1814cc:
    // 0x1814cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1814d0:
    // 0x1814d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1814d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1814d4:
    // 0x1814d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1814d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1814d8:
    // 0x1814d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1814d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1814dc:
    // 0x1814dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1814dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1814e0:
    // 0x1814e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1814e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1814e4:
    // 0x1814e4: 0x3e00008  jr          $ra
label_1814e8:
    if (ctx->pc == 0x1814E8u) {
        ctx->pc = 0x1814E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814E4u;
        // 0x1814e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814ECu;
        goto label_1814ec;
    }
    ctx->pc = 0x1814E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814E4u;
        // 0x1814e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1814E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1814ECu;
label_1814ec:
    // 0x1814ec: 0x0  nop
    ctx->pc = 0x1814ecu;
    // NOP
    ctx->pc = 0x1814f0u;
}
