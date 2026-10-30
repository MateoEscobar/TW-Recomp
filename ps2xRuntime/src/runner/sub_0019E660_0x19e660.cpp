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

// Function: sub_0019E660
// Address: 0x19e660 - 0x19e758
void sub_0019E660_0x19e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E660_0x19e660");
#endif

    switch (ctx->pc) {
        case 0x19e660u: goto label_19e660;
        case 0x19e664u: goto label_19e664;
        case 0x19e668u: goto label_19e668;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e670u: goto label_19e670;
        case 0x19e674u: goto label_19e674;
        case 0x19e678u: goto label_19e678;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e680u: goto label_19e680;
        case 0x19e684u: goto label_19e684;
        case 0x19e688u: goto label_19e688;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e690u: goto label_19e690;
        case 0x19e694u: goto label_19e694;
        case 0x19e698u: goto label_19e698;
        case 0x19e69cu: goto label_19e69c;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6a8u: goto label_19e6a8;
        case 0x19e6acu: goto label_19e6ac;
        case 0x19e6b0u: goto label_19e6b0;
        case 0x19e6b4u: goto label_19e6b4;
        case 0x19e6b8u: goto label_19e6b8;
        case 0x19e6bcu: goto label_19e6bc;
        case 0x19e6c0u: goto label_19e6c0;
        case 0x19e6c4u: goto label_19e6c4;
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6ccu: goto label_19e6cc;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6d4u: goto label_19e6d4;
        case 0x19e6d8u: goto label_19e6d8;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6e0u: goto label_19e6e0;
        case 0x19e6e4u: goto label_19e6e4;
        case 0x19e6e8u: goto label_19e6e8;
        case 0x19e6ecu: goto label_19e6ec;
        case 0x19e6f0u: goto label_19e6f0;
        case 0x19e6f4u: goto label_19e6f4;
        case 0x19e6f8u: goto label_19e6f8;
        case 0x19e6fcu: goto label_19e6fc;
        case 0x19e700u: goto label_19e700;
        case 0x19e704u: goto label_19e704;
        case 0x19e708u: goto label_19e708;
        case 0x19e70cu: goto label_19e70c;
        case 0x19e710u: goto label_19e710;
        case 0x19e714u: goto label_19e714;
        case 0x19e718u: goto label_19e718;
        case 0x19e71cu: goto label_19e71c;
        case 0x19e720u: goto label_19e720;
        case 0x19e724u: goto label_19e724;
        case 0x19e728u: goto label_19e728;
        case 0x19e72cu: goto label_19e72c;
        case 0x19e730u: goto label_19e730;
        case 0x19e734u: goto label_19e734;
        case 0x19e738u: goto label_19e738;
        case 0x19e73cu: goto label_19e73c;
        case 0x19e740u: goto label_19e740;
        case 0x19e744u: goto label_19e744;
        case 0x19e748u: goto label_19e748;
        case 0x19e74cu: goto label_19e74c;
        case 0x19e750u: goto label_19e750;
        case 0x19e754u: goto label_19e754;
        default: break;
    }

    ctx->pc = 0x19e660u;

label_19e660:
    // 0x19e660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19e664:
    // 0x19e664: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19e664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19e668:
    // 0x19e668: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_19e66c:
    // 0x19e66c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19e670:
    // 0x19e670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19e674:
    // 0x19e674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e678:
    // 0x19e678: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19e67c:
    // 0x19e67c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x19e67cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_19e680:
    // 0x19e680: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x19e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_19e684:
    // 0x19e684: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x19e684u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_19e688:
    // 0x19e688: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19e68c:
    if (ctx->pc == 0x19E68Cu) {
        ctx->pc = 0x19E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E688u;
        // 0x19e68c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E690u;
        goto label_19e690;
    }
    ctx->pc = 0x19E688u;
    {
        const bool branch_taken_0x19e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E688u;
        // 0x19e68c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e688) {
            ctx->pc = 0x19E6B4u;
            goto label_19e6b4;
        }
    }
    ctx->pc = 0x19E690u;
label_19e690:
    // 0x19e690: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_19e694:
    // 0x19e694: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e698:
    // 0x19e698: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19e69c:
    // 0x19e69c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19e6a0:
    // 0x19e6a0: 0x40f809  jalr        $v0
label_19e6a4:
    if (ctx->pc == 0x19E6A4u) {
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A0u;
        // 0x19e6a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6A8u;
        goto label_19e6a8;
    }
    ctx->pc = 0x19E6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E6A8u);
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A0u;
        // 0x19e6a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6A0u, 0x19E6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E6A8u;
label_19e6a8:
    // 0x19e6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e6ac:
    // 0x19e6ac: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x19e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_19e6b0:
    // 0x19e6b0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x19e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_19e6b4:
    // 0x19e6b4: 0x8e46b8b8  lw          $a2, -0x4748($s2)
    ctx->pc = 0x19e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_19e6b8:
    // 0x19e6b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19e6bc:
    // 0x19e6bc: 0x8c45cfa8  lw          $a1, -0x3058($v0)
    ctx->pc = 0x19e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954920)));
