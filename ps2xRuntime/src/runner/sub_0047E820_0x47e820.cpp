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

// Function: sub_0047E820
// Address: 0x47e820 - 0x47e950
void sub_0047E820_0x47e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E820_0x47e820");
#endif

    switch (ctx->pc) {
        case 0x47e820u: goto label_47e820;
        case 0x47e824u: goto label_47e824;
        case 0x47e828u: goto label_47e828;
        case 0x47e82cu: goto label_47e82c;
        case 0x47e830u: goto label_47e830;
        case 0x47e834u: goto label_47e834;
        case 0x47e838u: goto label_47e838;
        case 0x47e83cu: goto label_47e83c;
        case 0x47e840u: goto label_47e840;
        case 0x47e844u: goto label_47e844;
        case 0x47e848u: goto label_47e848;
        case 0x47e84cu: goto label_47e84c;
        case 0x47e850u: goto label_47e850;
        case 0x47e854u: goto label_47e854;
        case 0x47e858u: goto label_47e858;
        case 0x47e85cu: goto label_47e85c;
        case 0x47e860u: goto label_47e860;
        case 0x47e864u: goto label_47e864;
        case 0x47e868u: goto label_47e868;
        case 0x47e86cu: goto label_47e86c;
        case 0x47e870u: goto label_47e870;
        case 0x47e874u: goto label_47e874;
        case 0x47e878u: goto label_47e878;
        case 0x47e87cu: goto label_47e87c;
        case 0x47e880u: goto label_47e880;
        case 0x47e884u: goto label_47e884;
        case 0x47e888u: goto label_47e888;
        case 0x47e88cu: goto label_47e88c;
        case 0x47e890u: goto label_47e890;
        case 0x47e894u: goto label_47e894;
        case 0x47e898u: goto label_47e898;
        case 0x47e89cu: goto label_47e89c;
        case 0x47e8a0u: goto label_47e8a0;
        case 0x47e8a4u: goto label_47e8a4;
        case 0x47e8a8u: goto label_47e8a8;
        case 0x47e8acu: goto label_47e8ac;
        case 0x47e8b0u: goto label_47e8b0;
        case 0x47e8b4u: goto label_47e8b4;
        case 0x47e8b8u: goto label_47e8b8;
        case 0x47e8bcu: goto label_47e8bc;
        case 0x47e8c0u: goto label_47e8c0;
        case 0x47e8c4u: goto label_47e8c4;
        case 0x47e8c8u: goto label_47e8c8;
        case 0x47e8ccu: goto label_47e8cc;
        case 0x47e8d0u: goto label_47e8d0;
        case 0x47e8d4u: goto label_47e8d4;
        case 0x47e8d8u: goto label_47e8d8;
        case 0x47e8dcu: goto label_47e8dc;
        case 0x47e8e0u: goto label_47e8e0;
        case 0x47e8e4u: goto label_47e8e4;
        case 0x47e8e8u: goto label_47e8e8;
        case 0x47e8ecu: goto label_47e8ec;
        case 0x47e8f0u: goto label_47e8f0;
        case 0x47e8f4u: goto label_47e8f4;
        case 0x47e8f8u: goto label_47e8f8;
        case 0x47e8fcu: goto label_47e8fc;
        case 0x47e900u: goto label_47e900;
        case 0x47e904u: goto label_47e904;
        case 0x47e908u: goto label_47e908;
        case 0x47e90cu: goto label_47e90c;
        case 0x47e910u: goto label_47e910;
        case 0x47e914u: goto label_47e914;
        case 0x47e918u: goto label_47e918;
        case 0x47e91cu: goto label_47e91c;
        case 0x47e920u: goto label_47e920;
        case 0x47e924u: goto label_47e924;
        case 0x47e928u: goto label_47e928;
        case 0x47e92cu: goto label_47e92c;
        case 0x47e930u: goto label_47e930;
        case 0x47e934u: goto label_47e934;
        case 0x47e938u: goto label_47e938;
        case 0x47e93cu: goto label_47e93c;
        case 0x47e940u: goto label_47e940;
        case 0x47e944u: goto label_47e944;
        case 0x47e948u: goto label_47e948;
        case 0x47e94cu: goto label_47e94c;
        default: break;
    }

    ctx->pc = 0x47e820u;

