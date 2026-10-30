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

// Function: sub_001D0548
// Address: 0x1d0548 - 0x1d09d8
void sub_001D0548_0x1d0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0548_0x1d0548");
#endif

    switch (ctx->pc) {
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08a0u: goto label_1d08a0;
        case 0x1d08a4u: goto label_1d08a4;
        case 0x1d08a8u: goto label_1d08a8;
        case 0x1d08acu: goto label_1d08ac;
        case 0x1d08b0u: goto label_1d08b0;
        case 0x1d08b4u: goto label_1d08b4;
        case 0x1d08b8u: goto label_1d08b8;
        case 0x1d08bcu: goto label_1d08bc;
        case 0x1d08c0u: goto label_1d08c0;
        case 0x1d08c4u: goto label_1d08c4;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08ccu: goto label_1d08cc;
        case 0x1d08d0u: goto label_1d08d0;
        case 0x1d08d4u: goto label_1d08d4;
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08dcu: goto label_1d08dc;
        case 0x1d08e0u: goto label_1d08e0;
        case 0x1d08e4u: goto label_1d08e4;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d08ecu: goto label_1d08ec;
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d08f4u: goto label_1d08f4;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d0900u: goto label_1d0900;
        case 0x1d0904u: goto label_1d0904;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0910u: goto label_1d0910;
        case 0x1d0914u: goto label_1d0914;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d091cu: goto label_1d091c;
        case 0x1d0920u: goto label_1d0920;
        case 0x1d0924u: goto label_1d0924;
        case 0x1d0928u: goto label_1d0928;
        case 0x1d092cu: goto label_1d092c;
        case 0x1d0930u: goto label_1d0930;
        case 0x1d0934u: goto label_1d0934;
        case 0x1d0938u: goto label_1d0938;
        case 0x1d093cu: goto label_1d093c;
        case 0x1d0940u: goto label_1d0940;
        case 0x1d0944u: goto label_1d0944;
        case 0x1d0948u: goto label_1d0948;
        case 0x1d094cu: goto label_1d094c;
        case 0x1d0950u: goto label_1d0950;
        case 0x1d0954u: goto label_1d0954;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d095cu: goto label_1d095c;
        case 0x1d0960u: goto label_1d0960;
        case 0x1d0964u: goto label_1d0964;
        case 0x1d0968u: goto label_1d0968;
        case 0x1d096cu: goto label_1d096c;
        case 0x1d0970u: goto label_1d0970;
        case 0x1d0974u: goto label_1d0974;
        case 0x1d0978u: goto label_1d0978;
        case 0x1d097cu: goto label_1d097c;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0984u: goto label_1d0984;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d098cu: goto label_1d098c;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d0994u: goto label_1d0994;
        case 0x1d0998u: goto label_1d0998;
        case 0x1d099cu: goto label_1d099c;
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09acu: goto label_1d09ac;
        case 0x1d09b0u: goto label_1d09b0;
        case 0x1d09b4u: goto label_1d09b4;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09bcu: goto label_1d09bc;
        case 0x1d09c0u: goto label_1d09c0;
        case 0x1d09c4u: goto label_1d09c4;
        case 0x1d09c8u: goto label_1d09c8;
        case 0x1d09ccu: goto label_1d09cc;
        case 0x1d09d0u: goto label_1d09d0;
        case 0x1d09d4u: goto label_1d09d4;
        default: break;
    }

    ctx->pc = 0x1d0548u;

label_1d0548:
    // 0x1d0548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d054c:
    // 0x1d054c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1d0550:
    // 0x1d0550: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1d0554:
    // 0x1d0554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0558:
    // 0x1d0558: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1d055c:
    // 0x1d055c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d0560:
    // 0x1d0560: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d0560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1d0564:
    // 0x1d0564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d0568:
    // 0x1d0568: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1d0568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1d056c:
    // 0x1d056c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1d056cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d0570:
    // 0x1d0570: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1d0570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d0574:
    // 0x1d0574: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1d0578:
    if (ctx->pc == 0x1D0578u) {
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D057Cu;
        goto label_1d057c;
    }
    ctx->pc = 0x1D0574u;
    {
        const bool branch_taken_0x1d0574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0574) {
            ctx->pc = 0x1D05E0u;
            goto label_1d05e0;
        }
    }
    ctx->pc = 0x1D057Cu;
label_1d057c:
    // 0x1d057c: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
label_1d0580:
    // 0x1d0580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d0584:
    // 0x1d0584: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1d0588:
    if (ctx->pc == 0x1D0588u) {
        ctx->pc = 0x1D0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0584u;
        // 0x1d0588: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D058Cu;
        goto label_1d058c;
    }
    ctx->pc = 0x1D0584u;
    {
        const bool branch_taken_0x1d0584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0584u;
        // 0x1d0588: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0584) {
            ctx->pc = 0x1D05A0u;
            goto label_1d05a0;
        }
    }
    ctx->pc = 0x1D058Cu;
