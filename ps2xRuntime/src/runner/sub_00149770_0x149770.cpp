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

// Function: sub_00149770
// Address: 0x149770 - 0x149880
void sub_00149770_0x149770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149770_0x149770");
#endif

    switch (ctx->pc) {
        case 0x149770u: goto label_149770;
        case 0x149774u: goto label_149774;
        case 0x149778u: goto label_149778;
        case 0x14977cu: goto label_14977c;
        case 0x149780u: goto label_149780;
        case 0x149784u: goto label_149784;
        case 0x149788u: goto label_149788;
        case 0x14978cu: goto label_14978c;
        case 0x149790u: goto label_149790;
        case 0x149794u: goto label_149794;
        case 0x149798u: goto label_149798;
        case 0x14979cu: goto label_14979c;
        case 0x1497a0u: goto label_1497a0;
        case 0x1497a4u: goto label_1497a4;
        case 0x1497a8u: goto label_1497a8;
        case 0x1497acu: goto label_1497ac;
        case 0x1497b0u: goto label_1497b0;
        case 0x1497b4u: goto label_1497b4;
        case 0x1497b8u: goto label_1497b8;
        case 0x1497bcu: goto label_1497bc;
        case 0x1497c0u: goto label_1497c0;
        case 0x1497c4u: goto label_1497c4;
        case 0x1497c8u: goto label_1497c8;
        case 0x1497ccu: goto label_1497cc;
        case 0x1497d0u: goto label_1497d0;
        case 0x1497d4u: goto label_1497d4;
        case 0x1497d8u: goto label_1497d8;
        case 0x1497dcu: goto label_1497dc;
        case 0x1497e0u: goto label_1497e0;
        case 0x1497e4u: goto label_1497e4;
        case 0x1497e8u: goto label_1497e8;
        case 0x1497ecu: goto label_1497ec;
        case 0x1497f0u: goto label_1497f0;
        case 0x1497f4u: goto label_1497f4;
        case 0x1497f8u: goto label_1497f8;
        case 0x1497fcu: goto label_1497fc;
        case 0x149800u: goto label_149800;
        case 0x149804u: goto label_149804;
        case 0x149808u: goto label_149808;
        case 0x14980cu: goto label_14980c;
        case 0x149810u: goto label_149810;
        case 0x149814u: goto label_149814;
        case 0x149818u: goto label_149818;
        case 0x14981cu: goto label_14981c;
        case 0x149820u: goto label_149820;
        case 0x149824u: goto label_149824;
        case 0x149828u: goto label_149828;
        case 0x14982cu: goto label_14982c;
        case 0x149830u: goto label_149830;
        case 0x149834u: goto label_149834;
        case 0x149838u: goto label_149838;
        case 0x14983cu: goto label_14983c;
        case 0x149840u: goto label_149840;
        case 0x149844u: goto label_149844;
        case 0x149848u: goto label_149848;
        case 0x14984cu: goto label_14984c;
        case 0x149850u: goto label_149850;
        case 0x149854u: goto label_149854;
        case 0x149858u: goto label_149858;
        case 0x14985cu: goto label_14985c;
        case 0x149860u: goto label_149860;
        case 0x149864u: goto label_149864;
        case 0x149868u: goto label_149868;
        case 0x14986cu: goto label_14986c;
        case 0x149870u: goto label_149870;
        case 0x149874u: goto label_149874;
        case 0x149878u: goto label_149878;
        case 0x14987cu: goto label_14987c;
        default: break;
    }

    ctx->pc = 0x149770u;

label_149770:
    // 0x149770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_149774:
    // 0x149774: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_149778:
    // 0x149778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14977c:
    // 0x14977c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149780:
    // 0x149780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_149784:
    // 0x149784: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_149788:
    // 0x149788: 0xc1134ba  jal         func_44D2E8
label_14978c:
    if (ctx->pc == 0x14978Cu) {
        ctx->pc = 0x14978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149788u;
        // 0x14978c: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149790u;
        goto label_149790;
    }
    ctx->pc = 0x149788u;
    SET_GPR_U32(ctx, 31, 0x149790u);
    ctx->pc = 0x14978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149788u;
    // 0x14978c: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D2E8u, 0x149788u, 0x149790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149790u;
label_149790:
    // 0x149790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149794:
    // 0x149794: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x149794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_149798:
    // 0x149798: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x149798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_14979c:
    // 0x14979c: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x14979cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1497a0:
    // 0x1497a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1497a4:
    // 0x1497a4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_1497a8:
    if (ctx->pc == 0x1497A8u) {
        ctx->pc = 0x1497A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497A4u;
        // 0x1497a8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1497ACu;
        goto label_1497ac;
    }
    ctx->pc = 0x1497A4u;
    {
        const bool branch_taken_0x1497a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497A4u;
        // 0x1497a8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497a4) {
            ctx->pc = 0x149884u;
            return;
        }
    }
    ctx->pc = 0x1497ACu;
label_1497ac:
    // 0x1497ac: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1497b0:
    // 0x1497b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1497b4:
    // 0x1497b4: 0x2442a7c0  addiu       $v0, $v0, -0x5840
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
label_1497b8:
    // 0x1497b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1497b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1497bc:
    // 0x1497bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1497bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1497c0:
    // 0x1497c0: 0x800008  jr          $a0
