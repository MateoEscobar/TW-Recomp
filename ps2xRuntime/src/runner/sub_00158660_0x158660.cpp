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

// Function: sub_00158660
// Address: 0x158660 - 0x158728
void sub_00158660_0x158660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158660_0x158660");
#endif

    switch (ctx->pc) {
        case 0x158660u: goto label_158660;
        case 0x158664u: goto label_158664;
        case 0x158668u: goto label_158668;
        case 0x15866cu: goto label_15866c;
        case 0x158670u: goto label_158670;
        case 0x158674u: goto label_158674;
        case 0x158678u: goto label_158678;
        case 0x15867cu: goto label_15867c;
        case 0x158680u: goto label_158680;
        case 0x158684u: goto label_158684;
        case 0x158688u: goto label_158688;
        case 0x15868cu: goto label_15868c;
        case 0x158690u: goto label_158690;
        case 0x158694u: goto label_158694;
        case 0x158698u: goto label_158698;
        case 0x15869cu: goto label_15869c;
        case 0x1586a0u: goto label_1586a0;
        case 0x1586a4u: goto label_1586a4;
        case 0x1586a8u: goto label_1586a8;
        case 0x1586acu: goto label_1586ac;
        case 0x1586b0u: goto label_1586b0;
        case 0x1586b4u: goto label_1586b4;
        case 0x1586b8u: goto label_1586b8;
        case 0x1586bcu: goto label_1586bc;
        case 0x1586c0u: goto label_1586c0;
        case 0x1586c4u: goto label_1586c4;
        case 0x1586c8u: goto label_1586c8;
        case 0x1586ccu: goto label_1586cc;
        case 0x1586d0u: goto label_1586d0;
        case 0x1586d4u: goto label_1586d4;
        case 0x1586d8u: goto label_1586d8;
        case 0x1586dcu: goto label_1586dc;
        case 0x1586e0u: goto label_1586e0;
        case 0x1586e4u: goto label_1586e4;
        case 0x1586e8u: goto label_1586e8;
        case 0x1586ecu: goto label_1586ec;
        case 0x1586f0u: goto label_1586f0;
        case 0x1586f4u: goto label_1586f4;
        case 0x1586f8u: goto label_1586f8;
        case 0x1586fcu: goto label_1586fc;
        case 0x158700u: goto label_158700;
        case 0x158704u: goto label_158704;
        case 0x158708u: goto label_158708;
        case 0x15870cu: goto label_15870c;
        case 0x158710u: goto label_158710;
        case 0x158714u: goto label_158714;
        case 0x158718u: goto label_158718;
        case 0x15871cu: goto label_15871c;
        case 0x158720u: goto label_158720;
        case 0x158724u: goto label_158724;
        default: break;
    }

    ctx->pc = 0x158660u;

label_158660:
    // 0x158660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_158664:
    // 0x158664: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x158664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_158668:
    // 0x158668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15866c:
    // 0x15866c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_158670:
    // 0x158670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_158674:
    // 0x158674: 0xc05651a  jal         func_159468
label_158678:
    if (ctx->pc == 0x158678u) {
        ctx->pc = 0x158678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158674u;
        // 0x158678: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15867Cu;
        goto label_15867c;
    }
    ctx->pc = 0x158674u;
    SET_GPR_U32(ctx, 31, 0x15867Cu);
    ctx->pc = 0x158678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158674u;
    // 0x158678: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159468u, 0x158674u, 0x15867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15867Cu;
label_15867c:
    // 0x15867c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15867cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_158680:
    // 0x158680: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x158680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_158684:
    // 0x158684: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_158688:
    // 0x158688: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15868c:
    // 0x15868c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158690:
    // 0x158690: 0x40f809  jalr        $v0
label_158694:
    if (ctx->pc == 0x158694u) {
        ctx->pc = 0x158694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158690u;
        // 0x158694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158698u;
        goto label_158698;
    }
    ctx->pc = 0x158690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158698u);
        ctx->pc = 0x158694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158690u;
        // 0x158694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158690u, 0x158698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158698u;
label_158698:
    // 0x158698: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_15869c:
    // 0x15869c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1586a0:
    // 0x1586a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1586a4:
    if (ctx->pc == 0x1586A4u) {
        ctx->pc = 0x1586A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586A0u;
        // 0x1586a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586A8u;
        goto label_1586a8;
    }
    ctx->pc = 0x1586A0u;
    {
        const bool branch_taken_0x1586a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1586a0) {
            ctx->pc = 0x1586A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1586A0u;
            // 0x1586a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1586A8u;
            goto label_1586a8;
        }
    }
    ctx->pc = 0x1586A8u;
