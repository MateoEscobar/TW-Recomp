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

// Function: sub_001C2470
// Address: 0x1c2470 - 0x1c2520
void sub_001C2470_0x1c2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2470_0x1c2470");
#endif

    switch (ctx->pc) {
        case 0x1c2470u: goto label_1c2470;
        case 0x1c2474u: goto label_1c2474;
        case 0x1c2478u: goto label_1c2478;
        case 0x1c247cu: goto label_1c247c;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c2484u: goto label_1c2484;
        case 0x1c2488u: goto label_1c2488;
        case 0x1c248cu: goto label_1c248c;
        case 0x1c2490u: goto label_1c2490;
        case 0x1c2494u: goto label_1c2494;
        case 0x1c2498u: goto label_1c2498;
        case 0x1c249cu: goto label_1c249c;
        case 0x1c24a0u: goto label_1c24a0;
        case 0x1c24a4u: goto label_1c24a4;
        case 0x1c24a8u: goto label_1c24a8;
        case 0x1c24acu: goto label_1c24ac;
        case 0x1c24b0u: goto label_1c24b0;
        case 0x1c24b4u: goto label_1c24b4;
        case 0x1c24b8u: goto label_1c24b8;
        case 0x1c24bcu: goto label_1c24bc;
        case 0x1c24c0u: goto label_1c24c0;
        case 0x1c24c4u: goto label_1c24c4;
        case 0x1c24c8u: goto label_1c24c8;
        case 0x1c24ccu: goto label_1c24cc;
        case 0x1c24d0u: goto label_1c24d0;
        case 0x1c24d4u: goto label_1c24d4;
        case 0x1c24d8u: goto label_1c24d8;
        case 0x1c24dcu: goto label_1c24dc;
        case 0x1c24e0u: goto label_1c24e0;
        case 0x1c24e4u: goto label_1c24e4;
        case 0x1c24e8u: goto label_1c24e8;
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c24f0u: goto label_1c24f0;
        case 0x1c24f4u: goto label_1c24f4;
        case 0x1c24f8u: goto label_1c24f8;
        case 0x1c24fcu: goto label_1c24fc;
        case 0x1c2500u: goto label_1c2500;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c2508u: goto label_1c2508;
        case 0x1c250cu: goto label_1c250c;
        case 0x1c2510u: goto label_1c2510;
        case 0x1c2514u: goto label_1c2514;
        case 0x1c2518u: goto label_1c2518;
        case 0x1c251cu: goto label_1c251c;
        default: break;
    }

    ctx->pc = 0x1c2470u;

label_1c2470:
    // 0x1c2470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2474:
    // 0x1c2474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c2478:
    // 0x1c2478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c247c:
    // 0x1c247c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2480:
    // 0x1c2480: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2484:
    // 0x1c2484: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1c2488:
    // 0x1c2488: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1c248c:
    // 0x1c248c: 0x40f809  jalr        $v0
label_1c2490:
    if (ctx->pc == 0x1C2490u) {
        ctx->pc = 0x1C2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C248Cu;
        // 0x1c2490: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2494u;
        goto label_1c2494;
    }
    ctx->pc = 0x1C248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2494u);
        ctx->pc = 0x1C2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C248Cu;
        // 0x1c2490: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C248Cu, 0x1C2494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2494u;
label_1c2494:
    // 0x1c2494: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1c2498:
    if (ctx->pc == 0x1C2498u) {
        ctx->pc = 0x1C2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2494u;
        // 0x1c2498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C249Cu;
        goto label_1c249c;
    }
    ctx->pc = 0x1C2494u;
    {
        const bool branch_taken_0x1c2494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2494) {
            ctx->pc = 0x1C2498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2494u;
            // 0x1c2498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2514u;
            goto label_1c2514;
        }
    }
    ctx->pc = 0x1C249Cu;
label_1c249c:
    // 0x1c249c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c24a0:
    // 0x1c24a0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c24a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c24a4:
    // 0x1c24a4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c24a8:
    // 0x1c24a8: 0x40f809  jalr        $v0
label_1c24ac:
    if (ctx->pc == 0x1C24ACu) {
        ctx->pc = 0x1C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24A8u;
        // 0x1c24ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24B0u;
        goto label_1c24b0;
    }
    ctx->pc = 0x1C24A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C24B0u);
        ctx->pc = 0x1C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24A8u;
        // 0x1c24ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C24A8u, 0x1C24B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C24B0u;
label_1c24b0:
    // 0x1c24b0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_1c24b4:
    if (ctx->pc == 0x1C24B4u) {
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24B8u;
        goto label_1c24b8;
    }
    ctx->pc = 0x1C24B0u;
    {
        const bool branch_taken_0x1c24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24b0) {
            ctx->pc = 0x1C24B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C24B0u;
            // 0x1c24b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2514u;
            goto label_1c2514;
        }
    }
    ctx->pc = 0x1C24B8u;
