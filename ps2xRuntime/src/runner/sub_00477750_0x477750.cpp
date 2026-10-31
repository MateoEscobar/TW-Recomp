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

// Function: sub_00477750
// Address: 0x477750 - 0x477858
void sub_00477750_0x477750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477750_0x477750");
#endif

    switch (ctx->pc) {
        case 0x477750u: goto label_477750;
        case 0x477754u: goto label_477754;
        case 0x477758u: goto label_477758;
        case 0x47775cu: goto label_47775c;
        case 0x477760u: goto label_477760;
        case 0x477764u: goto label_477764;
        case 0x477768u: goto label_477768;
        case 0x47776cu: goto label_47776c;
        case 0x477770u: goto label_477770;
        case 0x477774u: goto label_477774;
        case 0x477778u: goto label_477778;
        case 0x47777cu: goto label_47777c;
        case 0x477780u: goto label_477780;
        case 0x477784u: goto label_477784;
        case 0x477788u: goto label_477788;
        case 0x47778cu: goto label_47778c;
        case 0x477790u: goto label_477790;
        case 0x477794u: goto label_477794;
        case 0x477798u: goto label_477798;
        case 0x47779cu: goto label_47779c;
        case 0x4777a0u: goto label_4777a0;
        case 0x4777a4u: goto label_4777a4;
        case 0x4777a8u: goto label_4777a8;
        case 0x4777acu: goto label_4777ac;
        case 0x4777b0u: goto label_4777b0;
        case 0x4777b4u: goto label_4777b4;
        case 0x4777b8u: goto label_4777b8;
        case 0x4777bcu: goto label_4777bc;
        case 0x4777c0u: goto label_4777c0;
        case 0x4777c4u: goto label_4777c4;
        case 0x4777c8u: goto label_4777c8;
        case 0x4777ccu: goto label_4777cc;
        case 0x4777d0u: goto label_4777d0;
        case 0x4777d4u: goto label_4777d4;
        case 0x4777d8u: goto label_4777d8;
        case 0x4777dcu: goto label_4777dc;
        case 0x4777e0u: goto label_4777e0;
        case 0x4777e4u: goto label_4777e4;
        case 0x4777e8u: goto label_4777e8;
        case 0x4777ecu: goto label_4777ec;
        case 0x4777f0u: goto label_4777f0;
        case 0x4777f4u: goto label_4777f4;
        case 0x4777f8u: goto label_4777f8;
        case 0x4777fcu: goto label_4777fc;
        case 0x477800u: goto label_477800;
        case 0x477804u: goto label_477804;
        case 0x477808u: goto label_477808;
        case 0x47780cu: goto label_47780c;
        case 0x477810u: goto label_477810;
        case 0x477814u: goto label_477814;
        case 0x477818u: goto label_477818;
        case 0x47781cu: goto label_47781c;
        case 0x477820u: goto label_477820;
        case 0x477824u: goto label_477824;
        case 0x477828u: goto label_477828;
        case 0x47782cu: goto label_47782c;
        case 0x477830u: goto label_477830;
        case 0x477834u: goto label_477834;
        case 0x477838u: goto label_477838;
        case 0x47783cu: goto label_47783c;
        case 0x477840u: goto label_477840;
        case 0x477844u: goto label_477844;
        case 0x477848u: goto label_477848;
        case 0x47784cu: goto label_47784c;
        case 0x477850u: goto label_477850;
        case 0x477854u: goto label_477854;
        default: break;
    }

    ctx->pc = 0x477750u;

label_477750:
    // 0x477750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x477750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_477754:
    // 0x477754: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x477754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_477758:
    // 0x477758: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x477758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_47775c:
    // 0x47775c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_477760:
    // 0x477760: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x477760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_477764:
    // 0x477764: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x477764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_477768:
    // 0x477768: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x477768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47776c:
    // 0x47776c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_477770:
    // 0x477770: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x477770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_477774:
    // 0x477774: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x477774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_477778:
    // 0x477778: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x477778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_47777c:
    // 0x47777c: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_477780:
    if (ctx->pc == 0x477780u) {
        ctx->pc = 0x477780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47777Cu;
        // 0x477780: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x477784u;
        goto label_477784;
    }
    ctx->pc = 0x47777Cu;
    {
        const bool branch_taken_0x47777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x477780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47777Cu;
        // 0x477780: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47777c) {
            ctx->pc = 0x477800u;
            goto label_477800;
        }
    }
    ctx->pc = 0x477784u;
label_477784:
    // 0x477784: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x477784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_477788:
    // 0x477788: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x477788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_47778c:
    // 0x47778c: 0x2445ad18  addiu       $a1, $v0, -0x52E8
    ctx->pc = 0x47778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_477790:
    // 0x477790: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x477790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_477794:
    // 0x477794: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x477794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_477798:
    // 0x477798: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x477798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_47779c:
    // 0x47779c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4777a0:
    if (ctx->pc == 0x4777A0u) {
        ctx->pc = 0x4777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47779Cu;
        // 0x4777a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4777A4u;
        goto label_4777a4;
    }
    ctx->pc = 0x47779Cu;
    {
        const bool branch_taken_0x47779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47779Cu;
        // 0x4777a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47779c) {
            ctx->pc = 0x47782Cu;
            goto label_47782c;
        }
    }
    ctx->pc = 0x4777A4u;
