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

// Function: sub_004615D0
// Address: 0x4615d0 - 0x4617d8
void sub_004615D0_0x4615d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004615D0_0x4615d0");
#endif

    switch (ctx->pc) {
        case 0x4615d0u: goto label_4615d0;
        case 0x4615d4u: goto label_4615d4;
        case 0x4615d8u: goto label_4615d8;
        case 0x4615dcu: goto label_4615dc;
        case 0x4615e0u: goto label_4615e0;
        case 0x4615e4u: goto label_4615e4;
        case 0x4615e8u: goto label_4615e8;
        case 0x4615ecu: goto label_4615ec;
        case 0x4615f0u: goto label_4615f0;
        case 0x4615f4u: goto label_4615f4;
        case 0x4615f8u: goto label_4615f8;
        case 0x4615fcu: goto label_4615fc;
        case 0x461600u: goto label_461600;
        case 0x461604u: goto label_461604;
        case 0x461608u: goto label_461608;
        case 0x46160cu: goto label_46160c;
        case 0x461610u: goto label_461610;
        case 0x461614u: goto label_461614;
        case 0x461618u: goto label_461618;
        case 0x46161cu: goto label_46161c;
        case 0x461620u: goto label_461620;
        case 0x461624u: goto label_461624;
        case 0x461628u: goto label_461628;
        case 0x46162cu: goto label_46162c;
        case 0x461630u: goto label_461630;
        case 0x461634u: goto label_461634;
        case 0x461638u: goto label_461638;
        case 0x46163cu: goto label_46163c;
        case 0x461640u: goto label_461640;
        case 0x461644u: goto label_461644;
        case 0x461648u: goto label_461648;
        case 0x46164cu: goto label_46164c;
        case 0x461650u: goto label_461650;
        case 0x461654u: goto label_461654;
        case 0x461658u: goto label_461658;
        case 0x46165cu: goto label_46165c;
        case 0x461660u: goto label_461660;
        case 0x461664u: goto label_461664;
        case 0x461668u: goto label_461668;
        case 0x46166cu: goto label_46166c;
        case 0x461670u: goto label_461670;
        case 0x461674u: goto label_461674;
        case 0x461678u: goto label_461678;
        case 0x46167cu: goto label_46167c;
        case 0x461680u: goto label_461680;
        case 0x461684u: goto label_461684;
        case 0x461688u: goto label_461688;
        case 0x46168cu: goto label_46168c;
        case 0x461690u: goto label_461690;
        case 0x461694u: goto label_461694;
        case 0x461698u: goto label_461698;
        case 0x46169cu: goto label_46169c;
        case 0x4616a0u: goto label_4616a0;
        case 0x4616a4u: goto label_4616a4;
        case 0x4616a8u: goto label_4616a8;
        case 0x4616acu: goto label_4616ac;
        case 0x4616b0u: goto label_4616b0;
        case 0x4616b4u: goto label_4616b4;
        case 0x4616b8u: goto label_4616b8;
        case 0x4616bcu: goto label_4616bc;
        case 0x4616c0u: goto label_4616c0;
        case 0x4616c4u: goto label_4616c4;
        case 0x4616c8u: goto label_4616c8;
        case 0x4616ccu: goto label_4616cc;
        case 0x4616d0u: goto label_4616d0;
        case 0x4616d4u: goto label_4616d4;
        case 0x4616d8u: goto label_4616d8;
        case 0x4616dcu: goto label_4616dc;
        case 0x4616e0u: goto label_4616e0;
        case 0x4616e4u: goto label_4616e4;
        case 0x4616e8u: goto label_4616e8;
        case 0x4616ecu: goto label_4616ec;
        case 0x4616f0u: goto label_4616f0;
        case 0x4616f4u: goto label_4616f4;
        case 0x4616f8u: goto label_4616f8;
        case 0x4616fcu: goto label_4616fc;
        case 0x461700u: goto label_461700;
        case 0x461704u: goto label_461704;
        case 0x461708u: goto label_461708;
        case 0x46170cu: goto label_46170c;
        case 0x461710u: goto label_461710;
        case 0x461714u: goto label_461714;
        case 0x461718u: goto label_461718;
        case 0x46171cu: goto label_46171c;
        case 0x461720u: goto label_461720;
        case 0x461724u: goto label_461724;
        case 0x461728u: goto label_461728;
        case 0x46172cu: goto label_46172c;
        case 0x461730u: goto label_461730;
        case 0x461734u: goto label_461734;
        case 0x461738u: goto label_461738;
        case 0x46173cu: goto label_46173c;
        case 0x461740u: goto label_461740;
        case 0x461744u: goto label_461744;
        case 0x461748u: goto label_461748;
        case 0x46174cu: goto label_46174c;
        case 0x461750u: goto label_461750;
        case 0x461754u: goto label_461754;
        case 0x461758u: goto label_461758;
        case 0x46175cu: goto label_46175c;
        case 0x461760u: goto label_461760;
        case 0x461764u: goto label_461764;
        case 0x461768u: goto label_461768;
        case 0x46176cu: goto label_46176c;
        case 0x461770u: goto label_461770;
        case 0x461774u: goto label_461774;
        case 0x461778u: goto label_461778;
        case 0x46177cu: goto label_46177c;
        case 0x461780u: goto label_461780;
        case 0x461784u: goto label_461784;
        case 0x461788u: goto label_461788;
        case 0x46178cu: goto label_46178c;
        case 0x461790u: goto label_461790;
        case 0x461794u: goto label_461794;
        case 0x461798u: goto label_461798;
        case 0x46179cu: goto label_46179c;
        case 0x4617a0u: goto label_4617a0;
        case 0x4617a4u: goto label_4617a4;
        case 0x4617a8u: goto label_4617a8;
        case 0x4617acu: goto label_4617ac;
        case 0x4617b0u: goto label_4617b0;
        case 0x4617b4u: goto label_4617b4;
        case 0x4617b8u: goto label_4617b8;
        case 0x4617bcu: goto label_4617bc;
        case 0x4617c0u: goto label_4617c0;
        case 0x4617c4u: goto label_4617c4;
        case 0x4617c8u: goto label_4617c8;
        case 0x4617ccu: goto label_4617cc;
        case 0x4617d0u: goto label_4617d0;
        case 0x4617d4u: goto label_4617d4;
        default: break;
    }

    ctx->pc = 0x4615d0u;

