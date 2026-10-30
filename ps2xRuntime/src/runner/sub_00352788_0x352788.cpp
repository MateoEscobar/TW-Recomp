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

// Function: sub_00352788
// Address: 0x352788 - 0x352a48
void sub_00352788_0x352788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352788_0x352788");
#endif

    switch (ctx->pc) {
        case 0x3527dcu: goto label_3527dc;
        case 0x352828u: goto label_352828;
        case 0x352884u: goto label_352884;
        case 0x352894u: goto label_352894;
        case 0x3528c0u: goto label_3528c0;
        case 0x35296cu: goto label_35296c;
        case 0x352984u: goto label_352984;
        case 0x3529a0u: goto label_3529a0;
        default: break;
    }

    ctx->pc = 0x352788u;

    // 0x352788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x352788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35278c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x35278cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x352790: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x352790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x352794: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x352794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x352798: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x352798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35279c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x35279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3527a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3527a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3527a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3527a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3527a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3527ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3527acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3527b0: 0x8c645340  lw          $a0, 0x5340($v1)
    ctx->pc = 0x3527b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E5340u));
    // 0x3527b4: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x3527b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3527b8: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x3527b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3527bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3527bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3527c0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x3527c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3527c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3527c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527c8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x3527c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3527cc: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x3527ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3527d0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3527d4: 0xc10c190  jal         func_430640
    ctx->pc = 0x3527D4u;
    SET_GPR_U32(ctx, 31, 0x3527DCu);
    ctx->pc = 0x3527D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527D4u;
    // 0x3527d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x3527D4u, 0x3527DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527DCu;
label_3527dc:
    // 0x3527dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3527e0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3527e4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3527e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3527e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3527e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3527ec: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3527f0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3527f4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3527f8: 0x92060018  lbu         $a2, 0x18($s0)
    ctx->pc = 0x3527f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3527fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352800: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x352800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x352804: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x352804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x352808: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x352808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x35280c: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x35280Cu;
    {
        const bool branch_taken_0x35280c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x352810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35280Cu;
        // 0x352810: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35280c) {
            ctx->pc = 0x3528A8u;
            goto label_3528a8;
        }
    }
    ctx->pc = 0x352814u;
    // 0x352814: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x352814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x352818: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x352818u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x35281c: 0x24534240  addiu       $s3, $v0, 0x4240
    ctx->pc = 0x35281cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x352820: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x352820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x352824: 0x0  nop
    ctx->pc = 0x352824u;
    // NOP
label_352828:
    // 0x352828: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x352828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x35282c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x35282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x352830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352834: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352838: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x352838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35283c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x35283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x352840: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352848: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x352848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x35284c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352850: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x352850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x352854: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x352854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x352858: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x352858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35285c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352860: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x352860u;
    {
        const bool branch_taken_0x352860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352860) {
            ctx->pc = 0x352864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352860u;
            // 0x352864: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352874u;
            goto label_352874;
        }
    }
    ctx->pc = 0x352868u;
    // 0x352868: 0xa0600043  sb          $zero, 0x43($v1)
    ctx->pc = 0x352868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x35286c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x35286cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x352870: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x352870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_352874:
    // 0x352874: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352878: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x352878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35287c: 0xc040716  jal         func_101C58
    ctx->pc = 0x35287Cu;
    SET_GPR_U32(ctx, 31, 0x352884u);
    ctx->pc = 0x352880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35287Cu;
    // 0x352880: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C58u, 0x35287Cu, 0x352884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352884u;
label_352884:
    // 0x352884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x352884u;
    {
        const bool branch_taken_0x352884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352884u;
        // 0x352888: 0x8e84aa84  lw          $a0, -0x557C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352884) {
            ctx->pc = 0x352894u;
            goto label_352894;
        }
    }
    ctx->pc = 0x35288Cu;
    // 0x35288c: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x35288Cu;
    SET_GPR_U32(ctx, 31, 0x352894u);
    ctx->pc = 0x352890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35288Cu;
    // 0x352890: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x35288Cu, 0x352894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352894u;
label_352894:
    // 0x352894: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x352894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x352898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35289c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x35289cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3528a0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3528A0u;
    {
        const bool branch_taken_0x3528a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3528a0) {
            ctx->pc = 0x3528A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3528A0u;
            // 0x3528a4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352828;
        }
    }
    ctx->pc = 0x3528A8u;
label_3528a8:
    // 0x3528a8: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x3528a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x3528ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3528ACu;
    {
        const bool branch_taken_0x3528ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3528B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3528ACu;
        // 0x3528b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528ac) {
            ctx->pc = 0x352914u;
            goto label_352914;
        }
    }
    ctx->pc = 0x3528B4u;
    // 0x3528b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3528b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3528b8: 0x24464908  addiu       $a2, $v0, 0x4908
    ctx->pc = 0x3528b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
    // 0x3528bc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3528bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3528c0:
    // 0x3528c0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3528c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3528c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3528c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3528c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3528c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3528cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3528d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3528d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3528d4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3528d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3528d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3528d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3528dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3528dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3528e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3528e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3528e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3528e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3528e8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3528e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3528ec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3528ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3528f0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3528f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3528f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3528f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3528f8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3528F8u;
    {
        const bool branch_taken_0x3528f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3528f8) {
            ctx->pc = 0x3528FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3528F8u;
            // 0x3528fc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352900u;
            goto label_352900;
        }
    }
    ctx->pc = 0x352900u;
