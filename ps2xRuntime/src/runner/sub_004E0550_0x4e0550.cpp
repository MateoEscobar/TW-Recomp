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

// Function: sub_004E0550
// Address: 0x4e0550 - 0x4e0920
void sub_004E0550_0x4e0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0550_0x4e0550");
#endif

    switch (ctx->pc) {
        case 0x4e0550u: goto label_4e0550;
        case 0x4e0554u: goto label_4e0554;
        case 0x4e0558u: goto label_4e0558;
        case 0x4e055cu: goto label_4e055c;
        case 0x4e0560u: goto label_4e0560;
        case 0x4e0564u: goto label_4e0564;
        case 0x4e0568u: goto label_4e0568;
        case 0x4e056cu: goto label_4e056c;
        case 0x4e0570u: goto label_4e0570;
        case 0x4e0574u: goto label_4e0574;
        case 0x4e0578u: goto label_4e0578;
        case 0x4e057cu: goto label_4e057c;
        case 0x4e0580u: goto label_4e0580;
        case 0x4e0584u: goto label_4e0584;
        case 0x4e0588u: goto label_4e0588;
        case 0x4e058cu: goto label_4e058c;
        case 0x4e0590u: goto label_4e0590;
        case 0x4e0594u: goto label_4e0594;
        case 0x4e0598u: goto label_4e0598;
        case 0x4e059cu: goto label_4e059c;
        case 0x4e05a0u: goto label_4e05a0;
        case 0x4e05a4u: goto label_4e05a4;
        case 0x4e05a8u: goto label_4e05a8;
        case 0x4e05acu: goto label_4e05ac;
        case 0x4e05b0u: goto label_4e05b0;
        case 0x4e05b4u: goto label_4e05b4;
        case 0x4e05b8u: goto label_4e05b8;
        case 0x4e05bcu: goto label_4e05bc;
        case 0x4e05c0u: goto label_4e05c0;
        case 0x4e05c4u: goto label_4e05c4;
        case 0x4e05c8u: goto label_4e05c8;
        case 0x4e05ccu: goto label_4e05cc;
        case 0x4e05d0u: goto label_4e05d0;
        case 0x4e05d4u: goto label_4e05d4;
        case 0x4e05d8u: goto label_4e05d8;
        case 0x4e05dcu: goto label_4e05dc;
        case 0x4e05e0u: goto label_4e05e0;
        case 0x4e05e4u: goto label_4e05e4;
        case 0x4e05e8u: goto label_4e05e8;
        case 0x4e05ecu: goto label_4e05ec;
        case 0x4e05f0u: goto label_4e05f0;
        case 0x4e05f4u: goto label_4e05f4;
        case 0x4e05f8u: goto label_4e05f8;
        case 0x4e05fcu: goto label_4e05fc;
        case 0x4e0600u: goto label_4e0600;
        case 0x4e0604u: goto label_4e0604;
        case 0x4e0608u: goto label_4e0608;
        case 0x4e060cu: goto label_4e060c;
        case 0x4e0610u: goto label_4e0610;
        case 0x4e0614u: goto label_4e0614;
        case 0x4e0618u: goto label_4e0618;
        case 0x4e061cu: goto label_4e061c;
        case 0x4e0620u: goto label_4e0620;
        case 0x4e0624u: goto label_4e0624;
        case 0x4e0628u: goto label_4e0628;
        case 0x4e062cu: goto label_4e062c;
        case 0x4e0630u: goto label_4e0630;
        case 0x4e0634u: goto label_4e0634;
        case 0x4e0638u: goto label_4e0638;
        case 0x4e063cu: goto label_4e063c;
        case 0x4e0640u: goto label_4e0640;
        case 0x4e0644u: goto label_4e0644;
        case 0x4e0648u: goto label_4e0648;
        case 0x4e064cu: goto label_4e064c;
        case 0x4e0650u: goto label_4e0650;
        case 0x4e0654u: goto label_4e0654;
        case 0x4e0658u: goto label_4e0658;
        case 0x4e065cu: goto label_4e065c;
        case 0x4e0660u: goto label_4e0660;
        case 0x4e0664u: goto label_4e0664;
        case 0x4e0668u: goto label_4e0668;
        case 0x4e066cu: goto label_4e066c;
        case 0x4e0670u: goto label_4e0670;
        case 0x4e0674u: goto label_4e0674;
        case 0x4e0678u: goto label_4e0678;
        case 0x4e067cu: goto label_4e067c;
        case 0x4e0680u: goto label_4e0680;
        case 0x4e0684u: goto label_4e0684;
        case 0x4e0688u: goto label_4e0688;
        case 0x4e068cu: goto label_4e068c;
        case 0x4e0690u: goto label_4e0690;
        case 0x4e0694u: goto label_4e0694;
        case 0x4e0698u: goto label_4e0698;
        case 0x4e069cu: goto label_4e069c;
        case 0x4e06a0u: goto label_4e06a0;
        case 0x4e06a4u: goto label_4e06a4;
        case 0x4e06a8u: goto label_4e06a8;
        case 0x4e06acu: goto label_4e06ac;
        case 0x4e06b0u: goto label_4e06b0;
        case 0x4e06b4u: goto label_4e06b4;
        case 0x4e06b8u: goto label_4e06b8;
        case 0x4e06bcu: goto label_4e06bc;
        case 0x4e06c0u: goto label_4e06c0;
        case 0x4e06c4u: goto label_4e06c4;
        case 0x4e06c8u: goto label_4e06c8;
        case 0x4e06ccu: goto label_4e06cc;
        case 0x4e06d0u: goto label_4e06d0;
        case 0x4e06d4u: goto label_4e06d4;
        case 0x4e06d8u: goto label_4e06d8;
        case 0x4e06dcu: goto label_4e06dc;
        case 0x4e06e0u: goto label_4e06e0;
        case 0x4e06e4u: goto label_4e06e4;
        case 0x4e06e8u: goto label_4e06e8;
        case 0x4e06ecu: goto label_4e06ec;
        case 0x4e06f0u: goto label_4e06f0;
        case 0x4e06f4u: goto label_4e06f4;
        case 0x4e06f8u: goto label_4e06f8;
        case 0x4e06fcu: goto label_4e06fc;
        case 0x4e0700u: goto label_4e0700;
        case 0x4e0704u: goto label_4e0704;
        case 0x4e0708u: goto label_4e0708;
        case 0x4e070cu: goto label_4e070c;
        case 0x4e0710u: goto label_4e0710;
        case 0x4e0714u: goto label_4e0714;
        case 0x4e0718u: goto label_4e0718;
        case 0x4e071cu: goto label_4e071c;
        case 0x4e0720u: goto label_4e0720;
        case 0x4e0724u: goto label_4e0724;
        case 0x4e0728u: goto label_4e0728;
        case 0x4e072cu: goto label_4e072c;
        case 0x4e0730u: goto label_4e0730;
        case 0x4e0734u: goto label_4e0734;
        case 0x4e0738u: goto label_4e0738;
        case 0x4e073cu: goto label_4e073c;
        case 0x4e0740u: goto label_4e0740;
        case 0x4e0744u: goto label_4e0744;
        case 0x4e0748u: goto label_4e0748;
        case 0x4e074cu: goto label_4e074c;
        case 0x4e0750u: goto label_4e0750;
        case 0x4e0754u: goto label_4e0754;
        case 0x4e0758u: goto label_4e0758;
        case 0x4e075cu: goto label_4e075c;
        case 0x4e0760u: goto label_4e0760;
        case 0x4e0764u: goto label_4e0764;
        case 0x4e0768u: goto label_4e0768;
        case 0x4e076cu: goto label_4e076c;
        case 0x4e0770u: goto label_4e0770;
        case 0x4e0774u: goto label_4e0774;
        case 0x4e0778u: goto label_4e0778;
        case 0x4e077cu: goto label_4e077c;
        case 0x4e0780u: goto label_4e0780;
        case 0x4e0784u: goto label_4e0784;
        case 0x4e0788u: goto label_4e0788;
        case 0x4e078cu: goto label_4e078c;
        case 0x4e0790u: goto label_4e0790;
        case 0x4e0794u: goto label_4e0794;
        case 0x4e0798u: goto label_4e0798;
        case 0x4e079cu: goto label_4e079c;
        case 0x4e07a0u: goto label_4e07a0;
        case 0x4e07a4u: goto label_4e07a4;
        case 0x4e07a8u: goto label_4e07a8;
        case 0x4e07acu: goto label_4e07ac;
        case 0x4e07b0u: goto label_4e07b0;
        case 0x4e07b4u: goto label_4e07b4;
        case 0x4e07b8u: goto label_4e07b8;
        case 0x4e07bcu: goto label_4e07bc;
        case 0x4e07c0u: goto label_4e07c0;
        case 0x4e07c4u: goto label_4e07c4;
        case 0x4e07c8u: goto label_4e07c8;
        case 0x4e07ccu: goto label_4e07cc;
        case 0x4e07d0u: goto label_4e07d0;
        case 0x4e07d4u: goto label_4e07d4;
        case 0x4e07d8u: goto label_4e07d8;
        case 0x4e07dcu: goto label_4e07dc;
        case 0x4e07e0u: goto label_4e07e0;
        case 0x4e07e4u: goto label_4e07e4;
        case 0x4e07e8u: goto label_4e07e8;
        case 0x4e07ecu: goto label_4e07ec;
        case 0x4e07f0u: goto label_4e07f0;
        case 0x4e07f4u: goto label_4e07f4;
        case 0x4e07f8u: goto label_4e07f8;
        case 0x4e07fcu: goto label_4e07fc;
        case 0x4e0800u: goto label_4e0800;
        case 0x4e0804u: goto label_4e0804;
        case 0x4e0808u: goto label_4e0808;
        case 0x4e080cu: goto label_4e080c;
        case 0x4e0810u: goto label_4e0810;
        case 0x4e0814u: goto label_4e0814;
        case 0x4e0818u: goto label_4e0818;
        case 0x4e081cu: goto label_4e081c;
        case 0x4e0820u: goto label_4e0820;
        case 0x4e0824u: goto label_4e0824;
        case 0x4e0828u: goto label_4e0828;
        case 0x4e082cu: goto label_4e082c;
        case 0x4e0830u: goto label_4e0830;
        case 0x4e0834u: goto label_4e0834;
        case 0x4e0838u: goto label_4e0838;
        case 0x4e083cu: goto label_4e083c;
        case 0x4e0840u: goto label_4e0840;
        case 0x4e0844u: goto label_4e0844;
        case 0x4e0848u: goto label_4e0848;
        case 0x4e084cu: goto label_4e084c;
        case 0x4e0850u: goto label_4e0850;
        case 0x4e0854u: goto label_4e0854;
        case 0x4e0858u: goto label_4e0858;
        case 0x4e085cu: goto label_4e085c;
        case 0x4e0860u: goto label_4e0860;
        case 0x4e0864u: goto label_4e0864;
        case 0x4e0868u: goto label_4e0868;
        case 0x4e086cu: goto label_4e086c;
        case 0x4e0870u: goto label_4e0870;
        case 0x4e0874u: goto label_4e0874;
        case 0x4e0878u: goto label_4e0878;
        case 0x4e087cu: goto label_4e087c;
        case 0x4e0880u: goto label_4e0880;
        case 0x4e0884u: goto label_4e0884;
        case 0x4e0888u: goto label_4e0888;
        case 0x4e088cu: goto label_4e088c;
        case 0x4e0890u: goto label_4e0890;
        case 0x4e0894u: goto label_4e0894;
        case 0x4e0898u: goto label_4e0898;
        case 0x4e089cu: goto label_4e089c;
        case 0x4e08a0u: goto label_4e08a0;
        case 0x4e08a4u: goto label_4e08a4;
        case 0x4e08a8u: goto label_4e08a8;
        case 0x4e08acu: goto label_4e08ac;
        case 0x4e08b0u: goto label_4e08b0;
        case 0x4e08b4u: goto label_4e08b4;
        case 0x4e08b8u: goto label_4e08b8;
        case 0x4e08bcu: goto label_4e08bc;
        case 0x4e08c0u: goto label_4e08c0;
        case 0x4e08c4u: goto label_4e08c4;
        case 0x4e08c8u: goto label_4e08c8;
        case 0x4e08ccu: goto label_4e08cc;
        case 0x4e08d0u: goto label_4e08d0;
        case 0x4e08d4u: goto label_4e08d4;
        case 0x4e08d8u: goto label_4e08d8;
        case 0x4e08dcu: goto label_4e08dc;
        case 0x4e08e0u: goto label_4e08e0;
        case 0x4e08e4u: goto label_4e08e4;
        case 0x4e08e8u: goto label_4e08e8;
        case 0x4e08ecu: goto label_4e08ec;
        case 0x4e08f0u: goto label_4e08f0;
        case 0x4e08f4u: goto label_4e08f4;
        case 0x4e08f8u: goto label_4e08f8;
        case 0x4e08fcu: goto label_4e08fc;
        case 0x4e0900u: goto label_4e0900;
        case 0x4e0904u: goto label_4e0904;
        case 0x4e0908u: goto label_4e0908;
        case 0x4e090cu: goto label_4e090c;
        case 0x4e0910u: goto label_4e0910;
        case 0x4e0914u: goto label_4e0914;
        case 0x4e0918u: goto label_4e0918;
        case 0x4e091cu: goto label_4e091c;
        default: break;
    }

    ctx->pc = 0x4e0550u;