label_4615d0:
    // 0x4615d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4615d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4615d4:
    // 0x4615d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4615d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4615d8:
    // 0x4615d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4615d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4615dc:
    // 0x4615dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4615dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4615e0:
    // 0x4615e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4615e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4615e4:
    // 0x4615e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4615e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4615e8:
    // 0x4615e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4615e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4615ec:
    // 0x4615ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4615ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4615f0:
    // 0x4615f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4615f4:
    if (ctx->pc == 0x4615F4u) {
        ctx->pc = 0x4615F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4615F0u;
        // 0x4615f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4615F8u;
        goto label_4615f8;
    }
    ctx->pc = 0x4615F0u;
    {
        const bool branch_taken_0x4615f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4615F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4615F0u;
        // 0x4615f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4615f0) {
            ctx->pc = 0x461668u;
            goto label_461668;
        }
    }
    ctx->pc = 0x4615F8u;
label_4615f8:
    // 0x4615f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4615f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4615fc:
    // 0x4615fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4615fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461600:
    // 0x461600: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x461600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_461604:
    // 0x461604: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x461604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_461608:
    // 0x461608: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_46160c:
    if (ctx->pc == 0x46160Cu) {
        ctx->pc = 0x46160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461608u;
        // 0x46160c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461610u;
        goto label_461610;
    }
    ctx->pc = 0x461608u;
    {
        const bool branch_taken_0x461608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x46160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461608u;
        // 0x46160c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461608) {
            ctx->pc = 0x461638u;
            goto label_461638;
        }
    }
    ctx->pc = 0x461610u;
