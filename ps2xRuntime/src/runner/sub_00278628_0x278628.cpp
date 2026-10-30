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

// Function: sub_00278628
// Address: 0x278628 - 0x2789d0
void sub_00278628_0x278628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278628_0x278628");
#endif

    switch (ctx->pc) {
        case 0x278628u: goto label_278628;
        case 0x27862cu: goto label_27862c;
        case 0x278630u: goto label_278630;
        case 0x278634u: goto label_278634;
        case 0x278638u: goto label_278638;
        case 0x27863cu: goto label_27863c;
        case 0x278640u: goto label_278640;
        case 0x278644u: goto label_278644;
        case 0x278648u: goto label_278648;
        case 0x27864cu: goto label_27864c;
        case 0x278650u: goto label_278650;
        case 0x278654u: goto label_278654;
        case 0x278658u: goto label_278658;
        case 0x27865cu: goto label_27865c;
        case 0x278660u: goto label_278660;
        case 0x278664u: goto label_278664;
        case 0x278668u: goto label_278668;
        case 0x27866cu: goto label_27866c;
        case 0x278670u: goto label_278670;
        case 0x278674u: goto label_278674;
        case 0x278678u: goto label_278678;
        case 0x27867cu: goto label_27867c;
        case 0x278680u: goto label_278680;
        case 0x278684u: goto label_278684;
        case 0x278688u: goto label_278688;
        case 0x27868cu: goto label_27868c;
        case 0x278690u: goto label_278690;
        case 0x278694u: goto label_278694;
        case 0x278698u: goto label_278698;
        case 0x27869cu: goto label_27869c;
        case 0x2786a0u: goto label_2786a0;
        case 0x2786a4u: goto label_2786a4;
        case 0x2786a8u: goto label_2786a8;
        case 0x2786acu: goto label_2786ac;
        case 0x2786b0u: goto label_2786b0;
        case 0x2786b4u: goto label_2786b4;
        case 0x2786b8u: goto label_2786b8;
        case 0x2786bcu: goto label_2786bc;
        case 0x2786c0u: goto label_2786c0;
        case 0x2786c4u: goto label_2786c4;
        case 0x2786c8u: goto label_2786c8;
        case 0x2786ccu: goto label_2786cc;
        case 0x2786d0u: goto label_2786d0;
        case 0x2786d4u: goto label_2786d4;
        case 0x2786d8u: goto label_2786d8;
        case 0x2786dcu: goto label_2786dc;
        case 0x2786e0u: goto label_2786e0;
        case 0x2786e4u: goto label_2786e4;
        case 0x2786e8u: goto label_2786e8;
        case 0x2786ecu: goto label_2786ec;
        case 0x2786f0u: goto label_2786f0;
        case 0x2786f4u: goto label_2786f4;
        case 0x2786f8u: goto label_2786f8;
        case 0x2786fcu: goto label_2786fc;
        case 0x278700u: goto label_278700;
        case 0x278704u: goto label_278704;
        case 0x278708u: goto label_278708;
        case 0x27870cu: goto label_27870c;
        case 0x278710u: goto label_278710;
        case 0x278714u: goto label_278714;
        case 0x278718u: goto label_278718;
        case 0x27871cu: goto label_27871c;
        case 0x278720u: goto label_278720;
        case 0x278724u: goto label_278724;
        case 0x278728u: goto label_278728;
        case 0x27872cu: goto label_27872c;
        case 0x278730u: goto label_278730;
        case 0x278734u: goto label_278734;
        case 0x278738u: goto label_278738;
        case 0x27873cu: goto label_27873c;
        case 0x278740u: goto label_278740;
        case 0x278744u: goto label_278744;
        case 0x278748u: goto label_278748;
        case 0x27874cu: goto label_27874c;
        case 0x278750u: goto label_278750;
        case 0x278754u: goto label_278754;
        case 0x278758u: goto label_278758;
        case 0x27875cu: goto label_27875c;
        case 0x278760u: goto label_278760;
        case 0x278764u: goto label_278764;
        case 0x278768u: goto label_278768;
        case 0x27876cu: goto label_27876c;
        case 0x278770u: goto label_278770;
        case 0x278774u: goto label_278774;
        case 0x278778u: goto label_278778;
        case 0x27877cu: goto label_27877c;
        case 0x278780u: goto label_278780;
        case 0x278784u: goto label_278784;
        case 0x278788u: goto label_278788;
        case 0x27878cu: goto label_27878c;
        case 0x278790u: goto label_278790;
        case 0x278794u: goto label_278794;
        case 0x278798u: goto label_278798;
        case 0x27879cu: goto label_27879c;
        case 0x2787a0u: goto label_2787a0;
        case 0x2787a4u: goto label_2787a4;
        case 0x2787a8u: goto label_2787a8;
        case 0x2787acu: goto label_2787ac;
        case 0x2787b0u: goto label_2787b0;
        case 0x2787b4u: goto label_2787b4;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787bcu: goto label_2787bc;
        case 0x2787c0u: goto label_2787c0;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787c8u: goto label_2787c8;
        case 0x2787ccu: goto label_2787cc;
        case 0x2787d0u: goto label_2787d0;
        case 0x2787d4u: goto label_2787d4;
        case 0x2787d8u: goto label_2787d8;
        case 0x2787dcu: goto label_2787dc;
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        default: break;
    }

    ctx->pc = 0x278628u;