label_47e820:
    // 0x47e820: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e824:
    // 0x47e824: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e828:
    // 0x47e828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47e82c:
    // 0x47e82c: 0x2467ad28  addiu       $a3, $v1, -0x52D8
    ctx->pc = 0x47e82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946088));
label_47e830:
    // 0x47e830: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47e834:
    // 0x47e834: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x47e834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_47e838:
    // 0x47e838: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x47e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_47e83c:
    // 0x47e83c: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x47e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_47e840:
    // 0x47e840: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_47e844:
    // 0x47e844: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x47e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_47e848:
    // 0x47e848: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_47e84c:
    // 0x47e84c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x47e84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_47e850:
    // 0x47e850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_47e854:
    // 0x47e854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47e858:
    // 0x47e858: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47e85c:
    // 0x47e85c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x47e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_47e860:
    // 0x47e860: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47e860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_47e864:
    // 0x47e864: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e868:
    // 0x47e868: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x47e868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_47e86c:
    // 0x47e86c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x47e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_47e870:
    // 0x47e870: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47e870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47e874:
    // 0x47e874: 0x12320020  beq         $s1, $s2, . + 4 + (0x20 << 2)
label_47e878:
    if (ctx->pc == 0x47E878u) {
        ctx->pc = 0x47E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E874u;
        // 0x47e878: 0x24f3fff0  addiu       $s3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E87Cu;
        goto label_47e87c;
    }
    ctx->pc = 0x47E874u;
    {
        const bool branch_taken_0x47e874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x47E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E874u;
        // 0x47e878: 0x24f3fff0  addiu       $s3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e874) {
            ctx->pc = 0x47E8F8u;
            goto label_47e8f8;
        }
    }
    ctx->pc = 0x47E87Cu;
label_47e87c:
    // 0x47e87c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x47e87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47e880:
    // 0x47e880: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47e884:
    // 0x47e884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47e888:
    if (ctx->pc == 0x47E888u) {
        ctx->pc = 0x47E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E884u;
        // 0x47e888: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E88Cu;
        goto label_47e88c;
    }
    ctx->pc = 0x47E884u;
    {
        const bool branch_taken_0x47e884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E884u;
        // 0x47e888: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e884) {
            ctx->pc = 0x47E894u;
            goto label_47e894;
        }
    }
    ctx->pc = 0x47E88Cu;
label_47e88c:
    // 0x47e88c: 0x40f809  jalr        $v0
label_47e890:
    if (ctx->pc == 0x47E890u) {
        ctx->pc = 0x47E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E88Cu;
        // 0x47e890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E894u;
        goto label_47e894;
    }
    ctx->pc = 0x47E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E894u);
        ctx->pc = 0x47E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E88Cu;
        // 0x47e890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E88Cu, 0x47E894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E894u;
label_47e894:
    // 0x47e894: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e898:
    // 0x47e898: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_47e89c:
    if (ctx->pc == 0x47E89Cu) {
        ctx->pc = 0x47E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E898u;
        // 0x47e89c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E8A0u;
        goto label_47e8a0;
    }
    ctx->pc = 0x47E898u;
    {
        const bool branch_taken_0x47e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e898) {
            ctx->pc = 0x47E89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E898u;
            // 0x47e89c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E8A0u;
            goto label_47e8a0;
        }
    }
    ctx->pc = 0x47E8A0u;
label_47e8a0:
    // 0x47e8a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x47e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e8a4:
    // 0x47e8a4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_47e8a8:
    if (ctx->pc == 0x47E8A8u) {
        ctx->pc = 0x47E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8A4u;
        // 0x47e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E8ACu;
        goto label_47e8ac;
    }
    ctx->pc = 0x47E8A4u;
    {
        const bool branch_taken_0x47e8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8A4u;
        // 0x47e8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e8a4) {
            ctx->pc = 0x47E8E4u;
            goto label_47e8e4;
        }
    }
    ctx->pc = 0x47E8ACu;