label_461610:
    // 0x461610: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x461610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_461614:
    // 0x461614: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x461614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_461618:
    // 0x461618: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x461618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_46161c:
    // 0x46161c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x46161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_461620:
    // 0x461620: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x461620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_461624:
    // 0x461624: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_461628:
    if (ctx->pc == 0x461628u) {
        ctx->pc = 0x461628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461624u;
        // 0x461628: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46162Cu;
        goto label_46162c;
    }
    ctx->pc = 0x461624u;
    {
        const bool branch_taken_0x461624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461624u;
        // 0x461628: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461624) {
            ctx->pc = 0x461668u;
            goto label_461668;
        }
    }
    ctx->pc = 0x46162Cu;
label_46162c:
    // 0x46162c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_461630:
    // 0x461630: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
label_461634:
    if (ctx->pc == 0x461634u) {
        ctx->pc = 0x461634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461630u;
        // 0x461634: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461638u;
        goto label_461638;
    }
    ctx->pc = 0x461630u;
    {
        const bool branch_taken_0x461630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x461630) {
            ctx->pc = 0x461634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x461630u;
            // 0x461634: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x461620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461620;
        }
    }
    ctx->pc = 0x461638u;
label_461638:
    // 0x461638: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x461638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_46163c:
    // 0x46163c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_461640:
    if (ctx->pc == 0x461640u) {
        ctx->pc = 0x461640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46163Cu;
        // 0x461640: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461644u;
        goto label_461644;
    }
    ctx->pc = 0x46163Cu;
    {
        const bool branch_taken_0x46163c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46163Cu;
        // 0x461640: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46163c) {
            ctx->pc = 0x461668u;
            goto label_461668;
        }
    }
    ctx->pc = 0x461644u;
label_461644:
    // 0x461644: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x461644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461648:
    // 0x461648: 0xc11eff2  jal         func_47BFC8
label_46164c:
    if (ctx->pc == 0x46164Cu) {
        ctx->pc = 0x46164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461648u;
        // 0x46164c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461650u;
        goto label_461650;
    }
    ctx->pc = 0x461648u;
    SET_GPR_U32(ctx, 31, 0x461650u);
    ctx->pc = 0x46164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461648u;
    // 0x46164c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x461648u, 0x461650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461650u;
label_461650:
    // 0x461650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x461650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_461654:
    // 0x461654: 0xc11f024  jal         func_47C090
label_461658:
    if (ctx->pc == 0x461658u) {
        ctx->pc = 0x461658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461654u;
        // 0x461658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46165Cu;
        goto label_46165c;
    }
    ctx->pc = 0x461654u;
    SET_GPR_U32(ctx, 31, 0x46165Cu);
    ctx->pc = 0x461658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461654u;
    // 0x461658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x461654u, 0x46165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46165Cu;
label_46165c:
    // 0x46165c: 0x10000056  b           . + 4 + (0x56 << 2)
label_461660:
    if (ctx->pc == 0x461660u) {
        ctx->pc = 0x461660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46165Cu;
        // 0x461660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461664u;
        goto label_461664;
    }
    ctx->pc = 0x46165Cu;
    {
        const bool branch_taken_0x46165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46165Cu;
        // 0x461660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46165c) {
            ctx->pc = 0x4617B8u;
            goto label_4617b8;
        }
    }
    ctx->pc = 0x461664u;
label_461664:
    // 0x461664: 0x0  nop
    ctx->pc = 0x461664u;
    // NOP
label_461668:
    // 0x461668: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x461668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46166c:
    // 0x46166c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x46166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_461670:
    // 0x461670: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
label_461674:
    if (ctx->pc == 0x461674u) {
        ctx->pc = 0x461674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461670u;
        // 0x461674: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461678u;
        goto label_461678;
    }
    ctx->pc = 0x461670u;
    {
        const bool branch_taken_0x461670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x461670) {
            ctx->pc = 0x461674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x461670u;
            // 0x461674: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4616ACu;
            goto label_4616ac;
        }
    }
    ctx->pc = 0x461678u;
