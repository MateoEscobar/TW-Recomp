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

// Function: sub_001088C0
// Address: 0x1088c0 - 0x1089c0
void sub_001088C0_0x1088c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088C0_0x1088c0");
#endif

    switch (ctx->pc) {
        case 0x1088c0u: goto label_1088c0;
        case 0x1088c4u: goto label_1088c4;
        case 0x1088c8u: goto label_1088c8;
        case 0x1088ccu: goto label_1088cc;
        case 0x1088d0u: goto label_1088d0;
        case 0x1088d4u: goto label_1088d4;
        case 0x1088d8u: goto label_1088d8;
        case 0x1088dcu: goto label_1088dc;
        case 0x1088e0u: goto label_1088e0;
        case 0x1088e4u: goto label_1088e4;
        case 0x1088e8u: goto label_1088e8;
        case 0x1088ecu: goto label_1088ec;
        case 0x1088f0u: goto label_1088f0;
        case 0x1088f4u: goto label_1088f4;
        case 0x1088f8u: goto label_1088f8;
        case 0x1088fcu: goto label_1088fc;
        case 0x108900u: goto label_108900;
        case 0x108904u: goto label_108904;
        case 0x108908u: goto label_108908;
        case 0x10890cu: goto label_10890c;
        case 0x108910u: goto label_108910;
        case 0x108914u: goto label_108914;
        case 0x108918u: goto label_108918;
        case 0x10891cu: goto label_10891c;
        case 0x108920u: goto label_108920;
        case 0x108924u: goto label_108924;
        case 0x108928u: goto label_108928;
        case 0x10892cu: goto label_10892c;
        case 0x108930u: goto label_108930;
        case 0x108934u: goto label_108934;
        case 0x108938u: goto label_108938;
        case 0x10893cu: goto label_10893c;
        case 0x108940u: goto label_108940;
        case 0x108944u: goto label_108944;
        case 0x108948u: goto label_108948;
        case 0x10894cu: goto label_10894c;
        case 0x108950u: goto label_108950;
        case 0x108954u: goto label_108954;
        case 0x108958u: goto label_108958;
        case 0x10895cu: goto label_10895c;
        case 0x108960u: goto label_108960;
        case 0x108964u: goto label_108964;
        case 0x108968u: goto label_108968;
        case 0x10896cu: goto label_10896c;
        case 0x108970u: goto label_108970;
        case 0x108974u: goto label_108974;
        case 0x108978u: goto label_108978;
        case 0x10897cu: goto label_10897c;
        case 0x108980u: goto label_108980;
        case 0x108984u: goto label_108984;
        case 0x108988u: goto label_108988;
        case 0x10898cu: goto label_10898c;
        case 0x108990u: goto label_108990;
        case 0x108994u: goto label_108994;
        case 0x108998u: goto label_108998;
        case 0x10899cu: goto label_10899c;
        case 0x1089a0u: goto label_1089a0;
        case 0x1089a4u: goto label_1089a4;
        case 0x1089a8u: goto label_1089a8;
        case 0x1089acu: goto label_1089ac;
        case 0x1089b0u: goto label_1089b0;
        case 0x1089b4u: goto label_1089b4;
        case 0x1089b8u: goto label_1089b8;
        case 0x1089bcu: goto label_1089bc;
        default: break;
    }

    ctx->pc = 0x1088c0u;

label_1088c0:
    // 0x1088c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1088c4:
    // 0x1088c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1088c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1088c8:
    // 0x1088c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1088c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1088cc:
    // 0x1088cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1088ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1088d0:
    // 0x1088d0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1088d4:
    // 0x1088d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1088d8:
    if (ctx->pc == 0x1088D8u) {
        ctx->pc = 0x1088D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088D4u;
        // 0x1088d8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1088DCu;
        goto label_1088dc;
    }
    ctx->pc = 0x1088D4u;
    {
        const bool branch_taken_0x1088d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1088d4) {
            ctx->pc = 0x1088D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1088D4u;
            // 0x1088d8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1088ECu;
            goto label_1088ec;
        }
    }
    ctx->pc = 0x1088DCu;
