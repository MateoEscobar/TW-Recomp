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

// Function: sub_0042F640
// Address: 0x42f640 - 0x42fb08
void sub_0042F640_0x42f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F640_0x42f640");
#endif

    switch (ctx->pc) {
        case 0x42f640u: goto label_42f640;
        case 0x42f644u: goto label_42f644;
        case 0x42f648u: goto label_42f648;
        case 0x42f64cu: goto label_42f64c;
        case 0x42f650u: goto label_42f650;
        case 0x42f654u: goto label_42f654;
        case 0x42f658u: goto label_42f658;
        case 0x42f65cu: goto label_42f65c;
        case 0x42f660u: goto label_42f660;
        case 0x42f664u: goto label_42f664;
        case 0x42f668u: goto label_42f668;
        case 0x42f66cu: goto label_42f66c;
        case 0x42f670u: goto label_42f670;
        case 0x42f674u: goto label_42f674;
        case 0x42f678u: goto label_42f678;
        case 0x42f67cu: goto label_42f67c;
        case 0x42f680u: goto label_42f680;
        case 0x42f684u: goto label_42f684;
        case 0x42f688u: goto label_42f688;
        case 0x42f68cu: goto label_42f68c;
        case 0x42f690u: goto label_42f690;
        case 0x42f694u: goto label_42f694;
        case 0x42f698u: goto label_42f698;
        case 0x42f69cu: goto label_42f69c;
        case 0x42f6a0u: goto label_42f6a0;
        case 0x42f6a4u: goto label_42f6a4;
        case 0x42f6a8u: goto label_42f6a8;
        case 0x42f6acu: goto label_42f6ac;
        case 0x42f6b0u: goto label_42f6b0;
        case 0x42f6b4u: goto label_42f6b4;
        case 0x42f6b8u: goto label_42f6b8;
        case 0x42f6bcu: goto label_42f6bc;
        case 0x42f6c0u: goto label_42f6c0;
        case 0x42f6c4u: goto label_42f6c4;
        case 0x42f6c8u: goto label_42f6c8;
        case 0x42f6ccu: goto label_42f6cc;
        case 0x42f6d0u: goto label_42f6d0;
        case 0x42f6d4u: goto label_42f6d4;
        case 0x42f6d8u: goto label_42f6d8;
        case 0x42f6dcu: goto label_42f6dc;
        case 0x42f6e0u: goto label_42f6e0;
        case 0x42f6e4u: goto label_42f6e4;
        case 0x42f6e8u: goto label_42f6e8;
        case 0x42f6ecu: goto label_42f6ec;
        case 0x42f6f0u: goto label_42f6f0;
        case 0x42f6f4u: goto label_42f6f4;
        case 0x42f6f8u: goto label_42f6f8;
        case 0x42f6fcu: goto label_42f6fc;
        case 0x42f700u: goto label_42f700;
        case 0x42f704u: goto label_42f704;
        case 0x42f708u: goto label_42f708;
        case 0x42f70cu: goto label_42f70c;
        case 0x42f710u: goto label_42f710;
        case 0x42f714u: goto label_42f714;
        case 0x42f718u: goto label_42f718;
        case 0x42f71cu: goto label_42f71c;
        case 0x42f720u: goto label_42f720;
        case 0x42f724u: goto label_42f724;
        case 0x42f728u: goto label_42f728;
        case 0x42f72cu: goto label_42f72c;
        case 0x42f730u: goto label_42f730;
        case 0x42f734u: goto label_42f734;
        case 0x42f738u: goto label_42f738;
        case 0x42f73cu: goto label_42f73c;
        case 0x42f740u: goto label_42f740;
        case 0x42f744u: goto label_42f744;
        case 0x42f748u: goto label_42f748;
        case 0x42f74cu: goto label_42f74c;
        case 0x42f750u: goto label_42f750;
        case 0x42f754u: goto label_42f754;
        case 0x42f758u: goto label_42f758;
        case 0x42f75cu: goto label_42f75c;
        case 0x42f760u: goto label_42f760;
        case 0x42f764u: goto label_42f764;
        case 0x42f768u: goto label_42f768;
        case 0x42f76cu: goto label_42f76c;
        case 0x42f770u: goto label_42f770;
        case 0x42f774u: goto label_42f774;
        case 0x42f778u: goto label_42f778;
        case 0x42f77cu: goto label_42f77c;
        case 0x42f780u: goto label_42f780;
        case 0x42f784u: goto label_42f784;
        case 0x42f788u: goto label_42f788;
        case 0x42f78cu: goto label_42f78c;
        case 0x42f790u: goto label_42f790;
        case 0x42f794u: goto label_42f794;
        case 0x42f798u: goto label_42f798;
        case 0x42f79cu: goto label_42f79c;
        case 0x42f7a0u: goto label_42f7a0;
        case 0x42f7a4u: goto label_42f7a4;
        case 0x42f7a8u: goto label_42f7a8;
        case 0x42f7acu: goto label_42f7ac;
        case 0x42f7b0u: goto label_42f7b0;
        case 0x42f7b4u: goto label_42f7b4;
        case 0x42f7b8u: goto label_42f7b8;
        case 0x42f7bcu: goto label_42f7bc;
        case 0x42f7c0u: goto label_42f7c0;
        case 0x42f7c4u: goto label_42f7c4;
        case 0x42f7c8u: goto label_42f7c8;
        case 0x42f7ccu: goto label_42f7cc;
        case 0x42f7d0u: goto label_42f7d0;
        case 0x42f7d4u: goto label_42f7d4;
        case 0x42f7d8u: goto label_42f7d8;
        case 0x42f7dcu: goto label_42f7dc;
        case 0x42f7e0u: goto label_42f7e0;
        case 0x42f7e4u: goto label_42f7e4;
        case 0x42f7e8u: goto label_42f7e8;
        case 0x42f7ecu: goto label_42f7ec;
        case 0x42f7f0u: goto label_42f7f0;
        case 0x42f7f4u: goto label_42f7f4;
        case 0x42f7f8u: goto label_42f7f8;
        case 0x42f7fcu: goto label_42f7fc;
        case 0x42f800u: goto label_42f800;
        case 0x42f804u: goto label_42f804;
        case 0x42f808u: goto label_42f808;
        case 0x42f80cu: goto label_42f80c;
        case 0x42f810u: goto label_42f810;
        case 0x42f814u: goto label_42f814;
        case 0x42f818u: goto label_42f818;
        case 0x42f81cu: goto label_42f81c;
        case 0x42f820u: goto label_42f820;
        case 0x42f824u: goto label_42f824;
        case 0x42f828u: goto label_42f828;
        case 0x42f82cu: goto label_42f82c;
        case 0x42f830u: goto label_42f830;
        case 0x42f834u: goto label_42f834;
        case 0x42f838u: goto label_42f838;
        case 0x42f83cu: goto label_42f83c;
        case 0x42f840u: goto label_42f840;
        case 0x42f844u: goto label_42f844;
        case 0x42f848u: goto label_42f848;
        case 0x42f84cu: goto label_42f84c;
        case 0x42f850u: goto label_42f850;
        case 0x42f854u: goto label_42f854;
        case 0x42f858u: goto label_42f858;
        case 0x42f85cu: goto label_42f85c;
        case 0x42f860u: goto label_42f860;
        case 0x42f864u: goto label_42f864;
        case 0x42f868u: goto label_42f868;
        case 0x42f86cu: goto label_42f86c;
        case 0x42f870u: goto label_42f870;
        case 0x42f874u: goto label_42f874;
        case 0x42f878u: goto label_42f878;
        case 0x42f87cu: goto label_42f87c;
        case 0x42f880u: goto label_42f880;
        case 0x42f884u: goto label_42f884;
        case 0x42f888u: goto label_42f888;
        case 0x42f88cu: goto label_42f88c;
        case 0x42f890u: goto label_42f890;
        case 0x42f894u: goto label_42f894;
        case 0x42f898u: goto label_42f898;
        case 0x42f89cu: goto label_42f89c;
        case 0x42f8a0u: goto label_42f8a0;
        case 0x42f8a4u: goto label_42f8a4;
        case 0x42f8a8u: goto label_42f8a8;
        case 0x42f8acu: goto label_42f8ac;
        case 0x42f8b0u: goto label_42f8b0;
        case 0x42f8b4u: goto label_42f8b4;
        case 0x42f8b8u: goto label_42f8b8;
        case 0x42f8bcu: goto label_42f8bc;
        case 0x42f8c0u: goto label_42f8c0;
        case 0x42f8c4u: goto label_42f8c4;
        case 0x42f8c8u: goto label_42f8c8;
        case 0x42f8ccu: goto label_42f8cc;
        case 0x42f8d0u: goto label_42f8d0;
        case 0x42f8d4u: goto label_42f8d4;
        case 0x42f8d8u: goto label_42f8d8;
        case 0x42f8dcu: goto label_42f8dc;
        case 0x42f8e0u: goto label_42f8e0;
        case 0x42f8e4u: goto label_42f8e4;
        case 0x42f8e8u: goto label_42f8e8;
        case 0x42f8ecu: goto label_42f8ec;
        case 0x42f8f0u: goto label_42f8f0;
        case 0x42f8f4u: goto label_42f8f4;
        case 0x42f8f8u: goto label_42f8f8;
        case 0x42f8fcu: goto label_42f8fc;
        case 0x42f900u: goto label_42f900;
        case 0x42f904u: goto label_42f904;
        case 0x42f908u: goto label_42f908;
        case 0x42f90cu: goto label_42f90c;
        case 0x42f910u: goto label_42f910;
        case 0x42f914u: goto label_42f914;
        case 0x42f918u: goto label_42f918;
        case 0x42f91cu: goto label_42f91c;
        case 0x42f920u: goto label_42f920;
        case 0x42f924u: goto label_42f924;
        case 0x42f928u: goto label_42f928;
        case 0x42f92cu: goto label_42f92c;
        case 0x42f930u: goto label_42f930;
        case 0x42f934u: goto label_42f934;
        case 0x42f938u: goto label_42f938;
        case 0x42f93cu: goto label_42f93c;
        case 0x42f940u: goto label_42f940;
        case 0x42f944u: goto label_42f944;
        case 0x42f948u: goto label_42f948;
        case 0x42f94cu: goto label_42f94c;
        case 0x42f950u: goto label_42f950;
        case 0x42f954u: goto label_42f954;
        case 0x42f958u: goto label_42f958;
        case 0x42f95cu: goto label_42f95c;
        case 0x42f960u: goto label_42f960;
        case 0x42f964u: goto label_42f964;
        case 0x42f968u: goto label_42f968;
        case 0x42f96cu: goto label_42f96c;
        case 0x42f970u: goto label_42f970;
        case 0x42f974u: goto label_42f974;
        case 0x42f978u: goto label_42f978;
        case 0x42f97cu: goto label_42f97c;
        case 0x42f980u: goto label_42f980;
        case 0x42f984u: goto label_42f984;
        case 0x42f988u: goto label_42f988;
        case 0x42f98cu: goto label_42f98c;
        case 0x42f990u: goto label_42f990;
        case 0x42f994u: goto label_42f994;
        case 0x42f998u: goto label_42f998;
        case 0x42f99cu: goto label_42f99c;
        case 0x42f9a0u: goto label_42f9a0;
        case 0x42f9a4u: goto label_42f9a4;
        case 0x42f9a8u: goto label_42f9a8;
        case 0x42f9acu: goto label_42f9ac;
        case 0x42f9b0u: goto label_42f9b0;
        case 0x42f9b4u: goto label_42f9b4;
        case 0x42f9b8u: goto label_42f9b8;
        case 0x42f9bcu: goto label_42f9bc;
        case 0x42f9c0u: goto label_42f9c0;
        case 0x42f9c4u: goto label_42f9c4;
        case 0x42f9c8u: goto label_42f9c8;
        case 0x42f9ccu: goto label_42f9cc;
        case 0x42f9d0u: goto label_42f9d0;
        case 0x42f9d4u: goto label_42f9d4;
        case 0x42f9d8u: goto label_42f9d8;
        case 0x42f9dcu: goto label_42f9dc;
        case 0x42f9e0u: goto label_42f9e0;
        case 0x42f9e4u: goto label_42f9e4;
        case 0x42f9e8u: goto label_42f9e8;
        case 0x42f9ecu: goto label_42f9ec;
        case 0x42f9f0u: goto label_42f9f0;
        case 0x42f9f4u: goto label_42f9f4;
        case 0x42f9f8u: goto label_42f9f8;
        case 0x42f9fcu: goto label_42f9fc;
        case 0x42fa00u: goto label_42fa00;
        case 0x42fa04u: goto label_42fa04;
        case 0x42fa08u: goto label_42fa08;
        case 0x42fa0cu: goto label_42fa0c;
        case 0x42fa10u: goto label_42fa10;
        case 0x42fa14u: goto label_42fa14;
        case 0x42fa18u: goto label_42fa18;
        case 0x42fa1cu: goto label_42fa1c;
        case 0x42fa20u: goto label_42fa20;
        case 0x42fa24u: goto label_42fa24;
        case 0x42fa28u: goto label_42fa28;
        case 0x42fa2cu: goto label_42fa2c;
        case 0x42fa30u: goto label_42fa30;
        case 0x42fa34u: goto label_42fa34;
        case 0x42fa38u: goto label_42fa38;
        case 0x42fa3cu: goto label_42fa3c;
        case 0x42fa40u: goto label_42fa40;
        case 0x42fa44u: goto label_42fa44;
        case 0x42fa48u: goto label_42fa48;
        case 0x42fa4cu: goto label_42fa4c;
        case 0x42fa50u: goto label_42fa50;
        case 0x42fa54u: goto label_42fa54;
        case 0x42fa58u: goto label_42fa58;
        case 0x42fa5cu: goto label_42fa5c;
        case 0x42fa60u: goto label_42fa60;
        case 0x42fa64u: goto label_42fa64;
        case 0x42fa68u: goto label_42fa68;
        case 0x42fa6cu: goto label_42fa6c;
        case 0x42fa70u: goto label_42fa70;
        case 0x42fa74u: goto label_42fa74;
        case 0x42fa78u: goto label_42fa78;
        case 0x42fa7cu: goto label_42fa7c;
        case 0x42fa80u: goto label_42fa80;
        case 0x42fa84u: goto label_42fa84;
        case 0x42fa88u: goto label_42fa88;
        case 0x42fa8cu: goto label_42fa8c;
        case 0x42fa90u: goto label_42fa90;
        case 0x42fa94u: goto label_42fa94;
        case 0x42fa98u: goto label_42fa98;
        case 0x42fa9cu: goto label_42fa9c;
        case 0x42faa0u: goto label_42faa0;
        case 0x42faa4u: goto label_42faa4;
        case 0x42faa8u: goto label_42faa8;
        case 0x42faacu: goto label_42faac;
        case 0x42fab0u: goto label_42fab0;
        case 0x42fab4u: goto label_42fab4;
        case 0x42fab8u: goto label_42fab8;
        case 0x42fabcu: goto label_42fabc;
        case 0x42fac0u: goto label_42fac0;
        case 0x42fac4u: goto label_42fac4;
        case 0x42fac8u: goto label_42fac8;
        case 0x42faccu: goto label_42facc;
        case 0x42fad0u: goto label_42fad0;
        case 0x42fad4u: goto label_42fad4;
        case 0x42fad8u: goto label_42fad8;
        case 0x42fadcu: goto label_42fadc;
        case 0x42fae0u: goto label_42fae0;
        case 0x42fae4u: goto label_42fae4;
        case 0x42fae8u: goto label_42fae8;
        case 0x42faecu: goto label_42faec;
        case 0x42faf0u: goto label_42faf0;
        case 0x42faf4u: goto label_42faf4;
        case 0x42faf8u: goto label_42faf8;
        case 0x42fafcu: goto label_42fafc;
        case 0x42fb00u: goto label_42fb00;
        case 0x42fb04u: goto label_42fb04;
        default: break;
    }

    ctx->pc = 0x42f640u;

