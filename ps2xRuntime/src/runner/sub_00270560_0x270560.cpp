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

// Function: sub_00270560
// Address: 0x270560 - 0x2707a8
void sub_00270560_0x270560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270560_0x270560");
#endif

    switch (ctx->pc) {
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        default: break;
    }

    ctx->pc = 0x270560u;

label_270560:
    // 0x270560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_270564:
    // 0x270564: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x270564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_270568:
    // 0x270568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x270568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27056c:
    // 0x27056c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_270570:
    // 0x270570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_270574:
    // 0x270574: 0xc089b98  jal         func_226E60
label_270578:
    if (ctx->pc == 0x270578u) {
        ctx->pc = 0x270578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270574u;
        // 0x270578: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27057Cu;
        goto label_27057c;
    }
    ctx->pc = 0x270574u;
    SET_GPR_U32(ctx, 31, 0x27057Cu);
    ctx->pc = 0x270578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270574u;
    // 0x270578: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x270574u, 0x27057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27057Cu;
label_27057c:
    // 0x27057c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27057cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270580:
    // 0x270580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270584:
    // 0x270584: 0xc087016  jal         func_21C058
label_270588:
    if (ctx->pc == 0x270588u) {
        ctx->pc = 0x270588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270584u;
        // 0x270588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27058Cu;
        goto label_27058c;
    }
    ctx->pc = 0x270584u;
    SET_GPR_U32(ctx, 31, 0x27058Cu);
    ctx->pc = 0x270588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270584u;
    // 0x270588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x270584u, 0x27058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27058Cu;
label_27058c:
    // 0x27058c: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
