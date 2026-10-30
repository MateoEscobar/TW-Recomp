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

// Function: sub_0010E7D0
// Address: 0x10e7d0 - 0x10e9e0
void sub_0010E7D0_0x10e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E7D0_0x10e7d0");
#endif

    switch (ctx->pc) {
        case 0x10e804u: goto label_10e804;
        case 0x10e814u: goto label_10e814;
        case 0x10e894u: goto label_10e894;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e990u: goto label_10e990;
        case 0x10e9b4u: goto label_10e9b4;
        default: break;
    }

    ctx->pc = 0x10e7d0u;

    // 0x10e7d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e7d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10e7d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10e7dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10e7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10e7e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7e4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10e7e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10e7ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10e7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10e7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e7f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10e7fc: 0xc0437be  jal         func_10DEF8
    ctx->pc = 0x10E7FCu;
    SET_GPR_U32(ctx, 31, 0x10E804u);
    ctx->pc = 0x10E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E7FCu;
    // 0x10e800: 0x8c73040c  lw          $s3, 0x40C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEF8u, 0x10E7FCu, 0x10E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E804u;
label_10e804:
    // 0x10e804: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10e808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e80c: 0xc0437ca  jal         func_10DF28
    ctx->pc = 0x10E80Cu;
    SET_GPR_U32(ctx, 31, 0x10E814u);
    ctx->pc = 0x10E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E80Cu;
    // 0x10e810: 0xa2420024  sb          $v0, 0x24($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF28u, 0x10E80Cu, 0x10E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E814u;
    {
        const bool branch_taken_0x10e814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E814u;
        // 0x10e818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e814) {
            ctx->pc = 0x10E820u;
            goto label_10e820;
        }
    }
    ctx->pc = 0x10E81Cu;
    // 0x10e81c: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x10e81cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
label_10e820:
    // 0x10e820: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x10e824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E824u;
    {
        const bool branch_taken_0x10e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E824u;
        // 0x10e828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e824) {
            ctx->pc = 0x10E834u;
            goto label_10e834;
        }
    }
    ctx->pc = 0x10E82Cu;
    // 0x10e82c: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x10e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x10e830: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x10e830u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
label_10e834:
    // 0x10e834: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x10e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x10e838: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E838u;
    {
        const bool branch_taken_0x10e838 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E838u;
        // 0x10e83c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e838) {
            ctx->pc = 0x10E84Cu;
            goto label_10e84c;
        }
    }
    ctx->pc = 0x10E840u;
    // 0x10e840: 0x92420024  lbu         $v0, 0x24($s2)
    ctx->pc = 0x10e840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10e844: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x10E844u;
    {
        const bool branch_taken_0x10e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E844u;
        // 0x10e848: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e844) {
            ctx->pc = 0x10E9BCu;
            goto label_10e9bc;
        }
    }
    ctx->pc = 0x10E84Cu;
label_10e84c:
    // 0x10e84c: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x10e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x10e850: 0x8c64082c  lw          $a0, 0x82C($v1)
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2092)));
    // 0x10e854: 0x1480005a  bnez        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x10E854u;
    {
        const bool branch_taken_0x10e854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E854u;
        // 0x10e858: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e854) {
            ctx->pc = 0x10E9C0u;
            goto label_10e9c0;
        }
    }
    ctx->pc = 0x10E85Cu;
    // 0x10e85c: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x10e860: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
    // 0x10e864: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x10E864u;
    {
        const bool branch_taken_0x10e864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E864u;
        // 0x10e868: 0x26420025  addiu       $v0, $s2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e864) {
            ctx->pc = 0x10E9A4u;
            goto label_10e9a4;
        }
    }
    ctx->pc = 0x10E86Cu;
    // 0x10e86c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e870: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10e874: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x10e874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e878: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10E878u;
    {
        const bool branch_taken_0x10e878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E878u;
        // 0x10e87c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e878) {
            ctx->pc = 0x10E8BCu;
            goto label_10e8bc;
        }
    }
    ctx->pc = 0x10E880u;
    // 0x10e880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e884: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10e884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10e888: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    // 0x10e88c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x10E88Cu;
    SET_GPR_U32(ctx, 31, 0x10E894u);
    ctx->pc = 0x10E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E88Cu;
    // 0x10e890: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x10E88Cu, 0x10E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E894u;
label_10e894:
    // 0x10e894: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e89c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10e89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10e8a0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10e8a4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10e8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e8ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10e8b0: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10E8B0u;
    SET_GPR_U32(ctx, 31, 0x10E8B8u);
    ctx->pc = 0x10E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8B0u;
    // 0x10e8b4: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10E8B0u, 0x10E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8B8u;
label_10e8b8:
    // 0x10e8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e8bc:
    // 0x10e8bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e8c0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E8C0u;
    {
        const bool branch_taken_0x10e8c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8C0u;
        // 0x10e8c4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8c0) {
            ctx->pc = 0x10E8D8u;
            goto label_10e8d8;
        }
    }
    ctx->pc = 0x10E8C8u;
    // 0x10e8c8: 0xc043668  jal         func_10D9A0
    ctx->pc = 0x10E8C8u;
    SET_GPR_U32(ctx, 31, 0x10E8D0u);
    ctx->pc = 0x10E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8C8u;
    // 0x10e8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9A0u, 0x10E8C8u, 0x10E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8D0u;
