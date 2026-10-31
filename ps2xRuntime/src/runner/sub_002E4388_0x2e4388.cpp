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

// Function: sub_002E4388
// Address: 0x2e4388 - 0x2e48e8
void sub_002E4388_0x2e4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4388_0x2e4388");
#endif

    switch (ctx->pc) {
        case 0x2e4388u: goto label_2e4388;
        case 0x2e438cu: goto label_2e438c;
        case 0x2e4390u: goto label_2e4390;
        case 0x2e4394u: goto label_2e4394;
        case 0x2e4398u: goto label_2e4398;
        case 0x2e439cu: goto label_2e439c;
        case 0x2e43a0u: goto label_2e43a0;
        case 0x2e43a4u: goto label_2e43a4;
        case 0x2e43a8u: goto label_2e43a8;
        case 0x2e43acu: goto label_2e43ac;
        case 0x2e43b0u: goto label_2e43b0;
        case 0x2e43b4u: goto label_2e43b4;
        case 0x2e43b8u: goto label_2e43b8;
        case 0x2e43bcu: goto label_2e43bc;
        case 0x2e43c0u: goto label_2e43c0;
        case 0x2e43c4u: goto label_2e43c4;
        case 0x2e43c8u: goto label_2e43c8;
        case 0x2e43ccu: goto label_2e43cc;
        case 0x2e43d0u: goto label_2e43d0;
        case 0x2e43d4u: goto label_2e43d4;
        case 0x2e43d8u: goto label_2e43d8;
        case 0x2e43dcu: goto label_2e43dc;
        case 0x2e43e0u: goto label_2e43e0;
        case 0x2e43e4u: goto label_2e43e4;
        case 0x2e43e8u: goto label_2e43e8;
        case 0x2e43ecu: goto label_2e43ec;
        case 0x2e43f0u: goto label_2e43f0;
        case 0x2e43f4u: goto label_2e43f4;
        case 0x2e43f8u: goto label_2e43f8;
        case 0x2e43fcu: goto label_2e43fc;
        case 0x2e4400u: goto label_2e4400;
        case 0x2e4404u: goto label_2e4404;
        case 0x2e4408u: goto label_2e4408;
        case 0x2e440cu: goto label_2e440c;
        case 0x2e4410u: goto label_2e4410;
        case 0x2e4414u: goto label_2e4414;
        case 0x2e4418u: goto label_2e4418;
        case 0x2e441cu: goto label_2e441c;
        case 0x2e4420u: goto label_2e4420;
        case 0x2e4424u: goto label_2e4424;
        case 0x2e4428u: goto label_2e4428;
        case 0x2e442cu: goto label_2e442c;
        case 0x2e4430u: goto label_2e4430;
        case 0x2e4434u: goto label_2e4434;
        case 0x2e4438u: goto label_2e4438;
        case 0x2e443cu: goto label_2e443c;
        case 0x2e4440u: goto label_2e4440;
        case 0x2e4444u: goto label_2e4444;
        case 0x2e4448u: goto label_2e4448;
        case 0x2e444cu: goto label_2e444c;
        case 0x2e4450u: goto label_2e4450;
        case 0x2e4454u: goto label_2e4454;
        case 0x2e4458u: goto label_2e4458;
        case 0x2e445cu: goto label_2e445c;
        case 0x2e4460u: goto label_2e4460;
        case 0x2e4464u: goto label_2e4464;
        case 0x2e4468u: goto label_2e4468;
        case 0x2e446cu: goto label_2e446c;
        case 0x2e4470u: goto label_2e4470;
        case 0x2e4474u: goto label_2e4474;
        case 0x2e4478u: goto label_2e4478;
        case 0x2e447cu: goto label_2e447c;
        case 0x2e4480u: goto label_2e4480;
        case 0x2e4484u: goto label_2e4484;
        case 0x2e4488u: goto label_2e4488;
        case 0x2e448cu: goto label_2e448c;
        case 0x2e4490u: goto label_2e4490;
        case 0x2e4494u: goto label_2e4494;
        case 0x2e4498u: goto label_2e4498;
        case 0x2e449cu: goto label_2e449c;
        case 0x2e44a0u: goto label_2e44a0;
        case 0x2e44a4u: goto label_2e44a4;
        case 0x2e44a8u: goto label_2e44a8;
        case 0x2e44acu: goto label_2e44ac;
        case 0x2e44b0u: goto label_2e44b0;
        case 0x2e44b4u: goto label_2e44b4;
        case 0x2e44b8u: goto label_2e44b8;
        case 0x2e44bcu: goto label_2e44bc;
        case 0x2e44c0u: goto label_2e44c0;
        case 0x2e44c4u: goto label_2e44c4;
        case 0x2e44c8u: goto label_2e44c8;
        case 0x2e44ccu: goto label_2e44cc;
        case 0x2e44d0u: goto label_2e44d0;
        case 0x2e44d4u: goto label_2e44d4;
        case 0x2e44d8u: goto label_2e44d8;
        case 0x2e44dcu: goto label_2e44dc;
        case 0x2e44e0u: goto label_2e44e0;
        case 0x2e44e4u: goto label_2e44e4;
        case 0x2e44e8u: goto label_2e44e8;
        case 0x2e44ecu: goto label_2e44ec;
        case 0x2e44f0u: goto label_2e44f0;
        case 0x2e44f4u: goto label_2e44f4;
        case 0x2e44f8u: goto label_2e44f8;
        case 0x2e44fcu: goto label_2e44fc;
        case 0x2e4500u: goto label_2e4500;
        case 0x2e4504u: goto label_2e4504;
        case 0x2e4508u: goto label_2e4508;
        case 0x2e450cu: goto label_2e450c;
        case 0x2e4510u: goto label_2e4510;
        case 0x2e4514u: goto label_2e4514;
        case 0x2e4518u: goto label_2e4518;
        case 0x2e451cu: goto label_2e451c;
        case 0x2e4520u: goto label_2e4520;
        case 0x2e4524u: goto label_2e4524;
        case 0x2e4528u: goto label_2e4528;
        case 0x2e452cu: goto label_2e452c;
        case 0x2e4530u: goto label_2e4530;
        case 0x2e4534u: goto label_2e4534;
        case 0x2e4538u: goto label_2e4538;
        case 0x2e453cu: goto label_2e453c;
        case 0x2e4540u: goto label_2e4540;
        case 0x2e4544u: goto label_2e4544;
        case 0x2e4548u: goto label_2e4548;
        case 0x2e454cu: goto label_2e454c;
        case 0x2e4550u: goto label_2e4550;
        case 0x2e4554u: goto label_2e4554;
        case 0x2e4558u: goto label_2e4558;
        case 0x2e455cu: goto label_2e455c;
        case 0x2e4560u: goto label_2e4560;
        case 0x2e4564u: goto label_2e4564;
        case 0x2e4568u: goto label_2e4568;
        case 0x2e456cu: goto label_2e456c;
        case 0x2e4570u: goto label_2e4570;
        case 0x2e4574u: goto label_2e4574;
        case 0x2e4578u: goto label_2e4578;
        case 0x2e457cu: goto label_2e457c;
        case 0x2e4580u: goto label_2e4580;
        case 0x2e4584u: goto label_2e4584;
        case 0x2e4588u: goto label_2e4588;
        case 0x2e458cu: goto label_2e458c;
        case 0x2e4590u: goto label_2e4590;
        case 0x2e4594u: goto label_2e4594;
        case 0x2e4598u: goto label_2e4598;
        case 0x2e459cu: goto label_2e459c;
        case 0x2e45a0u: goto label_2e45a0;
        case 0x2e45a4u: goto label_2e45a4;
        case 0x2e45a8u: goto label_2e45a8;
        case 0x2e45acu: goto label_2e45ac;
        case 0x2e45b0u: goto label_2e45b0;
        case 0x2e45b4u: goto label_2e45b4;
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e45bcu: goto label_2e45bc;
        case 0x2e45c0u: goto label_2e45c0;
        case 0x2e45c4u: goto label_2e45c4;
        case 0x2e45c8u: goto label_2e45c8;
        case 0x2e45ccu: goto label_2e45cc;
        case 0x2e45d0u: goto label_2e45d0;
        case 0x2e45d4u: goto label_2e45d4;
        case 0x2e45d8u: goto label_2e45d8;
        case 0x2e45dcu: goto label_2e45dc;
        case 0x2e45e0u: goto label_2e45e0;
        case 0x2e45e4u: goto label_2e45e4;
        case 0x2e45e8u: goto label_2e45e8;
        case 0x2e45ecu: goto label_2e45ec;
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e45f4u: goto label_2e45f4;
        case 0x2e45f8u: goto label_2e45f8;
        case 0x2e45fcu: goto label_2e45fc;
        case 0x2e4600u: goto label_2e4600;
        case 0x2e4604u: goto label_2e4604;
        case 0x2e4608u: goto label_2e4608;
        case 0x2e460cu: goto label_2e460c;
        case 0x2e4610u: goto label_2e4610;
        case 0x2e4614u: goto label_2e4614;
        case 0x2e4618u: goto label_2e4618;
        case 0x2e461cu: goto label_2e461c;
        case 0x2e4620u: goto label_2e4620;
        case 0x2e4624u: goto label_2e4624;
        case 0x2e4628u: goto label_2e4628;
        case 0x2e462cu: goto label_2e462c;
        case 0x2e4630u: goto label_2e4630;
        case 0x2e4634u: goto label_2e4634;
        case 0x2e4638u: goto label_2e4638;
        case 0x2e463cu: goto label_2e463c;
        case 0x2e4640u: goto label_2e4640;
        case 0x2e4644u: goto label_2e4644;
        case 0x2e4648u: goto label_2e4648;
        case 0x2e464cu: goto label_2e464c;
        case 0x2e4650u: goto label_2e4650;
        case 0x2e4654u: goto label_2e4654;
        case 0x2e4658u: goto label_2e4658;
        case 0x2e465cu: goto label_2e465c;
        case 0x2e4660u: goto label_2e4660;
        case 0x2e4664u: goto label_2e4664;
        case 0x2e4668u: goto label_2e4668;
        case 0x2e466cu: goto label_2e466c;
        case 0x2e4670u: goto label_2e4670;
        case 0x2e4674u: goto label_2e4674;
        case 0x2e4678u: goto label_2e4678;
        case 0x2e467cu: goto label_2e467c;
        case 0x2e4680u: goto label_2e4680;
        case 0x2e4684u: goto label_2e4684;
        case 0x2e4688u: goto label_2e4688;
        case 0x2e468cu: goto label_2e468c;
        case 0x2e4690u: goto label_2e4690;
        case 0x2e4694u: goto label_2e4694;
        case 0x2e4698u: goto label_2e4698;
        case 0x2e469cu: goto label_2e469c;
        case 0x2e46a0u: goto label_2e46a0;
        case 0x2e46a4u: goto label_2e46a4;
        case 0x2e46a8u: goto label_2e46a8;
        case 0x2e46acu: goto label_2e46ac;
        case 0x2e46b0u: goto label_2e46b0;
        case 0x2e46b4u: goto label_2e46b4;
        case 0x2e46b8u: goto label_2e46b8;
        case 0x2e46bcu: goto label_2e46bc;
        case 0x2e46c0u: goto label_2e46c0;
        case 0x2e46c4u: goto label_2e46c4;
        case 0x2e46c8u: goto label_2e46c8;
        case 0x2e46ccu: goto label_2e46cc;
        case 0x2e46d0u: goto label_2e46d0;
        case 0x2e46d4u: goto label_2e46d4;
        case 0x2e46d8u: goto label_2e46d8;
        case 0x2e46dcu: goto label_2e46dc;
        case 0x2e46e0u: goto label_2e46e0;
        case 0x2e46e4u: goto label_2e46e4;
        case 0x2e46e8u: goto label_2e46e8;
        case 0x2e46ecu: goto label_2e46ec;
        case 0x2e46f0u: goto label_2e46f0;
        case 0x2e46f4u: goto label_2e46f4;
        case 0x2e46f8u: goto label_2e46f8;
        case 0x2e46fcu: goto label_2e46fc;
        case 0x2e4700u: goto label_2e4700;
        case 0x2e4704u: goto label_2e4704;
        case 0x2e4708u: goto label_2e4708;
        case 0x2e470cu: goto label_2e470c;
        case 0x2e4710u: goto label_2e4710;
        case 0x2e4714u: goto label_2e4714;
        case 0x2e4718u: goto label_2e4718;
        case 0x2e471cu: goto label_2e471c;
        case 0x2e4720u: goto label_2e4720;
        case 0x2e4724u: goto label_2e4724;
        case 0x2e4728u: goto label_2e4728;
        case 0x2e472cu: goto label_2e472c;
        case 0x2e4730u: goto label_2e4730;
        case 0x2e4734u: goto label_2e4734;
        case 0x2e4738u: goto label_2e4738;
        case 0x2e473cu: goto label_2e473c;
        case 0x2e4740u: goto label_2e4740;
        case 0x2e4744u: goto label_2e4744;
        case 0x2e4748u: goto label_2e4748;
        case 0x2e474cu: goto label_2e474c;
        case 0x2e4750u: goto label_2e4750;
        case 0x2e4754u: goto label_2e4754;
        case 0x2e4758u: goto label_2e4758;
        case 0x2e475cu: goto label_2e475c;
        case 0x2e4760u: goto label_2e4760;
        case 0x2e4764u: goto label_2e4764;
        case 0x2e4768u: goto label_2e4768;
        case 0x2e476cu: goto label_2e476c;
        case 0x2e4770u: goto label_2e4770;
        case 0x2e4774u: goto label_2e4774;
        case 0x2e4778u: goto label_2e4778;
        case 0x2e477cu: goto label_2e477c;
        case 0x2e4780u: goto label_2e4780;
        case 0x2e4784u: goto label_2e4784;
        case 0x2e4788u: goto label_2e4788;
        case 0x2e478cu: goto label_2e478c;
        case 0x2e4790u: goto label_2e4790;
        case 0x2e4794u: goto label_2e4794;
        case 0x2e4798u: goto label_2e4798;
        case 0x2e479cu: goto label_2e479c;
        case 0x2e47a0u: goto label_2e47a0;
        case 0x2e47a4u: goto label_2e47a4;
        case 0x2e47a8u: goto label_2e47a8;
        case 0x2e47acu: goto label_2e47ac;
        case 0x2e47b0u: goto label_2e47b0;
        case 0x2e47b4u: goto label_2e47b4;
        case 0x2e47b8u: goto label_2e47b8;
        case 0x2e47bcu: goto label_2e47bc;
        case 0x2e47c0u: goto label_2e47c0;
        case 0x2e47c4u: goto label_2e47c4;
        case 0x2e47c8u: goto label_2e47c8;
        case 0x2e47ccu: goto label_2e47cc;
        case 0x2e47d0u: goto label_2e47d0;
        case 0x2e47d4u: goto label_2e47d4;
        case 0x2e47d8u: goto label_2e47d8;
        case 0x2e47dcu: goto label_2e47dc;
        case 0x2e47e0u: goto label_2e47e0;
        case 0x2e47e4u: goto label_2e47e4;
        case 0x2e47e8u: goto label_2e47e8;
        case 0x2e47ecu: goto label_2e47ec;
        case 0x2e47f0u: goto label_2e47f0;
        case 0x2e47f4u: goto label_2e47f4;
        case 0x2e47f8u: goto label_2e47f8;
        case 0x2e47fcu: goto label_2e47fc;
        case 0x2e4800u: goto label_2e4800;
        case 0x2e4804u: goto label_2e4804;
        case 0x2e4808u: goto label_2e4808;
        case 0x2e480cu: goto label_2e480c;
        case 0x2e4810u: goto label_2e4810;
        case 0x2e4814u: goto label_2e4814;
        case 0x2e4818u: goto label_2e4818;
        case 0x2e481cu: goto label_2e481c;
        case 0x2e4820u: goto label_2e4820;
        case 0x2e4824u: goto label_2e4824;
        case 0x2e4828u: goto label_2e4828;
        case 0x2e482cu: goto label_2e482c;
        case 0x2e4830u: goto label_2e4830;
        case 0x2e4834u: goto label_2e4834;
        case 0x2e4838u: goto label_2e4838;
        case 0x2e483cu: goto label_2e483c;
        case 0x2e4840u: goto label_2e4840;
        case 0x2e4844u: goto label_2e4844;
        case 0x2e4848u: goto label_2e4848;
        case 0x2e484cu: goto label_2e484c;
        case 0x2e4850u: goto label_2e4850;
        case 0x2e4854u: goto label_2e4854;
        case 0x2e4858u: goto label_2e4858;
        case 0x2e485cu: goto label_2e485c;
        case 0x2e4860u: goto label_2e4860;
        case 0x2e4864u: goto label_2e4864;
        case 0x2e4868u: goto label_2e4868;
        case 0x2e486cu: goto label_2e486c;
        case 0x2e4870u: goto label_2e4870;
        case 0x2e4874u: goto label_2e4874;
        case 0x2e4878u: goto label_2e4878;
        case 0x2e487cu: goto label_2e487c;
        case 0x2e4880u: goto label_2e4880;
        case 0x2e4884u: goto label_2e4884;
        case 0x2e4888u: goto label_2e4888;
        case 0x2e488cu: goto label_2e488c;
        case 0x2e4890u: goto label_2e4890;
        case 0x2e4894u: goto label_2e4894;
        case 0x2e4898u: goto label_2e4898;
        case 0x2e489cu: goto label_2e489c;
        case 0x2e48a0u: goto label_2e48a0;
        case 0x2e48a4u: goto label_2e48a4;
        case 0x2e48a8u: goto label_2e48a8;
        case 0x2e48acu: goto label_2e48ac;
        case 0x2e48b0u: goto label_2e48b0;
        case 0x2e48b4u: goto label_2e48b4;
        case 0x2e48b8u: goto label_2e48b8;
        case 0x2e48bcu: goto label_2e48bc;
        case 0x2e48c0u: goto label_2e48c0;
        case 0x2e48c4u: goto label_2e48c4;
        case 0x2e48c8u: goto label_2e48c8;
        case 0x2e48ccu: goto label_2e48cc;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48d4u: goto label_2e48d4;
        case 0x2e48d8u: goto label_2e48d8;
        case 0x2e48dcu: goto label_2e48dc;
        case 0x2e48e0u: goto label_2e48e0;
        case 0x2e48e4u: goto label_2e48e4;
        default: break;
    }

    ctx->pc = 0x2e4388u;

