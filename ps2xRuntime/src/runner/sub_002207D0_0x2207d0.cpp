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

// Function: sub_002207D0
// Address: 0x2207d0 - 0x2208f0
void sub_002207D0_0x2207d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002207D0_0x2207d0");
#endif

    switch (ctx->pc) {
        case 0x220808u: goto label_220808;
        case 0x220814u: goto label_220814;
        case 0x2208a0u: goto label_2208a0;
        case 0x2208d0u: goto label_2208d0;
        default: break;
    }

    ctx->pc = 0x2207d0u;

    // 0x2207d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2207d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2207d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2207d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2207d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2207dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2207dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2207e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2207e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2207e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2207e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2207ec: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2207ECu;
    {
        const bool branch_taken_0x2207ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207ECu;
        // 0x2207f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207ec) {
            ctx->pc = 0x2207F8u;
            goto label_2207f8;
        }
    }
    ctx->pc = 0x2207F4u;
    // 0x2207f4: 0x8cb300c4  lw          $s3, 0xC4($a1)
    ctx->pc = 0x2207f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_2207f8:
    // 0x2207f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2207f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2207fc: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x2207fcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x220800: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x220800u;
    SET_GPR_U32(ctx, 31, 0x220808u);
    ctx->pc = 0x220804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220800u;
    // 0x220804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x220800u, 0x220808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220808u;
label_220808:
    // 0x220808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22080c: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x22080Cu;
    SET_GPR_U32(ctx, 31, 0x220814u);
    ctx->pc = 0x220810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22080Cu;
    // 0x220810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22080Cu, 0x220814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220814u;
label_220814:
    // 0x220814: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x220814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x220818: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x220818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22081c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x22081cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220820: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x220820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x220824: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x220824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x220828: 0x10440029  beq         $v0, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x220828u;
    {
        const bool branch_taken_0x220828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x22082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220828u;
        // 0x22082c: 0x3c020331  lui         $v0, 0x331 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220828) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x220830u;
    // 0x220830: 0x3442fd29  ori         $v0, $v0, 0xFD29
    ctx->pc = 0x220830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64809);
    // 0x220834: 0x12620026  beq         $s3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x220834u;
    {
        const bool branch_taken_0x220834 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x220838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220834u;
        // 0x220838: 0x3c0250e8  lui         $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220834) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x22083Cu;
    // 0x22083c: 0x3442de39  ori         $v0, $v0, 0xDE39
    ctx->pc = 0x22083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56889);
    // 0x220840: 0x12620023  beq         $s3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x220840u;
    {
        const bool branch_taken_0x220840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x220844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220840u;
        // 0x220844: 0x3c0217d7  lui         $v0, 0x17D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220840) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x220848u;
    // 0x220848: 0x3442194b  ori         $v0, $v0, 0x194B
    ctx->pc = 0x220848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6475);
    // 0x22084c: 0x12620020  beq         $s3, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22084Cu;
    {
        const bool branch_taken_0x22084c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22084Cu;
        // 0x220850: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22084c) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x220854u;
    // 0x220854: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x220854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x220858: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220858u;
    {
        const bool branch_taken_0x220858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220858u;
        // 0x22085c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220858) {
            ctx->pc = 0x220868u;
            goto label_220868;
        }
    }
    ctx->pc = 0x220860u;
    // 0x220860: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x220860u;
    {
        const bool branch_taken_0x220860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x220864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220860u;
        // 0x220864: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220860) {
            ctx->pc = 0x2208A8u;
            goto label_2208a8;
        }
    }
    ctx->pc = 0x220868u;
label_220868:
    // 0x220868: 0x3c02bbbe  lui         $v0, 0xBBBE
    ctx->pc = 0x220868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48062 << 16));
    // 0x22086c: 0x3442f927  ori         $v0, $v0, 0xF927
    ctx->pc = 0x22086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63783);
    // 0x220870: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x220870u;
    {
        const bool branch_taken_0x220870 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x220874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220870u;
        // 0x220874: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220870) {
            ctx->pc = 0x2208A8u;
            goto label_2208a8;
        }
    }
    ctx->pc = 0x220878u;
    // 0x220878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22087c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22087cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220880: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x220884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220888: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x220888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x22088c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22088cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220894: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x220894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220898: 0xc088178  jal         func_2205E0
    ctx->pc = 0x220898u;
    SET_GPR_U32(ctx, 31, 0x2208A0u);
    ctx->pc = 0x22089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220898u;
    // 0x22089c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x220898u, 0x2208A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208A0u;
label_2208a0:
    // 0x2208a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2208A0u;
    {
        const bool branch_taken_0x2208a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A0u;
        // 0x2208a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208a0) {
            ctx->pc = 0x2208D4u;
            goto label_2208d4;
        }
    }
    ctx->pc = 0x2208A8u;
label_2208a8:
    // 0x2208a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2208a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2208ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2208acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2208b0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2208b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2208b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2208b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208b8: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2208bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2208bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2208c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2208c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2208c8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2208C8u;
    SET_GPR_U32(ctx, 31, 0x2208D0u);
    ctx->pc = 0x2208CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208C8u;
    // 0x2208cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2208C8u, 0x2208D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2208d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2208d4:
    // 0x2208d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2208d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2208d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2208d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2208dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2208dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2208e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2208e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2208e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2208E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2208E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E4u;
        // 0x2208e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2208E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2208ECu;
    // 0x2208ec: 0x0  nop
    ctx->pc = 0x2208ecu;
    // NOP
    ctx->pc = 0x2208f0u;
}