label_278628:
    // 0x278628: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x278628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27862c:
    // 0x27862c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x27862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_278630:
    // 0x278630: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x278630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_278634:
    // 0x278634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_278638:
    // 0x278638: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x278638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_27863c:
    // 0x27863c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x27863cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_278640:
    // 0x278640: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x278640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_278644:
    // 0x278644: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x278644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_278648:
    // 0x278648: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x278648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_27864c:
    // 0x27864c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_278650:
    // 0x278650: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x278650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_278654:
    // 0x278654: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x278654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_278658:
    // 0x278658: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_27865c:
    if (ctx->pc == 0x27865Cu) {
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278660u;
        goto label_278660;
    }
    ctx->pc = 0x278658u;
    {
        const bool branch_taken_0x278658 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278658) {
            ctx->pc = 0x278670u;
            goto label_278670;
        }
    }
    ctx->pc = 0x278660u;
label_278660:
    // 0x278660: 0xc0899ae  jal         func_2266B8
label_278664:
    if (ctx->pc == 0x278664u) {
        ctx->pc = 0x278668u;
        goto label_278668;
    }
    ctx->pc = 0x278660u;
    SET_GPR_U32(ctx, 31, 0x278668u);
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x278660u, 0x278668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278668u;
label_278668:
    // 0x278668: 0x10000004  b           . + 4 + (0x4 << 2)
label_27866c:
    if (ctx->pc == 0x27866Cu) {
        ctx->pc = 0x27866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278668u;
        // 0x27866c: 0x24560001  addiu       $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278670u;
        goto label_278670;
    }
    ctx->pc = 0x278668u;
    {
        const bool branch_taken_0x278668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278668u;
        // 0x27866c: 0x24560001  addiu       $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278668) {
            ctx->pc = 0x27867Cu;
            goto label_27867c;
        }
    }
    ctx->pc = 0x278670u;
label_278670:
    // 0x278670: 0xc0899ae  jal         func_2266B8
label_278674:
    if (ctx->pc == 0x278674u) {
        ctx->pc = 0x278674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278670u;
        // 0x278674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278678u;
        goto label_278678;
    }
    ctx->pc = 0x278670u;
    SET_GPR_U32(ctx, 31, 0x278678u);
    ctx->pc = 0x278674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278670u;
    // 0x278674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x278670u, 0x278678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278678u;
label_278678:
    // 0x278678: 0x24560002  addiu       $s6, $v0, 0x2
    ctx->pc = 0x278678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_27867c:
    // 0x27867c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_278680:
    // 0x278680: 0x8e1500d8  lw          $s5, 0xD8($s0)
    ctx->pc = 0x278680u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_278684:
    // 0x278684: 0x2451e758  addiu       $s1, $v0, -0x18A8
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960984));
label_278688:
    // 0x278688: 0xc041532  jal         func_1054C8
label_27868c:
    if (ctx->pc == 0x27868Cu) {
        ctx->pc = 0x27868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278688u;
        // 0x27868c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278690u;
        goto label_278690;
    }
    ctx->pc = 0x278688u;
    SET_GPR_U32(ctx, 31, 0x278690u);
    ctx->pc = 0x27868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278688u;
    // 0x27868c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278688u, 0x278690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278690u;
label_278690:
    // 0x278690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278694:
    // 0x278694: 0xc041532  jal         func_1054C8
label_278698:
    if (ctx->pc == 0x278698u) {
        ctx->pc = 0x278698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278694u;
        // 0x278698: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27869Cu;
        goto label_27869c;
    }
    ctx->pc = 0x278694u;
    SET_GPR_U32(ctx, 31, 0x27869Cu);
    ctx->pc = 0x278698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278694u;
    // 0x278698: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278694u, 0x27869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27869Cu;
label_27869c:
    // 0x27869c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27869cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2786a0:
    // 0x2786a0: 0xc041532  jal         func_1054C8
label_2786a4:
    if (ctx->pc == 0x2786A4u) {
        ctx->pc = 0x2786A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786A0u;
        // 0x2786a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786A8u;
        goto label_2786a8;
    }
    ctx->pc = 0x2786A0u;
    SET_GPR_U32(ctx, 31, 0x2786A8u);
    ctx->pc = 0x2786A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786A0u;
    // 0x2786a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2786A0u, 0x2786A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786A8u;