label_2e4388:
    // 0x2e4388: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e4388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2e438c:
    // 0x2e438c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2e4390:
    // 0x2e4390: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2e4394:
    // 0x2e4394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4398:
    // 0x2e4398: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e4398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2e439c:
    // 0x2e439c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2e43a0:
    // 0x2e43a0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2e43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2e43a4:
    // 0x2e43a4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2e43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2e43a8:
    // 0x2e43a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e43ac:
    // 0x2e43ac: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2e43acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2e43b0:
    // 0x2e43b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e43b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e43b4:
    // 0x2e43b4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e43b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2e43b8:
    // 0x2e43b8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e43b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2e43bc:
    // 0x2e43bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e43c0:
    // 0x2e43c0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e43c4:
    // 0x2e43c4: 0xc05959e  jal         func_165678
label_2e43c8:
    if (ctx->pc == 0x2E43C8u) {
        ctx->pc = 0x2E43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43C4u;
        // 0x2e43c8: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E43CCu;
        goto label_2e43cc;
    }
    ctx->pc = 0x2E43C4u;
    SET_GPR_U32(ctx, 31, 0x2E43CCu);
    ctx->pc = 0x2E43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43C4u;
    // 0x2e43c8: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E43C4u, 0x2E43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43CCu;
label_2e43cc:
    // 0x2e43cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e43ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e43d0:
    // 0x2e43d0: 0x12400137  beqz        $s2, . + 4 + (0x137 << 2)