label_4e0550:
    // 0x4e0550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e0554:
    // 0x4e0554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e0554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e0558:
    // 0x4e0558: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e055c:
    // 0x4e055c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e055cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e0560:
    // 0x4e0560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e0560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e0564:
    // 0x4e0564: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e0564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e0568:
    // 0x4e0568: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e0568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e056c:
    // 0x4e056c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e056cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e0570:
    // 0x4e0570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e0574:
    // 0x4e0574: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e0574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0578:
    // 0x4e0578: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e057c:
    if (ctx->pc == 0x4E057Cu) {
        ctx->pc = 0x4E057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0578u;
        // 0x4e057c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0580u;
        goto label_4e0580;
    }
    ctx->pc = 0x4E0578u;
    {
        const bool branch_taken_0x4e0578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0578u;
        // 0x4e057c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0578) {
            ctx->pc = 0x4E059Cu;
            goto label_4e059c;
        }
    }
    ctx->pc = 0x4E0580u;
label_4e0580:
    // 0x4e0580: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e0584:
    if (ctx->pc == 0x4E0584u) {
        ctx->pc = 0x4E0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0580u;
        // 0x4e0584: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0588u;
        goto label_4e0588;
    }
    ctx->pc = 0x4E0580u;
    {
        const bool branch_taken_0x4e0580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0580u;
        // 0x4e0584: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0580) {
            ctx->pc = 0x4E05A0u;
            goto label_4e05a0;
        }
    }
    ctx->pc = 0x4E0588u;