label_270590:
    if (ctx->pc == 0x270590u) {
        ctx->pc = 0x270590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27058Cu;
        // 0x270590: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270594u;
        goto label_270594;
    }
    ctx->pc = 0x27058Cu;
    {
        const bool branch_taken_0x27058c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27058Cu;
        // 0x270590: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27058c) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270594u;
label_270594:
    // 0x270594: 0xc089fac  jal         func_227EB0
label_270598:
    if (ctx->pc == 0x270598u) {
        ctx->pc = 0x270598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270594u;
        // 0x270598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27059Cu;
        goto label_27059c;
    }
    ctx->pc = 0x270594u;
    SET_GPR_U32(ctx, 31, 0x27059Cu);
    ctx->pc = 0x270598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270594u;
    // 0x270598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x270594u, 0x27059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27059Cu;
label_27059c:
    // 0x27059c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_2705a0:
    if (ctx->pc == 0x2705A0u) {
        ctx->pc = 0x2705A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27059Cu;
        // 0x2705a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705A4u;
        goto label_2705a4;
    }
    ctx->pc = 0x27059Cu;
    {
        const bool branch_taken_0x27059c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27059Cu;
        // 0x2705a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27059c) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x2705A4u;
label_2705a4:
    // 0x2705a4: 0xc089f86  jal         func_227E18
label_2705a8:
    if (ctx->pc == 0x2705A8u) {
        ctx->pc = 0x2705A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A4u;
        // 0x2705a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705ACu;
        goto label_2705ac;
    }
    ctx->pc = 0x2705A4u;
    SET_GPR_U32(ctx, 31, 0x2705ACu);
    ctx->pc = 0x2705A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705A4u;
    // 0x2705a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2705A4u, 0x2705ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705ACu;
label_2705ac:
    // 0x2705ac: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
label_2705b0:
    if (ctx->pc == 0x2705B0u) {
        ctx->pc = 0x2705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705ACu;
        // 0x2705b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705B4u;
        goto label_2705b4;
    }
    ctx->pc = 0x2705ACu;
    {
        const bool branch_taken_0x2705ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705ACu;
        // 0x2705b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705ac) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x2705B4u;
label_2705b4:
    // 0x2705b4: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x2705b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2705b8:
    // 0x2705b8: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
label_2705bc:
    if (ctx->pc == 0x2705BCu) {
        ctx->pc = 0x2705BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B8u;
        // 0x2705bc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705C0u;
        goto label_2705c0;
    }
    ctx->pc = 0x2705B8u;
    {
        const bool branch_taken_0x2705b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705b8) {
            ctx->pc = 0x2705BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2705B8u;
            // 0x2705bc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270794u;
            goto label_270794;
        }
    }
    ctx->pc = 0x2705C0u;
label_2705c0:
    // 0x2705c0: 0xc089fac  jal         func_227EB0
label_2705c4:
    if (ctx->pc == 0x2705C4u) {
        ctx->pc = 0x2705C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C0u;
        // 0x2705c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705C8u;
        goto label_2705c8;
    }
    ctx->pc = 0x2705C0u;
    SET_GPR_U32(ctx, 31, 0x2705C8u);
    ctx->pc = 0x2705C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705C0u;
    // 0x2705c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2705C0u, 0x2705C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C8u;
label_2705c8:
    // 0x2705c8: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
label_2705cc:
    if (ctx->pc == 0x2705CCu) {
        ctx->pc = 0x2705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C8u;
        // 0x2705cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705D0u;
        goto label_2705d0;
    }
    ctx->pc = 0x2705C8u;
    {
        const bool branch_taken_0x2705c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2705c8) {
            ctx->pc = 0x2705CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2705C8u;
            // 0x2705cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x2705D0u;
label_2705d0:
    // 0x2705d0: 0xc089f86  jal         func_227E18
label_2705d4:
    if (ctx->pc == 0x2705D4u) {
        ctx->pc = 0x2705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705D0u;
        // 0x2705d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705D8u;
        goto label_2705d8;
    }
    ctx->pc = 0x2705D0u;
    SET_GPR_U32(ctx, 31, 0x2705D8u);
    ctx->pc = 0x2705D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705D0u;
    // 0x2705d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2705D0u, 0x2705D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705D8u;
label_2705d8:
    // 0x2705d8: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
label_2705dc:
    if (ctx->pc == 0x2705DCu) {
        ctx->pc = 0x2705DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705D8u;
        // 0x2705dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705E0u;
        goto label_2705e0;
    }
    ctx->pc = 0x2705D8u;
    {
        const bool branch_taken_0x2705d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705D8u;
        // 0x2705dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705d8) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x2705E0u;
label_2705e0:
    // 0x2705e0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2705e4:
    // 0x2705e4: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_2705e8:
    if (ctx->pc == 0x2705E8u) {
        ctx->pc = 0x2705E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705E4u;
        // 0x2705e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705ECu;
        goto label_2705ec;
    }
    ctx->pc = 0x2705E4u;
    {
        const bool branch_taken_0x2705e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705E4u;
        // 0x2705e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705e4) {
            ctx->pc = 0x27078Cu;
            goto label_27078c;
        }
    }
    ctx->pc = 0x2705ECu;
label_2705ec:
    // 0x2705ec: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2705ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2705f0:
    // 0x2705f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2705f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2705f4:
    // 0x2705f4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2705f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2705f8:
    // 0x2705f8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2705f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2705fc:
    // 0x2705fc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2705fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_270600:
    // 0x270600: 0xc08997c  jal         func_2265F0
label_270604:
    if (ctx->pc == 0x270604u) {
        ctx->pc = 0x270604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270600u;
        // 0x270604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270608u;
        goto label_270608;
    }
    ctx->pc = 0x270600u;
    SET_GPR_U32(ctx, 31, 0x270608u);
    ctx->pc = 0x270604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270600u;
    // 0x270604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x270600u, 0x270608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270608u;
label_270608:
    // 0x270608: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_27060c:
    if (ctx->pc == 0x27060Cu) {
        ctx->pc = 0x27060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270608u;
        // 0x27060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270610u;
        goto label_270610;
    }
    ctx->pc = 0x270608u;
    {
        const bool branch_taken_0x270608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270608u;
        // 0x27060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270608) {
            ctx->pc = 0x270624u;
            goto label_270624;
        }
    }
    ctx->pc = 0x270610u;
label_270610:
    // 0x270610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270614:
    // 0x270614: 0xc08702a  jal         func_21C0A8
label_270618:
    if (ctx->pc == 0x270618u) {
        ctx->pc = 0x270618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270614u;
        // 0x270618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27061Cu;
        goto label_27061c;
    }
    ctx->pc = 0x270614u;
    SET_GPR_U32(ctx, 31, 0x27061Cu);
    ctx->pc = 0x270618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270614u;
    // 0x270618: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x270614u, 0x27061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27061Cu;
label_27061c:
    // 0x27061c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x27061cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_270620:
    // 0x270620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270624:
    // 0x270624: 0xc089548  jal         func_225520
label_270628:
    if (ctx->pc == 0x270628u) {
        ctx->pc = 0x270628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270624u;
        // 0x270628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27062Cu;
        goto label_27062c;
    }
    ctx->pc = 0x270624u;
    SET_GPR_U32(ctx, 31, 0x27062Cu);
    ctx->pc = 0x270628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270624u;
    // 0x270628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x270624u, 0x27062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27062Cu;
label_27062c:
    // 0x27062c: 0x52000058  beql        $s0, $zero, . + 4 + (0x58 << 2)
label_270630:
    if (ctx->pc == 0x270630u) {
        ctx->pc = 0x270630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27062Cu;
        // 0x270630: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270634u;
        goto label_270634;
    }
    ctx->pc = 0x27062Cu;
    {
        const bool branch_taken_0x27062c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27062c) {
            ctx->pc = 0x270630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27062Cu;
            // 0x270630: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270634u;
label_270634:
    // 0x270634: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_270638:
    if (ctx->pc == 0x270638u) {
        ctx->pc = 0x270638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270634u;
        // 0x270638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27063Cu;
        goto label_27063c;
    }
    ctx->pc = 0x270634u;
    {
        const bool branch_taken_0x270634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270634u;
        // 0x270638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270634) {
            ctx->pc = 0x27078Cu;
            goto label_27078c;
        }
    }
    ctx->pc = 0x27063Cu;
label_27063c:
    // 0x27063c: 0xc089998  jal         func_226660
label_270640:
    if (ctx->pc == 0x270640u) {
        ctx->pc = 0x270640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27063Cu;
        // 0x270640: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270644u;
        goto label_270644;
    }
    ctx->pc = 0x27063Cu;
    SET_GPR_U32(ctx, 31, 0x270644u);
    ctx->pc = 0x270640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27063Cu;
    // 0x270640: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27063Cu, 0x270644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270644u;
label_270644:
    // 0x270644: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_270648:
    if (ctx->pc == 0x270648u) {
        ctx->pc = 0x270648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270644u;
        // 0x270648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27064Cu;
        goto label_27064c;
    }
    ctx->pc = 0x270644u;
    {
        const bool branch_taken_0x270644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270644u;
        // 0x270648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270644) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27064Cu;
label_27064c:
    // 0x27064c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x27064cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_270650:
    // 0x270650: 0xc089998  jal         func_226660
label_270654:
    if (ctx->pc == 0x270654u) {
        ctx->pc = 0x270654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270650u;
        // 0x270654: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270658u;
        goto label_270658;
    }
    ctx->pc = 0x270650u;
    SET_GPR_U32(ctx, 31, 0x270658u);
    ctx->pc = 0x270654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270650u;
    // 0x270654: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x270650u, 0x270658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270658u;
label_270658:
    // 0x270658: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_27065c:
    if (ctx->pc == 0x27065Cu) {
        ctx->pc = 0x27065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270658u;
        // 0x27065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270660u;
        goto label_270660;
    }
    ctx->pc = 0x270658u;
    {
        const bool branch_taken_0x270658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270658u;
        // 0x27065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270658) {
            ctx->pc = 0x2706B4u;
            goto label_2706b4;
        }
    }
    ctx->pc = 0x270660u;
label_270660:
    // 0x270660: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x270660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_270664:
    // 0x270664: 0xc05d484  jal         func_175210
label_270668:
    if (ctx->pc == 0x270668u) {
        ctx->pc = 0x270668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270664u;
        // 0x270668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27066Cu;
        goto label_27066c;
    }
    ctx->pc = 0x270664u;
    SET_GPR_U32(ctx, 31, 0x27066Cu);
    ctx->pc = 0x270668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270664u;
    // 0x270668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x270664u, 0x27066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27066Cu;
label_27066c:
    // 0x27066c: 0xc05dc36  jal         func_1770D8
label_270670:
    if (ctx->pc == 0x270670u) {
        ctx->pc = 0x270670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27066Cu;
        // 0x270670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270674u;
        goto label_270674;
    }
    ctx->pc = 0x27066Cu;
    SET_GPR_U32(ctx, 31, 0x270674u);
    ctx->pc = 0x270670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27066Cu;
    // 0x270670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x27066Cu, 0x270674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270674u;
label_270674:
    // 0x270674: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x270674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_270678:
    // 0x270678: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x270678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_27067c:
    // 0x27067c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27067cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_270680:
    // 0x270680: 0x0  nop
    ctx->pc = 0x270680u;
    // NOP
label_270684:
    // 0x270684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_270688:
    // 0x270688: 0x0  nop
    ctx->pc = 0x270688u;
    // NOP
label_27068c:
    // 0x27068c: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
label_270690:
    if (ctx->pc == 0x270690u) {
        ctx->pc = 0x270690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27068Cu;
        // 0x270690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270694u;
        goto label_270694;
    }
    ctx->pc = 0x27068Cu;
    {
        const bool branch_taken_0x27068c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27068c) {
            ctx->pc = 0x270690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27068Cu;
            // 0x270690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270694u;
label_270694:
    // 0x270694: 0xc05d462  jal         func_175188
label_270698:
    if (ctx->pc == 0x270698u) {
        ctx->pc = 0x270698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270694u;
        // 0x270698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27069Cu;
        goto label_27069c;
    }
    ctx->pc = 0x270694u;
    SET_GPR_U32(ctx, 31, 0x27069Cu);
    ctx->pc = 0x270698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270694u;
    // 0x270698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x270694u, 0x27069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27069Cu;
label_27069c:
    // 0x27069c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2706a0:
    // 0x2706a0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x2706a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_2706a4:
    // 0x2706a4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2706a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2706a8:
    // 0x2706a8: 0xa0f809  jalr        $a1
label_2706ac:
    if (ctx->pc == 0x2706ACu) {
        ctx->pc = 0x2706ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A8u;
        // 0x2706ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706B0u;
        goto label_2706b0;
    }
    ctx->pc = 0x2706A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2706B0u);
        ctx->pc = 0x2706ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A8u;
        // 0x2706ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2706A8u, 0x2706B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2706B0u;
label_2706b0:
    // 0x2706b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2706b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2706b4:
    // 0x2706b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2706b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2706b8:
    // 0x2706b8: 0xc099cb4  jal         func_2672D0
label_2706bc:
    if (ctx->pc == 0x2706BCu) {
        ctx->pc = 0x2706BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B8u;
        // 0x2706bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706C0u;
        goto label_2706c0;
    }
    ctx->pc = 0x2706B8u;
    SET_GPR_U32(ctx, 31, 0x2706C0u);
    ctx->pc = 0x2706BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706B8u;
    // 0x2706bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2706B8u, 0x2706C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706C0u;
label_2706c0:
    // 0x2706c0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2706c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2706c4:
    // 0x2706c4: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2706c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2706c8:
    // 0x2706c8: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
label_2706cc:
    if (ctx->pc == 0x2706CCu) {
        ctx->pc = 0x2706CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706C8u;
        // 0x2706cc: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706D0u;
        goto label_2706d0;
    }
    ctx->pc = 0x2706C8u;
    {
        const bool branch_taken_0x2706c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706C8u;
        // 0x2706cc: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706c8) {
            ctx->pc = 0x270744u;
            goto label_270744;
        }
    }
    ctx->pc = 0x2706D0u;
label_2706d0:
    // 0x2706d0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2706d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2706d4:
    // 0x2706d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2706d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2706d8:
    // 0x2706d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2706d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2706dc:
    // 0x2706dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2706dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2706e0:
    // 0x2706e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2706e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2706e4:
    // 0x2706e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2706e8:
    if (ctx->pc == 0x2706E8u) {
        ctx->pc = 0x2706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E4u;
        // 0x2706e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706ECu;
        goto label_2706ec;
    }
    ctx->pc = 0x2706E4u;
    {
        const bool branch_taken_0x2706e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E4u;
        // 0x2706e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706e4) {
            ctx->pc = 0x270724u;
            goto label_270724;
        }
    }
    ctx->pc = 0x2706ECu;
