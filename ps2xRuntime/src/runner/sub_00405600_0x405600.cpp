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

// Function: sub_00405600
// Address: 0x405600 - 0x4058c8
void sub_00405600_0x405600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405600_0x405600");
#endif

    switch (ctx->pc) {
        case 0x405600u: goto label_405600;
        case 0x405604u: goto label_405604;
        case 0x405608u: goto label_405608;
        case 0x40560cu: goto label_40560c;
        case 0x405610u: goto label_405610;
        case 0x405614u: goto label_405614;
        case 0x405618u: goto label_405618;
        case 0x40561cu: goto label_40561c;
        case 0x405620u: goto label_405620;
        case 0x405624u: goto label_405624;
        case 0x405628u: goto label_405628;
        case 0x40562cu: goto label_40562c;
        case 0x405630u: goto label_405630;
        case 0x405634u: goto label_405634;
        case 0x405638u: goto label_405638;
        case 0x40563cu: goto label_40563c;
        case 0x405640u: goto label_405640;
        case 0x405644u: goto label_405644;
        case 0x405648u: goto label_405648;
        case 0x40564cu: goto label_40564c;
        case 0x405650u: goto label_405650;
        case 0x405654u: goto label_405654;
        case 0x405658u: goto label_405658;
        case 0x40565cu: goto label_40565c;
        case 0x405660u: goto label_405660;
        case 0x405664u: goto label_405664;
        case 0x405668u: goto label_405668;
        case 0x40566cu: goto label_40566c;
        case 0x405670u: goto label_405670;
        case 0x405674u: goto label_405674;
        case 0x405678u: goto label_405678;
        case 0x40567cu: goto label_40567c;
        case 0x405680u: goto label_405680;
        case 0x405684u: goto label_405684;
        case 0x405688u: goto label_405688;
        case 0x40568cu: goto label_40568c;
        case 0x405690u: goto label_405690;
        case 0x405694u: goto label_405694;
        case 0x405698u: goto label_405698;
        case 0x40569cu: goto label_40569c;
        case 0x4056a0u: goto label_4056a0;
        case 0x4056a4u: goto label_4056a4;
        case 0x4056a8u: goto label_4056a8;
        case 0x4056acu: goto label_4056ac;
        case 0x4056b0u: goto label_4056b0;
        case 0x4056b4u: goto label_4056b4;
        case 0x4056b8u: goto label_4056b8;
        case 0x4056bcu: goto label_4056bc;
        case 0x4056c0u: goto label_4056c0;
        case 0x4056c4u: goto label_4056c4;
        case 0x4056c8u: goto label_4056c8;
        case 0x4056ccu: goto label_4056cc;
        case 0x4056d0u: goto label_4056d0;
        case 0x4056d4u: goto label_4056d4;
        case 0x4056d8u: goto label_4056d8;
        case 0x4056dcu: goto label_4056dc;
        case 0x4056e0u: goto label_4056e0;
        case 0x4056e4u: goto label_4056e4;
        case 0x4056e8u: goto label_4056e8;
        case 0x4056ecu: goto label_4056ec;
        case 0x4056f0u: goto label_4056f0;
        case 0x4056f4u: goto label_4056f4;
        case 0x4056f8u: goto label_4056f8;
        case 0x4056fcu: goto label_4056fc;
        case 0x405700u: goto label_405700;
        case 0x405704u: goto label_405704;
        case 0x405708u: goto label_405708;
        case 0x40570cu: goto label_40570c;
        case 0x405710u: goto label_405710;
        case 0x405714u: goto label_405714;
        case 0x405718u: goto label_405718;
        case 0x40571cu: goto label_40571c;
        case 0x405720u: goto label_405720;
        case 0x405724u: goto label_405724;
        case 0x405728u: goto label_405728;
        case 0x40572cu: goto label_40572c;
        case 0x405730u: goto label_405730;
        case 0x405734u: goto label_405734;
        case 0x405738u: goto label_405738;
        case 0x40573cu: goto label_40573c;
        case 0x405740u: goto label_405740;
        case 0x405744u: goto label_405744;
        case 0x405748u: goto label_405748;
        case 0x40574cu: goto label_40574c;
        case 0x405750u: goto label_405750;
        case 0x405754u: goto label_405754;
        case 0x405758u: goto label_405758;
        case 0x40575cu: goto label_40575c;
        case 0x405760u: goto label_405760;
        case 0x405764u: goto label_405764;
        case 0x405768u: goto label_405768;
        case 0x40576cu: goto label_40576c;
        case 0x405770u: goto label_405770;
        case 0x405774u: goto label_405774;
        case 0x405778u: goto label_405778;
        case 0x40577cu: goto label_40577c;
        case 0x405780u: goto label_405780;
        case 0x405784u: goto label_405784;
        case 0x405788u: goto label_405788;
        case 0x40578cu: goto label_40578c;
        case 0x405790u: goto label_405790;
        case 0x405794u: goto label_405794;
        case 0x405798u: goto label_405798;
        case 0x40579cu: goto label_40579c;
        case 0x4057a0u: goto label_4057a0;
        case 0x4057a4u: goto label_4057a4;
        case 0x4057a8u: goto label_4057a8;
        case 0x4057acu: goto label_4057ac;
        case 0x4057b0u: goto label_4057b0;
        case 0x4057b4u: goto label_4057b4;
        case 0x4057b8u: goto label_4057b8;
        case 0x4057bcu: goto label_4057bc;
        case 0x4057c0u: goto label_4057c0;
        case 0x4057c4u: goto label_4057c4;
        case 0x4057c8u: goto label_4057c8;
        case 0x4057ccu: goto label_4057cc;
        case 0x4057d0u: goto label_4057d0;
        case 0x4057d4u: goto label_4057d4;
        case 0x4057d8u: goto label_4057d8;
        case 0x4057dcu: goto label_4057dc;
        case 0x4057e0u: goto label_4057e0;
        case 0x4057e4u: goto label_4057e4;
        case 0x4057e8u: goto label_4057e8;
        case 0x4057ecu: goto label_4057ec;
        case 0x4057f0u: goto label_4057f0;
        case 0x4057f4u: goto label_4057f4;
        case 0x4057f8u: goto label_4057f8;
        case 0x4057fcu: goto label_4057fc;
        case 0x405800u: goto label_405800;
        case 0x405804u: goto label_405804;
        case 0x405808u: goto label_405808;
        case 0x40580cu: goto label_40580c;
        case 0x405810u: goto label_405810;
        case 0x405814u: goto label_405814;
        case 0x405818u: goto label_405818;
        case 0x40581cu: goto label_40581c;
        case 0x405820u: goto label_405820;
        case 0x405824u: goto label_405824;
        case 0x405828u: goto label_405828;
        case 0x40582cu: goto label_40582c;
        case 0x405830u: goto label_405830;
        case 0x405834u: goto label_405834;
        case 0x405838u: goto label_405838;
        case 0x40583cu: goto label_40583c;
        case 0x405840u: goto label_405840;
        case 0x405844u: goto label_405844;
        case 0x405848u: goto label_405848;
        case 0x40584cu: goto label_40584c;
        case 0x405850u: goto label_405850;
        case 0x405854u: goto label_405854;
        case 0x405858u: goto label_405858;
        case 0x40585cu: goto label_40585c;
        case 0x405860u: goto label_405860;
        case 0x405864u: goto label_405864;
        case 0x405868u: goto label_405868;
        case 0x40586cu: goto label_40586c;
        case 0x405870u: goto label_405870;
        case 0x405874u: goto label_405874;
        case 0x405878u: goto label_405878;
        case 0x40587cu: goto label_40587c;
        case 0x405880u: goto label_405880;
        case 0x405884u: goto label_405884;
        case 0x405888u: goto label_405888;
        case 0x40588cu: goto label_40588c;
        case 0x405890u: goto label_405890;
        case 0x405894u: goto label_405894;
        case 0x405898u: goto label_405898;
        case 0x40589cu: goto label_40589c;
        case 0x4058a0u: goto label_4058a0;
        case 0x4058a4u: goto label_4058a4;
        case 0x4058a8u: goto label_4058a8;
        case 0x4058acu: goto label_4058ac;
        case 0x4058b0u: goto label_4058b0;
        case 0x4058b4u: goto label_4058b4;
        case 0x4058b8u: goto label_4058b8;
        case 0x4058bcu: goto label_4058bc;
        case 0x4058c0u: goto label_4058c0;
        case 0x4058c4u: goto label_4058c4;
        default: break;
    }

    ctx->pc = 0x405600u;

