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

// Function: sub_002F1648
// Address: 0x2f1648 - 0x2f1718
void sub_002F1648_0x2f1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1648_0x2f1648");
#endif

    switch (ctx->pc) {
        case 0x2f1648u: goto label_2f1648;
        case 0x2f164cu: goto label_2f164c;
        case 0x2f1650u: goto label_2f1650;
        case 0x2f1654u: goto label_2f1654;
        case 0x2f1658u: goto label_2f1658;
        case 0x2f165cu: goto label_2f165c;
        case 0x2f1660u: goto label_2f1660;
        case 0x2f1664u: goto label_2f1664;
        case 0x2f1668u: goto label_2f1668;
        case 0x2f166cu: goto label_2f166c;
        case 0x2f1670u: goto label_2f1670;
        case 0x2f1674u: goto label_2f1674;
        case 0x2f1678u: goto label_2f1678;
        case 0x2f167cu: goto label_2f167c;
        case 0x2f1680u: goto label_2f1680;
        case 0x2f1684u: goto label_2f1684;
        case 0x2f1688u: goto label_2f1688;
        case 0x2f168cu: goto label_2f168c;
        case 0x2f1690u: goto label_2f1690;
        case 0x2f1694u: goto label_2f1694;
        case 0x2f1698u: goto label_2f1698;
        case 0x2f169cu: goto label_2f169c;
        case 0x2f16a0u: goto label_2f16a0;
        case 0x2f16a4u: goto label_2f16a4;
        case 0x2f16a8u: goto label_2f16a8;
        case 0x2f16acu: goto label_2f16ac;
        case 0x2f16b0u: goto label_2f16b0;
        case 0x2f16b4u: goto label_2f16b4;
        case 0x2f16b8u: goto label_2f16b8;
        case 0x2f16bcu: goto label_2f16bc;
        case 0x2f16c0u: goto label_2f16c0;
        case 0x2f16c4u: goto label_2f16c4;
        case 0x2f16c8u: goto label_2f16c8;
        case 0x2f16ccu: goto label_2f16cc;
        case 0x2f16d0u: goto label_2f16d0;
        case 0x2f16d4u: goto label_2f16d4;
        case 0x2f16d8u: goto label_2f16d8;
        case 0x2f16dcu: goto label_2f16dc;
        case 0x2f16e0u: goto label_2f16e0;
        case 0x2f16e4u: goto label_2f16e4;
        case 0x2f16e8u: goto label_2f16e8;
        case 0x2f16ecu: goto label_2f16ec;
        case 0x2f16f0u: goto label_2f16f0;
        case 0x2f16f4u: goto label_2f16f4;
        case 0x2f16f8u: goto label_2f16f8;
        case 0x2f16fcu: goto label_2f16fc;
        case 0x2f1700u: goto label_2f1700;
        case 0x2f1704u: goto label_2f1704;
        case 0x2f1708u: goto label_2f1708;
        case 0x2f170cu: goto label_2f170c;
        case 0x2f1710u: goto label_2f1710;
        case 0x2f1714u: goto label_2f1714;
        default: break;
    }

    ctx->pc = 0x2f1648u;

label_2f1648:
    // 0x2f1648: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f164c:
    // 0x2f164c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2f1650:
    // 0x2f1650: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2f1654:
    // 0x2f1654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f1658:
    // 0x2f1658: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f1658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2f165c:
    // 0x2f165c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f165cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1660:
    // 0x2f1660: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f1664:
    // 0x2f1664: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f1664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1668:
    // 0x2f1668: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f1668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f166c:
    // 0x2f166c: 0xc08a140  jal         func_228500
label_2f1670:
    if (ctx->pc == 0x2F1670u) {
        ctx->pc = 0x2F1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F166Cu;
        // 0x2f1670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1674u;
        goto label_2f1674;
    }
    ctx->pc = 0x2F166Cu;
    SET_GPR_U32(ctx, 31, 0x2F1674u);
    ctx->pc = 0x2F1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F166Cu;
    // 0x2f1670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228500u, 0x2F166Cu, 0x2F1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1674u;
label_2f1674:
    // 0x2f1674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1678:
    // 0x2f1678: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
label_2f167c:
    if (ctx->pc == 0x2F167Cu) {
        ctx->pc = 0x2F167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1678u;
        // 0x2f167c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1680u;
        goto label_2f1680;
    }
    ctx->pc = 0x2F1678u;
    {
        const bool branch_taken_0x2f1678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1678) {
            ctx->pc = 0x2F167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1678u;
            // 0x2f167c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1700u;
            goto label_2f1700;
        }
    }
    ctx->pc = 0x2F1680u;