label_2786a8:
    // 0x2786a8: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_2786ac:
    if (ctx->pc == 0x2786ACu) {
        ctx->pc = 0x2786ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786A8u;
        // 0x2786ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786B0u;
        goto label_2786b0;
    }
    ctx->pc = 0x2786A8u;
    {
        const bool branch_taken_0x2786a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786A8u;
        // 0x2786ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786a8) {
            ctx->pc = 0x2786D4u;
            goto label_2786d4;
        }
    }
    ctx->pc = 0x2786B0u;
label_2786b0:
    // 0x2786b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2786b4:
    // 0x2786b4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2786b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2786b8:
    // 0x2786b8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2786b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2786bc:
    // 0x2786bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2786bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2786c0:
    // 0x2786c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2786c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2786c4:
    // 0x2786c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2786c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2786c8:
    // 0x2786c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2786c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2786cc:
    // 0x2786cc: 0xc041b20  jal         func_106C80
label_2786d0:
    if (ctx->pc == 0x2786D0u) {
        ctx->pc = 0x2786D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786CCu;
        // 0x2786d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786D4u;
        goto label_2786d4;
    }
    ctx->pc = 0x2786CCu;
    SET_GPR_U32(ctx, 31, 0x2786D4u);
    ctx->pc = 0x2786D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786CCu;
    // 0x2786d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2786CCu, 0x2786D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786D4u;
label_2786d4:
    // 0x2786d4: 0xc05d484  jal         func_175210
label_2786d8:
    if (ctx->pc == 0x2786D8u) {
        ctx->pc = 0x2786D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786D4u;
        // 0x2786d8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786DCu;
        goto label_2786dc;
    }
    ctx->pc = 0x2786D4u;
    SET_GPR_U32(ctx, 31, 0x2786DCu);
    ctx->pc = 0x2786D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786D4u;
    // 0x2786d8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2786D4u, 0x2786DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786DCu;
label_2786dc:
    // 0x2786dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2786dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2786e0:
    // 0x2786e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2786e4:
    // 0x2786e4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2786e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2786e8:
    // 0x2786e8: 0xa0f809  jalr        $a1
label_2786ec:
    if (ctx->pc == 0x2786ECu) {
        ctx->pc = 0x2786ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E8u;
        // 0x2786ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786F0u;
        goto label_2786f0;
    }
    ctx->pc = 0x2786E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2786F0u);
        ctx->pc = 0x2786ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E8u;
        // 0x2786ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2786E8u, 0x2786F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2786F0u;
label_2786f0:
    // 0x2786f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2786f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2786f4:
    // 0x2786f4: 0xc087016  jal         func_21C058
label_2786f8:
    if (ctx->pc == 0x2786F8u) {
        ctx->pc = 0x2786F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786F4u;
        // 0x2786f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786FCu;
        goto label_2786fc;
    }
    ctx->pc = 0x2786F4u;
    SET_GPR_U32(ctx, 31, 0x2786FCu);
    ctx->pc = 0x2786F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786F4u;
    // 0x2786f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2786F4u, 0x2786FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786FCu;
label_2786fc:
    // 0x2786fc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_278700:
    if (ctx->pc == 0x278700u) {
        ctx->pc = 0x278700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786FCu;
        // 0x278700: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278704u;
        goto label_278704;
    }
    ctx->pc = 0x2786FCu;
    {
        const bool branch_taken_0x2786fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x278700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786FCu;
        // 0x278700: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786fc) {
            ctx->pc = 0x278720u;
            goto label_278720;
        }
    }
    ctx->pc = 0x278704u;
label_278704:
    // 0x278704: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x278704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_278708:
    // 0x278708: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27870c:
    // 0x27870c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278710:
    // 0x278710: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x278710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_278714:
    // 0x278714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278718:
    // 0x278718: 0xc04159e  jal         func_105678
label_27871c:
    if (ctx->pc == 0x27871Cu) {
        ctx->pc = 0x27871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278718u;
        // 0x27871c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278720u;
        goto label_278720;
    }
    ctx->pc = 0x278718u;
    SET_GPR_U32(ctx, 31, 0x278720u);
    ctx->pc = 0x27871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278718u;
    // 0x27871c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x278718u, 0x278720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278720u;
label_278720:
    // 0x278720: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_278724:
    // 0x278724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278728:
    // 0x278728: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x278728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27872c:
    // 0x27872c: 0xc089c18  jal         func_227060
label_278730:
    if (ctx->pc == 0x278730u) {
        ctx->pc = 0x278730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27872Cu;
        // 0x278730: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278734u;
        goto label_278734;
    }
    ctx->pc = 0x27872Cu;
    SET_GPR_U32(ctx, 31, 0x278734u);
    ctx->pc = 0x278730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27872Cu;
    // 0x278730: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x27872Cu, 0x278734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278734u;
label_278734:
    // 0x278734: 0xc0e57ce  jal         func_395F38
