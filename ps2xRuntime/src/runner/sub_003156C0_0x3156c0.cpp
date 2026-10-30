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

// Function: sub_003156C0
// Address: 0x3156c0 - 0x315820
void sub_003156C0_0x3156c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003156C0_0x3156c0");
#endif

    switch (ctx->pc) {
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        default: break;
    }

    ctx->pc = 0x3156c0u;

label_3156c0:
    // 0x3156c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3156c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3156c4:
    // 0x3156c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3156c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3156c8:
    // 0x3156c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3156c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3156cc:
    // 0x3156cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3156ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3156d0:
    // 0x3156d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3156d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3156d4:
    // 0x3156d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3156d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3156d8:
    // 0x3156d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3156d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3156dc:
    // 0x3156dc: 0xc05959e  jal         func_165678
label_3156e0:
    if (ctx->pc == 0x3156E0u) {
        ctx->pc = 0x3156E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156DCu;
        // 0x3156e0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156E4u;
        goto label_3156e4;
    }
    ctx->pc = 0x3156DCu;
    SET_GPR_U32(ctx, 31, 0x3156E4u);
    ctx->pc = 0x3156E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156DCu;
    // 0x3156e0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3156DCu, 0x3156E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156E4u;
label_3156e4:
    // 0x3156e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3156e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3156e8:
    // 0x3156e8: 0x52400047  beql        $s2, $zero, . + 4 + (0x47 << 2)
label_3156ec:
    if (ctx->pc == 0x3156ECu) {
        ctx->pc = 0x3156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156E8u;
        // 0x3156ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156F0u;
        goto label_3156f0;
    }
    ctx->pc = 0x3156E8u;
    {
        const bool branch_taken_0x3156e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3156e8) {
            ctx->pc = 0x3156ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3156E8u;
            // 0x3156ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315808u;
            goto label_315808;
        }
    }
    ctx->pc = 0x3156F0u;
label_3156f0:
    // 0x3156f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3156f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3156f4:
    // 0x3156f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3156f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3156f8:
    // 0x3156f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3156fc:
    // 0x3156fc: 0x40f809  jalr        $v0
label_315700:
    if (ctx->pc == 0x315700u) {
        ctx->pc = 0x315700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156FCu;
        // 0x315700: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315704u;
        goto label_315704;
    }
    ctx->pc = 0x3156FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315704u);
        ctx->pc = 0x315700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156FCu;
        // 0x315700: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3156FCu, 0x315704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315704u;
label_315704:
    // 0x315704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315708:
    // 0x315708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31570c:
    // 0x31570c: 0xc08e1a4  jal         func_238690
label_315710:
    if (ctx->pc == 0x315710u) {
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315714u;
        goto label_315714;
    }
    ctx->pc = 0x31570Cu;
    SET_GPR_U32(ctx, 31, 0x315714u);
    ctx->pc = 0x315710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31570Cu;
    // 0x315710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x31570Cu, 0x315714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315714u;
label_315714:
    // 0x315714: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x315714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_315718:
    // 0x315718: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x315718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31571c:
    // 0x31571c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_315720:
    // 0x315720: 0x40f809  jalr        $v0
label_315724:
    if (ctx->pc == 0x315724u) {
        ctx->pc = 0x315724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315720u;
        // 0x315724: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315728u;
        goto label_315728;
    }
    ctx->pc = 0x315720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315728u);
        ctx->pc = 0x315724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315720u;
        // 0x315724: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315720u, 0x315728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315728u;
label_315728:
    // 0x315728: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x315728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_31572c:
    // 0x31572c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315730:
    // 0x315730: 0xc08e1a4  jal         func_238690
label_315734:
    if (ctx->pc == 0x315734u) {
        ctx->pc = 0x315734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315730u;
        // 0x315734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315738u;
        goto label_315738;
    }
    ctx->pc = 0x315730u;
    SET_GPR_U32(ctx, 31, 0x315738u);
    ctx->pc = 0x315734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315730u;
    // 0x315734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x315730u, 0x315738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315738u;