label_42f640:
    // 0x42f640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x42f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_42f644:
    // 0x42f644: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_42f648:
    // 0x42f648: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x42f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_42f64c:
    // 0x42f64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42f64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f650:
    // 0x42f650: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x42f650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_42f654:
    // 0x42f654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42f654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42f658:
    // 0x42f658: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x42f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_42f65c:
    // 0x42f65c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x42f65cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42f660:
    // 0x42f660: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x42f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_42f664:
    // 0x42f664: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x42f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_42f668:
    // 0x42f668: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x42f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_42f66c:
    // 0x42f66c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x42f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_42f670:
    // 0x42f670: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x42f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_42f674:
    // 0x42f674: 0xc10bbde  jal         func_42EF78
label_42f678:
    if (ctx->pc == 0x42F678u) {
        ctx->pc = 0x42F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F674u;
        // 0x42f678: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F67Cu;
        goto label_42f67c;
    }
    ctx->pc = 0x42F674u;
    SET_GPR_U32(ctx, 31, 0x42F67Cu);
    ctx->pc = 0x42F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F674u;
    // 0x42f678: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F674u, 0x42F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F67Cu;
label_42f67c:
    // 0x42f67c: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
label_42f680:
    if (ctx->pc == 0x42F680u) {
        ctx->pc = 0x42F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F67Cu;
        // 0x42f680: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F684u;
        goto label_42f684;
    }
    ctx->pc = 0x42F67Cu;
    {
        const bool branch_taken_0x42f67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F67Cu;
        // 0x42f680: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f67c) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F684u;
label_42f684:
    // 0x42f684: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_42f688:
    if (ctx->pc == 0x42F688u) {
        ctx->pc = 0x42F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F684u;
        // 0x42f688: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F68Cu;
        goto label_42f68c;
    }
    ctx->pc = 0x42F684u;
    {
        const bool branch_taken_0x42f684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F684u;
        // 0x42f688: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f684) {
            ctx->pc = 0x42F694u;
            goto label_42f694;
        }
    }
    ctx->pc = 0x42F68Cu;