label_4e0588:
    // 0x4e0588: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e0588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e058c:
    // 0x4e058c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e0590:
    // 0x4e0590: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e0590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e0594:
    // 0x4e0594: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e0598:
    if (ctx->pc == 0x4E0598u) {
        ctx->pc = 0x4E0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0594u;
        // 0x4e0598: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E059Cu;
        goto label_4e059c;
    }
    ctx->pc = 0x4E0594u;
    {
        const bool branch_taken_0x4e0594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0594u;
        // 0x4e0598: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0594) {
            ctx->pc = 0x4E0630u;
            goto label_4e0630;
        }
    }
    ctx->pc = 0x4E059Cu;
label_4e059c:
    // 0x4e059c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e05a0:
    // 0x4e05a0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e05a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e05a4:
    // 0x4e05a4: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e05a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e05a8:
    // 0x4e05a8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e05a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e05ac:
    // 0x4e05ac: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e05acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e05b0:
    // 0x4e05b0: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e05b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e05b4:
    // 0x4e05b4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e05b8:
    // 0x4e05b8: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e05b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e05bc:
    // 0x4e05bc: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e05bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e05c0:
    // 0x4e05c0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e05c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e05c4:
    // 0x4e05c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e05c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e05c8:
    // 0x4e05c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e05c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e05cc:
    // 0x4e05cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e05d0:
    // 0x4e05d0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e05d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e05d4:
    // 0x4e05d4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e05d8:
    // 0x4e05d8: 0x40f809  jalr        $v0
