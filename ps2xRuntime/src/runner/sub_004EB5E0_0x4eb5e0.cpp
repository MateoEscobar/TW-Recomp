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

// Function: sub_004EB5E0
// Address: 0x4eb5e0 - 0x4eb728
void sub_004EB5E0_0x4eb5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB5E0_0x4eb5e0");
#endif

    switch (ctx->pc) {
        case 0x4eb618u: goto label_4eb618;
        case 0x4eb638u: goto label_4eb638;
        case 0x4eb6d4u: goto label_4eb6d4;
        case 0x4eb6f0u: goto label_4eb6f0;
        default: break;
    }

    ctx->pc = 0x4eb5e0u;

label_4eb5e0:
    // 0x4eb5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4eb5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4eb5e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4eb5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4eb5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4eb5ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb5f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4eb5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb5f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4eb5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4eb5f8: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x4eb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4eb5fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4eb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4eb600: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb608: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4eb608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4eb60c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4EB60Cu;
    {
        const bool branch_taken_0x4eb60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB60Cu;
        // 0x4eb610: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb60c) {
            ctx->pc = 0x4EB708u;
            goto label_4eb708;
        }
    }
    ctx->pc = 0x4EB614u;
    // 0x4eb614: 0x0  nop
    ctx->pc = 0x4eb614u;
    // NOP
label_4eb618:
    // 0x4eb618: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4EB618u;
    {
        const bool branch_taken_0x4eb618 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB618u;
        // 0x4eb61c: 0x2321023  subu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb618) {
            ctx->pc = 0x4EB640u;
            goto label_4eb640;
        }
    }
    ctx->pc = 0x4EB620u;
    // 0x4eb620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eb624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb628: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4eb628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4eb62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb630: 0xc13ad20  jal         func_4EB480
    ctx->pc = 0x4EB630u;
    SET_GPR_U32(ctx, 31, 0x4EB638u);
    ctx->pc = 0x4EB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB630u;
    // 0x4eb634: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB480u, 0x4EB630u, 0x4EB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB638u;
label_4eb638:
    // 0x4eb638: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4EB638u;
    {
        const bool branch_taken_0x4eb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB638u;
        // 0x4eb63c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb638) {
            ctx->pc = 0x4EB70Cu;
            goto label_4eb70c;
        }
    }
    ctx->pc = 0x4EB640u;
label_4eb640:
    // 0x4eb640: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4eb640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb644: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4eb644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4eb648: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4eb648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x4eb64c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb64cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb650: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x4eb650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4eb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4eb658: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4eb658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4eb65c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4eb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4eb660: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x4eb660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4eb664: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4eb664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eb668: 0x90640018  lbu         $a0, 0x18($v1)
    ctx->pc = 0x4eb668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4eb66c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4eb66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4eb670: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4EB670u;
    {
        const bool branch_taken_0x4eb670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB670u;
        // 0x4eb674: 0x2627fffc  addiu       $a3, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb670) {
            ctx->pc = 0x4EB69Cu;
            goto label_4eb69c;
        }
    }
    ctx->pc = 0x4EB678u;
    // 0x4eb678: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x4eb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x4eb67c: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x4eb67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4eb680: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x4eb680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eb684: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB684u;
    {
        const bool branch_taken_0x4eb684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB684u;
        // 0x4eb688: 0xa2102b  sltu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb684) {
            ctx->pc = 0x4EB694u;
            goto label_4eb694;
        }
    }
    ctx->pc = 0x4EB68Cu;
    // 0x4eb68c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EB68Cu;
    {
        const bool branch_taken_0x4eb68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB68Cu;
        // 0x4eb690: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb68c) {
            ctx->pc = 0x4EB6C0u;
            goto label_4eb6c0;
        }
    }
    ctx->pc = 0x4EB694u;
label_4eb694:
    // 0x4eb694: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4EB694u;
    {
        const bool branch_taken_0x4eb694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB694u;
        // 0x4eb698: 0x242380a  movz        $a3, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb694) {
            ctx->pc = 0x4EB6BCu;
            goto label_4eb6bc;
        }
    }
    ctx->pc = 0x4EB69Cu;
label_4eb69c:
    // 0x4eb69c: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x4eb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x4eb6a0: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x4eb6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4eb6a4: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x4eb6a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eb6a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB6A8u;
    {
        const bool branch_taken_0x4eb6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB6A8u;
        // 0x4eb6ac: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb6a8) {
            ctx->pc = 0x4EB6B8u;
            goto label_4eb6b8;
        }
    }
    ctx->pc = 0x4EB6B0u;
    // 0x4eb6b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB6B0u;
    {
        const bool branch_taken_0x4eb6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB6B0u;
        // 0x4eb6b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb6b0) {
            ctx->pc = 0x4EB6C0u;
            goto label_4eb6c0;
        }
    }
    ctx->pc = 0x4EB6B8u;
label_4eb6b8:
    // 0x4eb6b8: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x4eb6b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_4eb6bc:
    // 0x4eb6bc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4eb6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4eb6c0:
    // 0x4eb6c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4eb6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eb6c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eb6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6cc: 0xc13ad50  jal         func_4EB540
    ctx->pc = 0x4EB6CCu;
    SET_GPR_U32(ctx, 31, 0x4EB6D4u);
    ctx->pc = 0x4EB6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB6CCu;
    // 0x4eb6d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB540u, 0x4EB6CCu, 0x4EB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB6D4u;
label_4eb6d4:
    // 0x4eb6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4eb6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4eb6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4eb6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6e8: 0xc13ad78  jal         func_4EB5E0
    ctx->pc = 0x4EB6E8u;
    SET_GPR_U32(ctx, 31, 0x4EB6F0u);
    ctx->pc = 0x4EB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB6E8u;
    // 0x4eb6ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB5E0u;
    goto label_4eb5e0;
    ctx->pc = 0x4EB6F0u;
label_4eb6f0:
    // 0x4eb6f0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4eb6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb6f4: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x4eb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4eb6f8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb6f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb6fc: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4eb6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4eb700: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x4EB700u;
    {
        const bool branch_taken_0x4eb700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb700) {
            ctx->pc = 0x4EB618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb618;
        }
    }
    ctx->pc = 0x4EB708u;
label_4eb708:
    // 0x4eb708: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4eb708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eb70c:
    // 0x4eb70c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4eb70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eb710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb714: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4eb714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb71c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB71Cu;
        // 0x4eb720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB724u;
    // 0x4eb724: 0x0  nop
    ctx->pc = 0x4eb724u;
    // NOP
    ctx->pc = 0x4eb728u;
}