label_461678:
    // 0x461678: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x461678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46167c:
    // 0x46167c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x46167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_461680:
    // 0x461680: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x461680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_461684:
    // 0x461684: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x461684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_461688:
    // 0x461688: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x461688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46168c:
    // 0x46168c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x46168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461690:
    // 0x461690: 0x8c62ae28  lw          $v0, -0x51D8($v1)
    ctx->pc = 0x461690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_461694:
    // 0x461694: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x461694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_461698:
    // 0x461698: 0x2812  mflo        $a1
    ctx->pc = 0x461698u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_46169c:
    // 0x46169c: 0x40f809  jalr        $v0
label_4616a0:
    if (ctx->pc == 0x4616A0u) {
        ctx->pc = 0x4616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46169Cu;
        // 0x4616a0: 0x34c60131  ori         $a2, $a2, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4616A4u;
        goto label_4616a4;
    }
    ctx->pc = 0x46169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4616A4u);
        ctx->pc = 0x4616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46169Cu;
        // 0x4616a0: 0x34c60131  ori         $a2, $a2, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46169Cu, 0x4616A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4616A4u;
label_4616a4:
    // 0x4616a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4616a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4616a8:
    // 0x4616a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4616a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4616ac:
    // 0x4616ac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4616acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4616b0:
    // 0x4616b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4616b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4616b4:
    // 0x4616b4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4616b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4616b8:
    // 0x4616b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4616bc:
    // 0x4616bc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4616bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4616c0:
    // 0x4616c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4616c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4616c4:
    // 0x4616c4: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x4616c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4616c8:
    // 0x4616c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4616c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4616cc:
    // 0x4616cc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4616ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4616d0:
    // 0x4616d0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4616d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4616d4:
    // 0x4616d4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4616d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4616d8:
    // 0x4616d8: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x4616d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_4616dc:
    // 0x4616dc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4616dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4616e0:
    // 0x4616e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4616e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4616e4:
    // 0x4616e4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x4616e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_4616e8:
    // 0x4616e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4616e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4616ec:
    // 0x4616ec: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_4616f0:
    if (ctx->pc == 0x4616F0u) {
        ctx->pc = 0x4616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4616ECu;
        // 0x4616f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4616F4u;
        goto label_4616f4;
    }
    ctx->pc = 0x4616ECu;
    {
        const bool branch_taken_0x4616ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4616ECu;
        // 0x4616f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4616ec) {
            ctx->pc = 0x4617B8u;
            goto label_4617b8;
        }
    }
    ctx->pc = 0x4616F4u;
label_4616f4:
    // 0x4616f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4616f8:
    if (ctx->pc == 0x4616F8u) {
        ctx->pc = 0x4616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4616F4u;
        // 0x4616f8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4616FCu;
        goto label_4616fc;
    }
    ctx->pc = 0x4616F4u;
    {
        const bool branch_taken_0x4616f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4616F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4616F4u;
        // 0x4616f8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4616f4) {
            ctx->pc = 0x461710u;
            goto label_461710;
        }
    }
    ctx->pc = 0x4616FCu;
label_4616fc:
    // 0x4616fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4616fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461700:
    // 0x461700: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_461704:
    if (ctx->pc == 0x461704u) {
        ctx->pc = 0x461704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461700u;
        // 0x461704: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461708u;
        goto label_461708;
    }
    ctx->pc = 0x461700u;
    {
        const bool branch_taken_0x461700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x461704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461700u;
        // 0x461704: 0x24020131  addiu       $v0, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461700) {
            ctx->pc = 0x461720u;
            goto label_461720;
        }
    }
    ctx->pc = 0x461708u;
label_461708:
    // 0x461708: 0x10000025  b           . + 4 + (0x25 << 2)
label_46170c:
    if (ctx->pc == 0x46170Cu) {
        ctx->pc = 0x46170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461708u;
        // 0x46170c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461710u;
        goto label_461710;
    }
    ctx->pc = 0x461708u;
    {
        const bool branch_taken_0x461708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461708u;
        // 0x46170c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461708) {
            ctx->pc = 0x4617A0u;
            goto label_4617a0;
        }
    }
    ctx->pc = 0x461710u;
label_461710:
    // 0x461710: 0xc11869a  jal         func_461A68