label_4e05dc:
    if (ctx->pc == 0x4E05DCu) {
        ctx->pc = 0x4E05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E05D8u;
        // 0x4e05dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E05E0u;
        goto label_4e05e0;
    }
    ctx->pc = 0x4E05D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E05E0u);
        ctx->pc = 0x4E05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E05D8u;
        // 0x4e05dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E05D8u, 0x4E05E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E05E0u;
label_4e05e0:
    // 0x4e05e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e05e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e05e4:
    // 0x4e05e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e05e8:
    // 0x4e05e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e05ec:
    if (ctx->pc == 0x4E05ECu) {
        ctx->pc = 0x4E05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E05E8u;
        // 0x4e05ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E05F0u;
        goto label_4e05f0;
    }
    ctx->pc = 0x4E05E8u;
    {
        const bool branch_taken_0x4e05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E05E8u;
        // 0x4e05ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e05e8) {
            ctx->pc = 0x4E0600u;
            goto label_4e0600;
        }
    }
    ctx->pc = 0x4E05F0u;
label_4e05f0:
    // 0x4e05f0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e05f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e05f4:
    // 0x4e05f4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e05f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e05f8:
    // 0x4e05f8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e05f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e05fc:
    // 0x4e05fc: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e05fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0600:
    // 0x4e0600: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e0600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e0604:
    // 0x4e0604: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e0604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0608:
    // 0x4e0608: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e060c:
    if (ctx->pc == 0x4E060Cu) {
        ctx->pc = 0x4E060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0608u;
        // 0x4e060c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0610u;
        goto label_4e0610;
    }
    ctx->pc = 0x4E0608u;
    {
        const bool branch_taken_0x4e0608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0608) {
            ctx->pc = 0x4E060Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0608u;
            // 0x4e060c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0620u;
            goto label_4e0620;
        }
    }
    ctx->pc = 0x4E0610u;
label_4e0610:
    // 0x4e0610: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e0610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e0614:
    // 0x4e0614: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0618:
    // 0x4e0618: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e061c:
    if (ctx->pc == 0x4E061Cu) {
        ctx->pc = 0x4E061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0618u;
        // 0x4e061c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0620u;
        goto label_4e0620;
    }
    ctx->pc = 0x4E0618u;
    {
        const bool branch_taken_0x4e0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0618u;
        // 0x4e061c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0618) {
            ctx->pc = 0x4E06A4u;
            goto label_4e06a4;
        }
    }
    ctx->pc = 0x4E0620u;
label_4e0620:
    // 0x4e0620: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e0624:
    if (ctx->pc == 0x4E0624u) {
        ctx->pc = 0x4E0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0620u;
        // 0x4e0624: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0628u;
        goto label_4e0628;
    }
    ctx->pc = 0x4E0620u;
    {
        const bool branch_taken_0x4e0620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e0620) {
            ctx->pc = 0x4E0624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0620u;
            // 0x4e0624: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E06A4u;
            goto label_4e06a4;
        }
    }
    ctx->pc = 0x4E0628u;
label_4e0628:
    // 0x4e0628: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e062c:
    if (ctx->pc == 0x4E062Cu) {
        ctx->pc = 0x4E062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0628u;
        // 0x4e062c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0630u;
        goto label_4e0630;
    }
    ctx->pc = 0x4E0628u;
    {
        const bool branch_taken_0x4e0628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0628u;
        // 0x4e062c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0628) {
            ctx->pc = 0x4E06A8u;
            goto label_4e06a8;
        }
    }
    ctx->pc = 0x4E0630u;
label_4e0630:
    // 0x4e0630: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e0630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e0634:
    // 0x4e0634: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e0634u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e0638:
    // 0x4e0638: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e0638u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e063c:
    // 0x4e063c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e063cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e0640:
    // 0x4e0640: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e0640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e0644:
    // 0x4e0644: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e0644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e0648:
    // 0x4e0648: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e0648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e064c:
    // 0x4e064c: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e064cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e0650:
    // 0x4e0650: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e0654:
    // 0x4e0654: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e0654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e0658:
    // 0x4e0658: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e0658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e065c:
    // 0x4e065c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e0660:
    // 0x4e0660: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e0660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e0664:
    // 0x4e0664: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e0668:
    // 0x4e0668: 0x40f809  jalr        $v0
label_4e066c:
    if (ctx->pc == 0x4E066Cu) {
        ctx->pc = 0x4E066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0668u;
        // 0x4e066c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0670u;
        goto label_4e0670;
    }
    ctx->pc = 0x4E0668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E0670u);
        ctx->pc = 0x4E066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0668u;
        // 0x4e066c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0668u, 0x4E0670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E0670u;
label_4e0670:
    // 0x4e0670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e0670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e0674:
    // 0x4e0674: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e0678:
    // 0x4e0678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e067c:
    if (ctx->pc == 0x4E067Cu) {
        ctx->pc = 0x4E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0678u;
        // 0x4e067c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0680u;
        goto label_4e0680;
    }
    ctx->pc = 0x4E0678u;
    {
        const bool branch_taken_0x4e0678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0678u;
        // 0x4e067c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0678) {
            ctx->pc = 0x4E0690u;
            goto label_4e0690;
        }
    }
    ctx->pc = 0x4E0680u;