label_405600:
    // 0x405600: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x405600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_405604:
    // 0x405604: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x405604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_405608:
    // 0x405608: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x405608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_40560c:
    // 0x40560c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40560cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405610:
    // 0x405610: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x405610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_405614:
    // 0x405614: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x405614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_405618:
    // 0x405618: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x405618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
label_40561c:
    // 0x40561c: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x40561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
label_405620:
    // 0x405620: 0xffbf0840  sd          $ra, 0x840($sp)
    ctx->pc = 0x405620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 31));
label_405624:
    // 0x405624: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x405624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_405628:
    // 0x405628: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_40562c:
    // 0x40562c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x40562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405630:
    // 0x405630: 0x40f809  jalr        $v0
label_405634:
    if (ctx->pc == 0x405634u) {
        ctx->pc = 0x405634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405630u;
        // 0x405634: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405638u;
        goto label_405638;
    }
    ctx->pc = 0x405630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405638u);
        ctx->pc = 0x405634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405630u;
        // 0x405634: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405630u, 0x405638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405638u;
label_405638:
    // 0x405638: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x405638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40563c:
    // 0x40563c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_405640:
    // 0x405640: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x405640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_405644:
    // 0x405644: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x405644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_405648:
    // 0x405648: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x405648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40564c:
    // 0x40564c: 0x0  nop
    ctx->pc = 0x40564cu;
    // NOP
