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

// Function: sub_0016C5B8
// Address: 0x16c5b8 - 0x16c730
void sub_0016C5B8_0x16c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C5B8_0x16c5b8");
#endif

    switch (ctx->pc) {
        case 0x16c600u: goto label_16c600;
        case 0x16c60cu: goto label_16c60c;
        case 0x16c638u: goto label_16c638;
        case 0x16c644u: goto label_16c644;
        case 0x16c64cu: goto label_16c64c;
        case 0x16c674u: goto label_16c674;
        case 0x16c688u: goto label_16c688;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6acu: goto label_16c6ac;
        case 0x16c6b8u: goto label_16c6b8;
        case 0x16c6ecu: goto label_16c6ec;
        case 0x16c6f8u: goto label_16c6f8;
        default: break;
    }

    ctx->pc = 0x16c5b8u;

    // 0x16c5b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16c5bc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x16c5c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16c5c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5c8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x16c5cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16c5ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5d0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x16c5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x16c5d4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16c5d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x16c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x16c5dc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x16c5dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x16c5e4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x16c5ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x16c5f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x16c5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c5f8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16c5fc: 0x0  nop
    ctx->pc = 0x16c5fcu;
    // NOP
label_16c600:
    // 0x16c600: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x16c600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c604: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C604u;
    SET_GPR_U32(ctx, 31, 0x16C60Cu);
    ctx->pc = 0x16C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C604u;
    // 0x16c608: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C604u, 0x16C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C60Cu;
label_16c60c:
    // 0x16c60c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c610: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16c614: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x16C614u;
    {
        const bool branch_taken_0x16c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C614u;
        // 0x16c618: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c614) {
            ctx->pc = 0x16C6CCu;
            goto label_16c6cc;
        }
    }
    ctx->pc = 0x16C61Cu;
    // 0x16c61c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x16c620: 0x1457002b  bne         $v0, $s7, . + 4 + (0x2B << 2)
    ctx->pc = 0x16C620u;
    {
        const bool branch_taken_0x16c620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x16C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C620u;
        // 0x16c624: 0x2e020020  sltiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c620) {
            ctx->pc = 0x16C6D0u;
            goto label_16c6d0;
        }
    }
    ctx->pc = 0x16C628u;
    // 0x16c628: 0x169e0005  bne         $s4, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C628u;
    {
        const bool branch_taken_0x16c628 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x16C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C628u;
        // 0x16c62c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c628) {
            ctx->pc = 0x16C640u;
            goto label_16c640;
        }
    }
    ctx->pc = 0x16C630u;
    // 0x16c630: 0xc05a6c0  jal         func_169B00
    ctx->pc = 0x16C630u;
    SET_GPR_U32(ctx, 31, 0x16C638u);
    ctx->pc = 0x16C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C630u;
    // 0x16c634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B00u, 0x16C630u, 0x16C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C638u;
label_16c638:
    // 0x16c638: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c63c: 0x0  nop
    ctx->pc = 0x16c63cu;
    // NOP
label_16c640:
    // 0x16c640: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x16c640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_16c644:
    // 0x16c644: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16C644u;
    SET_GPR_U32(ctx, 31, 0x16C64Cu);
    ctx->pc = 0x16C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C644u;
    // 0x16c648: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16C644u, 0x16C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C64Cu;
label_16c64c:
    // 0x16c64c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c650: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c654: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x16C654u;
    {
        const bool branch_taken_0x16c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c654) {
            ctx->pc = 0x16C658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C654u;
            // 0x16c658: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C6BCu;
            goto label_16c6bc;
        }
    }
    ctx->pc = 0x16C65Cu;
    // 0x16c65c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16c660: 0x54560016  bnel        $v0, $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x16C660u;
    {
        const bool branch_taken_0x16c660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x16c660) {
            ctx->pc = 0x16C664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C660u;
            // 0x16c664: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C6BCu;
            goto label_16c6bc;
        }
    }
    ctx->pc = 0x16C668u;
    // 0x16c668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c66c: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x16C66Cu;
    SET_GPR_U32(ctx, 31, 0x16C674u);
    ctx->pc = 0x16C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C66Cu;
    // 0x16c670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x16C66Cu, 0x16C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C674u;