label_4e0680:
    // 0x4e0680: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e0680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e0684:
    // 0x4e0684: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e0684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e0688:
    // 0x4e0688: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e0688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e068c:
    // 0x4e068c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e068cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e0690:
    // 0x4e0690: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e0690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e0694:
    // 0x4e0694: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e0694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e0698:
    // 0x4e0698: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e069c:
    // 0x4e069c: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e06a0:
    if (ctx->pc == 0x4E06A0u) {
        ctx->pc = 0x4E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E069Cu;
        // 0x4e06a0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E06A4u;
        goto label_4e06a4;
    }
    ctx->pc = 0x4E069Cu;
    {
        const bool branch_taken_0x4e069c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e069c) {
            ctx->pc = 0x4E06A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E069Cu;
            // 0x4e06a0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E06A4u;
            goto label_4e06a4;
        }
    }
    ctx->pc = 0x4E06A4u;
label_4e06a4:
    // 0x4e06a4: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e06a8:
    // 0x4e06a8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e06a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e06ac:
    // 0x4e06ac: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e06acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e06b0:
    // 0x4e06b0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e06b4:
    // 0x4e06b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e06b8:
    // 0x4e06b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e06b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e06bc:
    // 0x4e06bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e06c0:
    // 0x4e06c0: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e06c4:
    if (ctx->pc == 0x4E06C4u) {
        ctx->pc = 0x4E06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E06C0u;
        // 0x4e06c4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E06C8u;
        goto label_4e06c8;
    }
    ctx->pc = 0x4E06C0u;
    {
        const bool branch_taken_0x4e06c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E06C0u;
        // 0x4e06c4: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e06c0) {
            ctx->pc = 0x4E08E4u;
            goto label_4e08e4;
        }
    }
    ctx->pc = 0x4E06C8u;
label_4e06c8:
    // 0x4e06c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e06cc:
    // 0x4e06cc: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e06d0:
    if (ctx->pc == 0x4E06D0u) {
        ctx->pc = 0x4E06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E06CCu;
        // 0x4e06d0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E06D4u;
        goto label_4e06d4;
    }
    ctx->pc = 0x4E06CCu;
    {
        const bool branch_taken_0x4e06cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e06cc) {
            ctx->pc = 0x4E06D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E06CCu;
            // 0x4e06d0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E08E8u;
            goto label_4e08e8;
        }
    }
    ctx->pc = 0x4E06D4u;
label_4e06d4:
    // 0x4e06d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e06d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e06d8:
    // 0x4e06d8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e06dc:
    // 0x4e06dc: 0x0  nop
    ctx->pc = 0x4e06dcu;
    // NOP
label_4e06e0:
    // 0x4e06e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e06e4:
    // 0x4e06e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e06e8:
    // 0x4e06e8: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e06ec:
    if (ctx->pc == 0x4E06ECu) {
        ctx->pc = 0x4E06F0u;
        goto label_4e06f0;
    }
    ctx->pc = 0x4E06E8u;
    {
        const bool branch_taken_0x4e06e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e06e8) {
            ctx->pc = 0x4E07D4u;
            goto label_4e07d4;
        }
    }
    ctx->pc = 0x4E06F0u;
label_4e06f0:
    // 0x4e06f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e06f4:
    // 0x4e06f4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e06f8:
    if (ctx->pc == 0x4E06F8u) {
        ctx->pc = 0x4E06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E06F4u;
        // 0x4e06f8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E06FCu;
        goto label_4e06fc;
    }
    ctx->pc = 0x4E06F4u;
    {
        const bool branch_taken_0x4e06f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e06f4) {
            ctx->pc = 0x4E06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E06F4u;
            // 0x4e06f8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0714u;
            goto label_4e0714;
        }
    }
    ctx->pc = 0x4E06FCu;
label_4e06fc:
    // 0x4e06fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e0700:
    // 0x4e0700: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e0704:
    if (ctx->pc == 0x4E0704u) {
        ctx->pc = 0x4E0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0700u;
        // 0x4e0704: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0708u;
        goto label_4e0708;
    }
    ctx->pc = 0x4E0700u;
    {
        const bool branch_taken_0x4e0700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0700) {
            ctx->pc = 0x4E0704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0700u;
            // 0x4e0704: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0714u;
            goto label_4e0714;
        }
    }
    ctx->pc = 0x4E0708u;
label_4e0708:
    // 0x4e0708: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e0708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e070c:
    // 0x4e070c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e0710:
    if (ctx->pc == 0x4E0710u) {
        ctx->pc = 0x4E0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E070Cu;
        // 0x4e0710: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0714u;
        goto label_4e0714;
    }
    ctx->pc = 0x4E070Cu;
    {
        const bool branch_taken_0x4e070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E070Cu;
        // 0x4e0710: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e070c) {
            ctx->pc = 0x4E07F0u;
            goto label_4e07f0;
        }
    }
    ctx->pc = 0x4E0714u;
label_4e0714:
    // 0x4e0714: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e0714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0718:
    // 0x4e0718: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e071c:
    if (ctx->pc == 0x4E071Cu) {
        ctx->pc = 0x4E071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0718u;
        // 0x4e071c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0720u;
        goto label_4e0720;
    }
    ctx->pc = 0x4E0718u;
    {
        const bool branch_taken_0x4e0718 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e0718) {
            ctx->pc = 0x4E071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0718u;
            // 0x4e071c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0770u;
            goto label_4e0770;
        }
    }
    ctx->pc = 0x4E0720u;