label_2706ec:
    // 0x2706ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2706f0:
    // 0x2706f0: 0x8c430254  lw          $v1, 0x254($v0)
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
label_2706f4:
    // 0x2706f4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_2706f8:
    if (ctx->pc == 0x2706F8u) {
        ctx->pc = 0x2706F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706F4u;
        // 0x2706f8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706FCu;
        goto label_2706fc;
    }
    ctx->pc = 0x2706F4u;
    {
        const bool branch_taken_0x2706f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706f4) {
            ctx->pc = 0x2706F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706F4u;
            // 0x2706f8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270744u;
            goto label_270744;
        }
    }
    ctx->pc = 0x2706FCu;
label_2706fc:
    // 0x2706fc: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2706fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_270700:
    // 0x270700: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x270700u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_270704:
    // 0x270704: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_270708:
    if (ctx->pc == 0x270708u) {
        ctx->pc = 0x270708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270704u;
        // 0x270708: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27070Cu;
        goto label_27070c;
    }
    ctx->pc = 0x270704u;
    {
        const bool branch_taken_0x270704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270704) {
            ctx->pc = 0x270708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270704u;
            // 0x270708: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270744u;
            goto label_270744;
        }
    }
    ctx->pc = 0x27070Cu;
label_27070c:
    // 0x27070c: 0xc0874fa  jal         func_21D3E8