label_461714:
    if (ctx->pc == 0x461714u) {
        ctx->pc = 0x461714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461710u;
        // 0x461714: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461718u;
        goto label_461718;
    }
    ctx->pc = 0x461710u;
    SET_GPR_U32(ctx, 31, 0x461718u);
    ctx->pc = 0x461714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461710u;
    // 0x461714: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461A68u, 0x461710u, 0x461718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461718u;
label_461718:
    // 0x461718: 0x1000001e  b           . + 4 + (0x1E << 2)
label_46171c:
    if (ctx->pc == 0x46171Cu) {
        ctx->pc = 0x46171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461718u;
        // 0x46171c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461720u;
        goto label_461720;
    }
    ctx->pc = 0x461718u;
    {
        const bool branch_taken_0x461718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461718u;
        // 0x46171c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461718) {
            ctx->pc = 0x461794u;
            goto label_461794;
        }
    }
    ctx->pc = 0x461720u;
label_461720:
    // 0x461720: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_461724:
    if (ctx->pc == 0x461724u) {
        ctx->pc = 0x461724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461720u;
        // 0x461724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461728u;
        goto label_461728;
    }
    ctx->pc = 0x461720u;
    {
        const bool branch_taken_0x461720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x461724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461720u;
        // 0x461724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461720) {
            ctx->pc = 0x461784u;
            goto label_461784;
        }
    }
    ctx->pc = 0x461728u;
label_461728:
    // 0x461728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x461728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_46172c:
    // 0x46172c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_461730:
    if (ctx->pc == 0x461730u) {
        ctx->pc = 0x461730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46172Cu;
        // 0x461730: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461734u;
        goto label_461734;
    }
    ctx->pc = 0x46172Cu;
    {
        const bool branch_taken_0x46172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46172Cu;
        // 0x461730: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46172c) {
            ctx->pc = 0x461788u;
            goto label_461788;
        }
    }
    ctx->pc = 0x461734u;
label_461734:
    // 0x461734: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x461734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461738:
    // 0x461738: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x461738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_46173c:
    // 0x46173c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_461740:
    if (ctx->pc == 0x461740u) {
        ctx->pc = 0x461740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46173Cu;
        // 0x461740: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461744u;
        goto label_461744;
    }
    ctx->pc = 0x46173Cu;
    {
        const bool branch_taken_0x46173c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x461740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46173Cu;
        // 0x461740: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46173c) {
            ctx->pc = 0x461750u;
            goto label_461750;
        }
    }
    ctx->pc = 0x461744u;
label_461744:
    // 0x461744: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x461744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_461748:
    // 0x461748: 0x1000000f  b           . + 4 + (0xF << 2)
label_46174c:
    if (ctx->pc == 0x46174Cu) {
        ctx->pc = 0x46174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461748u;
        // 0x46174c: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461750u;
        goto label_461750;
    }
    ctx->pc = 0x461748u;
    {
        const bool branch_taken_0x461748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461748u;
        // 0x46174c: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461748) {
            ctx->pc = 0x461788u;
            goto label_461788;
        }
    }
    ctx->pc = 0x461750u;
label_461750:
    // 0x461750: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x461750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_461754:
    // 0x461754: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x461754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_461758:
    // 0x461758: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_46175c:
    if (ctx->pc == 0x46175Cu) {
        ctx->pc = 0x46175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461758u;
        // 0x46175c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461760u;
        goto label_461760;
    }
    ctx->pc = 0x461758u;
    {
        const bool branch_taken_0x461758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461758u;
        // 0x46175c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461758) {
            ctx->pc = 0x461788u;
            goto label_461788;
        }
    }
    ctx->pc = 0x461760u;
label_461760:
    // 0x461760: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x461760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_461764:
    // 0x461764: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x461764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_461768:
    // 0x461768: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x461768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_46176c:
    // 0x46176c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_461770:
    // 0x461770: 0x1483fff8  bne         $a0, $v1, . + 4 + (-0x8 << 2)
label_461774:
    if (ctx->pc == 0x461774u) {
        ctx->pc = 0x461774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461770u;
        // 0x461774: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461778u;
        goto label_461778;
    }
    ctx->pc = 0x461770u;
    {
        const bool branch_taken_0x461770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x461774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461770u;
        // 0x461774: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461770) {
            ctx->pc = 0x461754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461754;
        }
    }
    ctx->pc = 0x461778u;
