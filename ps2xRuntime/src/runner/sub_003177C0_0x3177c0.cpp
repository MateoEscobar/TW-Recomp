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

// Function: sub_003177C0
// Address: 0x3177c0 - 0x3179c8
void sub_003177C0_0x3177c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003177C0_0x3177c0");
#endif

    switch (ctx->pc) {
        case 0x317828u: goto label_317828;
        case 0x317868u: goto label_317868;
        case 0x317870u: goto label_317870;
        case 0x317878u: goto label_317878;
        case 0x3178b0u: goto label_3178b0;
        case 0x3178e0u: goto label_3178e0;
        case 0x31790cu: goto label_31790c;
        case 0x317940u: goto label_317940;
        default: break;
    }

    ctx->pc = 0x3177c0u;

    // 0x3177c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3177c4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3177c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3177c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3177c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3177cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3177ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3177d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3177d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3177d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3177d8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3177d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3177dc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3177dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3177e0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3177e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3177e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3177e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3177e8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3177e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3177ec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3177ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3177f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3177F0u;
    {
        const bool branch_taken_0x3177f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177F0u;
        // 0x3177f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177f0) {
            ctx->pc = 0x317818u;
            goto label_317818;
        }
    }
    ctx->pc = 0x3177F8u;
    // 0x3177f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3177f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3177fc: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x3177fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x317800: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x317800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
    // 0x317804: 0x54600065  bnel        $v1, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x317804u;
    {
        const bool branch_taken_0x317804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317804) {
            ctx->pc = 0x317808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317804u;
            // 0x317808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31799Cu;
            goto label_31799c;
        }
    }
    ctx->pc = 0x31780Cu;
    // 0x31780c: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x31780cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x317810: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x317810u;
    {
        const bool branch_taken_0x317810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317810) {
            ctx->pc = 0x317814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317810u;
            // 0x317814: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317820u;
            goto label_317820;
        }
    }
    ctx->pc = 0x317818u;
label_317818:
    // 0x317818: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x317818u;
    {
        const bool branch_taken_0x317818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317818u;
        // 0x31781c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317818) {
            ctx->pc = 0x31799Cu;
            goto label_31799c;
        }
    }
    ctx->pc = 0x317820u;
label_317820:
    // 0x317820: 0xc059856  jal         func_166158
    ctx->pc = 0x317820u;
    SET_GPR_U32(ctx, 31, 0x317828u);
    ctx->pc = 0x317824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317820u;
    // 0x317824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x317820u, 0x317828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317828u;
label_317828:
    // 0x317828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31782c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31782cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317830: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x317830u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x317834: 0x16230051  bne         $s1, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x317834u;
    {
        const bool branch_taken_0x317834 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x317838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317834u;
        // 0x317838: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317834) {
            ctx->pc = 0x31797Cu;
            goto label_31797c;
        }
    }
    ctx->pc = 0x31783Cu;
    // 0x31783c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x317840: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x317840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x317844: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x317844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x317848: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x317848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31784c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x31784cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x317850: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x317850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x317854: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x317854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317858: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x31785c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x31785cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x317860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317864: 0x0  nop
    ctx->pc = 0x317864u;
    // NOP
label_317868:
    // 0x317868: 0xc137826  jal         func_4DE098
    ctx->pc = 0x317868u;
    SET_GPR_U32(ctx, 31, 0x317870u);
    ctx->pc = 0x31786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317868u;
    // 0x31786c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x317868u, 0x317870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317870u;
label_317870:
    // 0x317870: 0xc0e409a  jal         func_390268
    ctx->pc = 0x317870u;
    SET_GPR_U32(ctx, 31, 0x317878u);
    ctx->pc = 0x317874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317870u;
    // 0x317874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x317870u, 0x317878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317878u;