label_2e43d4:
    if (ctx->pc == 0x2E43D4u) {
        ctx->pc = 0x2E43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43D0u;
        // 0x2e43d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E43D8u;
        goto label_2e43d8;
    }
    ctx->pc = 0x2E43D0u;
    {
        const bool branch_taken_0x2e43d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43D0u;
        // 0x2e43d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43d0) {
            ctx->pc = 0x2E48B0u;
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E43D8u;
label_2e43d8:
    // 0x2e43d8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2e43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e43dc:
    // 0x2e43dc: 0x10620135  beq         $v1, $v0, . + 4 + (0x135 << 2)
label_2e43e0:
    if (ctx->pc == 0x2E43E0u) {
        ctx->pc = 0x2E43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43DCu;
        // 0x2e43e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E43E4u;
        goto label_2e43e4;
    }
    ctx->pc = 0x2E43DCu;
    {
        const bool branch_taken_0x2e43dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43DCu;
        // 0x2e43e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43dc) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E43E4u;
label_2e43e4:
    // 0x2e43e4: 0xc05b0e2  jal         func_16C388
label_2e43e8:
    if (ctx->pc == 0x2E43E8u) {
        ctx->pc = 0x2E43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43E4u;
        // 0x2e43e8: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E43ECu;
        goto label_2e43ec;
    }
    ctx->pc = 0x2E43E4u;
    SET_GPR_U32(ctx, 31, 0x2E43ECu);
    ctx->pc = 0x2E43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43E4u;
    // 0x2e43e8: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2E43E4u, 0x2E43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43ECu;
label_2e43ec:
    // 0x2e43ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e43ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e43f0:
    // 0x2e43f0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2e43f4:
    // 0x2e43f4: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
label_2e43f8:
    if (ctx->pc == 0x2E43F8u) {
        ctx->pc = 0x2E43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43F4u;
        // 0x2e43f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E43FCu;
        goto label_2e43fc;
    }
    ctx->pc = 0x2E43F4u;
    {
        const bool branch_taken_0x2e43f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43F4u;
        // 0x2e43f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43f4) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E43FCu;
label_2e43fc:
    // 0x2e43fc: 0xc05959e  jal         func_165678
label_2e4400:
    if (ctx->pc == 0x2E4400u) {
        ctx->pc = 0x2E4404u;
        goto label_2e4404;
    }
    ctx->pc = 0x2E43FCu;
    SET_GPR_U32(ctx, 31, 0x2E4404u);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E43FCu, 0x2E4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4404u;
label_2e4404:
    // 0x2e4404: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e4404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4408:
    // 0x2e4408: 0x12800129  beqz        $s4, . + 4 + (0x129 << 2)
label_2e440c:
    if (ctx->pc == 0x2E440Cu) {
        ctx->pc = 0x2E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4408u;
        // 0x2e440c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4410u;
        goto label_2e4410;
    }
    ctx->pc = 0x2E4408u;
    {
        const bool branch_taken_0x2e4408 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4408u;
        // 0x2e440c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4408) {
            ctx->pc = 0x2E48B0u;
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E4410u;
label_2e4410:
    // 0x2e4410: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4414:
    // 0x2e4414: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2e4418:
    if (ctx->pc == 0x2E4418u) {
        ctx->pc = 0x2E4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4414u;
        // 0x2e4418: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E441Cu;
        goto label_2e441c;
    }
    ctx->pc = 0x2E4414u;
    {
        const bool branch_taken_0x2e4414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4414) {
            ctx->pc = 0x2E4418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4414u;
            // 0x2e4418: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E441Cu;
            goto label_2e441c;
        }
    }
    ctx->pc = 0x2E441Cu;
label_2e441c:
    // 0x2e441c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2e4420:
    // 0x2e4420: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e4420u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2e4424:
    // 0x2e4424: 0x2010  mfhi        $a0
    ctx->pc = 0x2e4424u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2e4428:
    // 0x2e4428: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e442c:
    if (ctx->pc == 0x2E442Cu) {
        ctx->pc = 0x2E4430u;
        goto label_2e4430;
    }
    ctx->pc = 0x2E4428u;
    {
        const bool branch_taken_0x2e4428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4428) {
            ctx->pc = 0x2E4438u;
            goto label_2e4438;
        }
    }
    ctx->pc = 0x2E4430u;
label_2e4430:
    // 0x2e4430: 0xc0b9074  jal         func_2E41D0
label_2e4434:
    if (ctx->pc == 0x2E4434u) {
        ctx->pc = 0x2E4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4430u;
        // 0x2e4434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4438u;
        goto label_2e4438;
    }
    ctx->pc = 0x2E4430u;
    SET_GPR_U32(ctx, 31, 0x2E4438u);
    ctx->pc = 0x2E4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4430u;
    // 0x2e4434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41D0u, 0x2E4430u, 0x2E4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4438u;
label_2e4438:
    // 0x2e4438: 0x56720072  bnel        $s3, $s2, . + 4 + (0x72 << 2)
label_2e443c:
    if (ctx->pc == 0x2E443Cu) {
        ctx->pc = 0x2E443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4438u;
        // 0x2e443c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4440u;
        goto label_2e4440;
    }
    ctx->pc = 0x2E4438u;
    {
        const bool branch_taken_0x2e4438 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4438) {
            ctx->pc = 0x2E443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4438u;
            // 0x2e443c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4604u;
            goto label_2e4604;
        }
    }
    ctx->pc = 0x2E4440u;
label_2e4440:
    // 0x2e4440: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x2e4440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2e4444:
    // 0x2e4444: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4448:
    // 0x2e4448: 0x14560023  bne         $v0, $s6, . + 4 + (0x23 << 2)
label_2e444c:
    if (ctx->pc == 0x2E444Cu) {
        ctx->pc = 0x2E444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4448u;
        // 0x2e444c: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4450u;
        goto label_2e4450;
    }
    ctx->pc = 0x2E4448u;
    {
        const bool branch_taken_0x2e4448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2E444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4448u;
        // 0x2e444c: 0x26700090  addiu       $s0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4448) {
            ctx->pc = 0x2E44D8u;
            goto label_2e44d8;
        }
    }
    ctx->pc = 0x2E4450u;