label_1c24b8:
    // 0x1c24b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c24bc:
    // 0x1c24bc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1c24c0:
    if (ctx->pc == 0x1C24C0u) {
        ctx->pc = 0x1C24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24BCu;
        // 0x1c24c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C4u;
        goto label_1c24c4;
    }
    ctx->pc = 0x1C24BCu;
    {
        const bool branch_taken_0x1c24bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24bc) {
            ctx->pc = 0x1C24C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C24BCu;
            // 0x1c24c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2514u;
            goto label_1c2514;
        }
    }
    ctx->pc = 0x1C24C4u;
label_1c24c4:
    // 0x1c24c4: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x1c24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1c24c8:
    // 0x1c24c8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1c24cc:
    if (ctx->pc == 0x1C24CCu) {
        ctx->pc = 0x1C24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C8u;
        // 0x1c24cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24D0u;
        goto label_1c24d0;
    }
    ctx->pc = 0x1C24C8u;
    {
        const bool branch_taken_0x1c24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24c8) {
            ctx->pc = 0x1C24CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C24C8u;
            // 0x1c24cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2514u;
            goto label_1c2514;
        }
    }
    ctx->pc = 0x1C24D0u;
label_1c24d0:
    // 0x1c24d0: 0x8e0203a0  lw          $v0, 0x3A0($s0)
    ctx->pc = 0x1c24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
label_1c24d4:
    // 0x1c24d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c24d8:
    if (ctx->pc == 0x1C24D8u) {
        ctx->pc = 0x1C24DCu;
        goto label_1c24dc;
    }
    ctx->pc = 0x1C24D4u;
    {
        const bool branch_taken_0x1c24d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24d4) {
            ctx->pc = 0x1C24ECu;
            goto label_1c24ec;
        }
    }
    ctx->pc = 0x1C24DCu;
label_1c24dc:
    // 0x1c24dc: 0xc06ec70  jal         func_1BB1C0
label_1c24e0:
    if (ctx->pc == 0x1C24E0u) {
        ctx->pc = 0x1C24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24DCu;
        // 0x1c24e0: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24E4u;
        goto label_1c24e4;
    }
    ctx->pc = 0x1C24DCu;
    SET_GPR_U32(ctx, 31, 0x1C24E4u);
    ctx->pc = 0x1C24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24DCu;
    // 0x1c24e0: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1C24DCu, 0x1C24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24E4u;
label_1c24e4:
    // 0x1c24e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c24e8:
    if (ctx->pc == 0x1C24E8u) {
        ctx->pc = 0x1C24ECu;
        goto label_1c24ec;
    }
    ctx->pc = 0x1C24E4u;
    {
        const bool branch_taken_0x1c24e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24e4) {
            ctx->pc = 0x1C24F4u;
            goto label_1c24f4;
        }
    }
    ctx->pc = 0x1C24ECu;
label_1c24ec:
    // 0x1c24ec: 0xc068998  jal         func_1A2660
label_1c24f0:
    if (ctx->pc == 0x1C24F0u) {
        ctx->pc = 0x1C24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24ECu;
        // 0x1c24f0: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24F4u;
        goto label_1c24f4;
    }
    ctx->pc = 0x1C24ECu;
    SET_GPR_U32(ctx, 31, 0x1C24F4u);
    ctx->pc = 0x1C24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24ECu;
    // 0x1c24f0: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1C24ECu, 0x1C24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24F4u;
label_1c24f4:
    // 0x1c24f4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1c24f8:
    // 0x1c24f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c24f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c24fc:
    // 0x1c24fc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c2500:
    // 0x1c2500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2504:
    // 0x1c2504: 0xc06844e  jal         func_1A1138
label_1c2508:
    if (ctx->pc == 0x1C2508u) {
        ctx->pc = 0x1C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2504u;
        // 0x1c2508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C250Cu;
        goto label_1c250c;
    }
    ctx->pc = 0x1C2504u;
    SET_GPR_U32(ctx, 31, 0x1C250Cu);
    ctx->pc = 0x1C2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2504u;
    // 0x1c2508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1C2504u, 0x1C250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C250Cu;
label_1c250c:
    // 0x1c250c: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1c250cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
label_1c2510:
    // 0x1c2510: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2514:
    // 0x1c2514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2518:
    // 0x1c2518: 0x3e00008  jr          $ra
label_1c251c:
    if (ctx->pc == 0x1C251Cu) {
        ctx->pc = 0x1C251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2518u;
        // 0x1c251c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2520u;
        goto label_fallthrough_0x1c2518;
    }
    ctx->pc = 0x1C2518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2518u;
        // 0x1c251c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2518:
    ctx->pc = 0x1C2520u;
}