label_42f68c:
    // 0x42f68c: 0x1000000d  b           . + 4 + (0xD << 2)
label_42f690:
    if (ctx->pc == 0x42F690u) {
        ctx->pc = 0x42F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F68Cu;
        // 0x42f690: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F694u;
        goto label_42f694;
    }
    ctx->pc = 0x42F68Cu;
    {
        const bool branch_taken_0x42f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F68Cu;
        // 0x42f690: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f68c) {
            ctx->pc = 0x42F6C4u;
            goto label_42f6c4;
        }
    }
    ctx->pc = 0x42F694u;
label_42f694:
    // 0x42f694: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42f698:
    // 0x42f698: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f69c:
    // 0x42f69c: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f69cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f6a0:
    // 0x42f6a0: 0x24a5f3f8  addiu       $a1, $a1, -0xC08
    ctx->pc = 0x42f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964216));
label_42f6a4:
    // 0x42f6a4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f6a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f6a8:
    // 0x42f6a8: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f6ac:
    // 0x42f6ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f6b0:
    // 0x42f6b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f6b4:
    // 0x42f6b4: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f6b8:
    // 0x42f6b8: 0xc10bf08  jal         func_42FC20
label_42f6bc:
    if (ctx->pc == 0x42F6BCu) {
        ctx->pc = 0x42F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6B8u;
        // 0x42f6bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F6C0u;
        goto label_42f6c0;
    }
    ctx->pc = 0x42F6B8u;
    SET_GPR_U32(ctx, 31, 0x42F6C0u);
    ctx->pc = 0x42F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F6B8u;
    // 0x42f6bc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F6B8u, 0x42F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F6C0u;
label_42f6c0:
    // 0x42f6c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x42f6c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f6c4:
    // 0x42f6c4: 0x5540007b  bnel        $t2, $zero, . + 4 + (0x7B << 2)
label_42f6c8:
    if (ctx->pc == 0x42F6C8u) {
        ctx->pc = 0x42F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6C4u;
        // 0x42f6c8: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F6CCu;
        goto label_42f6cc;
    }
    ctx->pc = 0x42F6C4u;
    {
        const bool branch_taken_0x42f6c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f6c4) {
            ctx->pc = 0x42F6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F6C4u;
            // 0x42f6c8: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F8B4u;
            goto label_42f8b4;
        }
    }
    ctx->pc = 0x42F6CCu;
label_42f6cc:
    // 0x42f6cc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_42f6d0:
    if (ctx->pc == 0x42F6D0u) {
        ctx->pc = 0x42F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6CCu;
        // 0x42f6d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F6D4u;
        goto label_42f6d4;
    }
    ctx->pc = 0x42F6CCu;
    {
        const bool branch_taken_0x42f6cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f6cc) {
            ctx->pc = 0x42F6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F6CCu;
            // 0x42f6d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F6DCu;
            goto label_42f6dc;
        }
    }
    ctx->pc = 0x42F6D4u;
label_42f6d4:
    // 0x42f6d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_42f6d8:
    if (ctx->pc == 0x42F6D8u) {
        ctx->pc = 0x42F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6D4u;
        // 0x42f6d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F6DCu;
        goto label_42f6dc;
    }
    ctx->pc = 0x42F6D4u;
    {
        const bool branch_taken_0x42f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6D4u;
        // 0x42f6d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f6d4) {
            ctx->pc = 0x42F708u;
            goto label_42f708;
        }
    }
    ctx->pc = 0x42F6DCu;
label_42f6dc:
    // 0x42f6dc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f6e0:
    // 0x42f6e0: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f6e4:
    // 0x42f6e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x42f6e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f6e8:
    // 0x42f6e8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f6e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f6ec:
    // 0x42f6ec: 0x24a50328  addiu       $a1, $a1, 0x328
    ctx->pc = 0x42f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 808));
label_42f6f0:
    // 0x42f6f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f6f4:
    // 0x42f6f4: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f6f8:
    // 0x42f6f8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f6fc:
    // 0x42f6fc: 0xc10bf08  jal         func_42FC20