label_1497c4:
    if (ctx->pc == 0x1497C4u) {
        ctx->pc = 0x1497C8u;
        goto label_1497c8;
    }
    ctx->pc = 0x1497C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1497C8u: goto label_1497c8;
            case 0x149804u: goto label_149804;
            case 0x149860u: goto label_149860;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1497C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1497C8u;
label_1497c8:
    // 0x1497c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1497cc:
    // 0x1497cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1497d0:
    // 0x1497d0: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
label_1497d4:
    // 0x1497d4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1497d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1497d8:
    // 0x1497d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1497d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1497dc:
    // 0x1497dc: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1497e0:
    if (ctx->pc == 0x1497E0u) {
        ctx->pc = 0x1497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497DCu;
        // 0x1497e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1497E4u;
        goto label_1497e4;
    }
    ctx->pc = 0x1497DCu;
    {
        const bool branch_taken_0x1497dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497DCu;
        // 0x1497e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497dc) {
            ctx->pc = 0x1497F4u;
            goto label_1497f4;
        }
    }
    ctx->pc = 0x1497E4u;
label_1497e4:
    // 0x1497e4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1497e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_1497e8:
    // 0x1497e8: 0x244299e8  addiu       $v0, $v0, -0x6618
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
label_1497ec:
    // 0x1497ec: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x1497ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_1497f0:
    // 0x1497f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1497f4:
    // 0x1497f4: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
label_1497f8:
    if (ctx->pc == 0x1497F8u) {
        ctx->pc = 0x1497F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497F4u;
        // 0x1497f8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1497FCu;
        goto label_1497fc;
    }
    ctx->pc = 0x1497F4u;
    {
        const bool branch_taken_0x1497f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1497F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497F4u;
        // 0x1497f8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497f4) {
            ctx->pc = 0x149884u;
            return;
        }
    }
    ctx->pc = 0x1497FCu;
label_1497fc:
    // 0x1497fc: 0x10000021  b           . + 4 + (0x21 << 2)
label_149800:
    if (ctx->pc == 0x149800u) {
        ctx->pc = 0x149800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497FCu;
        // 0x149800: 0xae06010c  sw          $a2, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149804u;
        goto label_149804;
    }
    ctx->pc = 0x1497FCu;
    {
        const bool branch_taken_0x1497fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497FCu;
        // 0x149800: 0xae06010c  sw          $a2, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497fc) {
            ctx->pc = 0x149884u;
            return;
        }
    }
    ctx->pc = 0x149804u;
label_149804:
    // 0x149804: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x149804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_149808:
    // 0x149808: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_14980c:
    // 0x14980c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x14980cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_149810:
    // 0x149810: 0x244299e8  addiu       $v0, $v0, -0x6618
    ctx->pc = 0x149810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
label_149814:
    // 0x149814: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_149818:
    // 0x149818: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_14981c:
    // 0x14981c: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_149820:
    // 0x149820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_149824:
    // 0x149824: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_149828:
    // 0x149828: 0x84820042  lh          $v0, 0x42($a0)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
label_14982c:
    // 0x14982c: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
label_149830:
    if (ctx->pc == 0x149830u) {
        ctx->pc = 0x149830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14982Cu;
        // 0x149830: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149834u;
        goto label_149834;
    }
    ctx->pc = 0x14982Cu;
    {
        const bool branch_taken_0x14982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x149830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14982Cu;
        // 0x149830: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14982c) {
            ctx->pc = 0x149880u;
            return;
        }
    }
    ctx->pc = 0x149834u;
label_149834:
    // 0x149834: 0x8c42b704  lw          $v0, -0x48FC($v0)
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948612)));
label_149838:
    // 0x149838: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_14983c:
    if (ctx->pc == 0x14983Cu) {
        ctx->pc = 0x14983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149838u;
        // 0x14983c: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149840u;
        goto label_149840;
    }
    ctx->pc = 0x149838u;
    {
        const bool branch_taken_0x149838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149838) {
            ctx->pc = 0x14983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149838u;
            // 0x14983c: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149884u;
            return;
        }
    }
    ctx->pc = 0x149840u;
label_149840:
    // 0x149840: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_149844:
    // 0x149844: 0x40f809  jalr        $v0
label_149848:
    if (ctx->pc == 0x149848u) {
        ctx->pc = 0x149848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149844u;
        // 0x149848: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14984Cu;
        goto label_14984c;
    }
    ctx->pc = 0x149844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14984Cu);
        ctx->pc = 0x149848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149844u;
        // 0x149848: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149844u, 0x14984Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14984Cu;
label_14984c:
    // 0x14984c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_149850:
    // 0x149850: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
label_149854:
    // 0x149854: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x149854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_149858:
    // 0x149858: 0x10000009  b           . + 4 + (0x9 << 2)
label_14985c:
    if (ctx->pc == 0x14985Cu) {
        ctx->pc = 0x14985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149858u;
        // 0x14985c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149860u;
        goto label_149860;
    }
    ctx->pc = 0x149858u;
    {
        const bool branch_taken_0x149858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149858u;
        // 0x14985c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149858) {
            ctx->pc = 0x149880u;
            return;
        }
    }
    ctx->pc = 0x149860u;
label_149860:
    // 0x149860: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_149864:
    // 0x149864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149868:
    // 0x149868: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
label_14986c:
    // 0x14986c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_149870:
    // 0x149870: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_149874:
    // 0x149874: 0x246399e8  addiu       $v1, $v1, -0x6618
    ctx->pc = 0x149874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941160));
label_149878:
    // 0x149878: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x149878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_14987c:
    // 0x14987c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x14987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x149880u;
}