label_315738:
    // 0x315738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31573c:
    // 0x31573c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_315740:
    // 0x315740: 0xa24301b2  sb          $v1, 0x1B2($s2)
    ctx->pc = 0x315740u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 3));
label_315744:
    // 0x315744: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x315744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_315748:
    // 0x315748: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x315748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_31574c:
    // 0x31574c: 0x84500120  lh          $s0, 0x120($v0)
    ctx->pc = 0x31574cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_315750:
    // 0x315750: 0xc067b9c  jal         func_19EE70
label_315754:
    if (ctx->pc == 0x315754u) {
        ctx->pc = 0x315754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315750u;
        // 0x315754: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315758u;
        goto label_315758;
    }
    ctx->pc = 0x315750u;
    SET_GPR_U32(ctx, 31, 0x315758u);
    ctx->pc = 0x315754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315750u;
    // 0x315754: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x315750u, 0x315758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315758u;
label_315758:
    // 0x315758: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x315758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31575c:
    // 0x31575c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315760:
    // 0x315760: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x315760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315764:
    // 0x315764: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x315764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315768:
    // 0x315768: 0x60f809  jalr        $v1
label_31576c:
    if (ctx->pc == 0x31576Cu) {
        ctx->pc = 0x31576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315768u;
        // 0x31576c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315770u;
        goto label_315770;
    }
    ctx->pc = 0x315768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x315770u);
        ctx->pc = 0x31576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315768u;
        // 0x31576c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315768u, 0x315770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315770u;
label_315770:
    // 0x315770: 0xc05959e  jal         func_165678
label_315774:
    if (ctx->pc == 0x315774u) {
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315778u;
        goto label_315778;
    }
    ctx->pc = 0x315770u;
    SET_GPR_U32(ctx, 31, 0x315778u);
    ctx->pc = 0x315774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315770u;
    // 0x315774: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315770u, 0x315778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315778u;
label_315778:
    // 0x315778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31577c:
    // 0x31577c: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_315780:
    if (ctx->pc == 0x315780u) {
        ctx->pc = 0x315780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31577Cu;
        // 0x315780: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315784u;
        goto label_315784;
    }
    ctx->pc = 0x31577Cu;
    {
        const bool branch_taken_0x31577c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31577c) {
            ctx->pc = 0x315780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31577Cu;
            // 0x315780: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315808u;
            goto label_315808;
        }
    }
    ctx->pc = 0x315784u;
label_315784:
    // 0x315784: 0xc087502  jal         func_21D408
label_315788:
    if (ctx->pc == 0x315788u) {
        ctx->pc = 0x315788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315784u;
        // 0x315788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31578Cu;
        goto label_31578c;
    }
    ctx->pc = 0x315784u;
    SET_GPR_U32(ctx, 31, 0x31578Cu);
    ctx->pc = 0x315788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315784u;
    // 0x315788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x315784u, 0x31578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31578Cu;
label_31578c:
    // 0x31578c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31578cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315790:
    // 0x315790: 0xc0a3630  jal         func_28D8C0
label_315794:
    if (ctx->pc == 0x315794u) {
        ctx->pc = 0x315794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315790u;
        // 0x315794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315798u;
        goto label_315798;
    }
    ctx->pc = 0x315790u;
    SET_GPR_U32(ctx, 31, 0x315798u);
    ctx->pc = 0x315794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315790u;
    // 0x315794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x315790u, 0x315798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315798u;
label_315798:
    // 0x315798: 0xc0a3628  jal         func_28D8A0
label_31579c:
    if (ctx->pc == 0x31579Cu) {
        ctx->pc = 0x31579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315798u;
        // 0x31579c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157A0u;
        goto label_3157a0;
    }
    ctx->pc = 0x315798u;
    SET_GPR_U32(ctx, 31, 0x3157A0u);
    ctx->pc = 0x31579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315798u;
    // 0x31579c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x315798u, 0x3157A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157A0u;