label_405650:
    // 0x405650: 0x0  nop
    ctx->pc = 0x405650u;
    // NOP
label_405654:
    // 0x405654: 0x0  nop
    ctx->pc = 0x405654u;
    // NOP
label_405658:
    // 0x405658: 0x0  nop
    ctx->pc = 0x405658u;
    // NOP
label_40565c:
    // 0x40565c: 0x0  nop
    ctx->pc = 0x40565cu;
    // NOP
label_405660:
    // 0x405660: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_405664:
    if (ctx->pc == 0x405664u) {
        ctx->pc = 0x405664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405660u;
        // 0x405664: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405668u;
        goto label_405668;
    }
    ctx->pc = 0x405660u;
    {
        const bool branch_taken_0x405660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405660u;
        // 0x405664: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405660) {
            ctx->pc = 0x405650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405650;
        }
    }
    ctx->pc = 0x405668u;
label_405668:
    // 0x405668: 0xc138ddc  jal         func_4E3770
label_40566c:
    if (ctx->pc == 0x40566Cu) {
        ctx->pc = 0x405670u;
        goto label_405670;
    }
    ctx->pc = 0x405668u;
    SET_GPR_U32(ctx, 31, 0x405670u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x405668u, 0x405670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405670u;
label_405670:
    // 0x405670: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x405670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_405674:
    // 0x405674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_405678:
    if (ctx->pc == 0x405678u) {
        ctx->pc = 0x405678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405674u;
        // 0x405678: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40567Cu;
        goto label_40567c;
    }
    ctx->pc = 0x405674u;
    {
        const bool branch_taken_0x405674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405674u;
        // 0x405678: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405674) {
            ctx->pc = 0x405690u;
            goto label_405690;
        }
    }
    ctx->pc = 0x40567Cu;
label_40567c:
    // 0x40567c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x40567cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_405680:
    // 0x405680: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x405680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_405684:
    // 0x405684: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x405684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_405688:
    // 0x405688: 0xc045c82  jal         func_117208
label_40568c:
    if (ctx->pc == 0x40568Cu) {
        ctx->pc = 0x40568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405688u;
        // 0x40568c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405690u;
        goto label_405690;
    }
    ctx->pc = 0x405688u;
    SET_GPR_U32(ctx, 31, 0x405690u);
    ctx->pc = 0x40568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405688u;
    // 0x40568c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117208u, 0x405688u, 0x405690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405690u;
label_405690:
    // 0x405690: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x405690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_405694:
    // 0x405694: 0xc0e858c  jal         func_3A1630
label_405698:
    if (ctx->pc == 0x405698u) {
        ctx->pc = 0x405698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405694u;
        // 0x405698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40569Cu;
        goto label_40569c;
    }
    ctx->pc = 0x405694u;
    SET_GPR_U32(ctx, 31, 0x40569Cu);
    ctx->pc = 0x405698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405694u;
    // 0x405698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405694u, 0x40569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40569Cu;
label_40569c:
    // 0x40569c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x40569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4056a0:
    // 0x4056a0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4056a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4056a4:
    // 0x4056a4: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