label_47e8ac:
    // 0x47e8ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e8b0:
    // 0x47e8b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47e8b4:
    // 0x47e8b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47e8b8:
    // 0x47e8b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47e8bc:
    // 0x47e8bc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47e8c0:
    // 0x47e8c0: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e8c4:
    // 0x47e8c4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x47e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47e8c8:
    // 0x47e8c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x47e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_47e8cc:
    // 0x47e8cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_47e8d0:
    // 0x47e8d0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x47e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_47e8d4:
    // 0x47e8d4: 0xc1201bc  jal         func_4806F0
label_47e8d8:
    if (ctx->pc == 0x47E8D8u) {
        ctx->pc = 0x47E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8D4u;
        // 0x47e8d8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E8DCu;
        goto label_47e8dc;
    }
    ctx->pc = 0x47E8D4u;
    SET_GPR_U32(ctx, 31, 0x47E8DCu);
    ctx->pc = 0x47E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E8D4u;
    // 0x47e8d8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4806F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4806F0u, 0x47E8D4u, 0x47E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E8DCu;
label_47e8dc:
    // 0x47e8dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_47e8e0:
    if (ctx->pc == 0x47E8E0u) {
        ctx->pc = 0x47E8E4u;
        goto label_47e8e4;
    }
    ctx->pc = 0x47E8DCu;
    {
        const bool branch_taken_0x47e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e8dc) {
            ctx->pc = 0x47E8F0u;
            goto label_47e8f0;
        }
    }
    ctx->pc = 0x47E8E4u;
label_47e8e4:
    // 0x47e8e4: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x47e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_47e8e8:
    // 0x47e8e8: 0x40f809  jalr        $v0
label_47e8ec:
    if (ctx->pc == 0x47E8ECu) {
        ctx->pc = 0x47E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8E8u;
        // 0x47e8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E8F0u;
        goto label_47e8f0;
    }
    ctx->pc = 0x47E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E8F0u);
        ctx->pc = 0x47E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8E8u;
        // 0x47e8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E8E8u, 0x47E8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E8F0u;
label_47e8f0:
    // 0x47e8f0: 0x1632ffe3  bne         $s1, $s2, . + 4 + (-0x1D << 2)
label_47e8f4:
    if (ctx->pc == 0x47E8F4u) {
        ctx->pc = 0x47E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8F0u;
        // 0x47e8f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E8F8u;
        goto label_47e8f8;
    }
    ctx->pc = 0x47E8F0u;
    {
        const bool branch_taken_0x47e8f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x47E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E8F0u;
        // 0x47e8f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e8f0) {
            ctx->pc = 0x47E880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e880;
        }
    }
    ctx->pc = 0x47E8F8u;
label_47e8f8:
    // 0x47e8f8: 0x8f868938  lw          $a2, -0x76C8($gp)
    ctx->pc = 0x47e8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47e8fc:
    // 0x47e8fc: 0x2685ad28  addiu       $a1, $s4, -0x52D8
    ctx->pc = 0x47e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946088));
label_47e900:
    // 0x47e900: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x47e900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_47e904:
    // 0x47e904: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47e904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47e908:
    // 0x47e908: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x47e908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_47e90c:
    // 0x47e90c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x47e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_47e910:
    // 0x47e910: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x47e910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_47e914:
    // 0x47e914: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x47e914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_47e918:
    // 0x47e918: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x47e918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_47e91c:
    // 0x47e91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e920:
    // 0x47e920: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x47e920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
label_47e924:
    // 0x47e924: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x47e924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
label_47e928:
    // 0x47e928: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47e928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47e92c:
    // 0x47e92c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47e92cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e930:
    // 0x47e930: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47e930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e934:
    // 0x47e934: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x47e934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e938:
    // 0x47e938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47e93c:
    // 0x47e93c: 0xaca0fff8  sw          $zero, -0x8($a1)
    ctx->pc = 0x47e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 0));
label_47e940:
    // 0x47e940: 0x3e00008  jr          $ra
label_47e944:
    if (ctx->pc == 0x47E944u) {
        ctx->pc = 0x47E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E940u;
        // 0x47e944: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E948u;
        goto label_47e948;
    }
    ctx->pc = 0x47E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E940u;
        // 0x47e944: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E948u;
label_47e948:
    // 0x47e948: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47e948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e94c:
    // 0x47e94c: 0x0  nop
    ctx->pc = 0x47e94cu;
    // NOP
    ctx->pc = 0x47e950u;
}