label_1088dc:
    // 0x1088dc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1088e0:
    // 0x1088e0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1088e4:
    if (ctx->pc == 0x1088E4u) {
        ctx->pc = 0x1088E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088E0u;
        // 0x1088e4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1088E8u;
        goto label_1088e8;
    }
    ctx->pc = 0x1088E0u;
    {
        const bool branch_taken_0x1088e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1088e0) {
            ctx->pc = 0x1088E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1088E0u;
            // 0x1088e4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108938u;
            goto label_108938;
        }
    }
    ctx->pc = 0x1088E8u;
label_1088e8:
    // 0x1088e8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1088e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1088ec:
    // 0x1088ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1088ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1088f0:
    // 0x1088f0: 0xc0e409a  jal         func_390268
label_1088f4:
    if (ctx->pc == 0x1088F4u) {
        ctx->pc = 0x1088F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088F0u;
        // 0x1088f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1088F8u;
        goto label_1088f8;
    }
    ctx->pc = 0x1088F0u;
    SET_GPR_U32(ctx, 31, 0x1088F8u);
    ctx->pc = 0x1088F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088F0u;
    // 0x1088f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1088F0u, 0x1088F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1088F8u;
label_1088f8:
    // 0x1088f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1088fc:
    // 0x1088fc: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_108900:
    if (ctx->pc == 0x108900u) {
        ctx->pc = 0x108900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088FCu;
        // 0x108900: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108904u;
        goto label_108904;
    }
    ctx->pc = 0x1088FCu;
    {
        const bool branch_taken_0x1088fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1088fc) {
            ctx->pc = 0x108900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1088FCu;
            // 0x108900: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108938u;
            goto label_108938;
        }
    }
    ctx->pc = 0x108904u;
label_108904:
    // 0x108904: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x108904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_108908:
    // 0x108908: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10890c:
    if (ctx->pc == 0x10890Cu) {
        ctx->pc = 0x10890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108908u;
        // 0x10890c: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108910u;
        goto label_108910;
    }
    ctx->pc = 0x108908u;
    {
        const bool branch_taken_0x108908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108908u;
        // 0x10890c: 0x31827  nor         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108908) {
            ctx->pc = 0x108920u;
            goto label_108920;
        }
    }
    ctx->pc = 0x108910u;
label_108910:
    // 0x108910: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x108910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_108914:
    // 0x108914: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108918:
    // 0x108918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x108918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10891c:
    // 0x10891c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x10891cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_108920:
    // 0x108920: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_108924:
    // 0x108924: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_108928:
    if (ctx->pc == 0x108928u) {
        ctx->pc = 0x108928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108924u;
        // 0x108928: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10892Cu;
        goto label_10892c;
    }
    ctx->pc = 0x108924u;
    {
        const bool branch_taken_0x108924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108924) {
            ctx->pc = 0x108928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108924u;
            // 0x108928: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108938u;
            goto label_108938;
        }
    }
    ctx->pc = 0x10892Cu;
label_10892c:
    // 0x10892c: 0x40f809  jalr        $v0
label_108930:
    if (ctx->pc == 0x108930u) {
        ctx->pc = 0x108930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10892Cu;
        // 0x108930: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108934u;
        goto label_108934;
    }
    ctx->pc = 0x10892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108934u);
        ctx->pc = 0x108930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10892Cu;
        // 0x108930: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10892Cu, 0x108934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108934u;
label_108934:
    // 0x108934: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x108934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108938:
    // 0x108938: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10893c:
    // 0x10893c: 0xc05d448  jal         func_175120
label_108940:
    if (ctx->pc == 0x108940u) {
        ctx->pc = 0x108940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10893Cu;
        // 0x108940: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108944u;
        goto label_108944;
    }
    ctx->pc = 0x10893Cu;
    SET_GPR_U32(ctx, 31, 0x108944u);
    ctx->pc = 0x108940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10893Cu;
    // 0x108940: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10893Cu, 0x108944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108944u;
label_108944:
    // 0x108944: 0xc042ef4  jal         func_10BBD0
label_108948:
    if (ctx->pc == 0x108948u) {
        ctx->pc = 0x108948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108944u;
        // 0x108948: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10894Cu;
        goto label_10894c;
    }
    ctx->pc = 0x108944u;
    SET_GPR_U32(ctx, 31, 0x10894Cu);
    ctx->pc = 0x108948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108944u;
    // 0x108948: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x108944u, 0x10894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10894Cu;
label_10894c:
    // 0x10894c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x10894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108950:
    // 0x108950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108954:
    // 0x108954: 0x0  nop
    ctx->pc = 0x108954u;
    // NOP