label_4056a8:
    if (ctx->pc == 0x4056A8u) {
        ctx->pc = 0x4056A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056A4u;
        // 0x4056a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4056ACu;
        goto label_4056ac;
    }
    ctx->pc = 0x4056A4u;
    {
        const bool branch_taken_0x4056a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4056a4) {
            ctx->pc = 0x4056A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4056A4u;
            // 0x4056a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40573Cu;
            goto label_40573c;
        }
    }
    ctx->pc = 0x4056ACu;
label_4056ac:
    // 0x4056ac: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x4056acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4056b0:
    // 0x4056b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4056b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4056b4:
    // 0x4056b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x4056b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4056b8:
    // 0x4056b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4056bc:
    // 0x4056bc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4056bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4056c0:
    // 0x4056c0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4056c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4056c4:
    // 0x4056c4: 0x60f809  jalr        $v1
label_4056c8:
    if (ctx->pc == 0x4056C8u) {
        ctx->pc = 0x4056C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056C4u;
        // 0x4056c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4056CCu;
        goto label_4056cc;
    }
    ctx->pc = 0x4056C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4056CCu);
        ctx->pc = 0x4056C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056C4u;
        // 0x4056c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4056C4u, 0x4056CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4056CCu;
label_4056cc:
    // 0x4056cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4056ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4056d0:
    // 0x4056d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4056d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4056d4:
    // 0x4056d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4056d8:
    // 0x4056d8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x4056d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_4056dc:
    // 0x4056dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4056dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4056e0:
    // 0x4056e0: 0xc0e8b36  jal         func_3A2CD8
label_4056e4:
    if (ctx->pc == 0x4056E4u) {
        ctx->pc = 0x4056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056E0u;
        // 0x4056e4: 0xe7a00830  swc1        $f0, 0x830($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2096), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4056E8u;
        goto label_4056e8;
    }
    ctx->pc = 0x4056E0u;
    SET_GPR_U32(ctx, 31, 0x4056E8u);
    ctx->pc = 0x4056E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4056E0u;
    // 0x4056e4: 0xe7a00830  swc1        $f0, 0x830($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2096), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x4056E0u, 0x4056E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4056E8u;
label_4056e8:
    // 0x4056e8: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x4056e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_4056ec:
    // 0x4056ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4056ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4056f0:
    // 0x4056f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4056f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4056f4:
    // 0x4056f4: 0xc0e90ca  jal         func_3A4328
label_4056f8:
    if (ctx->pc == 0x4056F8u) {
        ctx->pc = 0x4056F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056F4u;
        // 0x4056f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4056FCu;
        goto label_4056fc;
    }
    ctx->pc = 0x4056F4u;
    SET_GPR_U32(ctx, 31, 0x4056FCu);
    ctx->pc = 0x4056F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4056F4u;
    // 0x4056f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x4056F4u, 0x4056FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4056FCu;
label_4056fc:
    // 0x4056fc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x4056fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_405700:
    // 0x405700: 0x27a70830  addiu       $a3, $sp, 0x830
    ctx->pc = 0x405700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_405704:
    // 0x405704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405708:
    // 0x405708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x405708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40570c:
    // 0x40570c: 0xc0e723e  jal         func_39C8F8
label_405710:
    if (ctx->pc == 0x405710u) {
        ctx->pc = 0x405710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40570Cu;
        // 0x405710: 0x24c67620  addiu       $a2, $a2, 0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405714u;
        goto label_405714;
    }
    ctx->pc = 0x40570Cu;
    SET_GPR_U32(ctx, 31, 0x405714u);
    ctx->pc = 0x405710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40570Cu;
    // 0x405710: 0x24c67620  addiu       $a2, $a2, 0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C8F8u, 0x40570Cu, 0x405714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405714u;
label_405714:
    // 0x405714: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x405714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_405718:
    // 0x405718: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x405718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_40571c:
    // 0x40571c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x40571cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_405720:
    // 0x405720: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x405720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_405724:
    // 0x405724: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x405724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_405728:
    // 0x405728: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x405728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_40572c:
    // 0x40572c: 0x60f809  jalr        $v1
label_405730:
    if (ctx->pc == 0x405730u) {
        ctx->pc = 0x405730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40572Cu;
        // 0x405730: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405734u;
        goto label_405734;
    }
    ctx->pc = 0x40572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x405734u);
        ctx->pc = 0x405730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40572Cu;
        // 0x405730: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40572Cu, 0x405734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405734u;