label_317878:
    // 0x317878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31787c: 0x52200036  beql        $s1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x31787Cu;
    {
        const bool branch_taken_0x31787c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31787c) {
            ctx->pc = 0x317880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31787Cu;
            // 0x317880: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x317884u;
    // 0x317884: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x317884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x317888: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x317888u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31788c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31788cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x317890: 0x50560031  beql        $v0, $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x317890u;
    {
        const bool branch_taken_0x317890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x317890) {
            ctx->pc = 0x317894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317890u;
            // 0x317894: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x317898u;
    // 0x317898: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x31789c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31789Cu;
    {
        const bool branch_taken_0x31789c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31789c) {
            ctx->pc = 0x3178A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31789Cu;
            // 0x3178a0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3178F8u;
            goto label_3178f8;
        }
    }
    ctx->pc = 0x3178A4u;
    // 0x3178a4: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x3178a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
    // 0x3178a8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3178A8u;
    SET_GPR_U32(ctx, 31, 0x3178B0u);
    ctx->pc = 0x3178ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3178A8u;
    // 0x3178ac: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3178A8u, 0x3178B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3178B0u;
label_3178b0:
    // 0x3178b0: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x3178b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x3178b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3178B4u;
    {
        const bool branch_taken_0x3178b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178B4u;
        // 0x3178b8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178b4) {
            ctx->pc = 0x3178F8u;
            goto label_3178f8;
        }
    }
    ctx->pc = 0x3178BCu;
    // 0x3178bc: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3178BCu;
    {
        const bool branch_taken_0x3178bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3178bc) {
            ctx->pc = 0x3178C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3178BCu;
            // 0x3178c0: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317954u;
            goto label_317954;
        }
    }
    ctx->pc = 0x3178C4u;
    // 0x3178c4: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x3178c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x3178c8: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x3178c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x3178cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3178ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3178d0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3178d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3178d4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3178d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3178d8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x3178D8u;
    SET_GPR_U32(ctx, 31, 0x3178E0u);
    ctx->pc = 0x3178DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3178D8u;
    // 0x3178dc: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3178D8u, 0x3178E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3178E0u;
label_3178e0:
    // 0x3178e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3178e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3178e4: 0x0  nop
    ctx->pc = 0x3178e4u;
    // NOP
    // 0x3178e8: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x3178E8u;
    {
        const bool branch_taken_0x3178e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3178e8) {
            ctx->pc = 0x3178ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3178E8u;
            // 0x3178ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x3178F0u;
    // 0x3178f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3178F0u;
    {
        const bool branch_taken_0x3178f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178F0u;
        // 0x3178f4: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178f0) {
            ctx->pc = 0x317954u;
            goto label_317954;
        }
    }
    ctx->pc = 0x3178F8u;
label_3178f8:
    // 0x3178f8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3178F8u;
    {
        const bool branch_taken_0x3178f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3178f8) {
            ctx->pc = 0x3178FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3178F8u;
            // 0x3178fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x317900u;
    // 0x317900: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
    // 0x317904: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x317904u;
    SET_GPR_U32(ctx, 31, 0x31790Cu);
    ctx->pc = 0x317908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317904u;
    // 0x317908: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x317904u, 0x31790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31790Cu;
label_31790c:
    // 0x31790c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31790cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x317910: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x317910u;
    {
        const bool branch_taken_0x317910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317910) {
            ctx->pc = 0x317914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317910u;
            // 0x317914: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x317918u;
    // 0x317918: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x317918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x31791c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x31791Cu;
    {
        const bool branch_taken_0x31791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31791c) {
            ctx->pc = 0x317920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31791Cu;
            // 0x317920: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317954u;
            goto label_317954;
        }
    }
    ctx->pc = 0x317924u;
    // 0x317924: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x317924u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x317928: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x317928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x31792c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31792cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x317930: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x317930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x317934: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x317934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x317938: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x317938u;
    SET_GPR_U32(ctx, 31, 0x317940u);
    ctx->pc = 0x31793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317938u;
    // 0x31793c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x317938u, 0x317940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317940u;
label_317940:
    // 0x317940: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x317940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317944: 0x0  nop
    ctx->pc = 0x317944u;
    // NOP
    // 0x317948: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x317948u;
    {
        const bool branch_taken_0x317948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317948) {
            ctx->pc = 0x31794Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317948u;
            // 0x31794c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317958u;
            goto label_317958;
        }
    }
    ctx->pc = 0x317950u;
    // 0x317950: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x317950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_317954:
    // 0x317954: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_317958:
    // 0x317958: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x317958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31795c: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x31795Cu;
    {
        const bool branch_taken_0x31795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31795c) {
            ctx->pc = 0x317960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31795Cu;
            // 0x317960: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317868;
        }
    }
    ctx->pc = 0x317964u;
    // 0x317964: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x317968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317968u;
    {
        const bool branch_taken_0x317968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317968u;
        // 0x31796c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317968) {
            ctx->pc = 0x317980u;
            goto label_317980;
        }
    }
    ctx->pc = 0x317970u;
    // 0x317970: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x317970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x317974: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x317974u;
    {
        const bool branch_taken_0x317974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317974u;
        // 0x317978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317974) {
            ctx->pc = 0x31799Cu;
            goto label_31799c;
        }
    }
    ctx->pc = 0x31797Cu;
label_31797c:
    // 0x31797c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31797cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_317980:
    // 0x317980: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x317980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x317984: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x317988: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x317988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x31798c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31798cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317990: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x317990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x317994: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x317994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x317998: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x317998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_31799c:
    // 0x31799c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3179a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3179a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3179a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3179a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3179a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3179a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3179ac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3179acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3179b0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3179b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3179b4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3179b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3179b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3179b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3179bc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3179bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3179c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3179C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3179C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179C0u;
        // 0x3179c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3179C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3179C8u;
}