label_42f700:
    if (ctx->pc == 0x42F700u) {
        ctx->pc = 0x42F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F6FCu;
        // 0x42f700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F704u;
        goto label_42f704;
    }
    ctx->pc = 0x42F6FCu;
    SET_GPR_U32(ctx, 31, 0x42F704u);
    ctx->pc = 0x42F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F6FCu;
    // 0x42f700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F6FCu, 0x42F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F704u;
label_42f704:
    // 0x42f704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f708:
    // 0x42f708: 0x120000f3  beqz        $s0, . + 4 + (0xF3 << 2)
label_42f70c:
    if (ctx->pc == 0x42F70Cu) {
        ctx->pc = 0x42F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F708u;
        // 0x42f70c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F710u;
        goto label_42f710;
    }
    ctx->pc = 0x42F708u;
    {
        const bool branch_taken_0x42f708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F708u;
        // 0x42f70c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f708) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F710u;
label_42f710:
    // 0x42f710: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_42f714:
    if (ctx->pc == 0x42F714u) {
        ctx->pc = 0x42F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F710u;
        // 0x42f714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F718u;
        goto label_42f718;
    }
    ctx->pc = 0x42F710u;
    {
        const bool branch_taken_0x42f710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F710u;
        // 0x42f714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f710) {
            ctx->pc = 0x42F744u;
            goto label_42f744;
        }
    }
    ctx->pc = 0x42F718u;
label_42f718:
    // 0x42f718: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42f71c:
    // 0x42f71c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f720:
    // 0x42f720: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f720u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f724:
    // 0x42f724: 0x24a50328  addiu       $a1, $a1, 0x328
    ctx->pc = 0x42f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 808));
label_42f728:
    // 0x42f728: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f728u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f72c:
    // 0x42f72c: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f730:
    // 0x42f730: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f734:
    // 0x42f734: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x42f734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f738:
    // 0x42f738: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x42f738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_42f73c:
    // 0x42f73c: 0xc10bf08  jal         func_42FC20
label_42f740:
    if (ctx->pc == 0x42F740u) {
        ctx->pc = 0x42F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F73Cu;
        // 0x42f740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F744u;
        goto label_42f744;
    }
    ctx->pc = 0x42F73Cu;
    SET_GPR_U32(ctx, 31, 0x42F744u);
    ctx->pc = 0x42F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F73Cu;
    // 0x42f740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F73Cu, 0x42F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F744u;
label_42f744:
    // 0x42f744: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
label_42f748:
    if (ctx->pc == 0x42F748u) {
        ctx->pc = 0x42F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F744u;
        // 0x42f748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F74Cu;
        goto label_42f74c;
    }
    ctx->pc = 0x42F744u;
    {
        const bool branch_taken_0x42f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f744) {
            ctx->pc = 0x42F748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F744u;
            // 0x42f748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F74Cu;
label_42f74c:
    // 0x42f74c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x42f74cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42f750:
    // 0x42f750: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x42f750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42f754:
    // 0x42f754: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_42f758:
    if (ctx->pc == 0x42F758u) {
        ctx->pc = 0x42F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F754u;
        // 0x42f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F75Cu;
        goto label_42f75c;
    }
    ctx->pc = 0x42F754u;
    {
        const bool branch_taken_0x42f754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F754u;
        // 0x42f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f754) {
            ctx->pc = 0x42F788u;
            goto label_42f788;
        }
    }
    ctx->pc = 0x42F75Cu;
label_42f75c:
    // 0x42f75c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42f760:
    // 0x42f760: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f764:
    // 0x42f764: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f764u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f768:
    // 0x42f768: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x42f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
label_42f76c:
    // 0x42f76c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f76cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f770:
    // 0x42f770: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f774:
    // 0x42f774: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f778:
    // 0x42f778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f77c:
    // 0x42f77c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f780:
    // 0x42f780: 0xc10bf08  jal         func_42FC20
label_42f784:
    if (ctx->pc == 0x42F784u) {
        ctx->pc = 0x42F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F780u;
        // 0x42f784: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F788u;
        goto label_42f788;
    }
    ctx->pc = 0x42F780u;
    SET_GPR_U32(ctx, 31, 0x42F788u);
    ctx->pc = 0x42F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F780u;
    // 0x42f784: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F780u, 0x42F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F788u;
label_42f788:
    // 0x42f788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42f78c:
    if (ctx->pc == 0x42F78Cu) {
        ctx->pc = 0x42F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F788u;
        // 0x42f78c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F790u;
        goto label_42f790;
    }
    ctx->pc = 0x42F788u;
    {
        const bool branch_taken_0x42f788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F788u;
        // 0x42f78c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f788) {
            ctx->pc = 0x42F798u;
            goto label_42f798;
        }
    }
    ctx->pc = 0x42F790u;
label_42f790:
    // 0x42f790: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x42f790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42f794:
    // 0x42f794: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x42f794u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42f798:
    // 0x42f798: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_42f79c:
    if (ctx->pc == 0x42F79Cu) {
        ctx->pc = 0x42F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F798u;
        // 0x42f79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F7A0u;
        goto label_42f7a0;
    }
    ctx->pc = 0x42F798u;
    {
        const bool branch_taken_0x42f798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F798u;
        // 0x42f79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f798) {
            ctx->pc = 0x42F7CCu;
            goto label_42f7cc;
        }
    }
    ctx->pc = 0x42F7A0u;
label_42f7a0:
    // 0x42f7a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42f7a4:
    // 0x42f7a4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f7a8:
    // 0x42f7a8: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f7ac:
    // 0x42f7ac: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x42f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
label_42f7b0:
    // 0x42f7b0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f7b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f7b4:
    // 0x42f7b4: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f7b8:
    // 0x42f7b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f7bc:
    // 0x42f7bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f7c0:
    // 0x42f7c0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x42f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_42f7c4:
    // 0x42f7c4: 0xc10bf08  jal         func_42FC20
label_42f7c8:
    if (ctx->pc == 0x42F7C8u) {
        ctx->pc = 0x42F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7C4u;
        // 0x42f7c8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F7CCu;
        goto label_42f7cc;
    }
    ctx->pc = 0x42F7C4u;
    SET_GPR_U32(ctx, 31, 0x42F7CCu);
    ctx->pc = 0x42F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F7C4u;
    // 0x42f7c8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F7C4u, 0x42F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F7CCu;
label_42f7cc:
    // 0x42f7cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42f7d0:
    if (ctx->pc == 0x42F7D0u) {
        ctx->pc = 0x42F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7CCu;
        // 0x42f7d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F7D4u;
        goto label_42f7d4;
    }
    ctx->pc = 0x42F7CCu;
    {
        const bool branch_taken_0x42f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7CCu;
        // 0x42f7d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f7cc) {
            ctx->pc = 0x42F7DCu;
            goto label_42f7dc;
        }
    }
    ctx->pc = 0x42F7D4u;