label_405734:
    // 0x405734: 0x1000005a  b           . + 4 + (0x5A << 2)
label_405738:
    if (ctx->pc == 0x405738u) {
        ctx->pc = 0x405738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405734u;
        // 0x405738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40573Cu;
        goto label_40573c;
    }
    ctx->pc = 0x405734u;
    {
        const bool branch_taken_0x405734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405734u;
        // 0x405738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405734) {
            ctx->pc = 0x4058A0u;
            goto label_4058a0;
        }
    }
    ctx->pc = 0x40573Cu;
label_40573c:
    // 0x40573c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40573cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_405740:
    // 0x405740: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x405740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_405744:
    // 0x405744: 0x40f809  jalr        $v0
label_405748:
    if (ctx->pc == 0x405748u) {
        ctx->pc = 0x405748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405744u;
        // 0x405748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40574Cu;
        goto label_40574c;
    }
    ctx->pc = 0x405744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40574Cu);
        ctx->pc = 0x405748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405744u;
        // 0x405748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405744u, 0x40574Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40574Cu;
label_40574c:
    // 0x40574c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x40574cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405750:
    // 0x405750: 0x32820040  andi        $v0, $s4, 0x40
    ctx->pc = 0x405750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_405754:
    // 0x405754: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_405758:
    if (ctx->pc == 0x405758u) {
        ctx->pc = 0x405758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405754u;
        // 0x405758: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40575Cu;
        goto label_40575c;
    }
    ctx->pc = 0x405754u;
    {
        const bool branch_taken_0x405754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405754u;
        // 0x405758: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405754) {
            ctx->pc = 0x405820u;
            goto label_405820;
        }
    }
    ctx->pc = 0x40575Cu;
label_40575c:
    // 0x40575c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x40575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_405760:
    // 0x405760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x405760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_405764:
    // 0x405764: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_405768:
    if (ctx->pc == 0x405768u) {
        ctx->pc = 0x405768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405764u;
        // 0x405768: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40576Cu;
        goto label_40576c;
    }
    ctx->pc = 0x405764u;
    {
        const bool branch_taken_0x405764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405764u;
        // 0x405768: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405764) {
            ctx->pc = 0x405820u;
            goto label_405820;
        }
    }
    ctx->pc = 0x40576Cu;
label_40576c:
    // 0x40576c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x40576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_405770:
    // 0x405770: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x405770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_405774:
    // 0x405774: 0x27b00420  addiu       $s0, $sp, 0x420
    ctx->pc = 0x405774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_405778:
    // 0x405778: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x405778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40577c:
    // 0x40577c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40577cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_405780:
    // 0x405780: 0x0  nop
    ctx->pc = 0x405780u;
    // NOP
label_405784:
    // 0x405784: 0x0  nop
    ctx->pc = 0x405784u;
    // NOP
label_405788:
    // 0x405788: 0x0  nop
    ctx->pc = 0x405788u;
    // NOP
label_40578c:
    // 0x40578c: 0x0  nop
    ctx->pc = 0x40578cu;
    // NOP
label_405790:
    // 0x405790: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_405794:
    if (ctx->pc == 0x405794u) {
        ctx->pc = 0x405794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405790u;
        // 0x405794: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405798u;
        goto label_405798;
    }
    ctx->pc = 0x405790u;
    {
        const bool branch_taken_0x405790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405790u;
        // 0x405794: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405790) {
            ctx->pc = 0x405780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405780;
        }
    }
    ctx->pc = 0x405798u;
label_405798:
    // 0x405798: 0xc138ddc  jal         func_4E3770
label_40579c:
    if (ctx->pc == 0x40579Cu) {
        ctx->pc = 0x40579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405798u;
        // 0x40579c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057A0u;
        goto label_4057a0;
    }
    ctx->pc = 0x405798u;
    SET_GPR_U32(ctx, 31, 0x4057A0u);
    ctx->pc = 0x40579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405798u;
    // 0x40579c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x405798u, 0x4057A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057A0u;
label_4057a0:
    // 0x4057a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057a4:
    // 0x4057a4: 0xc0ea176  jal         func_3A85D8