label_2e4450:
    // 0x2e4450: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2e4450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2e4454:
    // 0x2e4454: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e4458:
    // 0x2e4458: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2e445c:
    // 0x2e445c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e4460:
    // 0x2e4460: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e4460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e4464:
    // 0x2e4464: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e4464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e4468:
    // 0x2e4468: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e446c:
    // 0x2e446c: 0xc0cdb38  jal         func_336CE0
label_2e4470:
    if (ctx->pc == 0x2E4470u) {
        ctx->pc = 0x2E4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E446Cu;
        // 0x2e4470: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4474u;
        goto label_2e4474;
    }
    ctx->pc = 0x2E446Cu;
    SET_GPR_U32(ctx, 31, 0x2E4474u);
    ctx->pc = 0x2E4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E446Cu;
    // 0x2e4470: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E446Cu, 0x2E4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4474u;
label_2e4474:
    // 0x2e4474: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2e4474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e4478:
    // 0x2e4478: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e4478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2e447c:
    // 0x2e447c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e447cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4480:
    // 0x2e4480: 0x0  nop
    ctx->pc = 0x2e4480u;
    // NOP
label_2e4484:
    // 0x2e4484: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_2e4488:
    if (ctx->pc == 0x2E4488u) {
        ctx->pc = 0x2E4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4484u;
        // 0x2e4488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E448Cu;
        goto label_2e448c;
    }
    ctx->pc = 0x2E4484u;
    {
        const bool branch_taken_0x2e4484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4484u;
        // 0x2e4488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4484) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E448Cu;
label_2e448c:
    // 0x2e448c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e448cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e4490:
    // 0x2e4490: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2e4490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e4494:
    // 0x2e4494: 0x14560107  bne         $v0, $s6, . + 4 + (0x107 << 2)
label_2e4498:
    if (ctx->pc == 0x2E4498u) {
        ctx->pc = 0x2E4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4494u;
        // 0x2e4498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E449Cu;
        goto label_2e449c;
    }
    ctx->pc = 0x2E4494u;
    {
        const bool branch_taken_0x2e4494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2E4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4494u;
        // 0x2e4498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4494) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E449Cu;
label_2e449c:
    // 0x2e449c: 0xc0a36c2  jal         func_28DB08
label_2e44a0:
    if (ctx->pc == 0x2E44A0u) {
        ctx->pc = 0x2E44A4u;
        goto label_2e44a4;
    }
    ctx->pc = 0x2E449Cu;
    SET_GPR_U32(ctx, 31, 0x2E44A4u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E449Cu, 0x2E44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44A4u;
label_2e44a4:
    // 0x2e44a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e44a8:
    // 0x2e44a8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e44ac:
    // 0x2e44ac: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e44acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e44b0:
    // 0x2e44b0: 0xa0f809  jalr        $a1
label_2e44b4:
    if (ctx->pc == 0x2E44B4u) {
        ctx->pc = 0x2E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B0u;
        // 0x2e44b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44B8u;
        goto label_2e44b8;
    }
    ctx->pc = 0x2E44B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E44B8u);
        ctx->pc = 0x2E44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B0u;
        // 0x2e44b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E44B0u, 0x2E44B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E44B8u;
label_2e44b8:
    // 0x2e44b8: 0x145600fe  bne         $v0, $s6, . + 4 + (0xFE << 2)
label_2e44bc:
    if (ctx->pc == 0x2E44BCu) {
        ctx->pc = 0x2E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B8u;
        // 0x2e44bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44C0u;
        goto label_2e44c0;
    }
    ctx->pc = 0x2E44B8u;
    {
        const bool branch_taken_0x2e44b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44B8u;
        // 0x2e44bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44b8) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E44C0u;
label_2e44c0:
    // 0x2e44c0: 0xc08c716  jal         func_231C58
label_2e44c4:
    if (ctx->pc == 0x2E44C4u) {
        ctx->pc = 0x2E44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44C0u;
        // 0x2e44c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44C8u;
        goto label_2e44c8;
    }
    ctx->pc = 0x2E44C0u;
    SET_GPR_U32(ctx, 31, 0x2E44C8u);
    ctx->pc = 0x2E44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44C0u;
    // 0x2e44c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2E44C0u, 0x2E44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44C8u;
label_2e44c8:
    // 0x2e44c8: 0xc0a36c8  jal         func_28DB20
label_2e44cc:
    if (ctx->pc == 0x2E44CCu) {
        ctx->pc = 0x2E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44C8u;
        // 0x2e44cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44D0u;
        goto label_2e44d0;
    }
    ctx->pc = 0x2E44C8u;
    SET_GPR_U32(ctx, 31, 0x2E44D0u);
    ctx->pc = 0x2E44CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44C8u;
    // 0x2e44cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E44C8u, 0x2E44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44D0u;
label_2e44d0:
    // 0x2e44d0: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_2e44d4:
    if (ctx->pc == 0x2E44D4u) {
        ctx->pc = 0x2E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44D0u;
        // 0x2e44d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44D8u;
        goto label_2e44d8;
    }
    ctx->pc = 0x2E44D0u;
    {
        const bool branch_taken_0x2e44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44D0u;
        // 0x2e44d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44d0) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E44D8u;
label_2e44d8:
    // 0x2e44d8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e44dc:
    // 0x2e44dc: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2e44dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e44e0:
    // 0x2e44e0: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2e44e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e44e4:
    // 0x2e44e4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2e44e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e44e8:
    // 0x2e44e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e44ec:
    // 0x2e44ec: 0xc0cdb38  jal         func_336CE0
label_2e44f0:
    if (ctx->pc == 0x2E44F0u) {
        ctx->pc = 0x2E44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44ECu;
        // 0x2e44f0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E44F4u;
        goto label_2e44f4;
    }
    ctx->pc = 0x2E44ECu;
    SET_GPR_U32(ctx, 31, 0x2E44F4u);
    ctx->pc = 0x2E44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44ECu;
    // 0x2e44f0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E44ECu, 0x2E44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44F4u;
label_2e44f4:
    // 0x2e44f4: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2e44f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e44f8:
    // 0x2e44f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e44f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2e44fc:
    // 0x2e44fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e44fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4500:
    // 0x2e4500: 0x0  nop
    ctx->pc = 0x2e4500u;
    // NOP
label_2e4504:
    // 0x2e4504: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_2e4508:
    if (ctx->pc == 0x2E4508u) {
        ctx->pc = 0x2E4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4504u;
        // 0x2e4508: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E450Cu;
        goto label_2e450c;
    }
    ctx->pc = 0x2E4504u;
    {
        const bool branch_taken_0x2e4504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4504u;
        // 0x2e4508: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4504) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E450Cu;
label_2e450c:
    // 0x2e450c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2e450cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2e4510:
    // 0x2e4510: 0x2902a  slt         $s2, $zero, $v0
    ctx->pc = 0x2e4510u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e4514:
    // 0x2e4514: 0x56560010  bnel        $s2, $s6, . + 4 + (0x10 << 2)
label_2e4518:
    if (ctx->pc == 0x2E4518u) {
        ctx->pc = 0x2E4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4514u;
        // 0x2e4518: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E451Cu;
        goto label_2e451c;
    }
    ctx->pc = 0x2E4514u;
    {
        const bool branch_taken_0x2e4514 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x2e4514) {
            ctx->pc = 0x2E4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4514u;
            // 0x2e4518: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4558u;
            goto label_2e4558;
        }
    }
    ctx->pc = 0x2E451Cu;
label_2e451c:
    // 0x2e451c: 0xc0a36c2  jal         func_28DB08
label_2e4520:
    if (ctx->pc == 0x2E4520u) {
        ctx->pc = 0x2E4524u;
        goto label_2e4524;
    }
    ctx->pc = 0x2E451Cu;
    SET_GPR_U32(ctx, 31, 0x2E4524u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2E451Cu, 0x2E4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4524u;
label_2e4524:
    // 0x2e4524: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e4524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4528:
    // 0x2e4528: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2e4528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2e452c:
    // 0x2e452c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e452cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e4530:
    // 0x2e4530: 0xa0f809  jalr        $a1
label_2e4534:
    if (ctx->pc == 0x2E4534u) {
        ctx->pc = 0x2E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4530u;
        // 0x2e4534: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4538u;
        goto label_2e4538;
    }
    ctx->pc = 0x2E4530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E4538u);
        ctx->pc = 0x2E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4530u;
        // 0x2e4534: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4530u, 0x2E4538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4538u;
label_2e4538:
    // 0x2e4538: 0x145200de  bne         $v0, $s2, . + 4 + (0xDE << 2)
label_2e453c:
    if (ctx->pc == 0x2E453Cu) {
        ctx->pc = 0x2E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4538u;
        // 0x2e453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4540u;
        goto label_2e4540;
    }
    ctx->pc = 0x2E4538u;
    {
        const bool branch_taken_0x2e4538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4538u;
        // 0x2e453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4538) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4540u;
label_2e4540:
    // 0x2e4540: 0xc08c716  jal         func_231C58
label_2e4544:
    if (ctx->pc == 0x2E4544u) {
        ctx->pc = 0x2E4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4540u;
        // 0x2e4544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4548u;
        goto label_2e4548;
    }
    ctx->pc = 0x2E4540u;
    SET_GPR_U32(ctx, 31, 0x2E4548u);
    ctx->pc = 0x2E4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4540u;
    // 0x2e4544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2E4540u, 0x2E4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4548u;
label_2e4548:
    // 0x2e4548: 0xc0a36c8  jal         func_28DB20
label_2e454c:
    if (ctx->pc == 0x2E454Cu) {
        ctx->pc = 0x2E454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4548u;
        // 0x2e454c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4550u;
        goto label_2e4550;
    }
    ctx->pc = 0x2E4548u;
    SET_GPR_U32(ctx, 31, 0x2E4550u);
    ctx->pc = 0x2E454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4548u;
    // 0x2e454c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E4548u, 0x2E4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4550u;
label_2e4550:
    // 0x2e4550: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2e4554:
    if (ctx->pc == 0x2E4554u) {
        ctx->pc = 0x2E4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4550u;
        // 0x2e4554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4558u;
        goto label_2e4558;
    }
    ctx->pc = 0x2E4550u;
    {
        const bool branch_taken_0x2e4550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4550u;
        // 0x2e4554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4550) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4558u;
label_2e4558:
    // 0x2e4558: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x2e4558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2e455c:
    // 0x2e455c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e455cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e4560:
    // 0x2e4560: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2e4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2e4564:
    // 0x2e4564: 0xc0cd7d2  jal         func_335F48
label_2e4568:
    if (ctx->pc == 0x2E4568u) {
        ctx->pc = 0x2E4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4564u;
        // 0x2e4568: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E456Cu;
        goto label_2e456c;
    }
    ctx->pc = 0x2E4564u;
    SET_GPR_U32(ctx, 31, 0x2E456Cu);
    ctx->pc = 0x2E4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4564u;
    // 0x2e4568: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2E4564u, 0x2E456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E456Cu;
label_2e456c:
    // 0x2e456c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2e456cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e4570:
    // 0x2e4570: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e4570u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e4574:
    // 0x2e4574: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2e4574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2e4578:
    // 0x2e4578: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e4578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e457c:
    // 0x2e457c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e4580:
    // 0x2e4580: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2e4580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2e4584:
    // 0x2e4584: 0xc0cd780  jal         func_335E00
label_2e4588:
    if (ctx->pc == 0x2E4588u) {
        ctx->pc = 0x2E4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4584u;
        // 0x2e4588: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E458Cu;
        goto label_2e458c;
    }
    ctx->pc = 0x2E4584u;
    SET_GPR_U32(ctx, 31, 0x2E458Cu);
    ctx->pc = 0x2E4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4584u;
    // 0x2e4588: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2E4584u, 0x2E458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E458Cu;
label_2e458c:
    // 0x2e458c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e458cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e4590:
    // 0x2e4590: 0xc0cd742  jal         func_335D08
label_2e4594:
    if (ctx->pc == 0x2E4594u) {
        ctx->pc = 0x2E4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4590u;
        // 0x2e4594: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4598u;
        goto label_2e4598;
    }
    ctx->pc = 0x2E4590u;
    SET_GPR_U32(ctx, 31, 0x2E4598u);
    ctx->pc = 0x2E4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4590u;
    // 0x2e4594: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2E4590u, 0x2E4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4598u;
label_2e4598:
    // 0x2e4598: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e459c:
    // 0x2e459c: 0xc0cdd2e  jal         func_3374B8
label_2e45a0:
    if (ctx->pc == 0x2E45A0u) {
        ctx->pc = 0x2E45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E459Cu;
        // 0x2e45a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45A4u;
        goto label_2e45a4;
    }
    ctx->pc = 0x2E459Cu;
    SET_GPR_U32(ctx, 31, 0x2E45A4u);
    ctx->pc = 0x2E45A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E459Cu;
    // 0x2e45a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2E459Cu, 0x2E45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45A4u;
label_2e45a4:
    // 0x2e45a4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2e45a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2e45a8:
    // 0x2e45a8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2e45a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2e45ac:
    // 0x2e45ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e45b0:
    // 0x2e45b0: 0x0  nop
    ctx->pc = 0x2e45b0u;
    // NOP
label_2e45b4:
    // 0x2e45b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e45b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e45b8:
    // 0x2e45b8: 0x0  nop
    ctx->pc = 0x2e45b8u;
    // NOP
label_2e45bc:
    // 0x2e45bc: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
label_2e45c0:
    if (ctx->pc == 0x2E45C0u) {
        ctx->pc = 0x2E45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45BCu;
        // 0x2e45c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45C4u;
        goto label_2e45c4;
    }
    ctx->pc = 0x2E45BCu;
    {
        const bool branch_taken_0x2e45bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45BCu;
        // 0x2e45c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45bc) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E45C4u;
label_2e45c4:
    // 0x2e45c4: 0xc0a367c  jal         func_28D9F0
label_2e45c8:
    if (ctx->pc == 0x2E45C8u) {
        ctx->pc = 0x2E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45C4u;
        // 0x2e45c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45CCu;
        goto label_2e45cc;
    }
    ctx->pc = 0x2E45C4u;
    SET_GPR_U32(ctx, 31, 0x2E45CCu);
    ctx->pc = 0x2E45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45C4u;
    // 0x2e45c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E45C4u, 0x2E45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45CCu;
label_2e45cc:
    // 0x2e45cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e45ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e45d0:
    // 0x2e45d0: 0x124000b7  beqz        $s2, . + 4 + (0xB7 << 2)
label_2e45d4:
    if (ctx->pc == 0x2E45D4u) {
        ctx->pc = 0x2E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D0u;
        // 0x2e45d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45D8u;
        goto label_2e45d8;
    }
    ctx->pc = 0x2E45D0u;
    {
        const bool branch_taken_0x2e45d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45D0u;
        // 0x2e45d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45d0) {
            ctx->pc = 0x2E48B0u;
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E45D8u;
label_2e45d8:
    // 0x2e45d8: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2e45d8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2e45dc:
    // 0x2e45dc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e45dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2e45e0:
    // 0x2e45e0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2e45e4:
    if (ctx->pc == 0x2E45E4u) {
        ctx->pc = 0x2E45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45E0u;
        // 0x2e45e4: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45E8u;
        goto label_2e45e8;
    }
    ctx->pc = 0x2E45E0u;
    {
        const bool branch_taken_0x2e45e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45E0u;
        // 0x2e45e4: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45e0) {
            ctx->pc = 0x2E4890u;
            goto label_2e4890;
        }
    }
    ctx->pc = 0x2E45E8u;
label_2e45e8:
    // 0x2e45e8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2e45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2e45ec:
    // 0x2e45ec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e45ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2e45f0:
    // 0x2e45f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e45f4:
    if (ctx->pc == 0x2E45F4u) {
        ctx->pc = 0x2E45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45F0u;
        // 0x2e45f4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E45F8u;
        goto label_2e45f8;
    }
    ctx->pc = 0x2E45F0u;
    {
        const bool branch_taken_0x2e45f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e45f0) {
            ctx->pc = 0x2E45F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E45F0u;
            // 0x2e45f4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4604u;
            goto label_2e4604;
        }
    }
    ctx->pc = 0x2E45F8u;
label_2e45f8:
    // 0x2e45f8: 0xc0a36c8  jal         func_28DB20
label_2e45fc:
    if (ctx->pc == 0x2E45FCu) {
        ctx->pc = 0x2E4600u;
        goto label_2e4600;
    }
    ctx->pc = 0x2E45F8u;
    SET_GPR_U32(ctx, 31, 0x2E4600u);
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E45F8u, 0x2E4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4600u;
label_2e4600:
    // 0x2e4600: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e4600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4604:
    // 0x2e4604: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2e4604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2e4608:
    // 0x2e4608: 0x1c4000aa  bgtz        $v0, . + 4 + (0xAA << 2)
label_2e460c:
    if (ctx->pc == 0x2E460Cu) {
        ctx->pc = 0x2E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4608u;
        // 0x2e460c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4610u;
        goto label_2e4610;
    }
    ctx->pc = 0x2E4608u;
    {
        const bool branch_taken_0x2e4608 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4608u;
        // 0x2e460c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4608) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4610u;
label_2e4610:
    // 0x2e4610: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2e4614:
    // 0x2e4614: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2e4618:
    if (ctx->pc == 0x2E4618u) {
        ctx->pc = 0x2E4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4614u;
        // 0x2e4618: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E461Cu;
        goto label_2e461c;
    }
    ctx->pc = 0x2E4614u;
    {
        const bool branch_taken_0x2e4614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4614) {
            ctx->pc = 0x2E4618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4614u;
            // 0x2e4618: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E461Cu;
            goto label_2e461c;
        }
    }
    ctx->pc = 0x2E461Cu;
label_2e461c:
    // 0x2e461c: 0x1672001d  bne         $s3, $s2, . + 4 + (0x1D << 2)
label_2e4620:
    if (ctx->pc == 0x2E4620u) {
        ctx->pc = 0x2E4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E461Cu;
        // 0x2e4620: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4624u;
        goto label_2e4624;
    }
    ctx->pc = 0x2E461Cu;
    {
        const bool branch_taken_0x2e461c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E461Cu;
        // 0x2e4620: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e461c) {
            ctx->pc = 0x2E4694u;
            goto label_2e4694;
        }
    }
    ctx->pc = 0x2E4624u;
label_2e4624:
    // 0x2e4624: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2e4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2e4628:
    // 0x2e4628: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e462c:
    if (ctx->pc == 0x2E462Cu) {
        ctx->pc = 0x2E4630u;
        goto label_2e4630;
    }
    ctx->pc = 0x2E4628u;
    {
        const bool branch_taken_0x2e4628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4628) {
            ctx->pc = 0x2E4640u;
            goto label_2e4640;
        }
    }
    ctx->pc = 0x2E4630u;
label_2e4630:
    // 0x2e4630: 0xc08c716  jal         func_231C58
label_2e4634:
    if (ctx->pc == 0x2E4634u) {
        ctx->pc = 0x2E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4630u;
        // 0x2e4634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4638u;
        goto label_2e4638;
    }
    ctx->pc = 0x2E4630u;
    SET_GPR_U32(ctx, 31, 0x2E4638u);
    ctx->pc = 0x2E4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4630u;
    // 0x2e4634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2E4630u, 0x2E4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4638u;
label_2e4638:
    // 0x2e4638: 0xc08c6d8  jal         func_231B60
label_2e463c:
    if (ctx->pc == 0x2E463Cu) {
        ctx->pc = 0x2E463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4638u;
        // 0x2e463c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4640u;
        goto label_2e4640;
    }
    ctx->pc = 0x2E4638u;
    SET_GPR_U32(ctx, 31, 0x2E4640u);
    ctx->pc = 0x2E463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4638u;
    // 0x2e463c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2E4638u, 0x2E4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4640u;
label_2e4640:
    // 0x2e4640: 0xc0a367c  jal         func_28D9F0
label_2e4644:
    if (ctx->pc == 0x2E4644u) {
        ctx->pc = 0x2E4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4640u;
        // 0x2e4644: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4648u;
        goto label_2e4648;
    }
    ctx->pc = 0x2E4640u;
    SET_GPR_U32(ctx, 31, 0x2E4648u);
    ctx->pc = 0x2E4644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4640u;
    // 0x2e4644: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E4640u, 0x2E4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4648u;
label_2e4648:
    // 0x2e4648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e464c:
    // 0x2e464c: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
label_2e4650:
    if (ctx->pc == 0x2E4650u) {
        ctx->pc = 0x2E4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E464Cu;
        // 0x2e4650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4654u;
        goto label_2e4654;
    }
    ctx->pc = 0x2E464Cu;
    {
        const bool branch_taken_0x2e464c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E464Cu;
        // 0x2e4650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e464c) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4654u;
label_2e4654:
    // 0x2e4654: 0xc087420  jal         func_21D080
label_2e4658:
    if (ctx->pc == 0x2E4658u) {
        ctx->pc = 0x2E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4654u;
        // 0x2e4658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E465Cu;
        goto label_2e465c;
    }
    ctx->pc = 0x2E4654u;
    SET_GPR_U32(ctx, 31, 0x2E465Cu);
    ctx->pc = 0x2E4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4654u;
    // 0x2e4658: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2E4654u, 0x2E465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E465Cu;
label_2e465c:
    // 0x2e465c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2e4660:
    // 0x2e4660: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e4664:
    // 0x2e4664: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2e4664u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2e4668:
    // 0x2e4668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e466c:
    // 0x2e466c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e4670:
    // 0x2e4670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e4670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e4674:
    // 0x2e4674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e4674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4678:
    // 0x2e4678: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e4678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e467c:
    // 0x2e467c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e467cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4680:
    // 0x2e4680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4684:
    // 0x2e4684: 0xc0bee7a  jal         func_2FB9E8
label_2e4688:
    if (ctx->pc == 0x2E4688u) {
        ctx->pc = 0x2E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4684u;
        // 0x2e4688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E468Cu;
        goto label_2e468c;
    }
    ctx->pc = 0x2E4684u;
    SET_GPR_U32(ctx, 31, 0x2E468Cu);
    ctx->pc = 0x2E4688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4684u;
    // 0x2e4688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E4684u, 0x2E468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E468Cu;
label_2e468c:
    // 0x2e468c: 0x10000089  b           . + 4 + (0x89 << 2)
label_2e4690:
    if (ctx->pc == 0x2E4690u) {
        ctx->pc = 0x2E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E468Cu;
        // 0x2e4690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4694u;
        goto label_2e4694;
    }
    ctx->pc = 0x2E468Cu;
    {
        const bool branch_taken_0x2e468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E468Cu;
        // 0x2e4690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e468c) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4694u;
label_2e4694:
    // 0x2e4694: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x2e4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2e4698:
    // 0x2e4698: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2e4698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2e469c:
    // 0x2e469c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e469cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e46a0:
    // 0x2e46a0: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e46a4:
    // 0x2e46a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2e46a8:
    // 0x2e46a8: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2e46ac:
    // 0x2e46ac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e46b0:
    // 0x2e46b0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e46b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e46b4:
    // 0x2e46b4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2e46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2e46b8:
    // 0x2e46b8: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2e46bc:
    // 0x2e46bc: 0xc0cdb38  jal         func_336CE0
label_2e46c0:
    if (ctx->pc == 0x2E46C0u) {
        ctx->pc = 0x2E46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46BCu;
        // 0x2e46c0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E46C4u;
        goto label_2e46c4;
    }
    ctx->pc = 0x2E46BCu;
    SET_GPR_U32(ctx, 31, 0x2E46C4u);
    ctx->pc = 0x2E46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46BCu;
    // 0x2e46c0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E46BCu, 0x2E46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46C4u;
label_2e46c4:
    // 0x2e46c4: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x2e46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e46c8:
    // 0x2e46c8: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2e46cc:
    // 0x2e46cc: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x2e46ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2e46d0:
    // 0x2e46d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e46d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e46d4:
    // 0x2e46d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e46d8:
    // 0x2e46d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e46d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e46dc:
    // 0x2e46dc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e46e0:
    // 0x2e46e0: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2e46e4:
    // 0x2e46e4: 0xc0cdb38  jal         func_336CE0
label_2e46e8:
    if (ctx->pc == 0x2E46E8u) {
        ctx->pc = 0x2E46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46E4u;
        // 0x2e46e8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E46ECu;
        goto label_2e46ec;
    }
    ctx->pc = 0x2E46E4u;
    SET_GPR_U32(ctx, 31, 0x2E46ECu);
    ctx->pc = 0x2E46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46E4u;
    // 0x2e46e8: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E46E4u, 0x2E46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46ECu;
label_2e46ec:
    // 0x2e46ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e46ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e46f0:
    // 0x2e46f0: 0x0  nop
    ctx->pc = 0x2e46f0u;
    // NOP
label_2e46f4:
    // 0x2e46f4: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
label_2e46f8:
    if (ctx->pc == 0x2E46F8u) {
        ctx->pc = 0x2E46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46F4u;
        // 0x2e46f8: 0x86c50002  lh          $a1, 0x2($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E46FCu;
        goto label_2e46fc;
    }
    ctx->pc = 0x2E46F4u;
    {
        const bool branch_taken_0x2e46f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e46f4) {
            ctx->pc = 0x2E46F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E46F4u;
            // 0x2e46f8: 0x86c50002  lh          $a1, 0x2($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E47D8u;
            goto label_2e47d8;
        }
    }
    ctx->pc = 0x2E46FCu;
label_2e46fc:
    // 0x2e46fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4700:
    // 0x2e4700: 0xc08750a  jal         func_21D428
label_2e4704:
    if (ctx->pc == 0x2E4704u) {
        ctx->pc = 0x2E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4700u;
        // 0x2e4704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4708u;
        goto label_2e4708;
    }
    ctx->pc = 0x2E4700u;
    SET_GPR_U32(ctx, 31, 0x2E4708u);
    ctx->pc = 0x2E4704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4700u;
    // 0x2e4704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2E4700u, 0x2E4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4708u;
label_2e4708:
    // 0x2e4708: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2e4708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
label_2e470c:
    // 0x2e470c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e470cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e4710:
    // 0x2e4710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4714:
    // 0x2e4714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4718:
    // 0x2e4718: 0xc0a578e  jal         func_295E38
label_2e471c:
    if (ctx->pc == 0x2E471Cu) {
        ctx->pc = 0x2E471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4718u;
        // 0x2e471c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4720u;
        goto label_2e4720;
    }
    ctx->pc = 0x2E4718u;
    SET_GPR_U32(ctx, 31, 0x2E4720u);
    ctx->pc = 0x2E471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4718u;
    // 0x2e471c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x2E4718u, 0x2E4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4720u;
label_2e4720:
    // 0x2e4720: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2e4724:
    if (ctx->pc == 0x2E4724u) {
        ctx->pc = 0x2E4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4720u;
        // 0x2e4724: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4728u;
        goto label_2e4728;
    }
    ctx->pc = 0x2E4720u;
    {
        const bool branch_taken_0x2e4720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4720) {
            ctx->pc = 0x2E4724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4720u;
            // 0x2e4724: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4744u;
            goto label_2e4744;
        }
    }
    ctx->pc = 0x2E4728u;
label_2e4728:
    // 0x2e4728: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e4728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2e472c:
    // 0x2e472c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e472cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e4730:
    // 0x2e4730: 0xc087420  jal         func_21D080
label_2e4734:
    if (ctx->pc == 0x2E4734u) {
        ctx->pc = 0x2E4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4730u;
        // 0x2e4734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4738u;
        goto label_2e4738;
    }
    ctx->pc = 0x2E4730u;
    SET_GPR_U32(ctx, 31, 0x2E4738u);
    ctx->pc = 0x2E4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4730u;
    // 0x2e4734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2E4730u, 0x2E4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4738u;
label_2e4738:
    // 0x2e4738: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e4738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e473c:
    // 0x2e473c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2e4740:
    // 0x2e4740: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2e4740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2e4744:
    // 0x2e4744: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e4744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e4748:
    // 0x2e4748: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e4748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e474c:
    // 0x2e474c: 0xc0cdb38  jal         func_336CE0
label_2e4750:
    if (ctx->pc == 0x2E4750u) {
        ctx->pc = 0x2E4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E474Cu;
        // 0x2e4750: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4754u;
        goto label_2e4754;
    }
    ctx->pc = 0x2E474Cu;
    SET_GPR_U32(ctx, 31, 0x2E4754u);
    ctx->pc = 0x2E4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E474Cu;
    // 0x2e4750: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E474Cu, 0x2E4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4754u;
label_2e4754:
    // 0x2e4754: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e4754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4758:
    // 0x2e4758: 0x0  nop
    ctx->pc = 0x2e4758u;
    // NOP
label_2e475c:
    // 0x2e475c: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_2e4760:
    if (ctx->pc == 0x2E4760u) {
        ctx->pc = 0x2E4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E475Cu;
        // 0x2e4760: 0x86c50002  lh          $a1, 0x2($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4764u;
        goto label_2e4764;
    }
    ctx->pc = 0x2E475Cu;
    {
        const bool branch_taken_0x2e475c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e475c) {
            ctx->pc = 0x2E4760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E475Cu;
            // 0x2e4760: 0x86c50002  lh          $a1, 0x2($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E47D8u;
            goto label_2e47d8;
        }
    }
    ctx->pc = 0x2E4764u;
label_2e4764:
    // 0x2e4764: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2e4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2e4768:
    // 0x2e4768: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e476c:
    if (ctx->pc == 0x2E476Cu) {
        ctx->pc = 0x2E4770u;
        goto label_2e4770;
    }
    ctx->pc = 0x2E4768u;
    {
        const bool branch_taken_0x2e4768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4768) {
            ctx->pc = 0x2E4778u;
            goto label_2e4778;
        }
    }
    ctx->pc = 0x2E4770u;
label_2e4770:
    // 0x2e4770: 0xc08c716  jal         func_231C58
label_2e4774:
    if (ctx->pc == 0x2E4774u) {
        ctx->pc = 0x2E4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4770u;
        // 0x2e4774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4778u;
        goto label_2e4778;
    }
    ctx->pc = 0x2E4770u;
    SET_GPR_U32(ctx, 31, 0x2E4778u);
    ctx->pc = 0x2E4774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4770u;
    // 0x2e4774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2E4770u, 0x2E4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4778u;
label_2e4778:
    // 0x2e4778: 0xc0a4e54  jal         func_293950
label_2e477c:
    if (ctx->pc == 0x2E477Cu) {
        ctx->pc = 0x2E4780u;
        goto label_2e4780;
    }
    ctx->pc = 0x2E4778u;
    SET_GPR_U32(ctx, 31, 0x2E4780u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E4778u, 0x2E4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4780u;
label_2e4780:
    // 0x2e4780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4784:
    // 0x2e4784: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2e4788:
    if (ctx->pc == 0x2E4788u) {
        ctx->pc = 0x2E4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4784u;
        // 0x2e4788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E478Cu;
        goto label_2e478c;
    }
    ctx->pc = 0x2E4784u;
    {
        const bool branch_taken_0x2e4784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4784) {
            ctx->pc = 0x2E4788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4784u;
            // 0x2e4788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E47C8u;
            goto label_2e47c8;
        }
    }
    ctx->pc = 0x2E478Cu;
label_2e478c:
    // 0x2e478c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4790:
    // 0x2e4790: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e4790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e4794:
    // 0x2e4794: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e4794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e4798:
    // 0x2e4798: 0x40f809  jalr        $v0
label_2e479c:
    if (ctx->pc == 0x2E479Cu) {
        ctx->pc = 0x2E479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4798u;
        // 0x2e479c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E47A0u;
        goto label_2e47a0;
    }
    ctx->pc = 0x2E4798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E47A0u);
        ctx->pc = 0x2E479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4798u;
        // 0x2e479c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4798u, 0x2E47A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E47A0u;
label_2e47a0:
    // 0x2e47a0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2e47a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2e47a4:
    // 0x2e47a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e47a8:
    // 0x2e47a8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2e47a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2e47ac:
    // 0x2e47ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e47acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e47b0:
    // 0x2e47b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e47b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e47b4:
    // 0x2e47b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e47b8:
    // 0x2e47b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e47b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e47bc:
    // 0x2e47bc: 0xc0b7eea  jal         func_2DFBA8
label_2e47c0:
    if (ctx->pc == 0x2E47C0u) {
        ctx->pc = 0x2E47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47BCu;
        // 0x2e47c0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E47C4u;
        goto label_2e47c4;
    }
    ctx->pc = 0x2E47BCu;
    SET_GPR_U32(ctx, 31, 0x2E47C4u);
    ctx->pc = 0x2E47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47BCu;
    // 0x2e47c0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2E47BCu, 0x2E47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47C4u;
label_2e47c4:
    // 0x2e47c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e47c8:
    // 0x2e47c8: 0xc0a35d6  jal         func_28D758
label_2e47cc:
    if (ctx->pc == 0x2E47CCu) {
        ctx->pc = 0x2E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47C8u;
        // 0x2e47cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E47D0u;
        goto label_2e47d0;
    }
    ctx->pc = 0x2E47C8u;
    SET_GPR_U32(ctx, 31, 0x2E47D0u);
    ctx->pc = 0x2E47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47C8u;
    // 0x2e47cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E47C8u, 0x2E47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D0u;
label_2e47d0:
    // 0x2e47d0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2e47d4:
    if (ctx->pc == 0x2E47D4u) {
        ctx->pc = 0x2E47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47D0u;
        // 0x2e47d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E47D8u;
        goto label_2e47d8;
    }
    ctx->pc = 0x2E47D0u;
    {
        const bool branch_taken_0x2e47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47D0u;
        // 0x2e47d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e47d0) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E47D8u;
label_2e47d8:
    // 0x2e47d8: 0x26f44b00  addiu       $s4, $s7, 0x4B00
    ctx->pc = 0x2e47d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2e47dc:
    // 0x2e47dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e47e0:
    // 0x2e47e0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e47e4:
    // 0x2e47e4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2e47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2e47e8:
    // 0x2e47e8: 0xc0cd8ec  jal         func_3363B0
label_2e47ec:
    if (ctx->pc == 0x2E47ECu) {
        ctx->pc = 0x2E47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47E8u;
        // 0x2e47ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E47F0u;
        goto label_2e47f0;
    }
    ctx->pc = 0x2E47E8u;
    SET_GPR_U32(ctx, 31, 0x2E47F0u);
    ctx->pc = 0x2E47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47E8u;
    // 0x2e47ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E47E8u, 0x2E47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47F0u;
label_2e47f0:
    // 0x2e47f0: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2e47f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2e47f4:
    // 0x2e47f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e47f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2e47f8:
    // 0x2e47f8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2e47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2e47fc:
    // 0x2e47fc: 0xc0cd7d2  jal         func_335F48
label_2e4800:
    if (ctx->pc == 0x2E4800u) {
        ctx->pc = 0x2E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E47FCu;
        // 0x2e4800: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4804u;
        goto label_2e4804;
    }
    ctx->pc = 0x2E47FCu;
    SET_GPR_U32(ctx, 31, 0x2E4804u);
    ctx->pc = 0x2E4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47FCu;
    // 0x2e4800: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2E47FCu, 0x2E4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4804u;
label_2e4804:
    // 0x2e4804: 0xc0cd742  jal         func_335D08
label_2e4808:
    if (ctx->pc == 0x2E4808u) {
        ctx->pc = 0x2E4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4804u;
        // 0x2e4808: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E480Cu;
        goto label_2e480c;
    }
    ctx->pc = 0x2E4804u;
    SET_GPR_U32(ctx, 31, 0x2E480Cu);
    ctx->pc = 0x2E4808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4804u;
    // 0x2e4808: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2E4804u, 0x2E480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E480Cu;
label_2e480c:
    // 0x2e480c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e480cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e4810:
    // 0x2e4810: 0xc0cd766  jal         func_335D98
label_2e4814:
    if (ctx->pc == 0x2E4814u) {
        ctx->pc = 0x2E4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4810u;
        // 0x2e4814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4818u;
        goto label_2e4818;
    }
    ctx->pc = 0x2E4810u;
    SET_GPR_U32(ctx, 31, 0x2E4818u);
    ctx->pc = 0x2E4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4810u;
    // 0x2e4814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2E4810u, 0x2E4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4818u;
label_2e4818:
    // 0x2e4818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e4818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e481c:
    // 0x2e481c: 0xc0cdd2e  jal         func_3374B8
label_2e4820:
    if (ctx->pc == 0x2E4820u) {
        ctx->pc = 0x2E4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E481Cu;
        // 0x2e4820: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4824u;
        goto label_2e4824;
    }
    ctx->pc = 0x2E481Cu;
    SET_GPR_U32(ctx, 31, 0x2E4824u);
    ctx->pc = 0x2E4820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E481Cu;
    // 0x2e4820: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2E481Cu, 0x2E4824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4824u;
label_2e4824:
    // 0x2e4824: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2e4824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2e4828:
    // 0x2e4828: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2e4828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2e482c:
    // 0x2e482c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e482cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e4830:
    // 0x2e4830: 0x0  nop
    ctx->pc = 0x2e4830u;
    // NOP
label_2e4834:
    // 0x2e4834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e4834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e4838:
    // 0x2e4838: 0x0  nop
    ctx->pc = 0x2e4838u;
    // NOP
label_2e483c:
    // 0x2e483c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_2e4840:
    if (ctx->pc == 0x2E4840u) {
        ctx->pc = 0x2E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E483Cu;
        // 0x2e4840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4844u;
        goto label_2e4844;
    }
    ctx->pc = 0x2E483Cu;
    {
        const bool branch_taken_0x2e483c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E483Cu;
        // 0x2e4840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e483c) {
            ctx->pc = 0x2E48B4u;
            goto label_2e48b4;
        }
    }
    ctx->pc = 0x2E4844u;
label_2e4844:
    // 0x2e4844: 0xc0a367c  jal         func_28D9F0
label_2e4848:
    if (ctx->pc == 0x2E4848u) {
        ctx->pc = 0x2E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4844u;
        // 0x2e4848: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E484Cu;
        goto label_2e484c;
    }
    ctx->pc = 0x2E4844u;
    SET_GPR_U32(ctx, 31, 0x2E484Cu);
    ctx->pc = 0x2E4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4844u;
    // 0x2e4848: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E4844u, 0x2E484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E484Cu;
label_2e484c:
    // 0x2e484c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e484cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4850:
    // 0x2e4850: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_2e4854:
    if (ctx->pc == 0x2E4854u) {
        ctx->pc = 0x2E4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4850u;
        // 0x2e4854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4858u;
        goto label_2e4858;
    }
    ctx->pc = 0x2E4850u;
    {
        const bool branch_taken_0x2e4850 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4850u;
        // 0x2e4854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4850) {
            ctx->pc = 0x2E48B0u;
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E4858u;
label_2e4858:
    // 0x2e4858: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x2e4858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2e485c:
    // 0x2e485c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x2e485cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4860:
    // 0x2e4860: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e4860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4864:
    // 0x2e4864: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e4864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e4868:
    // 0x2e4868: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2e4868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2e486c:
    // 0x2e486c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e486cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4870:
    // 0x2e4870: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e4870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e4874:
    // 0x2e4874: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2e4874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2e4878:
    // 0x2e4878: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e4878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e487c:
    // 0x2e487c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e487cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e4880:
    // 0x2e4880: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e4880u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e4884:
    // 0x2e4884: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2e4888:
    // 0x2e4888: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e488c:
    // 0x2e488c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e488cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e4890:
    // 0x2e4890: 0xc0884f6  jal         func_2213D8
label_2e4894:
    if (ctx->pc == 0x2E4894u) {
        ctx->pc = 0x2E4898u;
        goto label_2e4898;
    }
    ctx->pc = 0x2E4890u;
    SET_GPR_U32(ctx, 31, 0x2E4898u);
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E4890u, 0x2E4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4898u;
label_2e4898:
    // 0x2e4898: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e4898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e489c:
    // 0x2e489c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e48a0:
    // 0x2e48a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e48a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e48a4:
    // 0x2e48a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e48a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e48a8:
    // 0x2e48a8: 0xc0bf800  jal         func_2FE000
label_2e48ac:
    if (ctx->pc == 0x2E48ACu) {
        ctx->pc = 0x2E48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48A8u;
        // 0x2e48ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48B0u;
        goto label_2e48b0;
    }
    ctx->pc = 0x2E48A8u;
    SET_GPR_U32(ctx, 31, 0x2E48B0u);
    ctx->pc = 0x2E48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48A8u;
    // 0x2e48ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E48A8u, 0x2E48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48B0u;
label_2e48b0:
    // 0x2e48b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e48b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e48b4:
    // 0x2e48b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e48b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e48b8:
    // 0x2e48b8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e48b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e48bc:
    // 0x2e48bc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e48bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e48c0:
    // 0x2e48c0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e48c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e48c4:
    // 0x2e48c4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2e48c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e48c8:
    // 0x2e48c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2e48c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e48cc:
    // 0x2e48cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e48ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e48d0:
    // 0x2e48d0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2e48d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e48d4:
    // 0x2e48d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e48d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e48d8:
    // 0x2e48d8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e48dc:
    // 0x2e48dc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e48e0:
    // 0x2e48e0: 0x3e00008  jr          $ra
label_2e48e4:
    if (ctx->pc == 0x2E48E4u) {
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E0u;
        // 0x2e48e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E48E8u;
        goto label_fallthrough_0x2e48e0;
    }
    ctx->pc = 0x2E48E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E0u;
        // 0x2e48e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E48E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e48e0:
    ctx->pc = 0x2E48E8u;
}
