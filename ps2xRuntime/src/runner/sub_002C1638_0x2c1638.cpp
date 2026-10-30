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

// Function: sub_002C1638
// Address: 0x2c1638 - 0x2c17c0
void sub_002C1638_0x2c1638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1638_0x2c1638");
#endif

    switch (ctx->pc) {
        case 0x2c1638u: goto label_2c1638;
        case 0x2c163cu: goto label_2c163c;
        case 0x2c1640u: goto label_2c1640;
        case 0x2c1644u: goto label_2c1644;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c1650u: goto label_2c1650;
        case 0x2c1654u: goto label_2c1654;
        case 0x2c1658u: goto label_2c1658;
        case 0x2c165cu: goto label_2c165c;
        case 0x2c1660u: goto label_2c1660;
        case 0x2c1664u: goto label_2c1664;
        case 0x2c1668u: goto label_2c1668;
        case 0x2c166cu: goto label_2c166c;
        case 0x2c1670u: goto label_2c1670;
        case 0x2c1674u: goto label_2c1674;
        case 0x2c1678u: goto label_2c1678;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c1680u: goto label_2c1680;
        case 0x2c1684u: goto label_2c1684;
        case 0x2c1688u: goto label_2c1688;
        case 0x2c168cu: goto label_2c168c;
        case 0x2c1690u: goto label_2c1690;
        case 0x2c1694u: goto label_2c1694;
        case 0x2c1698u: goto label_2c1698;
        case 0x2c169cu: goto label_2c169c;
        case 0x2c16a0u: goto label_2c16a0;
        case 0x2c16a4u: goto label_2c16a4;
        case 0x2c16a8u: goto label_2c16a8;
        case 0x2c16acu: goto label_2c16ac;
        case 0x2c16b0u: goto label_2c16b0;
        case 0x2c16b4u: goto label_2c16b4;
        case 0x2c16b8u: goto label_2c16b8;
        case 0x2c16bcu: goto label_2c16bc;
        case 0x2c16c0u: goto label_2c16c0;
        case 0x2c16c4u: goto label_2c16c4;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c16ccu: goto label_2c16cc;
        case 0x2c16d0u: goto label_2c16d0;
        case 0x2c16d4u: goto label_2c16d4;
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16dcu: goto label_2c16dc;
        case 0x2c16e0u: goto label_2c16e0;
        case 0x2c16e4u: goto label_2c16e4;
        case 0x2c16e8u: goto label_2c16e8;
        case 0x2c16ecu: goto label_2c16ec;
        case 0x2c16f0u: goto label_2c16f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c16f8u: goto label_2c16f8;
        case 0x2c16fcu: goto label_2c16fc;
        case 0x2c1700u: goto label_2c1700;
        case 0x2c1704u: goto label_2c1704;
        case 0x2c1708u: goto label_2c1708;
        case 0x2c170cu: goto label_2c170c;
        case 0x2c1710u: goto label_2c1710;
        case 0x2c1714u: goto label_2c1714;
        case 0x2c1718u: goto label_2c1718;
        case 0x2c171cu: goto label_2c171c;
        case 0x2c1720u: goto label_2c1720;
        case 0x2c1724u: goto label_2c1724;
        case 0x2c1728u: goto label_2c1728;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c1730u: goto label_2c1730;
        case 0x2c1734u: goto label_2c1734;
        case 0x2c1738u: goto label_2c1738;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1740u: goto label_2c1740;
        case 0x2c1744u: goto label_2c1744;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c174cu: goto label_2c174c;
        case 0x2c1750u: goto label_2c1750;
        case 0x2c1754u: goto label_2c1754;
        case 0x2c1758u: goto label_2c1758;
        case 0x2c175cu: goto label_2c175c;
        case 0x2c1760u: goto label_2c1760;
        case 0x2c1764u: goto label_2c1764;
        case 0x2c1768u: goto label_2c1768;
        case 0x2c176cu: goto label_2c176c;
        case 0x2c1770u: goto label_2c1770;
        case 0x2c1774u: goto label_2c1774;
        case 0x2c1778u: goto label_2c1778;
        case 0x2c177cu: goto label_2c177c;
        case 0x2c1780u: goto label_2c1780;
        case 0x2c1784u: goto label_2c1784;
        case 0x2c1788u: goto label_2c1788;
        case 0x2c178cu: goto label_2c178c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c1794u: goto label_2c1794;
        case 0x2c1798u: goto label_2c1798;
        case 0x2c179cu: goto label_2c179c;
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17a4u: goto label_2c17a4;
        case 0x2c17a8u: goto label_2c17a8;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b0u: goto label_2c17b0;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17b8u: goto label_2c17b8;
        case 0x2c17bcu: goto label_2c17bc;
        default: break;
    }

    ctx->pc = 0x2c1638u;