label_352900:
    // 0x352900: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x352900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x352904: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x352904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x352908: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x352908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35290c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35290Cu;
    {
        const bool branch_taken_0x35290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35290c) {
            ctx->pc = 0x352910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35290Cu;
            // 0x352910: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3528C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3528c0;
        }
    }
    ctx->pc = 0x352914u;
label_352914:
    // 0x352914: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x352914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x352918: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x352918u;
    {
        const bool branch_taken_0x352918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352918) {
            ctx->pc = 0x35291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352918u;
            // 0x35291c: 0x9202001b  lbu         $v0, 0x1B($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352988u;
            goto label_352988;
        }
    }
    ctx->pc = 0x352920u;
    // 0x352920: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x352920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x352924: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x352924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x352928: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35292c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35292cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x352930: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x352934: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352938: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x352938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35293c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352940: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x352940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x352944: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x352944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x352948: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35294c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35294Cu;
    {
        const bool branch_taken_0x35294c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35294Cu;
        // 0x352950: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35294c) {
            ctx->pc = 0x35295Cu;
            goto label_35295c;
        }
    }
    ctx->pc = 0x352954u;
    // 0x352954: 0x24424908  addiu       $v0, $v0, 0x4908
    ctx->pc = 0x352954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
    // 0x352958: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x352958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_35295c:
    // 0x35295c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x35295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x352960: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x352960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x352964: 0xc0d534a  jal         func_354D28
    ctx->pc = 0x352964u;
    SET_GPR_U32(ctx, 31, 0x35296Cu);
    ctx->pc = 0x352968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352964u;
    // 0x352968: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D28u, 0x352964u, 0x35296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35296Cu;
label_35296c:
    // 0x35296c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35296cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352970: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x352970u;
    {
        const bool branch_taken_0x352970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352970u;
        // 0x352974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352970) {
            ctx->pc = 0x352984u;
            goto label_352984;
        }
    }
    ctx->pc = 0x352978u;
    // 0x352978: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x352978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35297c: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x35297Cu;
    SET_GPR_U32(ctx, 31, 0x352984u);
    ctx->pc = 0x352980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35297Cu;
    // 0x352980: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x35297Cu, 0x352984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352984u;
label_352984:
    // 0x352984: 0x9202001b  lbu         $v0, 0x1B($s0)
    ctx->pc = 0x352984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
label_352988:
    // 0x352988: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x352988u;
    {
        const bool branch_taken_0x352988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352988u;
        // 0x35298c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352988) {
            ctx->pc = 0x3529F4u;
            goto label_3529f4;
        }
    }
    ctx->pc = 0x352990u;
    // 0x352990: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x352990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x352994: 0x24464908  addiu       $a2, $v0, 0x4908
    ctx->pc = 0x352994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18696));
    // 0x352998: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x352998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35299c: 0x0  nop
    ctx->pc = 0x35299cu;
    // NOP
label_3529a0:
    // 0x3529a0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3529a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3529a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3529a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3529ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3529b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3529b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3529b4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3529b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3529b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3529b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3529bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3529bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3529c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3529c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3529c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3529c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3529c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3529cc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3529ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3529d0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3529d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3529d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3529d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3529d8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3529D8u;
    {
        const bool branch_taken_0x3529d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3529d8) {
            ctx->pc = 0x3529DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3529D8u;
            // 0x3529dc: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3529E0u;
            goto label_3529e0;
        }
    }
    ctx->pc = 0x3529E0u;
label_3529e0:
    // 0x3529e0: 0x9202001b  lbu         $v0, 0x1B($s0)
    ctx->pc = 0x3529e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x3529e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3529e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3529e8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3529e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3529ec: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3529ECu;
    {
        const bool branch_taken_0x3529ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3529ec) {
            ctx->pc = 0x3529F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3529ECu;
            // 0x3529f0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3529A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3529a0;
        }
    }
    ctx->pc = 0x3529F4u;
label_3529f4:
    // 0x3529f4: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x3529f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3529f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3529fc: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x3529fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x352a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x352a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x352a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x352a08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x352a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x352a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352a10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x352a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x352a14: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x352a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x352a18: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x352a1c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x352a1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x352a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x352a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352a24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x352a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x352a28: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x352a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352a2c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x352a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x352a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352a34: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x352a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x352a38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x352a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x352A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A3Cu;
        // 0x352a40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352A44u;
    // 0x352a44: 0x0  nop
    ctx->pc = 0x352a44u;
    // NOP
    ctx->pc = 0x352a48u;
}