label_10e8d0:
    // 0x10e8d0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10E8D0u;
    {
        const bool branch_taken_0x10e8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8D0u;
        // 0x10e8d4: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8d0) {
            ctx->pc = 0x10E9A8u;
            goto label_10e9a8;
        }
    }
    ctx->pc = 0x10E8D8u;
label_10e8d8:
    // 0x10e8d8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10e8dc: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x10e8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10e8e0: 0x2650002c  addiu       $s0, $s2, 0x2C
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x10e8e4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10e8e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10e8ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10e8f0: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10E8F0u;
    SET_GPR_U32(ctx, 31, 0x10E8F8u);
    ctx->pc = 0x10E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8F0u;
    // 0x10e8f4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10E8F0u, 0x10E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8F8u;
label_10e8f8:
    // 0x10e8f8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x10e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x10e8fc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x10e8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x10e900: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E900u;
    {
        const bool branch_taken_0x10e900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E900u;
        // 0x10e904: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e900) {
            ctx->pc = 0x10E960u;
            goto label_10e960;
        }
    }
    ctx->pc = 0x10E908u;
    // 0x10e908: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10e90c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10e910: 0x24426d90  addiu       $v0, $v0, 0x6D90
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x10e914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e91c: 0x800008  jr          $a0
    ctx->pc = 0x10E91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E924u: goto label_10e924;
            case 0x10E940u: goto label_10e940;
            case 0x10E960u: goto label_10e960;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E91Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10E924u;
label_10e924:
    // 0x10e924: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e928: 0x3a640002  xori        $a0, $s3, 0x2
    ctx->pc = 0x10e928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x10e92c: 0x53400a  movz        $t0, $v0, $s3
    ctx->pc = 0x10e92cu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x10e930: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x10e930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x10e934: 0x44400a  movz        $t0, $v0, $a0
    ctx->pc = 0x10e934u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x10e938: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10E938u;
    {
        const bool branch_taken_0x10e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E938u;
        // 0x10e93c: 0x3400a  movz        $t0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e938) {
            ctx->pc = 0x10E96Cu;
            goto label_10e96c;
        }
    }
    ctx->pc = 0x10E940u;
label_10e940:
    // 0x10e940: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e944: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e948: 0x73400a  movz        $t0, $v1, $s3
    ctx->pc = 0x10e948u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x10e94c: 0x3a620002  xori        $v0, $s3, 0x2
    ctx->pc = 0x10e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x10e950: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x10e950u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x10e954: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x10e954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x10e958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10E958u;
    {
        const bool branch_taken_0x10e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E958u;
        // 0x10e95c: 0x3400a  movz        $t0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e958) {
            ctx->pc = 0x10E96Cu;
            goto label_10e96c;
        }
    }
    ctx->pc = 0x10E960u;
label_10e960:
    // 0x10e960: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e964: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x10e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x10e968: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x10e968u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_10e96c:
    // 0x10e96c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e974: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x10e974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10e978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10e97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e980: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10e984: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10e988: 0xc04363a  jal         func_10D8E8
    ctx->pc = 0x10E988u;
    SET_GPR_U32(ctx, 31, 0x10E990u);
    ctx->pc = 0x10E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E988u;
    // 0x10e98c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8E8u, 0x10E988u, 0x10E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E990u;
label_10e990:
    // 0x10e990: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E990u;
    {
        const bool branch_taken_0x10e990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e990) {
            ctx->pc = 0x10E994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E990u;
            // 0x10e994: 0xae53001c  sw          $s3, 0x1C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9A4u;
            goto label_10e9a4;
        }
    }
    ctx->pc = 0x10E998u;
    // 0x10e998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e99c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10E99Cu;
    {
        const bool branch_taken_0x10e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E99Cu;
        // 0x10e9a0: 0xa2420024  sb          $v0, 0x24($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e99c) {
            ctx->pc = 0x10E9BCu;
            goto label_10e9bc;
        }
    }
    ctx->pc = 0x10E9A4u;
label_10e9a4:
    // 0x10e9a4: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_10e9a8:
    // 0x10e9a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10e9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9ac: 0xc106d48  jal         func_41B520
    ctx->pc = 0x10E9ACu;
    SET_GPR_U32(ctx, 31, 0x10E9B4u);
    ctx->pc = 0x10E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9ACu;
    // 0x10e9b0: 0x8e450020  lw          $a1, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B520u, 0x10E9ACu, 0x10E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0xae530020  sw          $s3, 0x20($s2)
    ctx->pc = 0x10e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 19));
    // 0x10e9b8: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x10e9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
label_10e9bc:
    // 0x10e9bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10e9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10e9c0:
    // 0x10e9c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10e9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e9c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10e9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e9c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10e9c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e9cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10e9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9D4u;
        // 0x10e9d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9DCu;
    // 0x10e9dc: 0x0  nop
    ctx->pc = 0x10e9dcu;
    // NOP
    ctx->pc = 0x10e9e0u;
}