label_19e6c0:
    // 0x19e6c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19e6c4:
    // 0x19e6c4: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x19e6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_19e6c8:
    // 0x19e6c8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19e6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19e6cc:
    // 0x19e6cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19e6d0:
    // 0x19e6d0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_19e6d4:
    // 0x19e6d4: 0x40f809  jalr        $v0
label_19e6d8:
    if (ctx->pc == 0x19E6D8u) {
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6DCu;
        goto label_19e6dc;
    }
    ctx->pc = 0x19E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E6DCu);
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6D4u, 0x19E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x19e6dcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19e6e0:
    // 0x19e6e0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_19e6e4:
    if (ctx->pc == 0x19E6E4u) {
        ctx->pc = 0x19E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E0u;
        // 0x19e6e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6E8u;
        goto label_19e6e8;
    }
    ctx->pc = 0x19E6E0u;
    {
        const bool branch_taken_0x19e6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e6e0) {
            ctx->pc = 0x19E6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E6E0u;
            // 0x19e6e4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E740u;
            goto label_19e740;
        }
    }
    ctx->pc = 0x19E6E8u;
label_19e6e8:
    // 0x19e6e8: 0x922203d0  lbu         $v0, 0x3D0($s1)
    ctx->pc = 0x19e6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 976)));
label_19e6ec:
    // 0x19e6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19e6f0:
    if (ctx->pc == 0x19E6F0u) {
        ctx->pc = 0x19E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6ECu;
        // 0x19e6f0: 0x922203d1  lbu         $v0, 0x3D1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 977)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6F4u;
        goto label_19e6f4;
    }
    ctx->pc = 0x19E6ECu;
    {
        const bool branch_taken_0x19e6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6ECu;
        // 0x19e6f0: 0x922203d1  lbu         $v0, 0x3D1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 977)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6ec) {
            ctx->pc = 0x19E708u;
            goto label_19e708;
        }
    }
    ctx->pc = 0x19E6F4u;
label_19e6f4:
    // 0x19e6f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e6f8:
    // 0x19e6f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19e6fc:
    // 0x19e6fc: 0xa22203d1  sb          $v0, 0x3D1($s1)
    ctx->pc = 0x19e6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 977), (uint8_t)GPR_U32(ctx, 2));
label_19e700:
    // 0x19e700: 0x10000005  b           . + 4 + (0x5 << 2)
label_19e704:
    if (ctx->pc == 0x19E704u) {
        ctx->pc = 0x19E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E700u;
        // 0x19e704: 0x2c630002  sltiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E708u;
        goto label_19e708;
    }
    ctx->pc = 0x19E700u;
    {
        const bool branch_taken_0x19e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E700u;
        // 0x19e704: 0x2c630002  sltiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e700) {
            ctx->pc = 0x19E718u;
            goto label_19e718;
        }
    }
    ctx->pc = 0x19E708u;
label_19e708:
    // 0x19e708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e70c:
    // 0x19e70c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19e710:
    // 0x19e710: 0xa22203d1  sb          $v0, 0x3D1($s1)
    ctx->pc = 0x19e710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 977), (uint8_t)GPR_U32(ctx, 2));
label_19e714:
    // 0x19e714: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x19e714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_19e718:
    // 0x19e718: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_19e71c:
    if (ctx->pc == 0x19E71Cu) {
        ctx->pc = 0x19E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E718u;
        // 0x19e71c: 0xa22003d1  sb          $zero, 0x3D1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 977), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E720u;
        goto label_19e720;
    }
    ctx->pc = 0x19E718u;
    {
        const bool branch_taken_0x19e718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e718) {
            ctx->pc = 0x19E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E718u;
            // 0x19e71c: 0xa22003d1  sb          $zero, 0x3D1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 977), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E720u;
            goto label_19e720;
        }
    }
    ctx->pc = 0x19E720u;
label_19e720:
    // 0x19e720: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_19e724:
    // 0x19e724: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e728:
    // 0x19e728: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19e72c:
    // 0x19e72c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19e730:
    // 0x19e730: 0x40f809  jalr        $v0
label_19e734:
    if (ctx->pc == 0x19E734u) {
        ctx->pc = 0x19E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E730u;
        // 0x19e734: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E738u;
        goto label_19e738;
    }
    ctx->pc = 0x19E730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E738u);
        ctx->pc = 0x19E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E730u;
        // 0x19e734: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E730u, 0x19E738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E738u;
label_19e738:
    // 0x19e738: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x19e738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_19e73c:
    // 0x19e73c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19e73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19e740:
    // 0x19e740: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19e740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19e744:
    // 0x19e744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19e748:
    // 0x19e748: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19e748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e74c:
    // 0x19e74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e750:
    // 0x19e750: 0x3e00008  jr          $ra
label_19e754:
    if (ctx->pc == 0x19E754u) {
        ctx->pc = 0x19E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E750u;
        // 0x19e754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E758u;
        goto label_fallthrough_0x19e750;
    }
    ctx->pc = 0x19E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E750u;
        // 0x19e754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e750:
    ctx->pc = 0x19E758u;
}