label_461778:
    // 0x461778: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x461778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_46177c:
    // 0x46177c: 0x10000002  b           . + 4 + (0x2 << 2)
label_461780:
    if (ctx->pc == 0x461780u) {
        ctx->pc = 0x461780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46177Cu;
        // 0x461780: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461784u;
        goto label_461784;
    }
    ctx->pc = 0x46177Cu;
    {
        const bool branch_taken_0x46177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46177Cu;
        // 0x461780: 0xad020010  sw          $v0, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46177c) {
            ctx->pc = 0x461788u;
            goto label_461788;
        }
    }
    ctx->pc = 0x461784u;
label_461784:
    // 0x461784: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x461784u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_461788:
    // 0x461788: 0xc118726  jal         func_461C98
label_46178c:
    if (ctx->pc == 0x46178Cu) {
        ctx->pc = 0x46178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461788u;
        // 0x46178c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x461790u;
        goto label_461790;
    }
    ctx->pc = 0x461788u;
    SET_GPR_U32(ctx, 31, 0x461790u);
    ctx->pc = 0x46178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461788u;
    // 0x46178c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461C98u, 0x461788u, 0x461790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461790u;
label_461790:
    // 0x461790: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x461790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_461794:
    // 0x461794: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x461794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_461798:
    // 0x461798: 0x10000007  b           . + 4 + (0x7 << 2)
label_46179c:
    if (ctx->pc == 0x46179Cu) {
        ctx->pc = 0x46179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461798u;
        // 0x46179c: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4617A0u;
        goto label_4617a0;
    }
    ctx->pc = 0x461798u;
    {
        const bool branch_taken_0x461798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461798u;
        // 0x46179c: 0xac430030  sw          $v1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461798) {
            ctx->pc = 0x4617B8u;
            goto label_4617b8;
        }
    }
    ctx->pc = 0x4617A0u;
label_4617a0:
    // 0x4617a0: 0xc11eff2  jal         func_47BFC8
label_4617a4:
    if (ctx->pc == 0x4617A4u) {
        ctx->pc = 0x4617A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4617A0u;
        // 0x4617a4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4617A8u;
        goto label_4617a8;
    }
    ctx->pc = 0x4617A0u;
    SET_GPR_U32(ctx, 31, 0x4617A8u);
    ctx->pc = 0x4617A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4617A0u;
    // 0x4617a4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4617A0u, 0x4617A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4617A8u;
label_4617a8:
    // 0x4617a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4617a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_4617ac:
    // 0x4617ac: 0xc11f024  jal         func_47C090
label_4617b0:
    if (ctx->pc == 0x4617B0u) {
        ctx->pc = 0x4617B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4617ACu;
        // 0x4617b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4617B4u;
        goto label_4617b4;
    }
    ctx->pc = 0x4617ACu;
    SET_GPR_U32(ctx, 31, 0x4617B4u);
    ctx->pc = 0x4617B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4617ACu;
    // 0x4617b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4617ACu, 0x4617B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4617B4u;
label_4617b4:
    // 0x4617b4: 0x0  nop
    ctx->pc = 0x4617b4u;
    // NOP
label_4617b8:
    // 0x4617b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4617b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4617bc:
    // 0x4617bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4617bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4617c0:
    // 0x4617c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4617c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4617c4:
    // 0x4617c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4617c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4617c8:
    // 0x4617c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4617c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4617cc:
    // 0x4617cc: 0x3e00008  jr          $ra
label_4617d0:
    if (ctx->pc == 0x4617D0u) {
        ctx->pc = 0x4617D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4617CCu;
        // 0x4617d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4617D4u;
        goto label_4617d4;
    }
    ctx->pc = 0x4617CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4617D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4617CCu;
        // 0x4617d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4617CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4617D4u;
label_4617d4:
    // 0x4617d4: 0x0  nop
    ctx->pc = 0x4617d4u;
    // NOP
    ctx->pc = 0x4617d8u;
}