label_4e0720:
    // 0x4e0720: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0724:
    // 0x4e0724: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0728:
    // 0x4e0728: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e0728u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e072c:
    // 0x4e072c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0730:
    // 0x4e0730: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0734:
    if (ctx->pc == 0x4E0734u) {
        ctx->pc = 0x4E0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0730u;
        // 0x4e0734: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0738u;
        goto label_4e0738;
    }
    ctx->pc = 0x4E0730u;
    {
        const bool branch_taken_0x4e0730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0730) {
            ctx->pc = 0x4E0734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0730u;
            // 0x4e0734: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0738u;
            goto label_4e0738;
        }
    }
    ctx->pc = 0x4E0738u;
label_4e0738:
    // 0x4e0738: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e073c:
    // 0x4e073c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e073cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e0740:
    // 0x4e0740: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0744:
    // 0x4e0744: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e0748:
    if (ctx->pc == 0x4E0748u) {
        ctx->pc = 0x4E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0744u;
        // 0x4e0748: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E074Cu;
        goto label_4e074c;
    }
    ctx->pc = 0x4E0744u;
    {
        const bool branch_taken_0x4e0744 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0744) {
            ctx->pc = 0x4E0748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0744u;
            // 0x4e0748: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0754u;
            goto label_4e0754;
        }
    }
    ctx->pc = 0x4E074Cu;
label_4e074c:
    // 0x4e074c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0750:
    if (ctx->pc == 0x4E0750u) {
        ctx->pc = 0x4E0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E074Cu;
        // 0x4e0750: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0754u;
        goto label_4e0754;
    }
    ctx->pc = 0x4E074Cu;
    {
        const bool branch_taken_0x4e074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E074Cu;
        // 0x4e0750: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e074c) {
            ctx->pc = 0x4E0764u;
            goto label_4e0764;
        }
    }
    ctx->pc = 0x4E0754u;
label_4e0754:
    // 0x4e0754: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e0758:
    // 0x4e0758: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e075c:
    if (ctx->pc == 0x4E075Cu) {
        ctx->pc = 0x4E075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0758u;
        // 0x4e075c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0760u;
        goto label_4e0760;
    }
    ctx->pc = 0x4E0758u;
    {
        const bool branch_taken_0x4e0758 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0758) {
            ctx->pc = 0x4E075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0758u;
            // 0x4e075c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0764u;
            goto label_4e0764;
        }
    }
    ctx->pc = 0x4E0760u;
label_4e0760:
    // 0x4e0760: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e0760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e0764:
    // 0x4e0764: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e0764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e0768:
    // 0x4e0768: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e0768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e076c:
    // 0x4e076c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0770:
    // 0x4e0770: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e0770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e0774:
    // 0x4e0774: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0778:
    // 0x4e0778: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e077c:
    // 0x4e077c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e077cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0780:
    // 0x4e0780: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0784:
    // 0x4e0784: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e0784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0788:
    // 0x4e0788: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e0788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e078c:
    // 0x4e078c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0790:
    // 0x4e0790: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e0790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e0794:
    // 0x4e0794: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e0794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0798:
    // 0x4e0798: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e079c:
    if (ctx->pc == 0x4E079Cu) {
        ctx->pc = 0x4E079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0798u;
        // 0x4e079c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07A0u;
        goto label_4e07a0;
    }
    ctx->pc = 0x4E0798u;
    {
        const bool branch_taken_0x4e0798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0798) {
            ctx->pc = 0x4E079Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0798u;
            // 0x4e079c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E07A0u;
            goto label_4e07a0;
        }
    }
    ctx->pc = 0x4E07A0u;
label_4e07a0:
    // 0x4e07a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e07a4:
    // 0x4e07a4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e07a8:
    // 0x4e07a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e07ac:
    // 0x4e07ac: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e07b0:
    if (ctx->pc == 0x4E07B0u) {
        ctx->pc = 0x4E07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07ACu;
        // 0x4e07b0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07B4u;
        goto label_4e07b4;
    }
    ctx->pc = 0x4E07ACu;
    {
        const bool branch_taken_0x4e07ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e07ac) {
            ctx->pc = 0x4E07B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E07ACu;
            // 0x4e07b0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E07BCu;
            goto label_4e07bc;
        }
    }
    ctx->pc = 0x4E07B4u;
label_4e07b4:
    // 0x4e07b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e07b8:
    if (ctx->pc == 0x4E07B8u) {
        ctx->pc = 0x4E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07B4u;
        // 0x4e07b8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07BCu;
        goto label_4e07bc;
    }
    ctx->pc = 0x4E07B4u;
    {
        const bool branch_taken_0x4e07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07B4u;
        // 0x4e07b8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e07b4) {
            ctx->pc = 0x4E07CCu;
            goto label_4e07cc;
        }
    }
    ctx->pc = 0x4E07BCu;
label_4e07bc:
    // 0x4e07bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e07c0:
    // 0x4e07c0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e07c4:
    if (ctx->pc == 0x4E07C4u) {
        ctx->pc = 0x4E07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07C0u;
        // 0x4e07c4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07C8u;
        goto label_4e07c8;
    }
    ctx->pc = 0x4E07C0u;
    {
        const bool branch_taken_0x4e07c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e07c0) {
            ctx->pc = 0x4E07C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E07C0u;
            // 0x4e07c4: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E07CCu;
            goto label_4e07cc;
        }
    }
    ctx->pc = 0x4E07C8u;