label_3157a0:
    // 0x3157a0: 0xc0a4e54  jal         func_293950
label_3157a4:
    if (ctx->pc == 0x3157A4u) {
        ctx->pc = 0x3157A8u;
        goto label_3157a8;
    }
    ctx->pc = 0x3157A0u;
    SET_GPR_U32(ctx, 31, 0x3157A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3157A0u, 0x3157A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157A8u;
label_3157a8:
    // 0x3157a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3157a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3157ac:
    // 0x3157ac: 0x52400013  beql        $s2, $zero, . + 4 + (0x13 << 2)
label_3157b0:
    if (ctx->pc == 0x3157B0u) {
        ctx->pc = 0x3157B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157ACu;
        // 0x3157b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157B4u;
        goto label_3157b4;
    }
    ctx->pc = 0x3157ACu;
    {
        const bool branch_taken_0x3157ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3157ac) {
            ctx->pc = 0x3157B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3157ACu;
            // 0x3157b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3157FCu;
            goto label_3157fc;
        }
    }
    ctx->pc = 0x3157B4u;
label_3157b4:
    // 0x3157b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3157b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3157b8:
    // 0x3157b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3157b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3157bc:
    // 0x3157bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3157c0:
    // 0x3157c0: 0x40f809  jalr        $v0
label_3157c4:
    if (ctx->pc == 0x3157C4u) {
        ctx->pc = 0x3157C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157C0u;
        // 0x3157c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157C8u;
        goto label_3157c8;
    }
    ctx->pc = 0x3157C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3157C8u);
        ctx->pc = 0x3157C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157C0u;
        // 0x3157c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3157C0u, 0x3157C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3157C8u;
label_3157c8:
    // 0x3157c8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x3157c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_3157cc:
    // 0x3157cc: 0xc66d003c  lwc1        $f13, 0x3C($s3)
    ctx->pc = 0x3157ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3157d0:
    // 0x3157d0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3157d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3157d4:
    // 0x3157d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3157d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3157d8:
    // 0x3157d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3157d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3157dc:
    // 0x3157dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3157dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3157e0:
    // 0x3157e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3157e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3157e4:
    // 0x3157e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3157e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3157e8:
    // 0x3157e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3157e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3157ec:
    // 0x3157ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3157ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3157f0:
    // 0x3157f0: 0xc0b3102  jal         func_2CC408
label_3157f4:
    if (ctx->pc == 0x3157F4u) {
        ctx->pc = 0x3157F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157F0u;
        // 0x3157f4: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157F8u;
        goto label_3157f8;
    }
    ctx->pc = 0x3157F0u;
    SET_GPR_U32(ctx, 31, 0x3157F8u);
    ctx->pc = 0x3157F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3157F0u;
    // 0x3157f4: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC408u, 0x3157F0u, 0x3157F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3157F8u;
label_3157f8:
    // 0x3157f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3157f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3157fc:
    // 0x3157fc: 0xc0a35d6  jal         func_28D758
label_315800:
    if (ctx->pc == 0x315800u) {
        ctx->pc = 0x315800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157FCu;
        // 0x315800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315804u;
        goto label_315804;
    }
    ctx->pc = 0x3157FCu;
    SET_GPR_U32(ctx, 31, 0x315804u);
    ctx->pc = 0x315800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3157FCu;
    // 0x315800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3157FCu, 0x315804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315804u;
label_315804:
    // 0x315804: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x315804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315808:
    // 0x315808: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x315808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31580c:
    // 0x31580c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31580cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315810:
    // 0x315810: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x315810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315814:
    // 0x315814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_315818:
    // 0x315818: 0x3e00008  jr          $ra
label_31581c:
    if (ctx->pc == 0x31581Cu) {
        ctx->pc = 0x31581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315818u;
        // 0x31581c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315820u;
        goto label_fallthrough_0x315818;
    }
    ctx->pc = 0x315818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315818u;
        // 0x31581c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315818:
    ctx->pc = 0x315820u;
}