label_4057a8:
    if (ctx->pc == 0x4057A8u) {
        ctx->pc = 0x4057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057A4u;
        // 0x4057a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057ACu;
        goto label_4057ac;
    }
    ctx->pc = 0x4057A4u;
    SET_GPR_U32(ctx, 31, 0x4057ACu);
    ctx->pc = 0x4057A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057A4u;
    // 0x4057a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x4057A4u, 0x4057ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057ACu;
label_4057ac:
    // 0x4057ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057b0:
    // 0x4057b0: 0xc0ea176  jal         func_3A85D8
label_4057b4:
    if (ctx->pc == 0x4057B4u) {
        ctx->pc = 0x4057B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057B0u;
        // 0x4057b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057B8u;
        goto label_4057b8;
    }
    ctx->pc = 0x4057B0u;
    SET_GPR_U32(ctx, 31, 0x4057B8u);
    ctx->pc = 0x4057B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057B0u;
    // 0x4057b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x4057B0u, 0x4057B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057B8u;
label_4057b8:
    // 0x4057b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057bc:
    // 0x4057bc: 0xc0ea16a  jal         func_3A85A8
label_4057c0:
    if (ctx->pc == 0x4057C0u) {
        ctx->pc = 0x4057C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057BCu;
        // 0x4057c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057C4u;
        goto label_4057c4;
    }
    ctx->pc = 0x4057BCu;
    SET_GPR_U32(ctx, 31, 0x4057C4u);
    ctx->pc = 0x4057C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057BCu;
    // 0x4057c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x4057BCu, 0x4057C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057C4u;
label_4057c4:
    // 0x4057c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057c8:
    // 0x4057c8: 0xc0ea16a  jal         func_3A85A8
label_4057cc:
    if (ctx->pc == 0x4057CCu) {
        ctx->pc = 0x4057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057C8u;
        // 0x4057cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057D0u;
        goto label_4057d0;
    }
    ctx->pc = 0x4057C8u;
    SET_GPR_U32(ctx, 31, 0x4057D0u);
    ctx->pc = 0x4057CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057C8u;
    // 0x4057cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x4057C8u, 0x4057D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057D0u;
label_4057d0:
    // 0x4057d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4057d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4057d4:
    // 0x4057d4: 0xc0e90ca  jal         func_3A4328
label_4057d8:
    if (ctx->pc == 0x4057D8u) {
        ctx->pc = 0x4057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057D4u;
        // 0x4057d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057DCu;
        goto label_4057dc;
    }
    ctx->pc = 0x4057D4u;
    SET_GPR_U32(ctx, 31, 0x4057DCu);
    ctx->pc = 0x4057D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057D4u;
    // 0x4057d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x4057D4u, 0x4057DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057DCu;
label_4057dc:
    // 0x4057dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057e0:
    // 0x4057e0: 0xc0ea158  jal         func_3A8560
label_4057e4:
    if (ctx->pc == 0x4057E4u) {
        ctx->pc = 0x4057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057E0u;
        // 0x4057e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4057E8u;
        goto label_4057e8;
    }
    ctx->pc = 0x4057E0u;
    SET_GPR_U32(ctx, 31, 0x4057E8u);
    ctx->pc = 0x4057E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057E0u;
    // 0x4057e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x4057E0u, 0x4057E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057E8u;
label_4057e8:
    // 0x4057e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4057ec:
    // 0x4057ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4057ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4057f0:
    // 0x4057f0: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x4057f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_4057f4:
    // 0x4057f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4057f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4057f8:
    // 0x4057f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x4057f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4057fc:
    // 0x4057fc: 0xc0ea158  jal         func_3A8560
label_405800:
    if (ctx->pc == 0x405800u) {
        ctx->pc = 0x405800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057FCu;
        // 0x405800: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405804u;
        goto label_405804;
    }
    ctx->pc = 0x4057FCu;
    SET_GPR_U32(ctx, 31, 0x405804u);
    ctx->pc = 0x405800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057FCu;
    // 0x405800: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x4057FCu, 0x405804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405804u;
label_405804:
    // 0x405804: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x405804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_405808:
    // 0x405808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x405808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40580c:
    // 0x40580c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405810:
    // 0x405810: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x405810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_405814:
    // 0x405814: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x405814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_405818:
    // 0x405818: 0x40f809  jalr        $v0
label_40581c:
    if (ctx->pc == 0x40581Cu) {
        ctx->pc = 0x40581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405818u;
        // 0x40581c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405820u;
        goto label_405820;
    }
    ctx->pc = 0x405818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405820u);
        ctx->pc = 0x40581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405818u;
        // 0x40581c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405818u, 0x405820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405820u;