label_4777a4:
    // 0x4777a4: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x4777a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
label_4777a8:
    // 0x4777a8: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x4777a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_4777ac:
    // 0x4777ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4777b0:
    if (ctx->pc == 0x4777B0u) {
        ctx->pc = 0x4777B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777ACu;
        // 0x4777b0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4777B4u;
        goto label_4777b4;
    }
    ctx->pc = 0x4777ACu;
    {
        const bool branch_taken_0x4777ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4777B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777ACu;
        // 0x4777b0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4777ac) {
            ctx->pc = 0x4777C4u;
            goto label_4777c4;
        }
    }
    ctx->pc = 0x4777B4u;
label_4777b4:
    // 0x4777b4: 0x0  nop
    ctx->pc = 0x4777b4u;
    // NOP
label_4777b8:
    // 0x4777b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4777b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4777bc:
    // 0x4777bc: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x4777bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_4777c0:
    // 0x4777c0: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x4777c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_4777c4:
    // 0x4777c4: 0x40f809  jalr        $v0
label_4777c8:
    if (ctx->pc == 0x4777C8u) {
        ctx->pc = 0x4777C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777C4u;
        // 0x4777c8: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4777CCu;
        goto label_4777cc;
    }
    ctx->pc = 0x4777C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4777CCu);
        ctx->pc = 0x4777C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777C4u;
        // 0x4777c8: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4777C4u, 0x4777CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4777CCu;
label_4777cc:
    // 0x4777cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4777ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4777d0:
    // 0x4777d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4777d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4777d4:
    // 0x4777d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4777d8:
    // 0x4777d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4777d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4777dc:
    // 0x4777dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4777dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4777e0:
    // 0x4777e0: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x4777e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_4777e4:
    // 0x4777e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4777e8:
    // 0x4777e8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x4777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_4777ec:
    // 0x4777ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4777f0:
    // 0x4777f0: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x4777f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_4777f4:
    // 0x4777f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4777f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4777f8:
    // 0x4777f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_4777fc:
    if (ctx->pc == 0x4777FCu) {
        ctx->pc = 0x4777FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777F8u;
        // 0x4777fc: 0xac530014  sw          $s3, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x477800u;
        goto label_477800;
    }
    ctx->pc = 0x4777F8u;
    {
        const bool branch_taken_0x4777f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4777FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4777F8u;
        // 0x4777fc: 0xac530014  sw          $s3, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4777f8) {
            ctx->pc = 0x477838u;
            goto label_477838;
        }
    }
    ctx->pc = 0x477800u;
label_477800:
    // 0x477800: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x477800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_477804:
    // 0x477804: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_477808:
    if (ctx->pc == 0x477808u) {
        ctx->pc = 0x477808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477804u;
        // 0x477808: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47780Cu;
        goto label_47780c;
    }
    ctx->pc = 0x477804u;
    {
        const bool branch_taken_0x477804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x477808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477804u;
        // 0x477808: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477804) {
            ctx->pc = 0x477820u;
            goto label_477820;
        }
    }
    ctx->pc = 0x47780Cu;
label_47780c:
    // 0x47780c: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x47780cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_477810:
    // 0x477810: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x477810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_477814:
    // 0x477814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x477814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_477818:
    // 0x477818: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_47781c:
    if (ctx->pc == 0x47781Cu) {
        ctx->pc = 0x47781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477818u;
        // 0x47781c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x477820u;
        goto label_477820;
    }
    ctx->pc = 0x477818u;
    {
        const bool branch_taken_0x477818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477818u;
        // 0x47781c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477818) {
            ctx->pc = 0x4777B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4777b8;
        }
    }
    ctx->pc = 0x477820u;
label_477820:
    // 0x477820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x477820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_477824:
    // 0x477824: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x477824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_477828:
    // 0x477828: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x477828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47782c:
    // 0x47782c: 0xc11f984  jal         func_47E610
label_477830:
    if (ctx->pc == 0x477830u) {
        ctx->pc = 0x477830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47782Cu;
        // 0x477830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x477834u;
        goto label_477834;
    }
    ctx->pc = 0x47782Cu;
    SET_GPR_U32(ctx, 31, 0x477834u);
    ctx->pc = 0x477830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47782Cu;
    // 0x477830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E610u, 0x47782Cu, 0x477834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477834u;
label_477834:
    // 0x477834: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x477834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_477838:
    // 0x477838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x477838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47783c:
    // 0x47783c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x47783cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477840:
    // 0x477840: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x477840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_477844:
    // 0x477844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x477844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477848:
    // 0x477848: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x477848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47784c:
    // 0x47784c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_477850:
    // 0x477850: 0x3e00008  jr          $ra
label_477854:
    if (ctx->pc == 0x477854u) {
        ctx->pc = 0x477854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477850u;
        // 0x477854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x477858u;
        goto label_fallthrough_0x477850;
    }
    ctx->pc = 0x477850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477850u;
        // 0x477854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x477850:
    ctx->pc = 0x477858u;
}