label_1d058c:
    // 0x1d058c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1d058cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1d0590:
    // 0x1d0590: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d0590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d0594:
    // 0x1d0594: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1d0598:
    // 0x1d0598: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d059c:
    if (ctx->pc == 0x1D059Cu) {
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0598u;
        // 0x1d059c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05A0u;
        goto label_1d05a0;
    }
    ctx->pc = 0x1D0598u;
    {
        const bool branch_taken_0x1d0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0598u;
        // 0x1d059c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0598) {
            ctx->pc = 0x1D05A4u;
            goto label_1d05a4;
        }
    }
    ctx->pc = 0x1D05A0u;
label_1d05a0:
    // 0x1d05a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d05a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05a4:
    // 0x1d05a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1d05a8:
    if (ctx->pc == 0x1D05A8u) {
        ctx->pc = 0x1D05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A4u;
        // 0x1d05a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05ACu;
        goto label_1d05ac;
    }
    ctx->pc = 0x1D05A4u;
    {
        const bool branch_taken_0x1d05a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A4u;
        // 0x1d05a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05a4) {
            ctx->pc = 0x1D05E0u;
            goto label_1d05e0;
        }
    }
    ctx->pc = 0x1D05ACu;
label_1d05ac:
    // 0x1d05ac: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d05b0:
    // 0x1d05b0: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x1d05b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_1d05b4:
    // 0x1d05b4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1d05b8:
    if (ctx->pc == 0x1D05B8u) {
        ctx->pc = 0x1D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B4u;
        // 0x1d05b8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05BCu;
        goto label_1d05bc;
    }
    ctx->pc = 0x1D05B4u;
    {
        const bool branch_taken_0x1d05b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B4u;
        // 0x1d05b8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05b4) {
            ctx->pc = 0x1D05D0u;
            goto label_1d05d0;
        }
    }
    ctx->pc = 0x1D05BCu;
label_1d05bc:
    // 0x1d05bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1d05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1d05c0:
    // 0x1d05c0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d05c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d05c4:
    // 0x1d05c4: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1d05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_1d05c8:
    // 0x1d05c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d05cc:
    if (ctx->pc == 0x1D05CCu) {
        ctx->pc = 0x1D05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C8u;
        // 0x1d05cc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05D0u;
        goto label_1d05d0;
    }
    ctx->pc = 0x1D05C8u;
    {
        const bool branch_taken_0x1d05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C8u;
        // 0x1d05cc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c8) {
            ctx->pc = 0x1D05D4u;
            goto label_1d05d4;
        }
    }
    ctx->pc = 0x1D05D0u;
label_1d05d0:
    // 0x1d05d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05d4:
    // 0x1d05d4: 0xc0512fc  jal         func_144BF0
label_1d05d8:
    if (ctx->pc == 0x1D05D8u) {
        ctx->pc = 0x1D05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D4u;
        // 0x1d05d8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05DCu;
        goto label_1d05dc;
    }
    ctx->pc = 0x1D05D4u;
    SET_GPR_U32(ctx, 31, 0x1D05DCu);
    ctx->pc = 0x1D05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05D4u;
    // 0x1d05d8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x1D05D4u, 0x1D05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D05DCu;
label_1d05dc:
    // 0x1d05dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d05dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d05e0:
    // 0x1d05e0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1d05e4:
    if (ctx->pc == 0x1D05E4u) {
        ctx->pc = 0x1D05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05E0u;
        // 0x1d05e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05E8u;
        goto label_1d05e8;
    }
    ctx->pc = 0x1D05E0u;
    {
        const bool branch_taken_0x1d05e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05E0u;
        // 0x1d05e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05e0) {
            ctx->pc = 0x1D05ECu;
            goto label_1d05ec;
        }
    }
    ctx->pc = 0x1D05E8u;
label_1d05e8:
    // 0x1d05e8: 0xae421b7c  sw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1d05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7036), GPR_U32(ctx, 2));
label_1d05ec:
    // 0x1d05ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d05f0:
    // 0x1d05f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d05f4:
    // 0x1d05f4: 0xc461ec3c  lwc1        $f1, -0x13C4($v1)
    ctx->pc = 0x1d05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d05f8:
    // 0x1d05f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d05f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d05fc:
    // 0x1d05fc: 0xc440ec38  lwc1        $f0, -0x13C8($v0)
    ctx->pc = 0x1d05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0600:
    // 0x1d0600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0604:
    // 0x1d0604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d0608:
    // 0x1d0608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d0608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d060c:
    // 0x1d060c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0610:
    // 0x1d0610: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d0614:
    // 0x1d0614: 0x26505930  addiu       $s0, $s2, 0x5930
    ctx->pc = 0x1d0614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 22832));
label_1d0618:
    // 0x1d0618: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d0618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d061c:
    // 0x1d061c: 0x26510430  addiu       $s1, $s2, 0x430
    ctx->pc = 0x1d061cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1d0620:
    // 0x1d0620: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d0620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1d0624:
    // 0x1d0624: 0xc048b52  jal         func_122D48