label_42f7d4:
    // 0x42f7d4: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x42f7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42f7d8:
    // 0x42f7d8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x42f7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42f7dc:
    // 0x42f7dc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x42f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_42f7e0:
    // 0x42f7e0: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x42f7e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_42f7e4:
    // 0x42f7e4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x42f7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_42f7e8:
    // 0x42f7e8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_42f7ec:
    if (ctx->pc == 0x42F7ECu) {
        ctx->pc = 0x42F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7E8u;
        // 0x42f7ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F7F0u;
        goto label_42f7f0;
    }
    ctx->pc = 0x42F7E8u;
    {
        const bool branch_taken_0x42f7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7E8u;
        // 0x42f7ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f7e8) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F7F0u;
label_42f7f0:
    // 0x42f7f0: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x42f7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_42f7f4:
    // 0x42f7f4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x42f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_42f7f8:
    // 0x42f7f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x42f7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_42f7fc:
    // 0x42f7fc: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_42f800:
    if (ctx->pc == 0x42F800u) {
        ctx->pc = 0x42F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7FCu;
        // 0x42f800: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F804u;
        goto label_42f804;
    }
    ctx->pc = 0x42F7FCu;
    {
        const bool branch_taken_0x42f7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F7FCu;
        // 0x42f800: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f7fc) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F804u;
label_42f804:
    // 0x42f804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42f804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f808:
    // 0x42f808: 0xc10bbde  jal         func_42EF78
label_42f80c:
    if (ctx->pc == 0x42F80Cu) {
        ctx->pc = 0x42F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F808u;
        // 0x42f80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F810u;
        goto label_42f810;
    }
    ctx->pc = 0x42F808u;
    SET_GPR_U32(ctx, 31, 0x42F810u);
    ctx->pc = 0x42F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F808u;
    // 0x42f80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F808u, 0x42F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F810u;
label_42f810:
    // 0x42f810: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_42f814:
    if (ctx->pc == 0x42F814u) {
        ctx->pc = 0x42F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F810u;
        // 0x42f814: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F818u;
        goto label_42f818;
    }
    ctx->pc = 0x42F810u;
    {
        const bool branch_taken_0x42f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f810) {
            ctx->pc = 0x42F814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F810u;
            // 0x42f814: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42F818u;
label_42f818:
    // 0x42f818: 0xc10bf34  jal         func_42FCD0
label_42f81c:
    if (ctx->pc == 0x42F81Cu) {
        ctx->pc = 0x42F820u;
        goto label_42f820;
    }
    ctx->pc = 0x42F818u;
    SET_GPR_U32(ctx, 31, 0x42F820u);
    ctx->pc = 0x42FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FCD0u, 0x42F818u, 0x42F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F820u;
label_42f820:
    // 0x42f820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42f820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f824:
    // 0x42f824: 0xc10bbde  jal         func_42EF78
label_42f828:
    if (ctx->pc == 0x42F828u) {
        ctx->pc = 0x42F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F824u;
        // 0x42f828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F82Cu;
        goto label_42f82c;
    }
    ctx->pc = 0x42F824u;
    SET_GPR_U32(ctx, 31, 0x42F82Cu);
    ctx->pc = 0x42F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F824u;
    // 0x42f828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42F824u, 0x42F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F82Cu;
label_42f82c:
    // 0x42f82c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_42f830:
    if (ctx->pc == 0x42F830u) {
        ctx->pc = 0x42F834u;
        goto label_42f834;
    }
    ctx->pc = 0x42F82Cu;
    {
        const bool branch_taken_0x42f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f82c) {
            ctx->pc = 0x42F86Cu;
            goto label_42f86c;
        }
    }
    ctx->pc = 0x42F834u;
label_42f834:
    // 0x42f834: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_42f838:
    if (ctx->pc == 0x42F838u) {
        ctx->pc = 0x42F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F834u;
        // 0x42f838: 0x3c080043  lui         $t0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F83Cu;
        goto label_42f83c;
    }
    ctx->pc = 0x42F834u;
    {
        const bool branch_taken_0x42f834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F834u;
        // 0x42f838: 0x3c080043  lui         $t0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f834) {
            ctx->pc = 0x42FAD0u;
            goto label_42fad0;
        }
    }
    ctx->pc = 0x42F83Cu;
label_42f83c:
    // 0x42f83c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42f840:
    // 0x42f840: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f844:
    // 0x42f844: 0x24a501d8  addiu       $a1, $a1, 0x1D8
    ctx->pc = 0x42f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 472));
label_42f848:
    // 0x42f848: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f848u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f84c:
    // 0x42f84c: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f850:
    // 0x42f850: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f854:
    // 0x42f854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f858:
    // 0x42f858: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f85c:
    // 0x42f85c: 0xc10bf08  jal         func_42FC20
label_42f860:
    if (ctx->pc == 0x42F860u) {
        ctx->pc = 0x42F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F85Cu;
        // 0x42f860: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F864u;
        goto label_42f864;
    }
    ctx->pc = 0x42F85Cu;
    SET_GPR_U32(ctx, 31, 0x42F864u);
    ctx->pc = 0x42F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F85Cu;
    // 0x42f860: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F85Cu, 0x42F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F864u;
label_42f864:
    // 0x42f864: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_42f868:
    if (ctx->pc == 0x42F868u) {
        ctx->pc = 0x42F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F864u;
        // 0x42f868: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F86Cu;
        goto label_42f86c;
    }
    ctx->pc = 0x42F864u;
    {
        const bool branch_taken_0x42f864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f864) {
            ctx->pc = 0x42F868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F864u;
            // 0x42f868: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42F86Cu;
label_42f86c:
    // 0x42f86c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_42f870:
    if (ctx->pc == 0x42F870u) {
        ctx->pc = 0x42F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F86Cu;
        // 0x42f870: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F874u;
        goto label_42f874;
    }
    ctx->pc = 0x42F86Cu;
    {
        const bool branch_taken_0x42f86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f86c) {
            ctx->pc = 0x42F870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F86Cu;
            // 0x42f870: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F87Cu;
            goto label_42f87c;
        }
    }
    ctx->pc = 0x42F874u;
label_42f874:
    // 0x42f874: 0x1000000c  b           . + 4 + (0xC << 2)
label_42f878:
    if (ctx->pc == 0x42F878u) {
        ctx->pc = 0x42F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F874u;
        // 0x42f878: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F87Cu;
        goto label_42f87c;
    }
    ctx->pc = 0x42F874u;
    {
        const bool branch_taken_0x42f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F874u;
        // 0x42f878: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f874) {
            ctx->pc = 0x42F8A8u;
            goto label_42f8a8;
        }
    }
    ctx->pc = 0x42F87Cu;
label_42f87c:
    // 0x42f87c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f880:
    // 0x42f880: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f884:
    // 0x42f884: 0x24a5f3f8  addiu       $a1, $a1, -0xC08
    ctx->pc = 0x42f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964216));
label_42f888:
    // 0x42f888: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f888u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f88c:
    // 0x42f88c: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f890:
    // 0x42f890: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f894:
    // 0x42f894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f898:
    // 0x42f898: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f89c:
    // 0x42f89c: 0xc10bf08  jal         func_42FC20
label_42f8a0:
    if (ctx->pc == 0x42F8A0u) {
        ctx->pc = 0x42F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F89Cu;
        // 0x42f8a0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F8A4u;
        goto label_42f8a4;
    }
    ctx->pc = 0x42F89Cu;
    SET_GPR_U32(ctx, 31, 0x42F8A4u);
    ctx->pc = 0x42F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F89Cu;
    // 0x42f8a0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F89Cu, 0x42F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F8A4u;
label_42f8a4:
    // 0x42f8a4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x42f8a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f8a8:
    // 0x42f8a8: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_42f8ac:
    if (ctx->pc == 0x42F8ACu) {
        ctx->pc = 0x42F8B0u;
        goto label_42f8b0;
    }
    ctx->pc = 0x42F8A8u;
    {
        const bool branch_taken_0x42f8a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f8a8) {
            ctx->pc = 0x42F8E0u;
            goto label_42f8e0;
        }
    }
    ctx->pc = 0x42F8B0u;