label_1586a8:
    // 0x1586a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1586a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1586ac:
    // 0x1586ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1586acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1586b0:
    // 0x1586b0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_1586b4:
    // 0x1586b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1586b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1586b8:
    // 0x1586b8: 0x1012  mflo        $v0
    ctx->pc = 0x1586b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1586bc:
    // 0x1586bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1586bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1586c0:
    // 0x1586c0: 0xc108c6e  jal         func_4231B8
label_1586c4:
    if (ctx->pc == 0x1586C4u) {
        ctx->pc = 0x1586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C0u;
        // 0x1586c4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586C8u;
        goto label_1586c8;
    }
    ctx->pc = 0x1586C0u;
    SET_GPR_U32(ctx, 31, 0x1586C8u);
    ctx->pc = 0x1586C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586C0u;
    // 0x1586c4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4231B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4231B8u, 0x1586C0u, 0x1586C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586C8u;
label_1586c8:
    // 0x1586c8: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1586c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1586cc:
    // 0x1586cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1586ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1586d0:
    // 0x1586d0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1586d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1586d4:
    // 0x1586d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1586d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1586d8:
    // 0x1586d8: 0x40f809  jalr        $v0
label_1586dc:
    if (ctx->pc == 0x1586DCu) {
        ctx->pc = 0x1586DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586D8u;
        // 0x1586dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586E0u;
        goto label_1586e0;
    }
    ctx->pc = 0x1586D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1586E0u);
        ctx->pc = 0x1586DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586D8u;
        // 0x1586dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586D8u, 0x1586E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1586E0u;
label_1586e0:
    // 0x1586e0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1586e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1586e4:
    // 0x1586e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1586e8:
    // 0x1586e8: 0x8c435580  lw          $v1, 0x5580($v0)
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21888)));
label_1586ec:
    // 0x1586ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1586f0:
    if (ctx->pc == 0x1586F0u) {
        ctx->pc = 0x1586F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586ECu;
        // 0x1586f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586F4u;
        goto label_1586f4;
    }
    ctx->pc = 0x1586ECu;
    {
        const bool branch_taken_0x1586ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1586F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586ECu;
        // 0x1586f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586ec) {
            ctx->pc = 0x158718u;
            goto label_158718;
        }
    }
    ctx->pc = 0x1586F4u;
label_1586f4:
    // 0x1586f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1586f8:
    // 0x1586f8: 0xc107444  jal         func_41D110
label_1586fc:
    if (ctx->pc == 0x1586FCu) {
        ctx->pc = 0x1586FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586F8u;
        // 0x1586fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158700u;
        goto label_158700;
    }
    ctx->pc = 0x1586F8u;
    SET_GPR_U32(ctx, 31, 0x158700u);
    ctx->pc = 0x1586FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586F8u;
    // 0x1586fc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1586F8u, 0x158700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158700u;
label_158700:
    // 0x158700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_158704:
    if (ctx->pc == 0x158704u) {
        ctx->pc = 0x158704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158700u;
        // 0x158704: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158708u;
        goto label_158708;
    }
    ctx->pc = 0x158700u;
    {
        const bool branch_taken_0x158700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158700u;
        // 0x158704: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158700) {
            ctx->pc = 0x158718u;
            goto label_158718;
        }
    }
    ctx->pc = 0x158708u;
label_158708:
    // 0x158708: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15870c:
    // 0x15870c: 0xc06c7ce  jal         func_1B1F38
label_158710:
    if (ctx->pc == 0x158710u) {
        ctx->pc = 0x158710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15870Cu;
        // 0x158710: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158714u;
        goto label_158714;
    }
    ctx->pc = 0x15870Cu;
    SET_GPR_U32(ctx, 31, 0x158714u);
    ctx->pc = 0x158710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15870Cu;
    // 0x158710: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x15870Cu, 0x158714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158714u;
label_158714:
    // 0x158714: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x158714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_158718:
    // 0x158718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15871c:
    // 0x15871c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15871cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158720:
    // 0x158720: 0x3e00008  jr          $ra
label_158724:
    if (ctx->pc == 0x158724u) {
        ctx->pc = 0x158724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158720u;
        // 0x158724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158728u;
        goto label_fallthrough_0x158720;
    }
    ctx->pc = 0x158720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158720u;
        // 0x158724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158720:
    ctx->pc = 0x158728u;
}
