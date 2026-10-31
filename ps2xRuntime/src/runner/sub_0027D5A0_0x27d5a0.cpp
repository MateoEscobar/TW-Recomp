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

// Function: sub_0027D5A0
// Address: 0x27d5a0 - 0x27d6e0
void sub_0027D5A0_0x27d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D5A0_0x27d5a0");
#endif

    switch (ctx->pc) {
        case 0x27d5b8u: goto label_27d5b8;
        case 0x27d614u: goto label_27d614;
        case 0x27d628u: goto label_27d628;
        case 0x27d638u: goto label_27d638;
        case 0x27d648u: goto label_27d648;
        case 0x27d658u: goto label_27d658;
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6bcu: goto label_27d6bc;
        case 0x27d6ccu: goto label_27d6cc;
        default: break;
    }

    ctx->pc = 0x27d5a0u;

    // 0x27d5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d5a4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x27d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x27d5a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27d5ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d5b0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D5B0u;
    SET_GPR_U32(ctx, 31, 0x27D5B8u);
    ctx->pc = 0x27D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5B0u;
    // 0x27d5b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D5B0u, 0x27D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5B8u;
label_27d5b8:
    // 0x27d5b8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27D5B8u;
    {
        const bool branch_taken_0x27d5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5B8u;
        // 0x27d5bc: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5b8) {
            ctx->pc = 0x27D660u;
            goto label_27d660;
        }
    }
    ctx->pc = 0x27D5C0u;
    // 0x27d5c0: 0x24a4e880  addiu       $a0, $a1, -0x1780
    ctx->pc = 0x27d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    // 0x27d5c4: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27d5c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27d5c8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27d5cc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D5CCu;
    {
        const bool branch_taken_0x27d5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5CCu;
        // 0x27d5d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5cc) {
            ctx->pc = 0x27D604u;
            goto label_27d604;
        }
    }
    ctx->pc = 0x27D5D4u;
    // 0x27d5d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d5d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D5D8u;
    {
        const bool branch_taken_0x27d5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5D8u;
        // 0x27d5dc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5d8) {
            ctx->pc = 0x27D5F0u;
            goto label_27d5f0;
        }
    }
    ctx->pc = 0x27D5E0u;
    // 0x27d5e0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27d5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27d5e4: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27d5e8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D5E8u;
    {
        const bool branch_taken_0x27d5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5E8u;
        // 0x27d5ec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5e8) {
            ctx->pc = 0x27D600u;
            goto label_27d600;
        }
    }
    ctx->pc = 0x27D5F0u;
label_27d5f0:
    // 0x27d5f0: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27d5f4: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27d5f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D5F8u;
    {
        const bool branch_taken_0x27d5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d5f8) {
            ctx->pc = 0x27D604u;
            goto label_27d604;
        }
    }
    ctx->pc = 0x27D600u;
label_27d600:
    // 0x27d600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d604:
    // 0x27d604: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x27D604u;
    {
        const bool branch_taken_0x27d604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D604u;
        // 0x27d608: 0x24a4e880  addiu       $a0, $a1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d604) {
            ctx->pc = 0x27D664u;
            goto label_27d664;
        }
    }
    ctx->pc = 0x27D60Cu;
    // 0x27d60c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27D60Cu;
    SET_GPR_U32(ctx, 31, 0x27D614u);
    ctx->pc = 0x27D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D60Cu;
    // 0x27d610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27D60Cu, 0x27D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D614u;
label_27d614:
    // 0x27d614: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27d614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27d618: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x27D618u;
    {
        const bool branch_taken_0x27d618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d618) {
            ctx->pc = 0x27D650u;
            goto label_27d650;
        }
    }
    ctx->pc = 0x27D620u;
    // 0x27d620: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x27D620u;
    SET_GPR_U32(ctx, 31, 0x27D628u);
    ctx->pc = 0x27D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D620u;
    // 0x27d624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x27D620u, 0x27D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D628u;
label_27d628:
    // 0x27d628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D628u;
    {
        const bool branch_taken_0x27d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d628) {
            ctx->pc = 0x27D640u;
            goto label_27d640;
        }
    }
    ctx->pc = 0x27D630u;
    // 0x27d630: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27D630u;
    SET_GPR_U32(ctx, 31, 0x27D638u);
    ctx->pc = 0x27D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D630u;
    // 0x27d634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27D630u, 0x27D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D638u;
label_27d638:
    // 0x27d638: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27D638u;
    {
        const bool branch_taken_0x27d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D638u;
        // 0x27d63c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d638) {
            ctx->pc = 0x27D6D0u;
            goto label_27d6d0;
        }
    }
    ctx->pc = 0x27D640u;