label_278738:
    if (ctx->pc == 0x278738u) {
        ctx->pc = 0x278738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278734u;
        // 0x278738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27873Cu;
        goto label_27873c;
    }
    ctx->pc = 0x278734u;
    SET_GPR_U32(ctx, 31, 0x27873Cu);
    ctx->pc = 0x278738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278734u;
    // 0x278738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x278734u, 0x27873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27873Cu;
label_27873c:
    // 0x27873c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27873cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278740:
    // 0x278740: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_278744:
    if (ctx->pc == 0x278744u) {
        ctx->pc = 0x278744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278740u;
        // 0x278744: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278748u;
        goto label_278748;
    }
    ctx->pc = 0x278740u;
    {
        const bool branch_taken_0x278740 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x278744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278740u;
        // 0x278744: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278740) {
            ctx->pc = 0x278764u;
            goto label_278764;
        }
    }
    ctx->pc = 0x278748u;
label_278748:
    // 0x278748: 0x96850112  lhu         $a1, 0x112($s4)
    ctx->pc = 0x278748u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
label_27874c:
    // 0x27874c: 0xc0e44cc  jal         func_391330
label_278750:
    if (ctx->pc == 0x278750u) {
        ctx->pc = 0x278750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27874Cu;
        // 0x278750: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278754u;
        goto label_278754;
    }
    ctx->pc = 0x27874Cu;
    SET_GPR_U32(ctx, 31, 0x278754u);
    ctx->pc = 0x278750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27874Cu;
    // 0x278750: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x27874Cu, 0x278754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278754u;
label_278754:
    // 0x278754: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x278754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_278758:
    // 0x278758: 0x38630030  xori        $v1, $v1, 0x30
    ctx->pc = 0x278758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)48);
label_27875c:
    // 0x27875c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27875cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_278760:
    // 0x278760: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x278760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_278764:
    // 0x278764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x278764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_278768:
    // 0x278768: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_27876c:
    if (ctx->pc == 0x27876Cu) {
        ctx->pc = 0x278770u;
        goto label_278770;
    }
    ctx->pc = 0x278768u;
    {
        const bool branch_taken_0x278768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278768) {
            ctx->pc = 0x27887Cu;
            goto label_27887c;
        }
    }
    ctx->pc = 0x278770u;
label_278770:
    // 0x278770: 0xc088ac6  jal         func_222B18
label_278774:
    if (ctx->pc == 0x278774u) {
        ctx->pc = 0x278774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278770u;
        // 0x278774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278778u;
        goto label_278778;
    }
    ctx->pc = 0x278770u;
    SET_GPR_U32(ctx, 31, 0x278778u);
    ctx->pc = 0x278774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278770u;
    // 0x278774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x278770u, 0x278778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278778u;
label_278778:
    // 0x278778: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x278778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_27877c:
    // 0x27877c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_278780:
    // 0x278780: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_278784:
    if (ctx->pc == 0x278784u) {
        ctx->pc = 0x278788u;
        goto label_278788;
    }
    ctx->pc = 0x278780u;
    {
        const bool branch_taken_0x278780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278780) {
            ctx->pc = 0x27887Cu;
            goto label_27887c;
        }
    }
    ctx->pc = 0x278788u;
label_278788:
    // 0x278788: 0x12e0003c  beqz        $s7, . + 4 + (0x3C << 2)
label_27878c:
    if (ctx->pc == 0x27878Cu) {
        ctx->pc = 0x278790u;
        goto label_278790;
    }
    ctx->pc = 0x278788u;
    {
        const bool branch_taken_0x278788 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x278788) {
            ctx->pc = 0x27887Cu;
            goto label_27887c;
        }
    }
    ctx->pc = 0x278790u;
label_278790:
    // 0x278790: 0xc041532  jal         func_1054C8
label_278794:
    if (ctx->pc == 0x278794u) {
        ctx->pc = 0x278794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278790u;
        // 0x278794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278798u;
        goto label_278798;
    }
    ctx->pc = 0x278790u;
    SET_GPR_U32(ctx, 31, 0x278798u);
    ctx->pc = 0x278794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278790u;
    // 0x278794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278790u, 0x278798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278798u;
label_278798:
    // 0x278798: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x278798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27879c:
    // 0x27879c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_2787a0:
    if (ctx->pc == 0x2787A0u) {
        ctx->pc = 0x2787A4u;
        goto label_2787a4;
    }
    ctx->pc = 0x27879Cu;
    {
        const bool branch_taken_0x27879c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27879c) {
            ctx->pc = 0x2787E8u;
            goto label_2787e8;
        }
    }
    ctx->pc = 0x2787A4u;
label_2787a4:
    // 0x2787a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2787a8:
    // 0x2787a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2787a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2787ac:
    // 0x2787ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2787acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2787b0:
    // 0x2787b0: 0x40f809  jalr        $v0