label_1d0628:
    if (ctx->pc == 0x1D0628u) {
        ctx->pc = 0x1D0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0624u;
        // 0x1d0628: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D062Cu;
        goto label_1d062c;
    }
    ctx->pc = 0x1D0624u;
    SET_GPR_U32(ctx, 31, 0x1D062Cu);
    ctx->pc = 0x1D0628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0624u;
    // 0x1d0628: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1D0624u, 0x1D062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D062Cu;
label_1d062c:
    // 0x1d062c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d0630:
    // 0x1d0630: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d0630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d0634:
    // 0x1d0634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d0634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0638:
    // 0x1d0638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d063c:
    // 0x1d063c: 0xc073464  jal         func_1CD190
label_1d0640:
    if (ctx->pc == 0x1D0640u) {
        ctx->pc = 0x1D0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D063Cu;
        // 0x1d0640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0644u;
        goto label_1d0644;
    }
    ctx->pc = 0x1D063Cu;
    SET_GPR_U32(ctx, 31, 0x1D0644u);
    ctx->pc = 0x1D0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D063Cu;
    // 0x1d0640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D063Cu, 0x1D0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0644u;
label_1d0644:
    // 0x1d0644: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d0648:
    // 0x1d0648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d0648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d064c:
    // 0x1d064c: 0xc05e602  jal         func_179808
label_1d0650:
    if (ctx->pc == 0x1D0650u) {
        ctx->pc = 0x1D0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D064Cu;
        // 0x1d0650: 0xc44cec48  lwc1        $f12, -0x13B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0654u;
        goto label_1d0654;
    }
    ctx->pc = 0x1D064Cu;
    SET_GPR_U32(ctx, 31, 0x1D0654u);
    ctx->pc = 0x1D0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D064Cu;
    // 0x1d0650: 0xc44cec48  lwc1        $f12, -0x13B8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D064Cu, 0x1D0654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0654u;
label_1d0654:
    // 0x1d0654: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1d0654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1d0658:
    // 0x1d0658: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1d0658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1d065c:
    // 0x1d065c: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1d065cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1d0660:
    // 0x1d0660: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1d0660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1d0664:
    // 0x1d0664: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1d0664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1d0668:
    // 0x1d0668: 0xb24259af  sdl         $v0, 0x59AF($s2)
    ctx->pc = 0x1d0668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22959); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d066c:
    // 0x1d066c: 0xb64259a8  sdr         $v0, 0x59A8($s2)
    ctx->pc = 0x1d066cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d0670:
    // 0x1d0670: 0xb24359b7  sdl         $v1, 0x59B7($s2)
    ctx->pc = 0x1d0670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d0674:
    // 0x1d0674: 0xb64359b0  sdr         $v1, 0x59B0($s2)
    ctx->pc = 0x1d0674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d0678:
    // 0x1d0678: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x1d0678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
label_1d067c:
    // 0x1d067c: 0xc073472  jal         func_1CD1C8
label_1d0680:
    if (ctx->pc == 0x1D0680u) {
        ctx->pc = 0x1D0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D067Cu;
        // 0x1d0680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0684u;
        goto label_1d0684;
    }
    ctx->pc = 0x1D067Cu;
    SET_GPR_U32(ctx, 31, 0x1D0684u);
    ctx->pc = 0x1D0680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D067Cu;
    // 0x1d0680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D067Cu, 0x1D0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0684u;
label_1d0684:
    // 0x1d0684: 0xc0734a0  jal         func_1CD280
label_1d0688:
    if (ctx->pc == 0x1D0688u) {
        ctx->pc = 0x1D0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0684u;
        // 0x1d0688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D068Cu;
        goto label_1d068c;
    }
    ctx->pc = 0x1D0684u;
    SET_GPR_U32(ctx, 31, 0x1D068Cu);
    ctx->pc = 0x1D0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0684u;
    // 0x1d0688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D0684u, 0x1D068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D068Cu;
label_1d068c:
    // 0x1d068c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d0690:
    // 0x1d0690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0694:
    // 0x1d0694: 0xc440ec44  lwc1        $f0, -0x13BC($v0)
    ctx->pc = 0x1d0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0698:
    // 0x1d0698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d069c:
    // 0x1d069c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1d069cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d06a0:
    // 0x1d06a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d06a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d06a4:
    // 0x1d06a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d06a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d06a8:
    // 0x1d06a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1d06ac:
    // 0x1d06ac: 0xc048b52  jal         func_122D48
label_1d06b0:
    if (ctx->pc == 0x1D06B0u) {
        ctx->pc = 0x1D06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06ACu;
        // 0x1d06b0: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06B4u;
        goto label_1d06b4;
    }
    ctx->pc = 0x1D06ACu;
    SET_GPR_U32(ctx, 31, 0x1D06B4u);
    ctx->pc = 0x1D06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06ACu;
    // 0x1d06b0: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1D06ACu, 0x1D06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06B4u;
label_1d06b4:
    // 0x1d06b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d06b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d06b8:
    // 0x1d06b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d06b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d06bc:
    // 0x1d06bc: 0xc073b2c  jal         func_1CECB0