label_27d640:
    // 0x27d640: 0xc09f3a4  jal         func_27CE90
    ctx->pc = 0x27D640u;
    SET_GPR_U32(ctx, 31, 0x27D648u);
    ctx->pc = 0x27D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D640u;
    // 0x27d644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CE90u, 0x27D640u, 0x27D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D648u;
label_27d648:
    // 0x27d648: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27D648u;
    {
        const bool branch_taken_0x27d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D648u;
        // 0x27d64c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d648) {
            ctx->pc = 0x27D6D0u;
            goto label_27d6d0;
        }
    }
    ctx->pc = 0x27D650u;
label_27d650:
    // 0x27d650: 0xc09f354  jal         func_27CD50
    ctx->pc = 0x27D650u;
    SET_GPR_U32(ctx, 31, 0x27D658u);
    ctx->pc = 0x27D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D650u;
    // 0x27d654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CD50u, 0x27D650u, 0x27D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D658u;
label_27d658:
    // 0x27d658: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x27D658u;
    {
        const bool branch_taken_0x27d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D658u;
        // 0x27d65c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d658) {
            ctx->pc = 0x27D6D0u;
            goto label_27d6d0;
        }
    }
    ctx->pc = 0x27D660u;
label_27d660:
    // 0x27d660: 0x24a4e880  addiu       $a0, $a1, -0x1780
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_27d664:
    // 0x27d664: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27d664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27d668: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27d668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27d66c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D66Cu;
    {
        const bool branch_taken_0x27d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D66Cu;
        // 0x27d670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d66c) {
            ctx->pc = 0x27D6A4u;
            goto label_27d6a4;
        }
    }
    ctx->pc = 0x27D674u;
    // 0x27d674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d678: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D678u;
    {
        const bool branch_taken_0x27d678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D678u;
        // 0x27d67c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d678) {
            ctx->pc = 0x27D690u;
            goto label_27d690;
        }
    }
    ctx->pc = 0x27D680u;
    // 0x27d680: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27d684: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27d684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27d688: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D688u;
    {
        const bool branch_taken_0x27d688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D688u;
        // 0x27d68c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d688) {
            ctx->pc = 0x27D6A0u;
            goto label_27d6a0;
        }
    }
    ctx->pc = 0x27D690u;
label_27d690:
    // 0x27d690: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27d694: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27d698: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27D698u;
    {
        const bool branch_taken_0x27d698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d698) {
            ctx->pc = 0x27D6A4u;
            goto label_27d6a4;
        }
    }
    ctx->pc = 0x27D6A0u;
label_27d6a0:
    // 0x27d6a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d6a4:
    // 0x27d6a4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27D6A4u;
    {
        const bool branch_taken_0x27d6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d6a4) {
            ctx->pc = 0x27D6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6A4u;
            // 0x27d6a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D6D0u;
            goto label_27d6d0;
        }
    }
    ctx->pc = 0x27D6ACu;
    // 0x27d6ac: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27D6ACu;
    SET_GPR_U32(ctx, 31, 0x27D6B4u);
    ctx->pc = 0x27D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6ACu;
    // 0x27d6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27D6ACu, 0x27D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6B4u;
label_27d6b4:
    // 0x27d6b4: 0xc09ee7a  jal         func_27B9E8
    ctx->pc = 0x27D6B4u;
    SET_GPR_U32(ctx, 31, 0x27D6BCu);
    ctx->pc = 0x27D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6B4u;
    // 0x27d6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B9E8u, 0x27D6B4u, 0x27D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6BCu;
label_27d6bc:
    // 0x27d6bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D6BCu;
    {
        const bool branch_taken_0x27d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d6bc) {
            ctx->pc = 0x27D6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6BCu;
            // 0x27d6c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D6D0u;
            goto label_27d6d0;
        }
    }
    ctx->pc = 0x27D6C4u;
    // 0x27d6c4: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x27D6C4u;
    SET_GPR_U32(ctx, 31, 0x27D6CCu);
    ctx->pc = 0x27D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6C4u;
    // 0x27d6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x27D6C4u, 0x27D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6CCu;
label_27d6cc:
    // 0x27d6cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d6d0:
    // 0x27d6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27D6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6D4u;
        // 0x27d6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6DCu;
    // 0x27d6dc: 0x0  nop
    ctx->pc = 0x27d6dcu;
    // NOP
    ctx->pc = 0x27d6e0u;
}