label_4e07c8:
    // 0x4e07c8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e07cc:
    // 0x4e07cc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e07d0:
    if (ctx->pc == 0x4E07D0u) {
        ctx->pc = 0x4E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07CCu;
        // 0x4e07d0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07D4u;
        goto label_4e07d4;
    }
    ctx->pc = 0x4E07CCu;
    {
        const bool branch_taken_0x4e07cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07CCu;
        // 0x4e07d0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e07cc) {
            ctx->pc = 0x4E08C4u;
            goto label_4e08c4;
        }
    }
    ctx->pc = 0x4E07D4u;
label_4e07d4:
    // 0x4e07d4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e07d8:
    if (ctx->pc == 0x4E07D8u) {
        ctx->pc = 0x4E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07D4u;
        // 0x4e07d8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07DCu;
        goto label_4e07dc;
    }
    ctx->pc = 0x4E07D4u;
    {
        const bool branch_taken_0x4e07d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e07d4) {
            ctx->pc = 0x4E07D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E07D4u;
            // 0x4e07d8: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0808u;
            goto label_4e0808;
        }
    }
    ctx->pc = 0x4E07DCu;
label_4e07dc:
    // 0x4e07dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e07e0:
    // 0x4e07e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e07e4:
    if (ctx->pc == 0x4E07E4u) {
        ctx->pc = 0x4E07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E07E0u;
        // 0x4e07e4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E07E8u;
        goto label_4e07e8;
    }
    ctx->pc = 0x4E07E0u;
    {
        const bool branch_taken_0x4e07e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e07e0) {
            ctx->pc = 0x4E07E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E07E0u;
            // 0x4e07e4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0808u;
            goto label_4e0808;
        }
    }
    ctx->pc = 0x4E07E8u;
label_4e07e8:
    // 0x4e07e8: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e07ec:
    // 0x4e07ec: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e07f0:
    // 0x4e07f0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e07f4:
    // 0x4e07f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e07f8:
    // 0x4e07f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e07fc:
    // 0x4e07fc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0800:
    // 0x4e0800: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e0804:
    if (ctx->pc == 0x4E0804u) {
        ctx->pc = 0x4E0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0800u;
        // 0x4e0804: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0808u;
        goto label_4e0808;
    }
    ctx->pc = 0x4E0800u;
    {
        const bool branch_taken_0x4e0800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0800u;
        // 0x4e0804: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0800) {
            ctx->pc = 0x4E08C8u;
            goto label_4e08c8;
        }
    }
    ctx->pc = 0x4E0808u;
label_4e0808:
    // 0x4e0808: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e0808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e080c:
    // 0x4e080c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e0810:
    if (ctx->pc == 0x4E0810u) {
        ctx->pc = 0x4E0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E080Cu;
        // 0x4e0810: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0814u;
        goto label_4e0814;
    }
    ctx->pc = 0x4E080Cu;
    {
        const bool branch_taken_0x4e080c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e080c) {
            ctx->pc = 0x4E0810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E080Cu;
            // 0x4e0810: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0864u;
            goto label_4e0864;
        }
    }
    ctx->pc = 0x4E0814u;
label_4e0814:
    // 0x4e0814: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0818:
    // 0x4e0818: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e081c:
    // 0x4e081c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e081cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e0820:
    // 0x4e0820: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0824:
    // 0x4e0824: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0828:
    if (ctx->pc == 0x4E0828u) {
        ctx->pc = 0x4E0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0824u;
        // 0x4e0828: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E082Cu;
        goto label_4e082c;
    }
    ctx->pc = 0x4E0824u;
    {
        const bool branch_taken_0x4e0824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0824) {
            ctx->pc = 0x4E0828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0824u;
            // 0x4e0828: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E082Cu;
            goto label_4e082c;
        }
    }
    ctx->pc = 0x4E082Cu;
label_4e082c:
    // 0x4e082c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0830:
    // 0x4e0830: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e0830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e0834:
    // 0x4e0834: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0838:
    // 0x4e0838: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e083c:
    if (ctx->pc == 0x4E083Cu) {
        ctx->pc = 0x4E083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0838u;
        // 0x4e083c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0840u;
        goto label_4e0840;
    }
    ctx->pc = 0x4E0838u;
    {
        const bool branch_taken_0x4e0838 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0838) {
            ctx->pc = 0x4E083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0838u;
            // 0x4e083c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0848u;
            goto label_4e0848;
        }
    }
    ctx->pc = 0x4E0840u;
label_4e0840:
    // 0x4e0840: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0844:
    if (ctx->pc == 0x4E0844u) {
        ctx->pc = 0x4E0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0840u;
        // 0x4e0844: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0848u;
        goto label_4e0848;
    }
    ctx->pc = 0x4E0840u;
    {
        const bool branch_taken_0x4e0840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0840u;
        // 0x4e0844: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0840) {
            ctx->pc = 0x4E0858u;
            goto label_4e0858;
        }
    }
    ctx->pc = 0x4E0848u;
label_4e0848:
    // 0x4e0848: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e084c:
    // 0x4e084c: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e0850:
    if (ctx->pc == 0x4E0850u) {
        ctx->pc = 0x4E0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E084Cu;
        // 0x4e0850: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0854u;
        goto label_4e0854;
    }
    ctx->pc = 0x4E084Cu;
    {
        const bool branch_taken_0x4e084c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e084c) {
            ctx->pc = 0x4E0850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E084Cu;
            // 0x4e0850: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0858u;
            goto label_4e0858;
        }
    }
    ctx->pc = 0x4E0854u;