label_2c1638:
    // 0x2c1638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c163c:
    // 0x2c163c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2c163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2c1640:
    // 0x2c1640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c1644:
    // 0x2c1644: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c1644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2c1648:
    // 0x2c1648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c1648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c164c:
    // 0x2c164c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2c1650:
    // 0x2c1650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c1654:
    // 0x2c1654: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2c1658:
    if (ctx->pc == 0x2C1658u) {
        ctx->pc = 0x2C1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1654u;
        // 0x2c1658: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C165Cu;
        goto label_2c165c;
    }
    ctx->pc = 0x2C1654u;
    {
        const bool branch_taken_0x2c1654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1654) {
            ctx->pc = 0x2C1658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1654u;
            // 0x2c1658: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C165Cu;
            goto label_2c165c;
        }
    }
    ctx->pc = 0x2C165Cu;
label_2c165c:
    // 0x2c165c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2c165cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c1660:
    // 0x2c1660: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2c1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2c1664:
    // 0x2c1664: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2c1664u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c1668:
    // 0x2c1668: 0x2010  mfhi        $a0
    ctx->pc = 0x2c1668u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2c166c:
    // 0x2c166c: 0x1480004e  bnez        $a0, . + 4 + (0x4E << 2)
label_2c1670:
    if (ctx->pc == 0x2C1670u) {
        ctx->pc = 0x2C1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C166Cu;
        // 0x2c1670: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1674u;
        goto label_2c1674;
    }
    ctx->pc = 0x2C166Cu;
    {
        const bool branch_taken_0x2c166c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C166Cu;
        // 0x2c1670: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c166c) {
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C1674u;
label_2c1674:
    // 0x2c1674: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x2c1674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c1678:
    // 0x2c1678: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2c1678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2c167c:
    // 0x2c167c: 0x8cc4020c  lw          $a0, 0x20C($a2)
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_2c1680:
    // 0x2c1680: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2c1684:
    // 0x2c1684: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2c1684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2c1688:
    // 0x2c1688: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c168c:
    // 0x2c168c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2c168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_2c1690:
    // 0x2c1690: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c1690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c1694:
    // 0x2c1694: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c1698:
    // 0x2c1698: 0xc136d6c  jal         func_4DB5B0
label_2c169c:
    if (ctx->pc == 0x2C169Cu) {
        ctx->pc = 0x2C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1698u;
        // 0x2c169c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16A0u;
        goto label_2c16a0;
    }
    ctx->pc = 0x2C1698u;
    SET_GPR_U32(ctx, 31, 0x2C16A0u);
    ctx->pc = 0x2C169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1698u;
    // 0x2c169c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5B0u, 0x2C1698u, 0x2C16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16A0u;
label_2c16a0:
    // 0x2c16a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2c16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2c16a4:
    // 0x2c16a4: 0xc0e409a  jal         func_390268
label_2c16a8:
    if (ctx->pc == 0x2C16A8u) {
        ctx->pc = 0x2C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16A4u;
        // 0x2c16a8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16ACu;
        goto label_2c16ac;
    }
    ctx->pc = 0x2C16A4u;
    SET_GPR_U32(ctx, 31, 0x2C16ACu);
    ctx->pc = 0x2C16A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C16A4u;
    // 0x2c16a8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C16A4u, 0x2C16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16ACu;
label_2c16ac:
    // 0x2c16ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c16acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c16b0:
    // 0x2c16b0: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
label_2c16b4:
    if (ctx->pc == 0x2C16B4u) {
        ctx->pc = 0x2C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16B0u;
        // 0x2c16b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16B8u;
        goto label_2c16b8;
    }
    ctx->pc = 0x2C16B0u;
    {
        const bool branch_taken_0x2c16b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16b0) {
            ctx->pc = 0x2C16B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16B0u;
            // 0x2c16b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C16B8u;
label_2c16b8:
    // 0x2c16b8: 0xc089fac  jal         func_227EB0
label_2c16bc:
    if (ctx->pc == 0x2C16BCu) {
        ctx->pc = 0x2C16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16B8u;
        // 0x2c16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16C0u;
        goto label_2c16c0;
    }
    ctx->pc = 0x2C16B8u;
    SET_GPR_U32(ctx, 31, 0x2C16C0u);
    ctx->pc = 0x2C16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C16B8u;
    // 0x2c16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2C16B8u, 0x2C16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16C0u;
label_2c16c0:
    // 0x2c16c0: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_2c16c4:
    if (ctx->pc == 0x2C16C4u) {
        ctx->pc = 0x2C16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16C0u;
        // 0x2c16c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16C8u;
        goto label_2c16c8;
    }
    ctx->pc = 0x2C16C0u;
    {
        const bool branch_taken_0x2c16c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c16c0) {
            ctx->pc = 0x2C16C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16C0u;
            // 0x2c16c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C16C8u;
label_2c16c8:
    // 0x2c16c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c16cc:
    // 0x2c16cc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2c16ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2c16d0:
    // 0x2c16d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c16d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c16d4:
    // 0x2c16d4: 0x0  nop
    ctx->pc = 0x2c16d4u;
    // NOP
label_2c16d8:
    // 0x2c16d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c16d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c16dc:
    // 0x2c16dc: 0x0  nop
    ctx->pc = 0x2c16dcu;
    // NOP
label_2c16e0:
    // 0x2c16e0: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
label_2c16e4:
    if (ctx->pc == 0x2C16E4u) {
        ctx->pc = 0x2C16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16E0u;
        // 0x2c16e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16E8u;
        goto label_2c16e8;
    }
    ctx->pc = 0x2C16E0u;
    {
        const bool branch_taken_0x2c16e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c16e0) {
            ctx->pc = 0x2C16E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16E0u;
            // 0x2c16e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C16E8u;
label_2c16e8:
    // 0x2c16e8: 0xc087502  jal         func_21D408
label_2c16ec:
    if (ctx->pc == 0x2C16ECu) {
        ctx->pc = 0x2C16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16E8u;
        // 0x2c16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16F0u;
        goto label_2c16f0;
    }
    ctx->pc = 0x2C16E8u;
    SET_GPR_U32(ctx, 31, 0x2C16F0u);
    ctx->pc = 0x2C16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C16E8u;
    // 0x2c16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C16E8u, 0x2C16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16F0u;
label_2c16f0:
    // 0x2c16f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c16f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c16f4:
    // 0x2c16f4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2c16f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2c16f8:
    // 0x2c16f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c16fc:
    if (ctx->pc == 0x2C16FCu) {
        ctx->pc = 0x2C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16F8u;
        // 0x2c16fc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1700u;
        goto label_2c1700;
    }
    ctx->pc = 0x2C16F8u;
    {
        const bool branch_taken_0x2c16f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16F8u;
        // 0x2c16fc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16f8) {
            ctx->pc = 0x2C170Cu;
            goto label_2c170c;
        }
    }
    ctx->pc = 0x2C1700u;
label_2c1700:
    // 0x2c1700: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c1704:
    // 0x2c1704: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c1708:
    if (ctx->pc == 0x2C1708u) {
        ctx->pc = 0x2C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1704u;
        // 0x2c1708: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C170Cu;
        goto label_2c170c;
    }
    ctx->pc = 0x2C1704u;
    {
        const bool branch_taken_0x2c1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1704u;
        // 0x2c1708: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1704) {
            ctx->pc = 0x2C1710u;
            goto label_2c1710;
        }
    }
    ctx->pc = 0x2C170Cu;
label_2c170c:
    // 0x2c170c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1710:
    // 0x2c1710: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_2c1714:
    if (ctx->pc == 0x2C1714u) {
        ctx->pc = 0x2C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1710u;
        // 0x2c1714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1718u;
        goto label_2c1718;
    }
    ctx->pc = 0x2C1710u;
    {
        const bool branch_taken_0x2c1710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1710) {
            ctx->pc = 0x2C1714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1710u;
            // 0x2c1714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1750u;
            goto label_2c1750;
        }
    }
    ctx->pc = 0x2C1718u;
label_2c1718:
    // 0x2c1718: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2c1718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2c171c:
    // 0x2c171c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c171cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c1720:
    // 0x2c1720: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c1724:
    // 0x2c1724: 0x40f809  jalr        $v0
label_2c1728:
    if (ctx->pc == 0x2C1728u) {
        ctx->pc = 0x2C1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1724u;
        // 0x2c1728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C172Cu;
        goto label_2c172c;
    }
    ctx->pc = 0x2C1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C172Cu);
        ctx->pc = 0x2C1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1724u;
        // 0x2c1728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1724u, 0x2C172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C172Cu;