label_108958:
    // 0x108958: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x108958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10895c:
    // 0x10895c: 0x0  nop
    ctx->pc = 0x10895cu;
    // NOP
label_108960:
    // 0x108960: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_108964:
    if (ctx->pc == 0x108964u) {
        ctx->pc = 0x108964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108960u;
        // 0x108964: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108968u;
        goto label_108968;
    }
    ctx->pc = 0x108960u;
    {
        const bool branch_taken_0x108960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108960u;
        // 0x108964: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108960) {
            ctx->pc = 0x1089B0u;
            goto label_1089b0;
        }
    }
    ctx->pc = 0x108968u;
label_108968:
    // 0x108968: 0xc05d462  jal         func_175188
label_10896c:
    if (ctx->pc == 0x10896Cu) {
        ctx->pc = 0x10896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108968u;
        // 0x10896c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108970u;
        goto label_108970;
    }
    ctx->pc = 0x108968u;
    SET_GPR_U32(ctx, 31, 0x108970u);
    ctx->pc = 0x10896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108968u;
    // 0x10896c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x108968u, 0x108970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108970u;
label_108970:
    // 0x108970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108974:
    // 0x108974: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x108974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_108978:
    // 0x108978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10897c:
    // 0x10897c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_108980:
    if (ctx->pc == 0x108980u) {
        ctx->pc = 0x108980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10897Cu;
        // 0x108980: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108984u;
        goto label_108984;
    }
    ctx->pc = 0x10897Cu;
    {
        const bool branch_taken_0x10897c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10897Cu;
        // 0x108980: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10897c) {
            ctx->pc = 0x10899Cu;
            goto label_10899c;
        }
    }
    ctx->pc = 0x108984u;
label_108984:
    // 0x108984: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_108988:
    if (ctx->pc == 0x108988u) {
        ctx->pc = 0x108988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108984u;
        // 0x108988: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10898Cu;
        goto label_10898c;
    }
    ctx->pc = 0x108984u;
    {
        const bool branch_taken_0x108984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108984u;
        // 0x108988: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108984) {
            ctx->pc = 0x10899Cu;
            goto label_10899c;
        }
    }
    ctx->pc = 0x10898Cu;
label_10898c:
    // 0x10898c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_108990:
    if (ctx->pc == 0x108990u) {
        ctx->pc = 0x108990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10898Cu;
        // 0x108990: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108994u;
        goto label_108994;
    }
    ctx->pc = 0x10898Cu;
    {
        const bool branch_taken_0x10898c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10898Cu;
        // 0x108990: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10898c) {
            ctx->pc = 0x10899Cu;
            goto label_10899c;
        }
    }
    ctx->pc = 0x108994u;
label_108994:
    // 0x108994: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_108998:
    if (ctx->pc == 0x108998u) {
        ctx->pc = 0x108998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108994u;
        // 0x108998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10899Cu;
        goto label_10899c;
    }
    ctx->pc = 0x108994u;
    {
        const bool branch_taken_0x108994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108994u;
        // 0x108998: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108994) {
            ctx->pc = 0x1089B4u;
            goto label_1089b4;
        }
    }
    ctx->pc = 0x10899Cu;
label_10899c:
    // 0x10899c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1089a0:
    // 0x1089a0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1089a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1089a4:
    // 0x1089a4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1089a8:
    // 0x1089a8: 0x60f809  jalr        $v1
label_1089ac:
    if (ctx->pc == 0x1089ACu) {
        ctx->pc = 0x1089ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089A8u;
        // 0x1089ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1089B0u;
        goto label_1089b0;
    }
    ctx->pc = 0x1089A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1089B0u);
        ctx->pc = 0x1089ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089A8u;
        // 0x1089ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089A8u, 0x1089B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1089B0u;
label_1089b0:
    // 0x1089b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1089b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1089b4:
    // 0x1089b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1089b8:
    // 0x1089b8: 0x3e00008  jr          $ra
label_1089bc:
    if (ctx->pc == 0x1089BCu) {
        ctx->pc = 0x1089BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B8u;
        // 0x1089bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1089C0u;
        goto label_fallthrough_0x1089b8;
    }
    ctx->pc = 0x1089B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B8u;
        // 0x1089bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1089b8:
    ctx->pc = 0x1089C0u;
}