label_1d06c0:
    if (ctx->pc == 0x1D06C0u) {
        ctx->pc = 0x1D06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06BCu;
        // 0x1d06c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06C4u;
        goto label_1d06c4;
    }
    ctx->pc = 0x1D06BCu;
    SET_GPR_U32(ctx, 31, 0x1D06C4u);
    ctx->pc = 0x1D06C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06BCu;
    // 0x1d06c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECB0u, 0x1D06BCu, 0x1D06C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06C4u;
label_1d06c4:
    // 0x1d06c4: 0xc073b50  jal         func_1CED40
label_1d06c8:
    if (ctx->pc == 0x1D06C8u) {
        ctx->pc = 0x1D06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06C4u;
        // 0x1d06c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06CCu;
        goto label_1d06cc;
    }
    ctx->pc = 0x1D06C4u;
    SET_GPR_U32(ctx, 31, 0x1D06CCu);
    ctx->pc = 0x1D06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06C4u;
    // 0x1d06c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1D06C4u, 0x1D06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06CCu;
label_1d06cc:
    // 0x1d06cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d06d0:
    // 0x1d06d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d06d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d06d4:
    // 0x1d06d4: 0xc440ec40  lwc1        $f0, -0x13C0($v0)
    ctx->pc = 0x1d06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06d8:
    // 0x1d06d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d06d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d06dc:
    // 0x1d06dc: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1d06dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d06e0:
    // 0x1d06e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d06e4:
    // 0x1d06e4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d06e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d06e8:
    // 0x1d06e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d06e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d06ec:
    // 0x1d06ec: 0xc048b52  jal         func_122D48
label_1d06f0:
    if (ctx->pc == 0x1D06F0u) {
        ctx->pc = 0x1D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06ECu;
        // 0x1d06f0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06F4u;
        goto label_1d06f4;
    }
    ctx->pc = 0x1D06ECu;
    SET_GPR_U32(ctx, 31, 0x1D06F4u);
    ctx->pc = 0x1D06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06ECu;
    // 0x1d06f0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1D06ECu, 0x1D06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06F4u;
label_1d06f4:
    // 0x1d06f4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x1d06f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d06f8:
    // 0x1d06f8: 0x26435a00  addiu       $v1, $s2, 0x5A00
    ctx->pc = 0x1d06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 23040));
label_1d06fc:
    // 0x1d06fc: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x1d06fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
label_1d0700:
    // 0x1d0700: 0x8e421b7c  lw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1d0700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7036)));
label_1d0704:
    // 0x1d0704: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_1d0708:
    if (ctx->pc == 0x1D0708u) {
        ctx->pc = 0x1D0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0704u;
        // 0x1d0708: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D070Cu;
        goto label_1d070c;
    }
    ctx->pc = 0x1D0704u;
    {
        const bool branch_taken_0x1d0704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0704u;
        // 0x1d0708: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0704) {
            ctx->pc = 0x1D0904u;
            goto label_1d0904;
        }
    }
    ctx->pc = 0x1D070Cu;
label_1d070c:
    // 0x1d070c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1d070cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1d0710:
    // 0x1d0710: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0714:
    // 0x1d0714: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1d0714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1d0718:
    // 0x1d0718: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d071c:
    // 0x1d071c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d0720:
    // 0x1d0720: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d0724:
    // 0x1d0724: 0x40f809  jalr        $v0
label_1d0728:
    if (ctx->pc == 0x1D0728u) {
        ctx->pc = 0x1D0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0724u;
        // 0x1d0728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D072Cu;
        goto label_1d072c;
    }
    ctx->pc = 0x1D0724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D072Cu);
        ctx->pc = 0x1D0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0724u;
        // 0x1d0728: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0724u, 0x1D072Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D072Cu;
label_1d072c:
    // 0x1d072c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d072cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0730:
    // 0x1d0730: 0x8e435ad0  lw          $v1, 0x5AD0($s2)
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23248)));
label_1d0734:
    // 0x1d0734: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1d0738:
    // 0x1d0738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1d073c:
    // 0x1d073c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1d0740:
    if (ctx->pc == 0x1D0740u) {
        ctx->pc = 0x1D0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D073Cu;
        // 0x1d0740: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0744u;
        goto label_1d0744;
    }
    ctx->pc = 0x1D073Cu;
    {
        const bool branch_taken_0x1d073c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D073Cu;
        // 0x1d0740: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d073c) {
            ctx->pc = 0x1D0764u;
            goto label_1d0764;
        }
    }
    ctx->pc = 0x1D0744u;
label_1d0744:
    // 0x1d0744: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1d0744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1d0748:
    // 0x1d0748: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d0748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d074c:
    // 0x1d074c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d074cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d0750:
    // 0x1d0750: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d0754:
    // 0x1d0754: 0x40f809  jalr        $v0
label_1d0758:
    if (ctx->pc == 0x1D0758u) {
        ctx->pc = 0x1D0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0754u;
        // 0x1d0758: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D075Cu;
        goto label_1d075c;
    }
    ctx->pc = 0x1D0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D075Cu);
        ctx->pc = 0x1D0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0754u;
        // 0x1d0758: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0754u, 0x1D075Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D075Cu;
label_1d075c:
    // 0x1d075c: 0xae425ad0  sw          $v0, 0x5AD0($s2)
    ctx->pc = 0x1d075cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23248), GPR_U32(ctx, 2));