label_270710:
    if (ctx->pc == 0x270710u) {
        ctx->pc = 0x270710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27070Cu;
        // 0x270710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270714u;
        goto label_270714;
    }
    ctx->pc = 0x27070Cu;
    SET_GPR_U32(ctx, 31, 0x270714u);
    ctx->pc = 0x270710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27070Cu;
    // 0x270710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27070Cu, 0x270714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270714u;
label_270714:
    // 0x270714: 0xc09edd4  jal         func_27B750
label_270718:
    if (ctx->pc == 0x270718u) {
        ctx->pc = 0x270718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270714u;
        // 0x270718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27071Cu;
        goto label_27071c;
    }
    ctx->pc = 0x270714u;
    SET_GPR_U32(ctx, 31, 0x27071Cu);
    ctx->pc = 0x270718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270714u;
    // 0x270718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B750u, 0x270714u, 0x27071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27071Cu;
label_27071c:
    // 0x27071c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_270720:
    if (ctx->pc == 0x270720u) {
        ctx->pc = 0x270720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27071Cu;
        // 0x270720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270724u;
        goto label_270724;
    }
    ctx->pc = 0x27071Cu;
    {
        const bool branch_taken_0x27071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27071Cu;
        // 0x270720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27071c) {
            ctx->pc = 0x270740u;
            goto label_270740;
        }
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x270724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270728:
    // 0x270728: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x270728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_27072c:
    // 0x27072c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27072cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270730:
    // 0x270730: 0xc098ab2  jal         func_262AC8