label_2787b4:
    if (ctx->pc == 0x2787B4u) {
        ctx->pc = 0x2787B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787B0u;
        // 0x2787b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787B8u;
        goto label_2787b8;
    }
    ctx->pc = 0x2787B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2787B8u);
        ctx->pc = 0x2787B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787B0u;
        // 0x2787b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787B0u, 0x2787B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2787B8u;
label_2787b8:
    // 0x2787b8: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x2787b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_2787bc:
    // 0x2787bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2787bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2787c0:
    // 0x2787c0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2787c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2787c4:
    // 0x2787c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2787c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2787c8:
    // 0x2787c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2787c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2787cc:
    // 0x2787cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2787ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2787d0:
    // 0x2787d0: 0x254ae900  addiu       $t2, $t2, -0x1700
    ctx->pc = 0x2787d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961408));
label_2787d4:
    // 0x2787d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2787d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2787d8:
    // 0x2787d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2787d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2787dc:
    // 0x2787dc: 0x2406029a  addiu       $a2, $zero, 0x29A
    ctx->pc = 0x2787dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_2787e0:
    // 0x2787e0: 0xc041664  jal         func_105990
label_2787e4:
    if (ctx->pc == 0x2787E4u) {
        ctx->pc = 0x2787E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787E0u;
        // 0x2787e4: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787E8u;
        goto label_2787e8;
    }
    ctx->pc = 0x2787E0u;
    SET_GPR_U32(ctx, 31, 0x2787E8u);
    ctx->pc = 0x2787E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787E0u;
    // 0x2787e4: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2787E0u, 0x2787E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787E8u;
label_2787e8:
    // 0x2787e8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_2787ec:
    if (ctx->pc == 0x2787ECu) {
        ctx->pc = 0x2787ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787E8u;
        // 0x2787ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787F0u;
        goto label_2787f0;
    }
    ctx->pc = 0x2787E8u;
    {
        const bool branch_taken_0x2787e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2787ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787E8u;
        // 0x2787ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787e8) {
            ctx->pc = 0x278838u;
            goto label_278838;
        }
    }
    ctx->pc = 0x2787F0u;
label_2787f0:
    // 0x2787f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2787f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2787f4:
    // 0x2787f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2787f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2787f8:
    // 0x2787f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2787fc:
    // 0x2787fc: 0x40f809  jalr        $v0
label_278800:
    if (ctx->pc == 0x278800u) {
        ctx->pc = 0x278800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787FCu;
        // 0x278800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278804u;
        goto label_278804;
    }
    ctx->pc = 0x2787FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278804u);
        ctx->pc = 0x278800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787FCu;
        // 0x278800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787FCu, 0x278804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278804u;
label_278804:
    // 0x278804: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x278804u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_278808:
    // 0x278808: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x278808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_27880c:
    // 0x27880c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x27880cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_278810:
    // 0x278810: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278814:
    // 0x278814: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x278814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_278818:
    // 0x278818: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x278818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27881c:
    // 0x27881c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27881cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278820:
    // 0x278820: 0x254a8620  addiu       $t2, $t2, -0x79E0
    ctx->pc = 0x278820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936096));
label_278824:
    // 0x278824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278828:
    // 0x278828: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x278828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27882c:
    // 0x27882c: 0xc041664  jal         func_105990
label_278830:
    if (ctx->pc == 0x278830u) {
        ctx->pc = 0x278830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27882Cu;
        // 0x278830: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278834u;
        goto label_278834;
    }
    ctx->pc = 0x27882Cu;
    SET_GPR_U32(ctx, 31, 0x278834u);
    ctx->pc = 0x278830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27882Cu;
    // 0x278830: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27882Cu, 0x278834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278834u;
label_278834:
    // 0x278834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278838:
    // 0x278838: 0xc089990  jal         func_226640
label_27883c:
    if (ctx->pc == 0x27883Cu) {
        ctx->pc = 0x27883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278838u;
        // 0x27883c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278840u;
        goto label_278840;
    }
    ctx->pc = 0x278838u;
    SET_GPR_U32(ctx, 31, 0x278840u);
    ctx->pc = 0x27883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278838u;
    // 0x27883c: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x278838u, 0x278840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278840u;
label_278840:
    // 0x278840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278844:
    // 0x278844: 0xc08b900  jal         func_22E400
label_278848:
    if (ctx->pc == 0x278848u) {
        ctx->pc = 0x278848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278844u;
        // 0x278848: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27884Cu;
        goto label_27884c;
    }
    ctx->pc = 0x278844u;
    SET_GPR_U32(ctx, 31, 0x27884Cu);
    ctx->pc = 0x278848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278844u;
    // 0x278848: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x278844u, 0x27884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27884Cu;
label_27884c:
    // 0x27884c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_278850:
    // 0x278850: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_278854:
    // 0x278854: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278858:
    // 0x278858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27885c:
    // 0x27885c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27885cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278860:
    // 0x278860: 0xc09d872  jal         func_2761C8