label_1d0760:
    // 0x1d0760: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d0760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d0764:
    // 0x1d0764: 0x8e445ad0  lw          $a0, 0x5AD0($s2)
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23248)));
label_1d0768:
    // 0x1d0768: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d0768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d076c:
    // 0x1d076c: 0x8c63ec5c  lw          $v1, -0x13A4($v1)
    ctx->pc = 0x1d076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962268)));
label_1d0770:
    // 0x1d0770: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1d0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d0774:
    // 0x1d0774: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d0774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d0778:
    // 0x1d0778: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1d077c:
    if (ctx->pc == 0x1D077Cu) {
        ctx->pc = 0x1D077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0778u;
        // 0x1d077c: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0780u;
        goto label_1d0780;
    }
    ctx->pc = 0x1D0778u;
    {
        const bool branch_taken_0x1d0778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0778u;
        // 0x1d077c: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0778) {
            ctx->pc = 0x1D0818u;
            goto label_1d0818;
        }
    }
    ctx->pc = 0x1D0780u;
label_1d0780:
    // 0x1d0780: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d0784:
    if (ctx->pc == 0x1D0784u) {
        ctx->pc = 0x1D0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0780u;
        // 0x1d0784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0788u;
        goto label_1d0788;
    }
    ctx->pc = 0x1D0780u;
    {
        const bool branch_taken_0x1d0780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0780u;
        // 0x1d0784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0780) {
            ctx->pc = 0x1D079Cu;
            goto label_1d079c;
        }
    }
    ctx->pc = 0x1D0788u;
label_1d0788:
    // 0x1d0788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d078c:
    // 0x1d078c: 0x0  nop
    ctx->pc = 0x1d078cu;
    // NOP
label_1d0790:
    // 0x1d0790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0794:
    // 0x1d0794: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d0798:
    if (ctx->pc == 0x1D0798u) {
        ctx->pc = 0x1D0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0794u;
        // 0x1d0798: 0x8ca2ec5c  lw          $v0, -0x13A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D079Cu;
        goto label_1d079c;
    }
    ctx->pc = 0x1D0794u;
    {
        const bool branch_taken_0x1d0794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0794u;
        // 0x1d0798: 0x8ca2ec5c  lw          $v0, -0x13A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0794) {
            ctx->pc = 0x1D07B8u;
            goto label_1d07b8;
        }
    }
    ctx->pc = 0x1D079Cu;
label_1d079c:
    // 0x1d079c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d07a0:
    // 0x1d07a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d07a4:
    // 0x1d07a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d07a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d07a8:
    // 0x1d07a8: 0x0  nop
    ctx->pc = 0x1d07a8u;
    // NOP
label_1d07ac:
    // 0x1d07ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d07acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d07b0:
    // 0x1d07b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d07b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d07b4:
    // 0x1d07b4: 0x8ca2ec5c  lw          $v0, -0x13A4($a1)
    ctx->pc = 0x1d07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
label_1d07b8:
    // 0x1d07b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d07bc:
    if (ctx->pc == 0x1D07BCu) {
        ctx->pc = 0x1D07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07B8u;
        // 0x1d07bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07C0u;
        goto label_1d07c0;
    }
    ctx->pc = 0x1D07B8u;
    {
        const bool branch_taken_0x1d07b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07B8u;
        // 0x1d07bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07b8) {
            ctx->pc = 0x1D07D4u;
            goto label_1d07d4;
        }
    }
    ctx->pc = 0x1D07C0u;
label_1d07c0:
    // 0x1d07c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d07c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d07c4:
    // 0x1d07c4: 0x0  nop
    ctx->pc = 0x1d07c4u;
    // NOP
label_1d07c8:
    // 0x1d07c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d07c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d07cc:
    // 0x1d07cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d07d0:
    if (ctx->pc == 0x1D07D0u) {
        ctx->pc = 0x1D07D4u;
        goto label_1d07d4;
    }
    ctx->pc = 0x1D07CCu;
    {
        const bool branch_taken_0x1d07cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07cc) {
            ctx->pc = 0x1D07ECu;
            goto label_1d07ec;
        }
    }
    ctx->pc = 0x1D07D4u;
label_1d07d4:
    // 0x1d07d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d07d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d07d8:
    // 0x1d07d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d07d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d07dc:
    // 0x1d07dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d07dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d07e0:
    // 0x1d07e0: 0x0  nop
    ctx->pc = 0x1d07e0u;
    // NOP
label_1d07e4:
    // 0x1d07e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d07e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d07e8:
    // 0x1d07e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1d07e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1d07ec:
    // 0x1d07ec: 0x0  nop
    ctx->pc = 0x1d07ecu;
    // NOP
label_1d07f0:
    // 0x1d07f0: 0x0  nop
    ctx->pc = 0x1d07f0u;
    // NOP
label_1d07f4:
    // 0x1d07f4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1d07f4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1d07f8:
    // 0x1d07f8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1d07fc:
    // 0x1d07fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d07fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0800:
    // 0x1d0800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d0804:
    // 0x1d0804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0808:
    // 0x1d0808: 0x0  nop
    ctx->pc = 0x1d0808u;
    // NOP