label_42f8b0:
    // 0x42f8b0: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x42f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_42f8b4:
    // 0x42f8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42f8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f8b8:
    // 0x42f8b8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x42f8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_42f8bc:
    // 0x42f8bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f8c0:
    // 0x42f8c0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x42f8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_42f8c4:
    // 0x42f8c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42f8c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f8c8:
    // 0x42f8c8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_42f8cc:
    // 0x42f8cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42f8ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f8d0:
    // 0x42f8d0: 0x40f809  jalr        $v0
label_42f8d4:
    if (ctx->pc == 0x42F8D4u) {
        ctx->pc = 0x42F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8D0u;
        // 0x42f8d4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F8D8u;
        goto label_42f8d8;
    }
    ctx->pc = 0x42F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42F8D8u);
        ctx->pc = 0x42F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8D0u;
        // 0x42f8d4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F8D0u, 0x42F8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42F8D8u;
label_42f8d8:
    // 0x42f8d8: 0x1000007e  b           . + 4 + (0x7E << 2)
label_42f8dc:
    if (ctx->pc == 0x42F8DCu) {
        ctx->pc = 0x42F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8D8u;
        // 0x42f8dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F8E0u;
        goto label_42f8e0;
    }
    ctx->pc = 0x42F8D8u;
    {
        const bool branch_taken_0x42f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8D8u;
        // 0x42f8dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f8d8) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42F8E0u;
label_42f8e0:
    // 0x42f8e0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_42f8e4:
    if (ctx->pc == 0x42F8E4u) {
        ctx->pc = 0x42F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8E0u;
        // 0x42f8e4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F8E8u;
        goto label_42f8e8;
    }
    ctx->pc = 0x42F8E0u;
    {
        const bool branch_taken_0x42f8e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f8e0) {
            ctx->pc = 0x42F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F8E0u;
            // 0x42f8e4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F8F0u;
            goto label_42f8f0;
        }
    }
    ctx->pc = 0x42F8E8u;
label_42f8e8:
    // 0x42f8e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_42f8ec:
    if (ctx->pc == 0x42F8ECu) {
        ctx->pc = 0x42F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8E8u;
        // 0x42f8ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F8F0u;
        goto label_42f8f0;
    }
    ctx->pc = 0x42F8E8u;
    {
        const bool branch_taken_0x42f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F8E8u;
        // 0x42f8ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f8e8) {
            ctx->pc = 0x42F91Cu;
            goto label_42f91c;
        }
    }
    ctx->pc = 0x42F8F0u;
label_42f8f0:
    // 0x42f8f0: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f8f4:
    // 0x42f8f4: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f8f8:
    // 0x42f8f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x42f8f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f8fc:
    // 0x42f8fc: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f8fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f900:
    // 0x42f900: 0x24a50328  addiu       $a1, $a1, 0x328
    ctx->pc = 0x42f900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 808));
label_42f904:
    // 0x42f904: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f908:
    // 0x42f908: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f90c:
    // 0x42f90c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x42f90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_42f910:
    // 0x42f910: 0xc10bf08  jal         func_42FC20
label_42f914:
    if (ctx->pc == 0x42F914u) {
        ctx->pc = 0x42F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F910u;
        // 0x42f914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F918u;
        goto label_42f918;
    }
    ctx->pc = 0x42F910u;
    SET_GPR_U32(ctx, 31, 0x42F918u);
    ctx->pc = 0x42F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F910u;
    // 0x42f914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F910u, 0x42F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F918u;
label_42f918:
    // 0x42f918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f91c:
    // 0x42f91c: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_42f920:
    if (ctx->pc == 0x42F920u) {
        ctx->pc = 0x42F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F91Cu;
        // 0x42f920: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F924u;
        goto label_42f924;
    }
    ctx->pc = 0x42F91Cu;
    {
        const bool branch_taken_0x42f91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F91Cu;
        // 0x42f920: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f91c) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F924u;
label_42f924:
    // 0x42f924: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_42f928:
    if (ctx->pc == 0x42F928u) {
        ctx->pc = 0x42F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F924u;
        // 0x42f928: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F92Cu;
        goto label_42f92c;
    }
    ctx->pc = 0x42F924u;
    {
        const bool branch_taken_0x42f924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f924) {
            ctx->pc = 0x42F928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F924u;
            // 0x42f928: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F934u;
            goto label_42f934;
        }
    }
    ctx->pc = 0x42F92Cu;
label_42f92c:
    // 0x42f92c: 0x1000000c  b           . + 4 + (0xC << 2)
label_42f930:
    if (ctx->pc == 0x42F930u) {
        ctx->pc = 0x42F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F92Cu;
        // 0x42f930: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F934u;
        goto label_42f934;
    }
    ctx->pc = 0x42F92Cu;
    {
        const bool branch_taken_0x42f92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F92Cu;
        // 0x42f930: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f92c) {
            ctx->pc = 0x42F960u;
            goto label_42f960;
        }
    }
    ctx->pc = 0x42F934u;
label_42f934:
    // 0x42f934: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f938:
    // 0x42f938: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42f938u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42f93c:
    // 0x42f93c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x42f93cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f940:
    // 0x42f940: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f940u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f944:
    // 0x42f944: 0x24a50328  addiu       $a1, $a1, 0x328
    ctx->pc = 0x42f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 808));
label_42f948:
    // 0x42f948: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f94c:
    // 0x42f94c: 0x2508f5d8  addiu       $t0, $t0, -0xA28
    ctx->pc = 0x42f94cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964696));
label_42f950:
    // 0x42f950: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x42f950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_42f954:
    // 0x42f954: 0xc10bf08  jal         func_42FC20
label_42f958:
    if (ctx->pc == 0x42F958u) {
        ctx->pc = 0x42F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F954u;
        // 0x42f958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F95Cu;
        goto label_42f95c;
    }
    ctx->pc = 0x42F954u;
    SET_GPR_U32(ctx, 31, 0x42F95Cu);
    ctx->pc = 0x42F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F954u;
    // 0x42f958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F954u, 0x42F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F95Cu;
label_42f95c:
    // 0x42f95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42f95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f960:
    // 0x42f960: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_42f964:
    if (ctx->pc == 0x42F964u) {
        ctx->pc = 0x42F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F960u;
        // 0x42f964: 0x3c1e0043  lui         $fp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F968u;
        goto label_42f968;
    }
    ctx->pc = 0x42F960u;
    {
        const bool branch_taken_0x42f960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F960u;
        // 0x42f964: 0x3c1e0043  lui         $fp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f960) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42F968u;
label_42f968:
    // 0x42f968: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x42f968u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_42f96c:
    // 0x42f96c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x42f96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42f970:
    // 0x42f970: 0x3c150043  lui         $s5, 0x43
    ctx->pc = 0x42f970u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
label_42f974:
    // 0x42f974: 0x10000024  b           . + 4 + (0x24 << 2)
label_42f978:
    if (ctx->pc == 0x42F978u) {
        ctx->pc = 0x42F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F974u;
        // 0x42f978: 0x3c170043  lui         $s7, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F97Cu;
        goto label_42f97c;
    }
    ctx->pc = 0x42F974u;
    {
        const bool branch_taken_0x42f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F974u;
        // 0x42f978: 0x3c170043  lui         $s7, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f974) {
            ctx->pc = 0x42FA08u;
            goto label_42fa08;
        }
    }
    ctx->pc = 0x42F97Cu;