label_2f1680:
    // 0x2f1680: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x2f1680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_2f1684:
    // 0x2f1684: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2f1688:
    if (ctx->pc == 0x2F1688u) {
        ctx->pc = 0x2F1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1684u;
        // 0x2f1688: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F168Cu;
        goto label_2f168c;
    }
    ctx->pc = 0x2F1684u;
    {
        const bool branch_taken_0x2f1684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1684) {
            ctx->pc = 0x2F1688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1684u;
            // 0x2f1688: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1700u;
            goto label_2f1700;
        }
    }
    ctx->pc = 0x2F168Cu;
label_2f168c:
    // 0x2f168c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1690:
    // 0x2f1690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1694:
    // 0x2f1694: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2f1694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2f1698:
    // 0x2f1698: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2f1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2f169c:
    // 0x2f169c: 0x60f809  jalr        $v1
label_2f16a0:
    if (ctx->pc == 0x2F16A0u) {
        ctx->pc = 0x2F16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F169Cu;
        // 0x2f16a0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F16A4u;
        goto label_2f16a4;
    }
    ctx->pc = 0x2F169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F16A4u);
        ctx->pc = 0x2F16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F169Cu;
        // 0x2f16a0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F169Cu, 0x2F16A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F16A4u;
label_2f16a4:
    // 0x2f16a4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2f16a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f16a8:
    // 0x2f16a8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2f16ac:
    // 0x2f16ac: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2f16acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2f16b0:
    // 0x2f16b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f16b4:
    // 0x2f16b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f16b8:
    // 0x2f16b8: 0xc0cd780  jal         func_335E00
label_2f16bc:
    if (ctx->pc == 0x2F16BCu) {
        ctx->pc = 0x2F16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16B8u;
        // 0x2f16bc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F16C0u;
        goto label_2f16c0;
    }
    ctx->pc = 0x2F16B8u;
    SET_GPR_U32(ctx, 31, 0x2F16C0u);
    ctx->pc = 0x2F16BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16B8u;
    // 0x2f16bc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F16B8u, 0x2F16C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16C0u;
label_2f16c0:
    // 0x2f16c0: 0xc0cd742  jal         func_335D08
label_2f16c4:
    if (ctx->pc == 0x2F16C4u) {
        ctx->pc = 0x2F16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16C0u;
        // 0x2f16c4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F16C8u;
        goto label_2f16c8;
    }
    ctx->pc = 0x2F16C0u;
    SET_GPR_U32(ctx, 31, 0x2F16C8u);
    ctx->pc = 0x2F16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16C0u;
    // 0x2f16c4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2F16C0u, 0x2F16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16C8u;
label_2f16c8:
    // 0x2f16c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f16c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f16cc:
    // 0x2f16cc: 0xc0cd7a8  jal         func_335EA0
label_2f16d0:
    if (ctx->pc == 0x2F16D0u) {
        ctx->pc = 0x2F16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16CCu;
        // 0x2f16d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F16D4u;
        goto label_2f16d4;
    }
    ctx->pc = 0x2F16CCu;
    SET_GPR_U32(ctx, 31, 0x2F16D4u);
    ctx->pc = 0x2F16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16CCu;
    // 0x2f16d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2F16CCu, 0x2F16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16D4u;
label_2f16d4:
    // 0x2f16d4: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x2f16d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2f16d8:
    // 0x2f16d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f16d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f16dc:
    // 0x2f16dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f16dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f16e0:
    // 0x2f16e0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2f16e4:
    // 0x2f16e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2f16e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2f16e8:
    // 0x2f16e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f16ec:
    // 0x2f16ec: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2f16ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2f16f0:
    // 0x2f16f0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2f16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2f16f4:
    // 0x2f16f4: 0x40f809  jalr        $v0
label_2f16f8:
    if (ctx->pc == 0x2F16F8u) {
        ctx->pc = 0x2F16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16F4u;
        // 0x2f16f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F16FCu;
        goto label_2f16fc;
    }
    ctx->pc = 0x2F16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F16FCu);
        ctx->pc = 0x2F16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16F4u;
        // 0x2f16f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F16F4u, 0x2F16FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F16FCu;
label_2f16fc:
    // 0x2f16fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f16fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f1700:
    // 0x2f1700: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f1700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f1704:
    // 0x2f1704: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f1704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1708:
    // 0x2f1708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f170c:
    // 0x2f170c: 0x3e00008  jr          $ra
label_2f1710:
    if (ctx->pc == 0x2F1710u) {
        ctx->pc = 0x2F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F170Cu;
        // 0x2f1710: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1714u;
        goto label_2f1714;
    }
    ctx->pc = 0x2F170Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F170Cu;
        // 0x2f1710: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F170Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1714u;
label_2f1714:
    // 0x2f1714: 0x0  nop
    ctx->pc = 0x2f1714u;
    // NOP
    ctx->pc = 0x2f1718u;
}