label_1d080c:
    // 0x1d080c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d080cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d0810:
    // 0x1d0810: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1d0814:
    if (ctx->pc == 0x1D0814u) {
        ctx->pc = 0x1D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0810u;
        // 0x1d0814: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0818u;
        goto label_1d0818;
    }
    ctx->pc = 0x1D0810u;
    {
        const bool branch_taken_0x1d0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0810u;
        // 0x1d0814: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0810) {
            ctx->pc = 0x1D08C0u;
            goto label_1d08c0;
        }
    }
    ctx->pc = 0x1D0818u;
label_1d0818:
    // 0x1d0818: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d081c:
    // 0x1d081c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0820:
    // 0x1d0820: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d0820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d0824:
    // 0x1d0824: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1d0828:
    if (ctx->pc == 0x1D0828u) {
        ctx->pc = 0x1D0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0824u;
        // 0x1d0828: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D082Cu;
        goto label_1d082c;
    }
    ctx->pc = 0x1D0824u;
    {
        const bool branch_taken_0x1d0824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0824u;
        // 0x1d0828: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0824) {
            ctx->pc = 0x1D08D0u;
            goto label_1d08d0;
        }
    }
    ctx->pc = 0x1D082Cu;
label_1d082c:
    // 0x1d082c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d082cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0830:
    // 0x1d0830: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d0834:
    if (ctx->pc == 0x1D0834u) {
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0830u;
        // 0x1d0834: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0838u;
        goto label_1d0838;
    }
    ctx->pc = 0x1D0830u;
    {
        const bool branch_taken_0x1d0830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0830u;
        // 0x1d0834: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0830) {
            ctx->pc = 0x1D084Cu;
            goto label_1d084c;
        }
    }
    ctx->pc = 0x1D0838u;
label_1d0838:
    // 0x1d0838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d083c:
    // 0x1d083c: 0x0  nop
    ctx->pc = 0x1d083cu;
    // NOP
label_1d0840:
    // 0x1d0840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d0840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0844:
    // 0x1d0844: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d0848:
    if (ctx->pc == 0x1D0848u) {
        ctx->pc = 0x1D0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0844u;
        // 0x1d0848: 0x8ca2ec5c  lw          $v0, -0x13A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D084Cu;
        goto label_1d084c;
    }
    ctx->pc = 0x1D0844u;
    {
        const bool branch_taken_0x1d0844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0844u;
        // 0x1d0848: 0x8ca2ec5c  lw          $v0, -0x13A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0844) {
            ctx->pc = 0x1D0868u;
            goto label_1d0868;
        }
    }
    ctx->pc = 0x1D084Cu;
label_1d084c:
    // 0x1d084c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d0850:
    // 0x1d0850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d0850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d0854:
    // 0x1d0854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0858:
    // 0x1d0858: 0x0  nop
    ctx->pc = 0x1d0858u;
    // NOP
label_1d085c:
    // 0x1d085c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d085cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0860:
    // 0x1d0860: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d0860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d0864:
    // 0x1d0864: 0x8ca2ec5c  lw          $v0, -0x13A4($a1)
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962268)));
label_1d0868:
    // 0x1d0868: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d086c:
    if (ctx->pc == 0x1D086Cu) {
        ctx->pc = 0x1D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0868u;
        // 0x1d086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0870u;
        goto label_1d0870;
    }
    ctx->pc = 0x1D0868u;
    {
        const bool branch_taken_0x1d0868 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0868u;
        // 0x1d086c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0868) {
            ctx->pc = 0x1D0884u;
            goto label_1d0884;
        }
    }
    ctx->pc = 0x1D0870u;
label_1d0870:
    // 0x1d0870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0874:
    // 0x1d0874: 0x0  nop
    ctx->pc = 0x1d0874u;
    // NOP
label_1d0878:
    // 0x1d0878: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d087c:
    // 0x1d087c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0880:
    if (ctx->pc == 0x1D0880u) {
        ctx->pc = 0x1D0884u;
        goto label_1d0884;
    }
    ctx->pc = 0x1D087Cu;
    {
        const bool branch_taken_0x1d087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d087c) {
            ctx->pc = 0x1D089Cu;
            goto label_1d089c;
        }
    }
    ctx->pc = 0x1D0884u;
label_1d0884:
    // 0x1d0884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d0888:
    // 0x1d0888: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d0888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d088c:
    // 0x1d088c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0890:
    // 0x1d0890: 0x0  nop
    ctx->pc = 0x1d0890u;
    // NOP
label_1d0894:
    // 0x1d0894: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0898:
    // 0x1d0898: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1d0898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1d089c:
    // 0x1d089c: 0x0  nop
    ctx->pc = 0x1d089cu;
    // NOP
label_1d08a0:
    // 0x1d08a0: 0x0  nop
    ctx->pc = 0x1d08a0u;
    // NOP