label_42f97c:
    // 0x42f97c: 0x0  nop
    ctx->pc = 0x42f97cu;
    // NOP
label_42f980:
    // 0x42f980: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_42f984:
    if (ctx->pc == 0x42F984u) {
        ctx->pc = 0x42F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F980u;
        // 0x42f984: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F988u;
        goto label_42f988;
    }
    ctx->pc = 0x42F980u;
    {
        const bool branch_taken_0x42f980 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f980) {
            ctx->pc = 0x42F984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F980u;
            // 0x42f984: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F990u;
            goto label_42f990;
        }
    }
    ctx->pc = 0x42F988u;
label_42f988:
    // 0x42f988: 0x1000000a  b           . + 4 + (0xA << 2)
label_42f98c:
    if (ctx->pc == 0x42F98Cu) {
        ctx->pc = 0x42F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F988u;
        // 0x42f98c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F990u;
        goto label_42f990;
    }
    ctx->pc = 0x42F988u;
    {
        const bool branch_taken_0x42f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F988u;
        // 0x42f98c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f988) {
            ctx->pc = 0x42F9B4u;
            goto label_42f9b4;
        }
    }
    ctx->pc = 0x42F990u;
label_42f990:
    // 0x42f990: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x42f990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f994:
    // 0x42f994: 0x26e50328  addiu       $a1, $s7, 0x328
    ctx->pc = 0x42f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 808));
label_42f998:
    // 0x42f998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f99c:
    // 0x42f99c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f99cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f9a0:
    // 0x42f9a0: 0x26a8f5d8  addiu       $t0, $s5, -0xA28
    ctx->pc = 0x42f9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964696));
label_42f9a4:
    // 0x42f9a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f9a8:
    // 0x42f9a8: 0xc10bf08  jal         func_42FC20
label_42f9ac:
    if (ctx->pc == 0x42F9ACu) {
        ctx->pc = 0x42F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9A8u;
        // 0x42f9ac: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9B0u;
        goto label_42f9b0;
    }
    ctx->pc = 0x42F9A8u;
    SET_GPR_U32(ctx, 31, 0x42F9B0u);
    ctx->pc = 0x42F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F9A8u;
    // 0x42f9ac: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F9A8u, 0x42F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F9B0u;
label_42f9b0:
    // 0x42f9b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42f9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f9b4:
    // 0x42f9b4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_42f9b8:
    if (ctx->pc == 0x42F9B8u) {
        ctx->pc = 0x42F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9B4u;
        // 0x42f9b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9BCu;
        goto label_42f9bc;
    }
    ctx->pc = 0x42F9B4u;
    {
        const bool branch_taken_0x42f9b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f9b4) {
            ctx->pc = 0x42F9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42F9B4u;
            // 0x42f9b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42F9C4u;
            goto label_42f9c4;
        }
    }
    ctx->pc = 0x42F9BCu;
label_42f9bc:
    // 0x42f9bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_42f9c0:
    if (ctx->pc == 0x42F9C0u) {
        ctx->pc = 0x42F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9BCu;
        // 0x42f9c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9C4u;
        goto label_42f9c4;
    }
    ctx->pc = 0x42F9BCu;
    {
        const bool branch_taken_0x42f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9BCu;
        // 0x42f9c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f9bc) {
            ctx->pc = 0x42F9E8u;
            goto label_42f9e8;
        }
    }
    ctx->pc = 0x42F9C4u;
label_42f9c4:
    // 0x42f9c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x42f9c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f9c8:
    // 0x42f9c8: 0x26e50328  addiu       $a1, $s7, 0x328
    ctx->pc = 0x42f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 808));
label_42f9cc:
    // 0x42f9cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f9d0:
    // 0x42f9d0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42f9d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42f9d4:
    // 0x42f9d4: 0x26a8f5d8  addiu       $t0, $s5, -0xA28
    ctx->pc = 0x42f9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964696));
label_42f9d8:
    // 0x42f9d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f9dc:
    // 0x42f9dc: 0xc10bf08  jal         func_42FC20
label_42f9e0:
    if (ctx->pc == 0x42F9E0u) {
        ctx->pc = 0x42F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9DCu;
        // 0x42f9e0: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9E4u;
        goto label_42f9e4;
    }
    ctx->pc = 0x42F9DCu;
    SET_GPR_U32(ctx, 31, 0x42F9E4u);
    ctx->pc = 0x42F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F9DCu;
    // 0x42f9e0: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42F9DCu, 0x42F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F9E4u;
label_42f9e4:
    // 0x42f9e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f9e8:
    // 0x42f9e8: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_42f9ec:
    if (ctx->pc == 0x42F9ECu) {
        ctx->pc = 0x42F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9E8u;
        // 0x42f9ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9F0u;
        goto label_42f9f0;
    }
    ctx->pc = 0x42F9E8u;
    {
        const bool branch_taken_0x42f9e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9E8u;
        // 0x42f9ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f9e8) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42F9F0u;
label_42f9f0:
    // 0x42f9f0: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_42f9f4:
    if (ctx->pc == 0x42F9F4u) {
        ctx->pc = 0x42F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9F0u;
        // 0x42f9f4: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42F9F8u;
        goto label_42f9f8;
    }
    ctx->pc = 0x42F9F0u;
    {
        const bool branch_taken_0x42f9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F9F0u;
        // 0x42f9f4: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f9f0) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42F9F8u;
label_42f9f8:
    // 0x42f9f8: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x42f9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_42f9fc:
    // 0x42f9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42fa00:
    // 0x42fa00: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x42fa00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42fa04:
    // 0x42fa04: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x42fa04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_42fa08:
    // 0x42fa08: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_42fa0c:
    if (ctx->pc == 0x42FA0Cu) {
        ctx->pc = 0x42FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA08u;
        // 0x42fa0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA10u;
        goto label_42fa10;
    }
    ctx->pc = 0x42FA08u;
    {
        const bool branch_taken_0x42fa08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA08u;
        // 0x42fa0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa08) {
            ctx->pc = 0x42FA34u;
            goto label_42fa34;
        }
    }
    ctx->pc = 0x42FA10u;
label_42fa10:
    // 0x42fa10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42fa14:
    // 0x42fa14: 0x27c502b8  addiu       $a1, $fp, 0x2B8
    ctx->pc = 0x42fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
label_42fa18:
    // 0x42fa18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fa1c:
    // 0x42fa1c: 0x26a8f5d8  addiu       $t0, $s5, -0xA28
    ctx->pc = 0x42fa1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964696));
label_42fa20:
    // 0x42fa20: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42fa20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42fa24:
    // 0x42fa24: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x42fa24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42fa28:
    // 0x42fa28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42fa2c:
    // 0x42fa2c: 0xc10bf08  jal         func_42FC20
label_42fa30:
    if (ctx->pc == 0x42FA30u) {
        ctx->pc = 0x42FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA2Cu;
        // 0x42fa30: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA34u;
        goto label_42fa34;
    }
    ctx->pc = 0x42FA2Cu;
    SET_GPR_U32(ctx, 31, 0x42FA34u);
    ctx->pc = 0x42FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42FA2Cu;
    // 0x42fa30: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42FA2Cu, 0x42FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42FA34u;
label_42fa34:
    // 0x42fa34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42fa38:
    if (ctx->pc == 0x42FA38u) {
        ctx->pc = 0x42FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA34u;
        // 0x42fa38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA3Cu;
        goto label_42fa3c;
    }
    ctx->pc = 0x42FA34u;
    {
        const bool branch_taken_0x42fa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA34u;
        // 0x42fa38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa34) {
            ctx->pc = 0x42FA44u;
            goto label_42fa44;
        }
    }
    ctx->pc = 0x42FA3Cu;
