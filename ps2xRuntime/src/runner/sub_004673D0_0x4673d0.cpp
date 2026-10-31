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

// Function: sub_004673D0
// Address: 0x4673d0 - 0x467528
void sub_004673D0_0x4673d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004673D0_0x4673d0");
#endif

    switch (ctx->pc) {
        case 0x467428u: goto label_467428;
        case 0x46744cu: goto label_46744c;
        case 0x467460u: goto label_467460;
        case 0x4674acu: goto label_4674ac;
        case 0x4674c0u: goto label_4674c0;
        case 0x4674d8u: goto label_4674d8;
        case 0x4674ecu: goto label_4674ec;
        case 0x4674fcu: goto label_4674fc;
        default: break;
    }

    ctx->pc = 0x4673d0u;

    // 0x4673d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4673d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4673d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4673d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4673d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4673d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4673dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4673dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4673e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4673e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4673e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4673e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4673e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4673e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4673ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4673ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4673f0: 0x2453e680  addiu       $s3, $v0, -0x1980
    ctx->pc = 0x4673f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
    // 0x4673f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4673f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4673f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4673f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4673fc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4673fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52E688u));
    // 0x467400: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x467400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x467404: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x467404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x467408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x467408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46740c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46740cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x467410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x467410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467414: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x467414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x467418: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x467418u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x46741c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x46741cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x467420: 0xc119eba  jal         func_467AE8
    ctx->pc = 0x467420u;
    SET_GPR_U32(ctx, 31, 0x467428u);
    ctx->pc = 0x467424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467420u;
    // 0x467424: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467AE8u, 0x467420u, 0x467428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467428u;
label_467428:
    // 0x467428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x467428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x46742c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x46742cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x467430: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x467430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x467434: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x467434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x467438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x467438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46743c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467440: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x467440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x467444: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x467444u;
    SET_GPR_U32(ctx, 31, 0x46744Cu);
    ctx->pc = 0x467448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467444u;
    // 0x467448: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x467444u, 0x46744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46744Cu;
label_46744c:
    // 0x46744c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x46744Cu;
    {
        const bool branch_taken_0x46744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46744Cu;
        // 0x467450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46744c) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x467454u;
    // 0x467454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x467454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467458: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x467458u;
    SET_GPR_U32(ctx, 31, 0x467460u);
    ctx->pc = 0x46745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x467458u;
    // 0x46745c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x467458u, 0x467460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467460u;
label_467460:
    // 0x467460: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x467460u;
    {
        const bool branch_taken_0x467460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x467464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467460u;
        // 0x467464: 0x3c0800ff  lui         $t0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467460) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x467468u;
    // 0x467468: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x467468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x46746c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467470: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x467470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x467474: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x467474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x467478: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x467478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46747c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x46747cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x467480: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x467480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x467484: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x467484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x467488: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x467488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x46748c: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x46748cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x467490: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x467490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x467494: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x467494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x467498: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x467498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x46749c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x46749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4674a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4674a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4674a4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4674A4u;
    SET_GPR_U32(ctx, 31, 0x4674ACu);
    ctx->pc = 0x4674A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4674A4u;
    // 0x4674a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4674A4u, 0x4674ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674ACu;
label_4674ac:
    // 0x4674ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4674ACu;
    {
        const bool branch_taken_0x4674ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4674B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4674ACu;
        // 0x4674b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674ac) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674B4u;
    // 0x4674b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4674b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4674b8: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x4674B8u;
    SET_GPR_U32(ctx, 31, 0x4674C0u);
    ctx->pc = 0x4674BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4674B8u;
    // 0x4674bc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x4674B8u, 0x4674C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674C0u;
label_4674c0:
    // 0x4674c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4674C0u;
    {
        const bool branch_taken_0x4674c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4674C0u;
        // 0x4674c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674c0) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674C8u;
    // 0x4674c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4674c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4674cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4674ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4674d0: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x4674D0u;
    SET_GPR_U32(ctx, 31, 0x4674D8u);
    ctx->pc = 0x4674D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4674D0u;
    // 0x4674d4: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x4674D0u, 0x4674D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674D8u;
label_4674d8:
    // 0x4674d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4674D8u;
    {
        const bool branch_taken_0x4674d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4674DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4674D8u;
        // 0x4674dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674d8) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674E0u;
    // 0x4674e0: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x4674e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4674e4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4674E4u;
    SET_GPR_U32(ctx, 31, 0x4674ECu);
    ctx->pc = 0x4674E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4674E4u;
    // 0x4674e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4674E4u, 0x4674ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674ECu;
label_4674ec:
    // 0x4674ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4674ECu;
    {
        const bool branch_taken_0x4674ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4674F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4674ECu;
        // 0x4674f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4674ec) {
            ctx->pc = 0x467508u;
            goto label_467508;
        }
    }
    ctx->pc = 0x4674F4u;
    // 0x4674f4: 0xc119e8c  jal         func_467A30
    ctx->pc = 0x4674F4u;
    SET_GPR_U32(ctx, 31, 0x4674FCu);
    ctx->pc = 0x4674F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4674F4u;
    // 0x4674f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A30u, 0x4674F4u, 0x4674FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4674FCu;
label_4674fc:
    // 0x4674fc: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x4674fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x467500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x467500u;
    {
        const bool branch_taken_0x467500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467500u;
        // 0x467504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467500) {
            ctx->pc = 0x46750Cu;
            goto label_46750c;
        }
    }
    ctx->pc = 0x467508u;
label_467508:
    // 0x467508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x467508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46750c:
    // 0x46750c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46750cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x467510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x467510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x467514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x467514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x467518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x467518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46751c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467520: 0x3e00008  jr          $ra
    ctx->pc = 0x467520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x467524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467520u;
        // 0x467524: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467528u;
}