label_1d08a4:
    // 0x1d08a4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d08a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d08a8:
    // 0x1d08a8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1d08a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1d08ac:
    // 0x1d08ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d08acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d08b0:
    // 0x1d08b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d08b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d08b4:
    // 0x1d08b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d08b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08b8:
    // 0x1d08b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d08b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d08bc:
    // 0x1d08bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d08bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d08c0:
    // 0x1d08c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d08c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d08c4:
    // 0x1d08c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1d08c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d08c8:
    // 0x1d08c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d08cc:
    if (ctx->pc == 0x1D08CCu) {
        ctx->pc = 0x1D08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08C8u;
        // 0x1d08cc: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D08D0u;
        goto label_1d08d0;
    }
    ctx->pc = 0x1D08C8u;
    {
        const bool branch_taken_0x1d08c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08C8u;
        // 0x1d08cc: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08c8) {
            ctx->pc = 0x1D08ECu;
            goto label_1d08ec;
        }
    }
    ctx->pc = 0x1D08D0u;
label_1d08d0:
    // 0x1d08d0: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x1d08d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_1d08d4:
    // 0x1d08d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d08d8:
    // 0x1d08d8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d08dc:
    // 0x1d08dc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d08e0:
    // 0x1d08e0: 0x40f809  jalr        $v0
label_1d08e4:
    if (ctx->pc == 0x1D08E4u) {
        ctx->pc = 0x1D08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E0u;
        // 0x1d08e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D08E8u;
        goto label_1d08e8;
    }
    ctx->pc = 0x1D08E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D08E8u);
        ctx->pc = 0x1D08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E0u;
        // 0x1d08e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D08E0u, 0x1D08E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D08E8u;
label_1d08e8:
    // 0x1d08e8: 0xae425ad0  sw          $v0, 0x5AD0($s2)
    ctx->pc = 0x1d08e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23248), GPR_U32(ctx, 2));
label_1d08ec:
    // 0x1d08ec: 0xc0750fa  jal         func_1D43E8
label_1d08f0:
    if (ctx->pc == 0x1D08F0u) {
        ctx->pc = 0x1D08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08ECu;
        // 0x1d08f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D08F4u;
        goto label_1d08f4;
    }
    ctx->pc = 0x1D08ECu;
    SET_GPR_U32(ctx, 31, 0x1D08F4u);
    ctx->pc = 0x1D08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08ECu;
    // 0x1d08f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1D08ECu, 0x1D08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08F4u;
label_1d08f4:
    // 0x1d08f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d08f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d08f8:
    // 0x1d08f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d08f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d08fc:
    // 0x1d08fc: 0xc075392  jal         func_1D4E48
label_1d0900:
    if (ctx->pc == 0x1D0900u) {
        ctx->pc = 0x1D0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08FCu;
        // 0x1d0900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0904u;
        goto label_1d0904;
    }
    ctx->pc = 0x1D08FCu;
    SET_GPR_U32(ctx, 31, 0x1D0904u);
    ctx->pc = 0x1D0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08FCu;
    // 0x1d0900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1D08FCu, 0x1D0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0904u;
label_1d0904:
    // 0x1d0904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d0908:
    // 0x1d0908: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d0908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d090c:
    // 0x1d090c: 0xc0753c8  jal         func_1D4F20
label_1d0910:
    if (ctx->pc == 0x1D0910u) {
        ctx->pc = 0x1D0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D090Cu;
        // 0x1d0910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0914u;
        goto label_1d0914;
    }
    ctx->pc = 0x1D090Cu;
    SET_GPR_U32(ctx, 31, 0x1D0914u);
    ctx->pc = 0x1D0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D090Cu;
    // 0x1d0910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1D090Cu, 0x1D0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0914u;
label_1d0914:
    // 0x1d0914: 0x26501bd0  addiu       $s0, $s2, 0x1BD0
    ctx->pc = 0x1d0914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
label_1d0918:
    // 0x1d0918: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d091c:
    // 0x1d091c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d0920:
    // 0x1d0920: 0xc440ec4c  lwc1        $f0, -0x13B4($v0)
    ctx->pc = 0x1d0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0924:
    // 0x1d0924: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d0924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0928:
    // 0x1d0928: 0xc461ec50  lwc1        $f1, -0x13B0($v1)
    ctx->pc = 0x1d0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d092c:
    // 0x1d092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0930:
    // 0x1d0930: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d0934:
    // 0x1d0934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d0934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0938:
    // 0x1d0938: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d0938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d093c:
    // 0x1d093c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1d0940:
    // 0x1d0940: 0xc075a58  jal         func_1D6960
label_1d0944:
    if (ctx->pc == 0x1D0944u) {
        ctx->pc = 0x1D0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0940u;
        // 0x1d0944: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0948u;
        goto label_1d0948;
    }
    ctx->pc = 0x1D0940u;
    SET_GPR_U32(ctx, 31, 0x1D0948u);
    ctx->pc = 0x1D0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0940u;
    // 0x1d0944: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6960u, 0x1D0940u, 0x1D0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0948u;