label_2c172c:
    // 0x2c172c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c172cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1730:
    // 0x2c1730: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_2c1734:
    // 0x2c1734: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_2c1738:
    if (ctx->pc == 0x2C1738u) {
        ctx->pc = 0x2C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1734u;
        // 0x2c1738: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C173Cu;
        goto label_2c173c;
    }
    ctx->pc = 0x2C1734u;
    {
        const bool branch_taken_0x2c1734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1734u;
        // 0x2c1738: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1734) {
            ctx->pc = 0x2C17A4u;
            goto label_2c17a4;
        }
    }
    ctx->pc = 0x2C173Cu;
label_2c173c:
    // 0x2c173c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2c1740:
    if (ctx->pc == 0x2C1740u) {
        ctx->pc = 0x2C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C173Cu;
        // 0x2c1740: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1744u;
        goto label_2c1744;
    }
    ctx->pc = 0x2C173Cu;
    {
        const bool branch_taken_0x2c173c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C173Cu;
        // 0x2c1740: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c173c) {
            ctx->pc = 0x2C17A4u;
            goto label_2c17a4;
        }
    }
    ctx->pc = 0x2C1744u;
label_2c1744:
    // 0x2c1744: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
label_2c1748:
    if (ctx->pc == 0x2C1748u) {
        ctx->pc = 0x2C1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1744u;
        // 0x2c1748: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C174Cu;
        goto label_2c174c;
    }
    ctx->pc = 0x2C1744u;
    {
        const bool branch_taken_0x2c1744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1744) {
            ctx->pc = 0x2C1748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1744u;
            // 0x2c1748: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C174Cu;
label_2c174c:
    // 0x2c174c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1750:
    // 0x2c1750: 0xc0a3658  jal         func_28D960
label_2c1754:
    if (ctx->pc == 0x2C1754u) {
        ctx->pc = 0x2C1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1750u;
        // 0x2c1754: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1758u;
        goto label_2c1758;
    }
    ctx->pc = 0x2C1750u;
    SET_GPR_U32(ctx, 31, 0x2C1758u);
    ctx->pc = 0x2C1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1750u;
    // 0x2c1754: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2C1750u, 0x2C1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1758u;
label_2c1758:
    // 0x2c1758: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c1758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c175c:
    // 0x2c175c: 0x4620012  bltzl       $v1, . + 4 + (0x12 << 2)
label_2c1760:
    if (ctx->pc == 0x2C1760u) {
        ctx->pc = 0x2C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C175Cu;
        // 0x2c1760: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1764u;
        goto label_2c1764;
    }
    ctx->pc = 0x2C175Cu;
    {
        const bool branch_taken_0x2c175c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c175c) {
            ctx->pc = 0x2C1760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C175Cu;
            // 0x2c1760: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C1764u;
label_2c1764:
    // 0x2c1764: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2c1764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2c1768:
    // 0x2c1768: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c1768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c176c:
    // 0x2c176c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c1770:
    if (ctx->pc == 0x2C1770u) {
        ctx->pc = 0x2C1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C176Cu;
        // 0x2c1770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1774u;
        goto label_2c1774;
    }
    ctx->pc = 0x2C176Cu;
    {
        const bool branch_taken_0x2c176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c176c) {
            ctx->pc = 0x2C1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C176Cu;
            // 0x2c1770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1780u;
            goto label_2c1780;
        }
    }
    ctx->pc = 0x2C1774u;
label_2c1774:
    // 0x2c1774: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c1774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c1778:
    // 0x2c1778: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c177c:
    // 0x2c177c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2c177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2c1780:
    // 0x2c1780: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c1780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2c1784:
    // 0x2c1784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c1784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1788:
    // 0x2c1788: 0xc0a686a  jal         func_29A1A8
label_2c178c:
    if (ctx->pc == 0x2C178Cu) {
        ctx->pc = 0x2C178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1788u;
        // 0x2c178c: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1790u;
        goto label_2c1790;
    }
    ctx->pc = 0x2C1788u;
    SET_GPR_U32(ctx, 31, 0x2C1790u);
    ctx->pc = 0x2C178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1788u;
    // 0x2c178c: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A1A8u, 0x2C1788u, 0x2C1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1790u;
label_2c1790:
    // 0x2c1790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1794:
    // 0x2c1794: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2c1798:
    if (ctx->pc == 0x2C1798u) {
        ctx->pc = 0x2C1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1794u;
        // 0x2c1798: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C179Cu;
        goto label_2c179c;
    }
    ctx->pc = 0x2C1794u;
    {
        const bool branch_taken_0x2c1794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1794u;
        // 0x2c1798: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1794) {
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C179Cu;
label_2c179c:
    // 0x2c179c: 0xc0a36c8  jal         func_28DB20
label_2c17a0:
    if (ctx->pc == 0x2C17A0u) {
        ctx->pc = 0x2C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C179Cu;
        // 0x2c17a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17A4u;
        goto label_2c17a4;
    }
    ctx->pc = 0x2C179Cu;
    SET_GPR_U32(ctx, 31, 0x2C17A4u);
    ctx->pc = 0x2C17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C179Cu;
    // 0x2c17a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C179Cu, 0x2C17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17A4u;
label_2c17a4:
    // 0x2c17a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c17a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c17a8:
    // 0x2c17a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c17a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c17ac:
    // 0x2c17ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c17acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c17b0:
    // 0x2c17b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c17b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c17b4:
    // 0x2c17b4: 0x3e00008  jr          $ra
label_2c17b8:
    if (ctx->pc == 0x2C17B8u) {
        ctx->pc = 0x2C17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B4u;
        // 0x2c17b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17BCu;
        goto label_2c17bc;
    }
    ctx->pc = 0x2C17B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B4u;
        // 0x2c17b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C17B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C17BCu;
label_2c17bc:
    // 0x2c17bc: 0x0  nop
    ctx->pc = 0x2c17bcu;
    // NOP
    ctx->pc = 0x2c17c0u;
}