label_405820:
    // 0x405820: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x405820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_405824:
    // 0x405824: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x405824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_405828:
    // 0x405828: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_40582c:
    if (ctx->pc == 0x40582Cu) {
        ctx->pc = 0x40582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405828u;
        // 0x40582c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405830u;
        goto label_405830;
    }
    ctx->pc = 0x405828u;
    {
        const bool branch_taken_0x405828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405828u;
        // 0x40582c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405828) {
            ctx->pc = 0x405858u;
            goto label_405858;
        }
    }
    ctx->pc = 0x405830u;
label_405830:
    // 0x405830: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x405830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_405834:
    // 0x405834: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x405834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_405838:
    // 0x405838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40583c:
    // 0x40583c: 0x0  nop
    ctx->pc = 0x40583cu;
    // NOP
label_405840:
    // 0x405840: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x405840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_405844:
    // 0x405844: 0x0  nop
    ctx->pc = 0x405844u;
    // NOP
label_405848:
    // 0x405848: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_40584c:
    if (ctx->pc == 0x40584Cu) {
        ctx->pc = 0x40584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405848u;
        // 0x40584c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405850u;
        goto label_405850;
    }
    ctx->pc = 0x405848u;
    {
        const bool branch_taken_0x405848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405848u;
        // 0x40584c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405848) {
            ctx->pc = 0x405854u;
            goto label_405854;
        }
    }
    ctx->pc = 0x405850u;
label_405850:
    // 0x405850: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x405850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_405854:
    // 0x405854: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x405854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_405858:
    // 0x405858: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x405858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_40585c:
    // 0x40585c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_405860:
    if (ctx->pc == 0x405860u) {
        ctx->pc = 0x405860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40585Cu;
        // 0x405860: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405864u;
        goto label_405864;
    }
    ctx->pc = 0x40585Cu;
    {
        const bool branch_taken_0x40585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40585Cu;
        // 0x405860: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40585c) {
            ctx->pc = 0x405894u;
            goto label_405894;
        }
    }
    ctx->pc = 0x405864u;
label_405864:
    // 0x405864: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x405864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_405868:
    // 0x405868: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x405868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_40586c:
    // 0x40586c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_405870:
    // 0x405870: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x405870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_405874:
    // 0x405874: 0x8c4700cc  lw          $a3, 0xCC($v0)
    ctx->pc = 0x405874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_405878:
    // 0x405878: 0xe0f809  jalr        $a3
label_40587c:
    if (ctx->pc == 0x40587Cu) {
        ctx->pc = 0x40587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405878u;
        // 0x40587c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405880u;
        goto label_405880;
    }
    ctx->pc = 0x405878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x405880u);
        ctx->pc = 0x40587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405878u;
        // 0x40587c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405878u, 0x405880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405880u;
label_405880:
    // 0x405880: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x405880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_405884:
    // 0x405884: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x405884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_405888:
    // 0x405888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x405888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_40588c:
    // 0x40588c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_405890:
    // 0x405890: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x405890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_405894:
    // 0x405894: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x405894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_405898:
    // 0x405898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x405898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40589c:
    // 0x40589c: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x40589cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_4058a0:
    // 0x4058a0: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x4058a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_4058a4:
    // 0x4058a4: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x4058a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_4058a8:
    // 0x4058a8: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x4058a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_4058ac:
    // 0x4058ac: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x4058acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_4058b0:
    // 0x4058b0: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x4058b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_4058b4:
    // 0x4058b4: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x4058b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_4058b8:
    // 0x4058b8: 0xdfbf0840  ld          $ra, 0x840($sp)
    ctx->pc = 0x4058b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_4058bc:
    // 0x4058bc: 0x3e00008  jr          $ra
label_4058c0:
    if (ctx->pc == 0x4058C0u) {
        ctx->pc = 0x4058C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4058BCu;
        // 0x4058c0: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4058C4u;
        goto label_4058c4;
    }
    ctx->pc = 0x4058BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4058C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4058BCu;
        // 0x4058c0: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4058BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4058C4u;
label_4058c4:
    // 0x4058c4: 0x0  nop
    ctx->pc = 0x4058c4u;
    // NOP
    ctx->pc = 0x4058c8u;
}