label_16c674:
    // 0x16c674: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16c674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c678: 0x1051000f  beq         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x16C678u;
    {
        const bool branch_taken_0x16c678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x16C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C678u;
        // 0x16c67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c678) {
            ctx->pc = 0x16C6B8u;
            goto label_16c6b8;
        }
    }
    ctx->pc = 0x16C680u;
    // 0x16c680: 0xc05a3d6  jal         func_168F58
    ctx->pc = 0x16C680u;
    SET_GPR_U32(ctx, 31, 0x16C688u);
    ctx->pc = 0x16C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C680u;
    // 0x16c684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x16C680u, 0x16C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C688u;
label_16c688:
    // 0x16c688: 0x5051000c  beql        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x16C688u;
    {
        const bool branch_taken_0x16c688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x16c688) {
            ctx->pc = 0x16C68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C688u;
            // 0x16c68c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C6BCu;
            goto label_16c6bc;
        }
    }
    ctx->pc = 0x16C690u;
    // 0x16c690: 0x16910004  bne         $s4, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C690u;
    {
        const bool branch_taken_0x16c690 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x16C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C690u;
        // 0x16c694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c690) {
            ctx->pc = 0x16C6A4u;
            goto label_16c6a4;
        }
    }
    ctx->pc = 0x16C698u;
    // 0x16c698: 0xc05a6c0  jal         func_169B00
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x16C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C698u;
    // 0x16c69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B00u, 0x16C698u, 0x16C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6A0u;
label_16c6a0:
    // 0x16c6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c6a4:
    // 0x16c6a4: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16C6A4u;
    SET_GPR_U32(ctx, 31, 0x16C6ACu);
    ctx->pc = 0x16C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6A4u;
    // 0x16c6a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16C6A4u, 0x16C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6ACu;
label_16c6ac:
    // 0x16c6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6b0: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16C6B0u;
    SET_GPR_U32(ctx, 31, 0x16C6B8u);
    ctx->pc = 0x16C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6B0u;
    // 0x16c6b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16C6B0u, 0x16C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6B8u;
label_16c6b8:
    // 0x16c6b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16c6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16c6bc:
    // 0x16c6bc: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x16c6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16c6c0: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16C6C0u;
    {
        const bool branch_taken_0x16c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6C0u;
        // 0x16c6c4: 0x132400  sll         $a0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6c0) {
            ctx->pc = 0x16C644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c644;
        }
    }
    ctx->pc = 0x16C6C8u;
    // 0x16c6c8: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16c6cc:
    // 0x16c6cc: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x16c6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_16c6d0:
    // 0x16c6d0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x16C6D0u;
    {
        const bool branch_taken_0x16c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6D0u;
        // 0x16c6d4: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6d0) {
            ctx->pc = 0x16C600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c600;
        }
    }
    ctx->pc = 0x16C6D8u;
    // 0x16c6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c6dc: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C6DCu;
    {
        const bool branch_taken_0x16c6dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x16C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6DCu;
        // 0x16c6e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6dc) {
            ctx->pc = 0x16C6FCu;
            goto label_16c6fc;
        }
    }
    ctx->pc = 0x16C6E4u;
    // 0x16c6e4: 0xc05b0d6  jal         func_16C358
    ctx->pc = 0x16C6E4u;
    SET_GPR_U32(ctx, 31, 0x16C6ECu);
    ctx->pc = 0x16C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6E4u;
    // 0x16c6e8: 0x24040bb8  addiu       $a0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C358u, 0x16C6E4u, 0x16C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6ECu;
label_16c6ec:
    // 0x16c6ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16c6f0: 0xc1073fc  jal         func_41CFF0
    ctx->pc = 0x16C6F0u;
    SET_GPR_U32(ctx, 31, 0x16C6F8u);
    ctx->pc = 0x16C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6F0u;
    // 0x16c6f4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFF0u, 0x16C6F0u, 0x16C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6F8u;
label_16c6f8:
    // 0x16c6f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16c6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16c6fc:
    // 0x16c6fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16c6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16c700: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16c700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c704: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16c704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c708: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16c708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c70c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16c70cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c710: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16c710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c714: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x16c714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c718: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x16c718u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c720: 0x3e00008  jr          $ra
    ctx->pc = 0x16C720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C720u;
        // 0x16c724: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C728u;
    // 0x16c728: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x16c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16c72c: 0x0  nop
    ctx->pc = 0x16c72cu;
    // NOP
    ctx->pc = 0x16c730u;
}