label_278864:
    if (ctx->pc == 0x278864u) {
        ctx->pc = 0x278864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278860u;
        // 0x278864: 0x2406029a  addiu       $a2, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278868u;
        goto label_278868;
    }
    ctx->pc = 0x278860u;
    SET_GPR_U32(ctx, 31, 0x278868u);
    ctx->pc = 0x278864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278860u;
    // 0x278864: 0x2406029a  addiu       $a2, $zero, 0x29A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x278860u, 0x278868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278868u;
label_278868:
    // 0x278868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27886c:
    // 0x27886c: 0xc089c20  jal         func_227080
label_278870:
    if (ctx->pc == 0x278870u) {
        ctx->pc = 0x278870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27886Cu;
        // 0x278870: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278874u;
        goto label_278874;
    }
    ctx->pc = 0x27886Cu;
    SET_GPR_U32(ctx, 31, 0x278874u);
    ctx->pc = 0x278870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27886Cu;
    // 0x278870: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x27886Cu, 0x278874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278874u;
label_278874:
    // 0x278874: 0x10000019  b           . + 4 + (0x19 << 2)
label_278878:
    if (ctx->pc == 0x278878u) {
        ctx->pc = 0x278878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278874u;
        // 0x278878: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27887Cu;
        goto label_27887c;
    }
    ctx->pc = 0x278874u;
    {
        const bool branch_taken_0x278874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278874u;
        // 0x278878: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278874) {
            ctx->pc = 0x2788DCu;
            goto label_2788dc;
        }
    }
    ctx->pc = 0x27887Cu;
label_27887c:
    // 0x27887c: 0x52600011  beql        $s3, $zero, . + 4 + (0x11 << 2)
label_278880:
    if (ctx->pc == 0x278880u) {
        ctx->pc = 0x278880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27887Cu;
        // 0x278880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278884u;
        goto label_278884;
    }
    ctx->pc = 0x27887Cu;
    {
        const bool branch_taken_0x27887c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27887c) {
            ctx->pc = 0x278880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27887Cu;
            // 0x278880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2788C4u;
            goto label_2788c4;
        }
    }
    ctx->pc = 0x278884u;
label_278884:
    // 0x278884: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x278884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_278888:
    // 0x278888: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27888c:
    // 0x27888c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_278890:
    // 0x278890: 0x40f809  jalr        $v0
label_278894:
    if (ctx->pc == 0x278894u) {
        ctx->pc = 0x278894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278890u;
        // 0x278894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278898u;
        goto label_278898;
    }
    ctx->pc = 0x278890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278898u);
        ctx->pc = 0x278894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278890u;
        // 0x278894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278890u, 0x278898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278898u;
label_278898:
    // 0x278898: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x278898u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_27889c:
    // 0x27889c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27889cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2788a0:
    // 0x2788a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2788a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2788a4:
    // 0x2788a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2788a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2788a8:
    // 0x2788a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2788a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2788ac:
    // 0x2788ac: 0x254a8620  addiu       $t2, $t2, -0x79E0
    ctx->pc = 0x2788acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936096));
label_2788b0:
    // 0x2788b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2788b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2788b4:
    // 0x2788b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2788b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2788b8:
    // 0x2788b8: 0xc041664  jal         func_105990
label_2788bc:
    if (ctx->pc == 0x2788BCu) {
        ctx->pc = 0x2788BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B8u;
        // 0x2788bc: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788C0u;
        goto label_2788c0;
    }
    ctx->pc = 0x2788B8u;
    SET_GPR_U32(ctx, 31, 0x2788C0u);
    ctx->pc = 0x2788BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788B8u;
    // 0x2788bc: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2788B8u, 0x2788C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788C0u;
label_2788c0:
    // 0x2788c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2788c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2788c4:
    // 0x2788c4: 0xc089990  jal         func_226640
label_2788c8:
    if (ctx->pc == 0x2788C8u) {
        ctx->pc = 0x2788C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788C4u;
        // 0x2788c8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788CCu;
        goto label_2788cc;
    }
    ctx->pc = 0x2788C4u;
    SET_GPR_U32(ctx, 31, 0x2788CCu);
    ctx->pc = 0x2788C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788C4u;
    // 0x2788c8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2788C4u, 0x2788CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788CCu;
label_2788cc:
    // 0x2788cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2788ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2788d0:
    // 0x2788d0: 0xc08b900  jal         func_22E400
label_2788d4:
    if (ctx->pc == 0x2788D4u) {
        ctx->pc = 0x2788D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788D0u;
        // 0x2788d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788D8u;
        goto label_2788d8;
    }
    ctx->pc = 0x2788D0u;
    SET_GPR_U32(ctx, 31, 0x2788D8u);
    ctx->pc = 0x2788D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788D0u;
    // 0x2788d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E400u, 0x2788D0u, 0x2788D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788D8u;