label_270734:
    if (ctx->pc == 0x270734u) {
        ctx->pc = 0x270734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270730u;
        // 0x270734: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270738u;
        goto label_270738;
    }
    ctx->pc = 0x270730u;
    SET_GPR_U32(ctx, 31, 0x270738u);
    ctx->pc = 0x270734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270730u;
    // 0x270734: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x270730u, 0x270738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270738u;
label_270738:
    // 0x270738: 0x10000015  b           . + 4 + (0x15 << 2)
label_27073c:
    if (ctx->pc == 0x27073Cu) {
        ctx->pc = 0x27073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270738u;
        // 0x27073c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270740u;
        goto label_270740;
    }
    ctx->pc = 0x270738u;
    {
        const bool branch_taken_0x270738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270738u;
        // 0x27073c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270738) {
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270740u;
label_270740:
    // 0x270740: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x270740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_270744:
    // 0x270744: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x270744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_270748:
    // 0x270748: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x270748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
label_27074c:
    // 0x27074c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_270750:
    // 0x270750: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x270750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_270754:
    // 0x270754: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x270754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_270758:
    // 0x270758: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x270758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_27075c:
    // 0x27075c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_270760:
    if (ctx->pc == 0x270760u) {
        ctx->pc = 0x270760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27075Cu;
        // 0x270760: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270764u;
        goto label_270764;
    }
    ctx->pc = 0x27075Cu;
    {
        const bool branch_taken_0x27075c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27075c) {
            ctx->pc = 0x270760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27075Cu;
            // 0x270760: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270764u;
label_270764:
    // 0x270764: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x270764u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_270768:
    // 0x270768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x270768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_27076c:
    // 0x27076c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27076cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_270770:
    // 0x270770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x270770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_270774:
    // 0x270774: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x270774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_270778:
    // 0x270778: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_27077c:
    if (ctx->pc == 0x27077Cu) {
        ctx->pc = 0x27077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270778u;
        // 0x27077c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270780u;
        goto label_270780;
    }
    ctx->pc = 0x270778u;
    {
        const bool branch_taken_0x270778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270778) {
            ctx->pc = 0x27077Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270778u;
            // 0x27077c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270790u;
            goto label_270790;
        }
    }
    ctx->pc = 0x270780u;
label_270780:
    // 0x270780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270784:
    // 0x270784: 0xc09c09c  jal         func_270270
label_270788:
    if (ctx->pc == 0x270788u) {
        ctx->pc = 0x270788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270784u;
        // 0x270788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27078Cu;
        goto label_27078c;
    }
    ctx->pc = 0x270784u;
    SET_GPR_U32(ctx, 31, 0x27078Cu);
    ctx->pc = 0x270788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270784u;
    // 0x270788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270270u, 0x270784u, 0x27078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27078Cu;
label_27078c:
    // 0x27078c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27078cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270790:
    // 0x270790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x270790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270794:
    // 0x270794: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x270794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_270798:
    // 0x270798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27079c:
    // 0x27079c: 0x3e00008  jr          $ra
label_2707a0:
    if (ctx->pc == 0x2707A0u) {
        ctx->pc = 0x2707A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27079Cu;
        // 0x2707a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707A4u;
        goto label_2707a4;
    }
    ctx->pc = 0x27079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2707A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27079Cu;
        // 0x2707a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2707A4u;
label_2707a4:
    // 0x2707a4: 0x0  nop
    ctx->pc = 0x2707a4u;
    // NOP
    ctx->pc = 0x2707a8u;
}