label_42fa3c:
    // 0x42fa3c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x42fa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42fa40:
    // 0x42fa40: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x42fa40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42fa44:
    // 0x42fa44: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_42fa48:
    if (ctx->pc == 0x42FA48u) {
        ctx->pc = 0x42FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA44u;
        // 0x42fa48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA4Cu;
        goto label_42fa4c;
    }
    ctx->pc = 0x42FA44u;
    {
        const bool branch_taken_0x42fa44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA44u;
        // 0x42fa48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa44) {
            ctx->pc = 0x42FA70u;
            goto label_42fa70;
        }
    }
    ctx->pc = 0x42FA4Cu;
label_42fa4c:
    // 0x42fa4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x42fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42fa50:
    // 0x42fa50: 0x27c502b8  addiu       $a1, $fp, 0x2B8
    ctx->pc = 0x42fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
label_42fa54:
    // 0x42fa54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fa58:
    // 0x42fa58: 0x26a8f5d8  addiu       $t0, $s5, -0xA28
    ctx->pc = 0x42fa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964696));
label_42fa5c:
    // 0x42fa5c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x42fa5cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_42fa60:
    // 0x42fa60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x42fa60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42fa64:
    // 0x42fa64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42fa68:
    // 0x42fa68: 0xc10bf08  jal         func_42FC20
label_42fa6c:
    if (ctx->pc == 0x42FA6Cu) {
        ctx->pc = 0x42FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA68u;
        // 0x42fa6c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA70u;
        goto label_42fa70;
    }
    ctx->pc = 0x42FA68u;
    SET_GPR_U32(ctx, 31, 0x42FA70u);
    ctx->pc = 0x42FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42FA68u;
    // 0x42fa6c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FC20u, 0x42FA68u, 0x42FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42FA70u;
label_42fa70:
    // 0x42fa70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42fa74:
    if (ctx->pc == 0x42FA74u) {
        ctx->pc = 0x42FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA70u;
        // 0x42fa74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA78u;
        goto label_42fa78;
    }
    ctx->pc = 0x42FA70u;
    {
        const bool branch_taken_0x42fa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA70u;
        // 0x42fa74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa70) {
            ctx->pc = 0x42FA80u;
            goto label_42fa80;
        }
    }
    ctx->pc = 0x42FA78u;
label_42fa78:
    // 0x42fa78: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x42fa78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42fa7c:
    // 0x42fa7c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x42fa7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42fa80:
    // 0x42fa80: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x42fa80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_42fa84:
    // 0x42fa84: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x42fa84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_42fa88:
    // 0x42fa88: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x42fa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_42fa8c:
    // 0x42fa8c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_42fa90:
    if (ctx->pc == 0x42FA90u) {
        ctx->pc = 0x42FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA8Cu;
        // 0x42fa90: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FA94u;
        goto label_42fa94;
    }
    ctx->pc = 0x42FA8Cu;
    {
        const bool branch_taken_0x42fa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA8Cu;
        // 0x42fa90: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa8c) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42FA94u;
label_42fa94:
    // 0x42fa94: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x42fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_42fa98:
    // 0x42fa98: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x42fa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42fa9c:
    // 0x42fa9c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_42faa0:
    if (ctx->pc == 0x42FAA0u) {
        ctx->pc = 0x42FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA9Cu;
        // 0x42faa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FAA4u;
        goto label_42faa4;
    }
    ctx->pc = 0x42FA9Cu;
    {
        const bool branch_taken_0x42fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FA9Cu;
        // 0x42faa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fa9c) {
            ctx->pc = 0x42FAD8u;
            goto label_42fad8;
        }
    }
    ctx->pc = 0x42FAA4u;
label_42faa4:
    // 0x42faa4: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_42faa8:
    if (ctx->pc == 0x42FAA8u) {
        ctx->pc = 0x42FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAA4u;
        // 0x42faa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FAACu;
        goto label_42faac;
    }
    ctx->pc = 0x42FAA4u;
    {
        const bool branch_taken_0x42faa4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x42faa4) {
            ctx->pc = 0x42FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42FAA4u;
            // 0x42faa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42FAC0u;
            goto label_42fac0;
        }
    }
    ctx->pc = 0x42FAACu;
label_42faac:
    // 0x42faac: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x42faacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_42fab0:
    // 0x42fab0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_42fab4:
    if (ctx->pc == 0x42FAB4u) {
        ctx->pc = 0x42FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAB0u;
        // 0x42fab4: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FAB8u;
        goto label_42fab8;
    }
    ctx->pc = 0x42FAB0u;
    {
        const bool branch_taken_0x42fab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAB0u;
        // 0x42fab4: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fab0) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42FAB8u;
label_42fab8:
    // 0x42fab8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_42fabc:
    if (ctx->pc == 0x42FABCu) {
        ctx->pc = 0x42FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAB8u;
        // 0x42fabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FAC0u;
        goto label_42fac0;
    }
    ctx->pc = 0x42FAB8u;
    {
        const bool branch_taken_0x42fab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAB8u;
        // 0x42fabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fab8) {
            ctx->pc = 0x42FAD4u;
            goto label_42fad4;
        }
    }
    ctx->pc = 0x42FAC0u;
label_42fac0:
    // 0x42fac0: 0xc10bbde  jal         func_42EF78
label_42fac4:
    if (ctx->pc == 0x42FAC4u) {
        ctx->pc = 0x42FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FAC0u;
        // 0x42fac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FAC8u;
        goto label_42fac8;
    }
    ctx->pc = 0x42FAC0u;
    SET_GPR_U32(ctx, 31, 0x42FAC8u);
    ctx->pc = 0x42FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42FAC0u;
    // 0x42fac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF78u, 0x42FAC0u, 0x42FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42FAC8u;
label_42fac8:
    // 0x42fac8: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_42facc:
    if (ctx->pc == 0x42FACCu) {
        ctx->pc = 0x42FAD0u;
        goto label_42fad0;
    }
    ctx->pc = 0x42FAC8u;
    {
        const bool branch_taken_0x42fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42fac8) {
            ctx->pc = 0x42F980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42f980;
        }
    }
    ctx->pc = 0x42FAD0u;
label_42fad0:
    // 0x42fad0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x42fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_42fad4:
    // 0x42fad4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x42fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_42fad8:
    // 0x42fad8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x42fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_42fadc:
    // 0x42fadc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x42fadcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_42fae0:
    // 0x42fae0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x42fae0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42fae4:
    // 0x42fae4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x42fae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42fae8:
    // 0x42fae8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x42fae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42faec:
    // 0x42faec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x42faecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42faf0:
    // 0x42faf0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x42faf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42faf4:
    // 0x42faf4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x42faf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42faf8:
    // 0x42faf8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x42faf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42fafc:
    // 0x42fafc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x42fafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42fb00:
    // 0x42fb00: 0x3e00008  jr          $ra
label_42fb04:
    if (ctx->pc == 0x42FB04u) {
        ctx->pc = 0x42FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB00u;
        // 0x42fb04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FB08u;
        goto label_fallthrough_0x42fb00;
    }
    ctx->pc = 0x42FB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FB00u;
        // 0x42fb04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42fb00:
    ctx->pc = 0x42FB08u;
}