label_2788d8:
    // 0x2788d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2788d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2788dc:
    // 0x2788dc: 0xc05d53a  jal         func_1754E8
label_2788e0:
    if (ctx->pc == 0x2788E0u) {
        ctx->pc = 0x2788E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788DCu;
        // 0x2788e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788E4u;
        goto label_2788e4;
    }
    ctx->pc = 0x2788DCu;
    SET_GPR_U32(ctx, 31, 0x2788E4u);
    ctx->pc = 0x2788E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788DCu;
    // 0x2788e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2788DCu, 0x2788E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788E4u;
label_2788e4:
    // 0x2788e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2788e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2788e8:
    // 0x2788e8: 0xc05d4f6  jal         func_1753D8
label_2788ec:
    if (ctx->pc == 0x2788ECu) {
        ctx->pc = 0x2788ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788E8u;
        // 0x2788ec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788F0u;
        goto label_2788f0;
    }
    ctx->pc = 0x2788E8u;
    SET_GPR_U32(ctx, 31, 0x2788F0u);
    ctx->pc = 0x2788ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788E8u;
    // 0x2788ec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2788E8u, 0x2788F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788F0u;
label_2788f0:
    // 0x2788f0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2788f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2788f4:
    // 0x2788f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2788f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2788f8:
    // 0x2788f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2788f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2788fc:
    // 0x2788fc: 0xc0899aa  jal         func_2266A8
label_278900:
    if (ctx->pc == 0x278900u) {
        ctx->pc = 0x278900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788FCu;
        // 0x278900: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278904u;
        goto label_278904;
    }
    ctx->pc = 0x2788FCu;
    SET_GPR_U32(ctx, 31, 0x278904u);
    ctx->pc = 0x278900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788FCu;
    // 0x278900: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2788FCu, 0x278904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278904u;
label_278904:
    // 0x278904: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_278908:
    // 0x278908: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_27890c:
    if (ctx->pc == 0x27890Cu) {
        ctx->pc = 0x27890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278908u;
        // 0x27890c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278910u;
        goto label_278910;
    }
    ctx->pc = 0x278908u;
    {
        const bool branch_taken_0x278908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278908) {
            ctx->pc = 0x27890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278908u;
            // 0x27890c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789A4u;
            goto label_2789a4;
        }
    }
    ctx->pc = 0x278910u;
label_278910:
    // 0x278910: 0xc088ac6  jal         func_222B18
label_278914:
    if (ctx->pc == 0x278914u) {
        ctx->pc = 0x278914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278910u;
        // 0x278914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278918u;
        goto label_278918;
    }
    ctx->pc = 0x278910u;
    SET_GPR_U32(ctx, 31, 0x278918u);
    ctx->pc = 0x278914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278910u;
    // 0x278914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x278910u, 0x278918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278918u;
label_278918:
    // 0x278918: 0x94430046  lhu         $v1, 0x46($v0)
    ctx->pc = 0x278918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_27891c:
    // 0x27891c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_278920:
    // 0x278920: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
label_278924:
    if (ctx->pc == 0x278924u) {
        ctx->pc = 0x278924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278920u;
        // 0x278924: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278928u;
        goto label_278928;
    }
    ctx->pc = 0x278920u;
    {
        const bool branch_taken_0x278920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278920) {
            ctx->pc = 0x278924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278920u;
            // 0x278924: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789A4u;
            goto label_2789a4;
        }
    }
    ctx->pc = 0x278928u;
label_278928:
    // 0x278928: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
label_27892c:
    if (ctx->pc == 0x27892Cu) {
        ctx->pc = 0x27892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278928u;
        // 0x27892c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278930u;
        goto label_278930;
    }
    ctx->pc = 0x278928u;
    {
        const bool branch_taken_0x278928 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278928u;
        // 0x27892c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278928) {
            ctx->pc = 0x2789A0u;
            goto label_2789a0;
        }
    }
    ctx->pc = 0x278930u;
label_278930:
    // 0x278930: 0xc0e8b48  jal         func_3A2D20
label_278934:
    if (ctx->pc == 0x278934u) {
        ctx->pc = 0x278934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278930u;
        // 0x278934: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278938u;
        goto label_278938;
    }
    ctx->pc = 0x278930u;
    SET_GPR_U32(ctx, 31, 0x278938u);
    ctx->pc = 0x278934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278930u;
    // 0x278934: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x278930u, 0x278938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278938u;
label_278938:
    // 0x278938: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x278938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_27893c:
    // 0x27893c: 0xc0e8b70  jal         func_3A2DC0
label_278940:
    if (ctx->pc == 0x278940u) {
        ctx->pc = 0x278940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27893Cu;
        // 0x278940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278944u;
        goto label_278944;
    }
    ctx->pc = 0x27893Cu;
    SET_GPR_U32(ctx, 31, 0x278944u);
    ctx->pc = 0x278940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27893Cu;
    // 0x278940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x27893Cu, 0x278944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278944u;