label_4e0854:
    // 0x4e0854: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e0854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e0858:
    // 0x4e0858: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e0858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e085c:
    // 0x4e085c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e085cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e0860:
    // 0x4e0860: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0864:
    // 0x4e0864: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e0864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e0868:
    // 0x4e0868: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e086c:
    // 0x4e086c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0870:
    // 0x4e0870: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0874:
    // 0x4e0874: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0878:
    // 0x4e0878: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e0878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e087c:
    // 0x4e087c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e087cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0880:
    // 0x4e0880: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e0884:
    // 0x4e0884: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e0884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e0888:
    // 0x4e0888: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e088c:
    // 0x4e088c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0890:
    if (ctx->pc == 0x4E0890u) {
        ctx->pc = 0x4E0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E088Cu;
        // 0x4e0890: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0894u;
        goto label_4e0894;
    }
    ctx->pc = 0x4E088Cu;
    {
        const bool branch_taken_0x4e088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e088c) {
            ctx->pc = 0x4E0890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E088Cu;
            // 0x4e0890: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0894u;
            goto label_4e0894;
        }
    }
    ctx->pc = 0x4E0894u;
label_4e0894:
    // 0x4e0894: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e0898:
    // 0x4e0898: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e0898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e089c:
    // 0x4e089c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e08a0:
    // 0x4e08a0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e08a4:
    if (ctx->pc == 0x4E08A4u) {
        ctx->pc = 0x4E08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08A0u;
        // 0x4e08a4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E08A8u;
        goto label_4e08a8;
    }
    ctx->pc = 0x4E08A0u;
    {
        const bool branch_taken_0x4e08a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e08a0) {
            ctx->pc = 0x4E08A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E08A0u;
            // 0x4e08a4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E08B0u;
            goto label_4e08b0;
        }
    }
    ctx->pc = 0x4E08A8u;
label_4e08a8:
    // 0x4e08a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e08ac:
    if (ctx->pc == 0x4E08ACu) {
        ctx->pc = 0x4E08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08A8u;
        // 0x4e08ac: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E08B0u;
        goto label_4e08b0;
    }
    ctx->pc = 0x4E08A8u;
    {
        const bool branch_taken_0x4e08a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08A8u;
        // 0x4e08ac: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e08a8) {
            ctx->pc = 0x4E08C0u;
            goto label_4e08c0;
        }
    }
    ctx->pc = 0x4E08B0u;
label_4e08b0:
    // 0x4e08b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e08b4:
    // 0x4e08b4: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e08b8:
    if (ctx->pc == 0x4E08B8u) {
        ctx->pc = 0x4E08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08B4u;
        // 0x4e08b8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E08BCu;
        goto label_4e08bc;
    }
    ctx->pc = 0x4E08B4u;
    {
        const bool branch_taken_0x4e08b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e08b4) {
            ctx->pc = 0x4E08B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E08B4u;
            // 0x4e08b8: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E08C0u;
            goto label_4e08c0;
        }
    }
    ctx->pc = 0x4E08BCu;
label_4e08bc:
    // 0x4e08bc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e08c0:
    // 0x4e08c0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e08c4:
    // 0x4e08c4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e08c8:
    // 0x4e08c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e08cc:
    // 0x4e08cc: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e08d0:
    if (ctx->pc == 0x4E08D0u) {
        ctx->pc = 0x4E08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08CCu;
        // 0x4e08d0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E08D4u;
        goto label_4e08d4;
    }
    ctx->pc = 0x4E08CCu;
    {
        const bool branch_taken_0x4e08cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e08cc) {
            ctx->pc = 0x4E08D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E08CCu;
            // 0x4e08d0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E08E8u;
            goto label_4e08e8;
        }
    }
    ctx->pc = 0x4E08D4u;
label_4e08d4:
    // 0x4e08d4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e08d8:
    // 0x4e08d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e08dc:
    // 0x4e08dc: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e08e0:
    if (ctx->pc == 0x4E08E0u) {
        ctx->pc = 0x4E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E08DCu;
        // 0x4e08e0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E08E4u;
        goto label_4e08e4;
    }
    ctx->pc = 0x4E08DCu;
    {
        const bool branch_taken_0x4e08dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e08dc) {
            ctx->pc = 0x4E08E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E08DCu;
            // 0x4e08e0: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E06E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e06e0;
        }
    }
    ctx->pc = 0x4E08E4u;
label_4e08e4:
    // 0x4e08e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e08e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e08e8:
    // 0x4e08e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e08e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e08ec:
    // 0x4e08ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e08ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e08f0:
    // 0x4e08f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e08f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e08f4:
    // 0x4e08f4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e08f8:
    // 0x4e08f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e08f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e08fc:
    // 0x4e08fc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e0900:
    // 0x4e0900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e0900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0904:
    // 0x4e0904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e0904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e0908:
    // 0x4e0908: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e0908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e090c:
    // 0x4e090c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e090cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e0910:
    // 0x4e0910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e0910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0914:
    // 0x4e0914: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e0914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0918:
    // 0x4e0918: 0x3e00008  jr          $ra
label_4e091c:
    if (ctx->pc == 0x4E091Cu) {
        ctx->pc = 0x4E091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0918u;
        // 0x4e091c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0920u;
        goto label_fallthrough_0x4e0918;
    }
    ctx->pc = 0x4E0918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0918u;
        // 0x4e091c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e0918:
    ctx->pc = 0x4E0920u;
}