label_1d0948:
    // 0x1d0948: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d094c:
    // 0x1d094c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d0950:
    // 0x1d0950: 0xc440ec54  lwc1        $f0, -0x13AC($v0)
    ctx->pc = 0x1d0950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0954:
    // 0x1d0954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0958:
    // 0x1d0958: 0xc461ec58  lwc1        $f1, -0x13A8($v1)
    ctx->pc = 0x1d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d095c:
    // 0x1d095c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0960:
    // 0x1d0960: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d0964:
    // 0x1d0964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0968:
    // 0x1d0968: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d0968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d096c:
    // 0x1d096c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d096cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d0970:
    // 0x1d0970: 0xc075a60  jal         func_1D6980
label_1d0974:
    if (ctx->pc == 0x1D0974u) {
        ctx->pc = 0x1D0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0970u;
        // 0x1d0974: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0978u;
        goto label_1d0978;
    }
    ctx->pc = 0x1D0970u;
    SET_GPR_U32(ctx, 31, 0x1D0978u);
    ctx->pc = 0x1D0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0970u;
    // 0x1d0974: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1D0970u, 0x1D0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0978u;
label_1d0978:
    // 0x1d0978: 0xc075aa4  jal         func_1D6A90
label_1d097c:
    if (ctx->pc == 0x1D097Cu) {
        ctx->pc = 0x1D097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0978u;
        // 0x1d097c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0980u;
        goto label_1d0980;
    }
    ctx->pc = 0x1D0978u;
    SET_GPR_U32(ctx, 31, 0x1D0980u);
    ctx->pc = 0x1D097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0978u;
    // 0x1d097c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A90u, 0x1D0978u, 0x1D0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0980u;
label_1d0980:
    // 0x1d0980: 0x8e421b7c  lw          $v0, 0x1B7C($s2)
    ctx->pc = 0x1d0980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7036)));
label_1d0984:
    // 0x1d0984: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d0988:
    if (ctx->pc == 0x1D0988u) {
        ctx->pc = 0x1D0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0984u;
        // 0x1d0988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D098Cu;
        goto label_1d098c;
    }
    ctx->pc = 0x1D0984u;
    {
        const bool branch_taken_0x1d0984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0984u;
        // 0x1d0988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0984) {
            ctx->pc = 0x1D09ACu;
            goto label_1d09ac;
        }
    }
    ctx->pc = 0x1D098Cu;
label_1d098c:
    // 0x1d098c: 0xc074742  jal         func_1D1D08
label_1d0990:
    if (ctx->pc == 0x1D0990u) {
        ctx->pc = 0x1D0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D098Cu;
        // 0x1d0990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0994u;
        goto label_1d0994;
    }
    ctx->pc = 0x1D098Cu;
    SET_GPR_U32(ctx, 31, 0x1D0994u);
    ctx->pc = 0x1D0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D098Cu;
    // 0x1d0990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D08u, 0x1D098Cu, 0x1D0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0994u;
label_1d0994:
    // 0x1d0994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d0998:
    if (ctx->pc == 0x1D0998u) {
        ctx->pc = 0x1D0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0994u;
        // 0x1d0998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D099Cu;
        goto label_1d099c;
    }
    ctx->pc = 0x1D0994u;
    {
        const bool branch_taken_0x1d0994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0994u;
        // 0x1d0998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0994) {
            ctx->pc = 0x1D09ACu;
            goto label_1d09ac;
        }
    }
    ctx->pc = 0x1D099Cu;
label_1d099c:
    // 0x1d099c: 0xc0553ca  jal         func_154F28
label_1d09a0:
    if (ctx->pc == 0x1D09A0u) {
        ctx->pc = 0x1D09A4u;
        goto label_1d09a4;
    }
    ctx->pc = 0x1D099Cu;
    SET_GPR_U32(ctx, 31, 0x1D09A4u);
    ctx->pc = 0x154F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F28u, 0x1D099Cu, 0x1D09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09A4u;
label_1d09a4:
    // 0x1d09a4: 0xae401b7c  sw          $zero, 0x1B7C($s2)
    ctx->pc = 0x1d09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7036), GPR_U32(ctx, 0));
label_1d09a8:
    // 0x1d09a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d09ac:
    // 0x1d09ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d09acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d09b0:
    // 0x1d09b0: 0xae425ad4  sw          $v0, 0x5AD4($s2)
    ctx->pc = 0x1d09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 23252), GPR_U32(ctx, 2));
label_1d09b4:
    // 0x1d09b4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d09b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d09b8:
    // 0x1d09b8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d09b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d09bc:
    // 0x1d09bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d09bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d09c0:
    // 0x1d09c0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d09c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d09c4:
    // 0x1d09c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d09c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d09c8:
    // 0x1d09c8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1d09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d09cc:
    // 0x1d09cc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1d09ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d09d0:
    // 0x1d09d0: 0x3e00008  jr          $ra
label_1d09d4:
    if (ctx->pc == 0x1D09D4u) {
        ctx->pc = 0x1D09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09D0u;
        // 0x1d09d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D09D8u;
        goto label_fallthrough_0x1d09d0;
    }
    ctx->pc = 0x1D09D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09D0u;
        // 0x1d09d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D09D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d09d0:
    ctx->pc = 0x1D09D8u;
}