label_278944:
    // 0x278944: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x278944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_278948:
    // 0x278948: 0xc0e8b70  jal         func_3A2DC0
label_27894c:
    if (ctx->pc == 0x27894Cu) {
        ctx->pc = 0x27894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278948u;
        // 0x27894c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278950u;
        goto label_278950;
    }
    ctx->pc = 0x278948u;
    SET_GPR_U32(ctx, 31, 0x278950u);
    ctx->pc = 0x27894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278948u;
    // 0x27894c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x278948u, 0x278950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278950u;
label_278950:
    // 0x278950: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x278950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_278954:
    // 0x278954: 0xc0e8b68  jal         func_3A2DA0
label_278958:
    if (ctx->pc == 0x278958u) {
        ctx->pc = 0x278958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278954u;
        // 0x278958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27895Cu;
        goto label_27895c;
    }
    ctx->pc = 0x278954u;
    SET_GPR_U32(ctx, 31, 0x27895Cu);
    ctx->pc = 0x278958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278954u;
    // 0x278958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x278954u, 0x27895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27895Cu;
label_27895c:
    // 0x27895c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x27895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_278960:
    // 0x278960: 0xc0e8b68  jal         func_3A2DA0
label_278964:
    if (ctx->pc == 0x278964u) {
        ctx->pc = 0x278964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278960u;
        // 0x278964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278968u;
        goto label_278968;
    }
    ctx->pc = 0x278960u;
    SET_GPR_U32(ctx, 31, 0x278968u);
    ctx->pc = 0x278964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278960u;
    // 0x278964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x278960u, 0x278968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278968u;
label_278968:
    // 0x278968: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x278968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_27896c:
    // 0x27896c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x27896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_278970:
    // 0x278970: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x278970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_278974:
    // 0x278974: 0xc0e8b58  jal         func_3A2D60
label_278978:
    if (ctx->pc == 0x278978u) {
        ctx->pc = 0x278978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278974u;
        // 0x278978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27897Cu;
        goto label_27897c;
    }
    ctx->pc = 0x278974u;
    SET_GPR_U32(ctx, 31, 0x27897Cu);
    ctx->pc = 0x278978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278974u;
    // 0x278978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x278974u, 0x27897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27897Cu;
label_27897c:
    // 0x27897c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x27897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_278980:
    // 0x278980: 0xc0e8b58  jal         func_3A2D60
label_278984:
    if (ctx->pc == 0x278984u) {
        ctx->pc = 0x278984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278980u;
        // 0x278984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278988u;
        goto label_278988;
    }
    ctx->pc = 0x278980u;
    SET_GPR_U32(ctx, 31, 0x278988u);
    ctx->pc = 0x278984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278980u;
    // 0x278984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x278980u, 0x278988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278988u;
label_278988:
    // 0x278988: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x278988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_27898c:
    // 0x27898c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278990:
    // 0x278990: 0xc0e8b80  jal         func_3A2E00
label_278994:
    if (ctx->pc == 0x278994u) {
        ctx->pc = 0x278994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278990u;
        // 0x278994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278998u;
        goto label_278998;
    }
    ctx->pc = 0x278990u;
    SET_GPR_U32(ctx, 31, 0x278998u);
    ctx->pc = 0x278994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278990u;
    // 0x278994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x278990u, 0x278998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278998u;
label_278998:
    // 0x278998: 0xc0e8b50  jal         func_3A2D40
label_27899c:
    if (ctx->pc == 0x27899Cu) {
        ctx->pc = 0x27899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278998u;
        // 0x27899c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789A0u;
        goto label_2789a0;
    }
    ctx->pc = 0x278998u;
    SET_GPR_U32(ctx, 31, 0x2789A0u);
    ctx->pc = 0x27899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278998u;
    // 0x27899c: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x278998u, 0x2789A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789A0u;
label_2789a0:
    // 0x2789a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2789a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2789a4:
    // 0x2789a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2789a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2789a8:
    // 0x2789a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2789a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2789ac:
    // 0x2789ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2789acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2789b0:
    // 0x2789b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2789b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2789b4:
    // 0x2789b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2789b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2789b8:
    // 0x2789b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2789b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2789bc:
    // 0x2789bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2789bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2789c0:
    // 0x2789c0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2789c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2789c4:
    // 0x2789c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2789c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2789c8:
    // 0x2789c8: 0x3e00008  jr          $ra
label_2789cc:
    if (ctx->pc == 0x2789CCu) {
        ctx->pc = 0x2789CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789C8u;
        // 0x2789cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789D0u;
        goto label_fallthrough_0x2789c8;
    }
    ctx->pc = 0x2789C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2789CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789C8u;
        // 0x2789cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2789C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2789c8:
    ctx->pc = 0x2789D0u;
}
