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

// Function: sub_002B4330
// Address: 0x2b4330 - 0x2b49f8
void sub_002B4330_0x2b4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4330_0x2b4330");
#endif

    switch (ctx->pc) {
        case 0x2b4330u: goto label_2b4330;
        case 0x2b4334u: goto label_2b4334;
        case 0x2b4338u: goto label_2b4338;
        case 0x2b433cu: goto label_2b433c;
        case 0x2b4340u: goto label_2b4340;
        case 0x2b4344u: goto label_2b4344;
        case 0x2b4348u: goto label_2b4348;
        case 0x2b434cu: goto label_2b434c;
        case 0x2b4350u: goto label_2b4350;
        case 0x2b4354u: goto label_2b4354;
        case 0x2b4358u: goto label_2b4358;
        case 0x2b435cu: goto label_2b435c;
        case 0x2b4360u: goto label_2b4360;
        case 0x2b4364u: goto label_2b4364;
        case 0x2b4368u: goto label_2b4368;
        case 0x2b436cu: goto label_2b436c;
        case 0x2b4370u: goto label_2b4370;
        case 0x2b4374u: goto label_2b4374;
        case 0x2b4378u: goto label_2b4378;
        case 0x2b437cu: goto label_2b437c;
        case 0x2b4380u: goto label_2b4380;
        case 0x2b4384u: goto label_2b4384;
        case 0x2b4388u: goto label_2b4388;
        case 0x2b438cu: goto label_2b438c;
        case 0x2b4390u: goto label_2b4390;
        case 0x2b4394u: goto label_2b4394;
        case 0x2b4398u: goto label_2b4398;
        case 0x2b439cu: goto label_2b439c;
        case 0x2b43a0u: goto label_2b43a0;
        case 0x2b43a4u: goto label_2b43a4;
        case 0x2b43a8u: goto label_2b43a8;
        case 0x2b43acu: goto label_2b43ac;
        case 0x2b43b0u: goto label_2b43b0;
        case 0x2b43b4u: goto label_2b43b4;
        case 0x2b43b8u: goto label_2b43b8;
        case 0x2b43bcu: goto label_2b43bc;
        case 0x2b43c0u: goto label_2b43c0;
        case 0x2b43c4u: goto label_2b43c4;
        case 0x2b43c8u: goto label_2b43c8;
        case 0x2b43ccu: goto label_2b43cc;
        case 0x2b43d0u: goto label_2b43d0;
        case 0x2b43d4u: goto label_2b43d4;
        case 0x2b43d8u: goto label_2b43d8;
        case 0x2b43dcu: goto label_2b43dc;
        case 0x2b43e0u: goto label_2b43e0;
        case 0x2b43e4u: goto label_2b43e4;
        case 0x2b43e8u: goto label_2b43e8;
        case 0x2b43ecu: goto label_2b43ec;
        case 0x2b43f0u: goto label_2b43f0;
        case 0x2b43f4u: goto label_2b43f4;
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b43fcu: goto label_2b43fc;
        case 0x2b4400u: goto label_2b4400;
        case 0x2b4404u: goto label_2b4404;
        case 0x2b4408u: goto label_2b4408;
        case 0x2b440cu: goto label_2b440c;
        case 0x2b4410u: goto label_2b4410;
        case 0x2b4414u: goto label_2b4414;
        case 0x2b4418u: goto label_2b4418;
        case 0x2b441cu: goto label_2b441c;
        case 0x2b4420u: goto label_2b4420;
        case 0x2b4424u: goto label_2b4424;
        case 0x2b4428u: goto label_2b4428;
        case 0x2b442cu: goto label_2b442c;
        case 0x2b4430u: goto label_2b4430;
        case 0x2b4434u: goto label_2b4434;
        case 0x2b4438u: goto label_2b4438;
        case 0x2b443cu: goto label_2b443c;
        case 0x2b4440u: goto label_2b4440;
        case 0x2b4444u: goto label_2b4444;
        case 0x2b4448u: goto label_2b4448;
        case 0x2b444cu: goto label_2b444c;
        case 0x2b4450u: goto label_2b4450;
        case 0x2b4454u: goto label_2b4454;
        case 0x2b4458u: goto label_2b4458;
        case 0x2b445cu: goto label_2b445c;
        case 0x2b4460u: goto label_2b4460;
        case 0x2b4464u: goto label_2b4464;
        case 0x2b4468u: goto label_2b4468;
        case 0x2b446cu: goto label_2b446c;
        case 0x2b4470u: goto label_2b4470;
        case 0x2b4474u: goto label_2b4474;
        case 0x2b4478u: goto label_2b4478;
        case 0x2b447cu: goto label_2b447c;
        case 0x2b4480u: goto label_2b4480;
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4488u: goto label_2b4488;
        case 0x2b448cu: goto label_2b448c;
        case 0x2b4490u: goto label_2b4490;
        case 0x2b4494u: goto label_2b4494;
        case 0x2b4498u: goto label_2b4498;
        case 0x2b449cu: goto label_2b449c;
        case 0x2b44a0u: goto label_2b44a0;
        case 0x2b44a4u: goto label_2b44a4;
        case 0x2b44a8u: goto label_2b44a8;
        case 0x2b44acu: goto label_2b44ac;
        case 0x2b44b0u: goto label_2b44b0;
        case 0x2b44b4u: goto label_2b44b4;
        case 0x2b44b8u: goto label_2b44b8;
        case 0x2b44bcu: goto label_2b44bc;
        case 0x2b44c0u: goto label_2b44c0;
        case 0x2b44c4u: goto label_2b44c4;
        case 0x2b44c8u: goto label_2b44c8;
        case 0x2b44ccu: goto label_2b44cc;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44d4u: goto label_2b44d4;
        case 0x2b44d8u: goto label_2b44d8;
        case 0x2b44dcu: goto label_2b44dc;
        case 0x2b44e0u: goto label_2b44e0;
        case 0x2b44e4u: goto label_2b44e4;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44ecu: goto label_2b44ec;
        case 0x2b44f0u: goto label_2b44f0;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b44f8u: goto label_2b44f8;
        case 0x2b44fcu: goto label_2b44fc;
        case 0x2b4500u: goto label_2b4500;
        case 0x2b4504u: goto label_2b4504;
        case 0x2b4508u: goto label_2b4508;
        case 0x2b450cu: goto label_2b450c;
        case 0x2b4510u: goto label_2b4510;
        case 0x2b4514u: goto label_2b4514;
        case 0x2b4518u: goto label_2b4518;
        case 0x2b451cu: goto label_2b451c;
        case 0x2b4520u: goto label_2b4520;
        case 0x2b4524u: goto label_2b4524;
        case 0x2b4528u: goto label_2b4528;
        case 0x2b452cu: goto label_2b452c;
        case 0x2b4530u: goto label_2b4530;
        case 0x2b4534u: goto label_2b4534;
        case 0x2b4538u: goto label_2b4538;
        case 0x2b453cu: goto label_2b453c;
        case 0x2b4540u: goto label_2b4540;
        case 0x2b4544u: goto label_2b4544;
        case 0x2b4548u: goto label_2b4548;
        case 0x2b454cu: goto label_2b454c;
        case 0x2b4550u: goto label_2b4550;
        case 0x2b4554u: goto label_2b4554;
        case 0x2b4558u: goto label_2b4558;
        case 0x2b455cu: goto label_2b455c;
        case 0x2b4560u: goto label_2b4560;
        case 0x2b4564u: goto label_2b4564;
        case 0x2b4568u: goto label_2b4568;
        case 0x2b456cu: goto label_2b456c;
        case 0x2b4570u: goto label_2b4570;
        case 0x2b4574u: goto label_2b4574;
        case 0x2b4578u: goto label_2b4578;
        case 0x2b457cu: goto label_2b457c;
        case 0x2b4580u: goto label_2b4580;
        case 0x2b4584u: goto label_2b4584;
        case 0x2b4588u: goto label_2b4588;
        case 0x2b458cu: goto label_2b458c;
        case 0x2b4590u: goto label_2b4590;
        case 0x2b4594u: goto label_2b4594;
        case 0x2b4598u: goto label_2b4598;
        case 0x2b459cu: goto label_2b459c;
        case 0x2b45a0u: goto label_2b45a0;
        case 0x2b45a4u: goto label_2b45a4;
        case 0x2b45a8u: goto label_2b45a8;
        case 0x2b45acu: goto label_2b45ac;
        case 0x2b45b0u: goto label_2b45b0;
        case 0x2b45b4u: goto label_2b45b4;
        case 0x2b45b8u: goto label_2b45b8;
        case 0x2b45bcu: goto label_2b45bc;
        case 0x2b45c0u: goto label_2b45c0;
        case 0x2b45c4u: goto label_2b45c4;
        case 0x2b45c8u: goto label_2b45c8;
        case 0x2b45ccu: goto label_2b45cc;
        case 0x2b45d0u: goto label_2b45d0;
        case 0x2b45d4u: goto label_2b45d4;
        case 0x2b45d8u: goto label_2b45d8;
        case 0x2b45dcu: goto label_2b45dc;
        case 0x2b45e0u: goto label_2b45e0;
        case 0x2b45e4u: goto label_2b45e4;
        case 0x2b45e8u: goto label_2b45e8;
        case 0x2b45ecu: goto label_2b45ec;
        case 0x2b45f0u: goto label_2b45f0;
        case 0x2b45f4u: goto label_2b45f4;
        case 0x2b45f8u: goto label_2b45f8;
        case 0x2b45fcu: goto label_2b45fc;
        case 0x2b4600u: goto label_2b4600;
        case 0x2b4604u: goto label_2b4604;
        case 0x2b4608u: goto label_2b4608;
        case 0x2b460cu: goto label_2b460c;
        case 0x2b4610u: goto label_2b4610;
        case 0x2b4614u: goto label_2b4614;
        case 0x2b4618u: goto label_2b4618;
        case 0x2b461cu: goto label_2b461c;
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4624u: goto label_2b4624;
        case 0x2b4628u: goto label_2b4628;
        case 0x2b462cu: goto label_2b462c;
        case 0x2b4630u: goto label_2b4630;
        case 0x2b4634u: goto label_2b4634;
        case 0x2b4638u: goto label_2b4638;
        case 0x2b463cu: goto label_2b463c;
        case 0x2b4640u: goto label_2b4640;
        case 0x2b4644u: goto label_2b4644;
        case 0x2b4648u: goto label_2b4648;
        case 0x2b464cu: goto label_2b464c;
        case 0x2b4650u: goto label_2b4650;
        case 0x2b4654u: goto label_2b4654;
        case 0x2b4658u: goto label_2b4658;
        case 0x2b465cu: goto label_2b465c;
        case 0x2b4660u: goto label_2b4660;
        case 0x2b4664u: goto label_2b4664;
        case 0x2b4668u: goto label_2b4668;
        case 0x2b466cu: goto label_2b466c;
        case 0x2b4670u: goto label_2b4670;
        case 0x2b4674u: goto label_2b4674;
        case 0x2b4678u: goto label_2b4678;
        case 0x2b467cu: goto label_2b467c;
        case 0x2b4680u: goto label_2b4680;
        case 0x2b4684u: goto label_2b4684;
        case 0x2b4688u: goto label_2b4688;
        case 0x2b468cu: goto label_2b468c;
        case 0x2b4690u: goto label_2b4690;
        case 0x2b4694u: goto label_2b4694;
        case 0x2b4698u: goto label_2b4698;
        case 0x2b469cu: goto label_2b469c;
        case 0x2b46a0u: goto label_2b46a0;
        case 0x2b46a4u: goto label_2b46a4;
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46acu: goto label_2b46ac;
        case 0x2b46b0u: goto label_2b46b0;
        case 0x2b46b4u: goto label_2b46b4;
        case 0x2b46b8u: goto label_2b46b8;
        case 0x2b46bcu: goto label_2b46bc;
        case 0x2b46c0u: goto label_2b46c0;
        case 0x2b46c4u: goto label_2b46c4;
        case 0x2b46c8u: goto label_2b46c8;
        case 0x2b46ccu: goto label_2b46cc;
        case 0x2b46d0u: goto label_2b46d0;
        case 0x2b46d4u: goto label_2b46d4;
        case 0x2b46d8u: goto label_2b46d8;
        case 0x2b46dcu: goto label_2b46dc;
        case 0x2b46e0u: goto label_2b46e0;
        case 0x2b46e4u: goto label_2b46e4;
        case 0x2b46e8u: goto label_2b46e8;
        case 0x2b46ecu: goto label_2b46ec;
        case 0x2b46f0u: goto label_2b46f0;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b46f8u: goto label_2b46f8;
        case 0x2b46fcu: goto label_2b46fc;
        case 0x2b4700u: goto label_2b4700;
        case 0x2b4704u: goto label_2b4704;
        case 0x2b4708u: goto label_2b4708;
        case 0x2b470cu: goto label_2b470c;
        case 0x2b4710u: goto label_2b4710;
        case 0x2b4714u: goto label_2b4714;
        case 0x2b4718u: goto label_2b4718;
        case 0x2b471cu: goto label_2b471c;
        case 0x2b4720u: goto label_2b4720;
        case 0x2b4724u: goto label_2b4724;
        case 0x2b4728u: goto label_2b4728;
        case 0x2b472cu: goto label_2b472c;
        case 0x2b4730u: goto label_2b4730;
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4738u: goto label_2b4738;
        case 0x2b473cu: goto label_2b473c;
        case 0x2b4740u: goto label_2b4740;
        case 0x2b4744u: goto label_2b4744;
        case 0x2b4748u: goto label_2b4748;
        case 0x2b474cu: goto label_2b474c;
        case 0x2b4750u: goto label_2b4750;
        case 0x2b4754u: goto label_2b4754;
        case 0x2b4758u: goto label_2b4758;
        case 0x2b475cu: goto label_2b475c;
        case 0x2b4760u: goto label_2b4760;
        case 0x2b4764u: goto label_2b4764;
        case 0x2b4768u: goto label_2b4768;
        case 0x2b476cu: goto label_2b476c;
        case 0x2b4770u: goto label_2b4770;
        case 0x2b4774u: goto label_2b4774;
        case 0x2b4778u: goto label_2b4778;
        case 0x2b477cu: goto label_2b477c;
        case 0x2b4780u: goto label_2b4780;
        case 0x2b4784u: goto label_2b4784;
        case 0x2b4788u: goto label_2b4788;
        case 0x2b478cu: goto label_2b478c;
        case 0x2b4790u: goto label_2b4790;
        case 0x2b4794u: goto label_2b4794;
        case 0x2b4798u: goto label_2b4798;
        case 0x2b479cu: goto label_2b479c;
        case 0x2b47a0u: goto label_2b47a0;
        case 0x2b47a4u: goto label_2b47a4;
        case 0x2b47a8u: goto label_2b47a8;
        case 0x2b47acu: goto label_2b47ac;
        case 0x2b47b0u: goto label_2b47b0;
        case 0x2b47b4u: goto label_2b47b4;
        case 0x2b47b8u: goto label_2b47b8;
        case 0x2b47bcu: goto label_2b47bc;
        case 0x2b47c0u: goto label_2b47c0;
        case 0x2b47c4u: goto label_2b47c4;
        case 0x2b47c8u: goto label_2b47c8;
        case 0x2b47ccu: goto label_2b47cc;
        case 0x2b47d0u: goto label_2b47d0;
        case 0x2b47d4u: goto label_2b47d4;
        case 0x2b47d8u: goto label_2b47d8;
        case 0x2b47dcu: goto label_2b47dc;
        case 0x2b47e0u: goto label_2b47e0;
        case 0x2b47e4u: goto label_2b47e4;
        case 0x2b47e8u: goto label_2b47e8;
        case 0x2b47ecu: goto label_2b47ec;
        case 0x2b47f0u: goto label_2b47f0;
        case 0x2b47f4u: goto label_2b47f4;
        case 0x2b47f8u: goto label_2b47f8;
        case 0x2b47fcu: goto label_2b47fc;
        case 0x2b4800u: goto label_2b4800;
        case 0x2b4804u: goto label_2b4804;
        case 0x2b4808u: goto label_2b4808;
        case 0x2b480cu: goto label_2b480c;
        case 0x2b4810u: goto label_2b4810;
        case 0x2b4814u: goto label_2b4814;
        case 0x2b4818u: goto label_2b4818;
        case 0x2b481cu: goto label_2b481c;
        case 0x2b4820u: goto label_2b4820;
        case 0x2b4824u: goto label_2b4824;
        case 0x2b4828u: goto label_2b4828;
        case 0x2b482cu: goto label_2b482c;
        case 0x2b4830u: goto label_2b4830;
        case 0x2b4834u: goto label_2b4834;
        case 0x2b4838u: goto label_2b4838;
        case 0x2b483cu: goto label_2b483c;
        case 0x2b4840u: goto label_2b4840;
        case 0x2b4844u: goto label_2b4844;
        case 0x2b4848u: goto label_2b4848;
        case 0x2b484cu: goto label_2b484c;
        case 0x2b4850u: goto label_2b4850;
        case 0x2b4854u: goto label_2b4854;
        case 0x2b4858u: goto label_2b4858;
        case 0x2b485cu: goto label_2b485c;
        case 0x2b4860u: goto label_2b4860;
        case 0x2b4864u: goto label_2b4864;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b486cu: goto label_2b486c;
        case 0x2b4870u: goto label_2b4870;
        case 0x2b4874u: goto label_2b4874;
        case 0x2b4878u: goto label_2b4878;
        case 0x2b487cu: goto label_2b487c;
        case 0x2b4880u: goto label_2b4880;
        case 0x2b4884u: goto label_2b4884;
        case 0x2b4888u: goto label_2b4888;
        case 0x2b488cu: goto label_2b488c;
        case 0x2b4890u: goto label_2b4890;
        case 0x2b4894u: goto label_2b4894;
        case 0x2b4898u: goto label_2b4898;
        case 0x2b489cu: goto label_2b489c;
        case 0x2b48a0u: goto label_2b48a0;
        case 0x2b48a4u: goto label_2b48a4;
        case 0x2b48a8u: goto label_2b48a8;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b0u: goto label_2b48b0;
        case 0x2b48b4u: goto label_2b48b4;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c0u: goto label_2b48c0;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48d4u: goto label_2b48d4;
        case 0x2b48d8u: goto label_2b48d8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b48e4u: goto label_2b48e4;
        case 0x2b48e8u: goto label_2b48e8;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b48f0u: goto label_2b48f0;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48f8u: goto label_2b48f8;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b4900u: goto label_2b4900;
        case 0x2b4904u: goto label_2b4904;
        case 0x2b4908u: goto label_2b4908;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4910u: goto label_2b4910;
        case 0x2b4914u: goto label_2b4914;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b491cu: goto label_2b491c;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4924u: goto label_2b4924;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b492cu: goto label_2b492c;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4934u: goto label_2b4934;
        case 0x2b4938u: goto label_2b4938;
        case 0x2b493cu: goto label_2b493c;
        case 0x2b4940u: goto label_2b4940;
        case 0x2b4944u: goto label_2b4944;
        case 0x2b4948u: goto label_2b4948;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4950u: goto label_2b4950;
        case 0x2b4954u: goto label_2b4954;
        case 0x2b4958u: goto label_2b4958;
        case 0x2b495cu: goto label_2b495c;
        case 0x2b4960u: goto label_2b4960;
        case 0x2b4964u: goto label_2b4964;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b496cu: goto label_2b496c;
        case 0x2b4970u: goto label_2b4970;
        case 0x2b4974u: goto label_2b4974;
        case 0x2b4978u: goto label_2b4978;
        case 0x2b497cu: goto label_2b497c;
        case 0x2b4980u: goto label_2b4980;
        case 0x2b4984u: goto label_2b4984;
        case 0x2b4988u: goto label_2b4988;
        case 0x2b498cu: goto label_2b498c;
        case 0x2b4990u: goto label_2b4990;
        case 0x2b4994u: goto label_2b4994;
        case 0x2b4998u: goto label_2b4998;
        case 0x2b499cu: goto label_2b499c;
        case 0x2b49a0u: goto label_2b49a0;
        case 0x2b49a4u: goto label_2b49a4;
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49b4u: goto label_2b49b4;
        case 0x2b49b8u: goto label_2b49b8;
        case 0x2b49bcu: goto label_2b49bc;
        case 0x2b49c0u: goto label_2b49c0;
        case 0x2b49c4u: goto label_2b49c4;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49ccu: goto label_2b49cc;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d4u: goto label_2b49d4;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b49e0u: goto label_2b49e0;
        case 0x2b49e4u: goto label_2b49e4;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b49ecu: goto label_2b49ec;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f4u: goto label_2b49f4;
        default: break;
    }

    ctx->pc = 0x2b4330u;

label_2b4330:
    // 0x2b4330: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b4330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2b4334:
    // 0x2b4334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4338:
    // 0x2b4338: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2b4338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2b433c:
    // 0x2b433c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b433cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4340:
    // 0x2b4340: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2b4340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2b4344:
    // 0x2b4344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4348:
    // 0x2b4348: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2b4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2b434c:
    // 0x2b434c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2b434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2b4350:
    // 0x2b4350: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2b4350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2b4354:
    // 0x2b4354: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2b4354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2b4358:
    // 0x2b4358: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2b435c:
    // 0x2b435c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2b435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2b4360:
    // 0x2b4360: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2b4360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2b4364:
    // 0x2b4364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b4368:
    // 0x2b4368: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b4368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2b436c:
    // 0x2b436c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b436cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2b4370:
    // 0x2b4370: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4374:
    // 0x2b4374: 0xc0a33f8  jal         func_28CFE0
label_2b4378:
    if (ctx->pc == 0x2B4378u) {
        ctx->pc = 0x2B4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4374u;
        // 0x2b4378: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B437Cu;
        goto label_2b437c;
    }
    ctx->pc = 0x2B4374u;
    SET_GPR_U32(ctx, 31, 0x2B437Cu);
    ctx->pc = 0x2B4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4374u;
    // 0x2b4378: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B4374u, 0x2B437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B437Cu;
label_2b437c:
    // 0x2b437c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4380:
    // 0x2b4380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4384:
    // 0x2b4384: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2b4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2b4388:
    // 0x2b4388: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2b4388u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b438c:
    // 0x2b438c: 0x56c40004  bnel        $s6, $a0, . + 4 + (0x4 << 2)
label_2b4390:
    if (ctx->pc == 0x2B4390u) {
        ctx->pc = 0x2B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B438Cu;
        // 0x2b4390: 0x92300028  lbu         $s0, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4394u;
        goto label_2b4394;
    }
    ctx->pc = 0x2B438Cu;
    {
        const bool branch_taken_0x2b438c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b438c) {
            ctx->pc = 0x2B4390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B438Cu;
            // 0x2b4390: 0x92300028  lbu         $s0, 0x28($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43A0u;
            goto label_2b43a0;
        }
    }
    ctx->pc = 0x2B4394u;
label_2b4394:
    // 0x2b4394: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2b4394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
label_2b4398:
    // 0x2b4398: 0xa220002c  sb          $zero, 0x2C($s1)
    ctx->pc = 0x2b4398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 0));
label_2b439c:
    // 0x2b439c: 0x92300028  lbu         $s0, 0x28($s1)
    ctx->pc = 0x2b439cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2b43a0:
    // 0x2b43a0: 0x16040050  bne         $s0, $a0, . + 4 + (0x50 << 2)
label_2b43a4:
    if (ctx->pc == 0x2B43A4u) {
        ctx->pc = 0x2B43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A0u;
        // 0x2b43a4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43A8u;
        goto label_2b43a8;
    }
    ctx->pc = 0x2B43A0u;
    {
        const bool branch_taken_0x2b43a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A0u;
        // 0x2b43a4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43a0) {
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B43A8u;
label_2b43a8:
    // 0x2b43a8: 0xc08bfa0  jal         func_22FE80
label_2b43ac:
    if (ctx->pc == 0x2B43ACu) {
        ctx->pc = 0x2B43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A8u;
        // 0x2b43ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43B0u;
        goto label_2b43b0;
    }
    ctx->pc = 0x2B43A8u;
    SET_GPR_U32(ctx, 31, 0x2B43B0u);
    ctx->pc = 0x2B43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43A8u;
    // 0x2b43ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B43A8u, 0x2B43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43B0u;
label_2b43b0:
    // 0x2b43b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b43b4:
    // 0x2b43b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b43b8:
    // 0x2b43b8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2b43b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2b43bc:
    // 0x2b43bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b43c0:
    if (ctx->pc == 0x2B43C0u) {
        ctx->pc = 0x2B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43BCu;
        // 0x2b43c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43C4u;
        goto label_2b43c4;
    }
    ctx->pc = 0x2B43BCu;
    {
        const bool branch_taken_0x2b43bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43BCu;
        // 0x2b43c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43bc) {
            ctx->pc = 0x2B43CCu;
            goto label_2b43cc;
        }
    }
    ctx->pc = 0x2B43C4u;
label_2b43c4:
    // 0x2b43c4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2b43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_2b43c8:
    // 0x2b43c8: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x2b43c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_2b43cc:
    // 0x2b43cc: 0x50a00045  beql        $a1, $zero, . + 4 + (0x45 << 2)
label_2b43d0:
    if (ctx->pc == 0x2B43D0u) {
        ctx->pc = 0x2B43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43CCu;
        // 0x2b43d0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43D4u;
        goto label_2b43d4;
    }
    ctx->pc = 0x2B43CCu;
    {
        const bool branch_taken_0x2b43cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b43cc) {
            ctx->pc = 0x2B43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43CCu;
            // 0x2b43d0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B43D4u;
label_2b43d4:
    // 0x2b43d4: 0x9223002b  lbu         $v1, 0x2B($s1)
    ctx->pc = 0x2b43d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
label_2b43d8:
    // 0x2b43d8: 0x54700042  bnel        $v1, $s0, . + 4 + (0x42 << 2)
label_2b43dc:
    if (ctx->pc == 0x2B43DCu) {
        ctx->pc = 0x2B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43D8u;
        // 0x2b43dc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43E0u;
        goto label_2b43e0;
    }
    ctx->pc = 0x2B43D8u;
    {
        const bool branch_taken_0x2b43d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b43d8) {
            ctx->pc = 0x2B43DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43D8u;
            // 0x2b43dc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B43E0u;
label_2b43e0:
    // 0x2b43e0: 0x90820265  lbu         $v0, 0x265($a0)
    ctx->pc = 0x2b43e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 613)));
label_2b43e4:
    // 0x2b43e4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x2b43e4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b43e8:
    // 0x2b43e8: 0x1663003e  bne         $s3, $v1, . + 4 + (0x3E << 2)
label_2b43ec:
    if (ctx->pc == 0x2B43ECu) {
        ctx->pc = 0x2B43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43E8u;
        // 0x2b43ec: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43F0u;
        goto label_2b43f0;
    }
    ctx->pc = 0x2B43E8u;
    {
        const bool branch_taken_0x2b43e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43E8u;
        // 0x2b43ec: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43e8) {
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B43F0u;
label_2b43f0:
    // 0x2b43f0: 0xc089bfc  jal         func_226FF0
label_2b43f4:
    if (ctx->pc == 0x2B43F4u) {
        ctx->pc = 0x2B43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F0u;
        // 0x2b43f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43F8u;
        goto label_2b43f8;
    }
    ctx->pc = 0x2B43F0u;
    SET_GPR_U32(ctx, 31, 0x2B43F8u);
    ctx->pc = 0x2B43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43F0u;
    // 0x2b43f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2B43F0u, 0x2B43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43F8u;
label_2b43f8:
    // 0x2b43f8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2b43fc:
    if (ctx->pc == 0x2B43FCu) {
        ctx->pc = 0x2B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F8u;
        // 0x2b43fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4400u;
        goto label_2b4400;
    }
    ctx->pc = 0x2B43F8u;
    {
        const bool branch_taken_0x2b43f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F8u;
        // 0x2b43fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43f8) {
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B4400u;
label_2b4400:
    // 0x2b4400: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b4404:
    // 0x2b4404: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4408:
    // 0x2b4408: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2b440c:
    if (ctx->pc == 0x2B440Cu) {
        ctx->pc = 0x2B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4408u;
        // 0x2b440c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4410u;
        goto label_2b4410;
    }
    ctx->pc = 0x2B4408u;
    {
        const bool branch_taken_0x2b4408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4408) {
            ctx->pc = 0x2B440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4408u;
            // 0x2b440c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B4410u;
label_2b4410:
    // 0x2b4410: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b4410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2b4414:
    // 0x2b4414: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b4414u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b4418:
    // 0x2b4418: 0x2010  mfhi        $a0
    ctx->pc = 0x2b4418u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b441c:
    // 0x2b441c: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
label_2b4420:
    if (ctx->pc == 0x2B4420u) {
        ctx->pc = 0x2B4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B441Cu;
        // 0x2b4420: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4424u;
        goto label_2b4424;
    }
    ctx->pc = 0x2B441Cu;
    {
        const bool branch_taken_0x2b441c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B441Cu;
        // 0x2b4420: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b441c) {
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B4424u;
label_2b4424:
    // 0x2b4424: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2b4424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2b4428:
    // 0x2b4428: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2b4428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2b442c:
    // 0x2b442c: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2b442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2b4430:
    // 0x2b4430: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2b4430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2b4434:
    // 0x2b4434: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b4438:
    // 0x2b4438: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b4438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b443c:
    // 0x2b443c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b4440:
    // 0x2b4440: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2b4440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2b4444:
    // 0x2b4444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4448:
    // 0x2b4448: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b4448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b444c:
    // 0x2b444c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b444cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4450:
    // 0x2b4450: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4454:
    // 0x2b4454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b4454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4458:
    // 0x2b4458: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2b4458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b445c:
    // 0x2b445c: 0xc0a757c  jal         func_29D5F0
label_2b4460:
    if (ctx->pc == 0x2B4460u) {
        ctx->pc = 0x2B4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B445Cu;
        // 0x2b4460: 0x3c100054  lui         $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4464u;
        goto label_2b4464;
    }
    ctx->pc = 0x2B445Cu;
    SET_GPR_U32(ctx, 31, 0x2B4464u);
    ctx->pc = 0x2B4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B445Cu;
    // 0x2b4460: 0x3c100054  lui         $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2B445Cu, 0x2B4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4464u;
label_2b4464:
    // 0x2b4464: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2b4464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4468:
    // 0x2b4468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b4468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b446c:
    // 0x2b446c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_2b4470:
    if (ctx->pc == 0x2B4470u) {
        ctx->pc = 0x2B4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B446Cu;
        // 0x2b4470: 0x2617f2f0  addiu       $s7, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4474u;
        goto label_2b4474;
    }
    ctx->pc = 0x2B446Cu;
    {
        const bool branch_taken_0x2b446c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B446Cu;
        // 0x2b4470: 0x2617f2f0  addiu       $s7, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b446c) {
            ctx->pc = 0x2B44D8u;
            goto label_2b44d8;
        }
    }
    ctx->pc = 0x2B4474u;
label_2b4474:
    // 0x2b4474: 0x16d30003  bne         $s6, $s3, . + 4 + (0x3 << 2)
label_2b4478:
    if (ctx->pc == 0x2B4478u) {
        ctx->pc = 0x2B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4474u;
        // 0x2b4478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B447Cu;
        goto label_2b447c;
    }
    ctx->pc = 0x2B4474u;
    {
        const bool branch_taken_0x2b4474 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4474u;
        // 0x2b4478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4474) {
            ctx->pc = 0x2B4484u;
            goto label_2b4484;
        }
    }
    ctx->pc = 0x2B447Cu;
label_2b447c:
    // 0x2b447c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4480:
    // 0x2b4480: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2b4480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2b4484:
    // 0x2b4484: 0xc0e5452  jal         func_395148
label_2b4488:
    if (ctx->pc == 0x2B4488u) {
        ctx->pc = 0x2B4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4484u;
        // 0x2b4488: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B448Cu;
        goto label_2b448c;
    }
    ctx->pc = 0x2B4484u;
    SET_GPR_U32(ctx, 31, 0x2B448Cu);
    ctx->pc = 0x2B4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4484u;
    // 0x2b4488: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395148u, 0x2B4484u, 0x2B448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B448Cu;
label_2b448c:
    // 0x2b448c: 0x14530013  bne         $v0, $s3, . + 4 + (0x13 << 2)
label_2b4490:
    if (ctx->pc == 0x2B4490u) {
        ctx->pc = 0x2B4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B448Cu;
        // 0x2b4490: 0x26a2f2f0  addiu       $v0, $s5, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4494u;
        goto label_2b4494;
    }
    ctx->pc = 0x2B448Cu;
    {
        const bool branch_taken_0x2b448c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B448Cu;
        // 0x2b4490: 0x26a2f2f0  addiu       $v0, $s5, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b448c) {
            ctx->pc = 0x2B44DCu;
            goto label_2b44dc;
        }
    }
    ctx->pc = 0x2B4494u;
label_2b4494:
    // 0x2b4494: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b4498:
    // 0x2b4498: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b4498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b449c:
    // 0x2b449c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b44a0:
    // 0x2b44a0: 0x40f809  jalr        $v0
label_2b44a4:
    if (ctx->pc == 0x2B44A4u) {
        ctx->pc = 0x2B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44A0u;
        // 0x2b44a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44A8u;
        goto label_2b44a8;
    }
    ctx->pc = 0x2B44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B44A8u);
        ctx->pc = 0x2B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44A0u;
        // 0x2b44a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B44A0u, 0x2B44A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B44A8u;
label_2b44a8:
    // 0x2b44a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b44ac:
    // 0x2b44ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b44acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b44b0:
    // 0x2b44b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b44b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b44b4:
    // 0x2b44b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b44b8:
    // 0x2b44b8: 0x40f809  jalr        $v0
label_2b44bc:
    if (ctx->pc == 0x2B44BCu) {
        ctx->pc = 0x2B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B8u;
        // 0x2b44bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44C0u;
        goto label_2b44c0;
    }
    ctx->pc = 0x2B44B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B44C0u);
        ctx->pc = 0x2B44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B8u;
        // 0x2b44bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B44B8u, 0x2B44C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B44C0u;
label_2b44c0:
    // 0x2b44c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b44c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b44c4:
    // 0x2b44c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b44c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b44c8:
    // 0x2b44c8: 0xc0b71c2  jal         func_2DC708
label_2b44cc:
    if (ctx->pc == 0x2B44CCu) {
        ctx->pc = 0x2B44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44C8u;
        // 0x2b44cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44D0u;
        goto label_2b44d0;
    }
    ctx->pc = 0x2B44C8u;
    SET_GPR_U32(ctx, 31, 0x2B44D0u);
    ctx->pc = 0x2B44CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44C8u;
    // 0x2b44cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2B44C8u, 0x2B44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44D0u;
label_2b44d0:
    // 0x2b44d0: 0x1000013a  b           . + 4 + (0x13A << 2)
label_2b44d4:
    if (ctx->pc == 0x2B44D4u) {
        ctx->pc = 0x2B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44D0u;
        // 0x2b44d4: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44D8u;
        goto label_2b44d8;
    }
    ctx->pc = 0x2B44D0u;
    {
        const bool branch_taken_0x2b44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44D0u;
        // 0x2b44d4: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44d0) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B44D8u;
label_2b44d8:
    // 0x2b44d8: 0x26a2f2f0  addiu       $v0, $s5, -0xD10
    ctx->pc = 0x2b44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963952));
label_2b44dc:
    // 0x2b44dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b44e0:
    // 0x2b44e0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2b44e4:
    // 0x2b44e4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2b44e8:
    // 0x2b44e8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2b44ec:
    // 0x2b44ec: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2b44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2b44f0:
    // 0x2b44f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b44f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b44f4:
    // 0x2b44f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b44f8:
    if (ctx->pc == 0x2B44F8u) {
        ctx->pc = 0x2B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F4u;
        // 0x2b44f8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44FCu;
        goto label_2b44fc;
    }
    ctx->pc = 0x2B44F4u;
    {
        const bool branch_taken_0x2b44f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F4u;
        // 0x2b44f8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44f4) {
            ctx->pc = 0x2B450Cu;
            goto label_2b450c;
        }
    }
    ctx->pc = 0x2B44FCu;
label_2b44fc:
    // 0x2b44fc: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2b44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2b4500:
    // 0x2b4500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4504:
    // 0x2b4504: 0xc0ad056  jal         func_2B4158
label_2b4508:
    if (ctx->pc == 0x2B4508u) {
        ctx->pc = 0x2B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4504u;
        // 0x2b4508: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B450Cu;
        goto label_2b450c;
    }
    ctx->pc = 0x2B4504u;
    SET_GPR_U32(ctx, 31, 0x2B450Cu);
    ctx->pc = 0x2B4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4504u;
    // 0x2b4508: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4158u, 0x2B4504u, 0x2B450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B450Cu;
label_2b450c:
    // 0x2b450c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b4510:
    // 0x2b4510: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2b4510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b4514:
    // 0x2b4514: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b4514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4518:
    // 0x2b4518: 0xc0e409a  jal         func_390268
label_2b451c:
    if (ctx->pc == 0x2B451Cu) {
        ctx->pc = 0x2B451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4518u;
        // 0x2b451c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4520u;
        goto label_2b4520;
    }
    ctx->pc = 0x2B4518u;
    SET_GPR_U32(ctx, 31, 0x2B4520u);
    ctx->pc = 0x2B451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4518u;
    // 0x2b451c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B4518u, 0x2B4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4520u;
label_2b4520:
    // 0x2b4520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4524:
    // 0x2b4524: 0xc0a34d6  jal         func_28D358
label_2b4528:
    if (ctx->pc == 0x2B4528u) {
        ctx->pc = 0x2B4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4524u;
        // 0x2b4528: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B452Cu;
        goto label_2b452c;
    }
    ctx->pc = 0x2B4524u;
    SET_GPR_U32(ctx, 31, 0x2B452Cu);
    ctx->pc = 0x2B4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4524u;
    // 0x2b4528: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B4524u, 0x2B452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B452Cu;
label_2b452c:
    // 0x2b452c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b452cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4530:
    // 0x2b4530: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_2b4534:
    if (ctx->pc == 0x2B4534u) {
        ctx->pc = 0x2B4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4530u;
        // 0x2b4534: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4538u;
        goto label_2b4538;
    }
    ctx->pc = 0x2B4530u;
    {
        const bool branch_taken_0x2b4530 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4530) {
            ctx->pc = 0x2B4534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4530u;
            // 0x2b4534: 0x92220028  lbu         $v0, 0x28($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B454Cu;
            goto label_2b454c;
        }
    }
    ctx->pc = 0x2B4538u;
label_2b4538:
    // 0x2b4538: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x2b4538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2b453c:
    // 0x2b453c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b4540:
    // 0x2b4540: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b4540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2b4544:
    // 0x2b4544: 0x1000011e  b           . + 4 + (0x11E << 2)
label_2b4548:
    if (ctx->pc == 0x2B4548u) {
        ctx->pc = 0x2B4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4544u;
        // 0x2b4548: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B454Cu;
        goto label_2b454c;
    }
    ctx->pc = 0x2B4544u;
    {
        const bool branch_taken_0x2b4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4544u;
        // 0x2b4548: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4544) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B454Cu;
label_2b454c:
    // 0x2b454c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b454cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4550:
    // 0x2b4550: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2b4554:
    if (ctx->pc == 0x2B4554u) {
        ctx->pc = 0x2B4558u;
        goto label_2b4558;
    }
    ctx->pc = 0x2B4550u;
    {
        const bool branch_taken_0x2b4550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b4550) {
            ctx->pc = 0x2B4564u;
            goto label_2b4564;
        }
    }
    ctx->pc = 0x2B4558u;
label_2b4558:
    // 0x2b4558: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b455c:
    // 0x2b455c: 0xc0a3fde  jal         func_28FF78
label_2b4560:
    if (ctx->pc == 0x2B4560u) {
        ctx->pc = 0x2B4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B455Cu;
        // 0x2b4560: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4564u;
        goto label_2b4564;
    }
    ctx->pc = 0x2B455Cu;
    SET_GPR_U32(ctx, 31, 0x2B4564u);
    ctx->pc = 0x2B4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B455Cu;
    // 0x2b4560: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2B455Cu, 0x2B4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4564u;
label_2b4564:
    // 0x2b4564: 0xc088e40  jal         func_223900
label_2b4568:
    if (ctx->pc == 0x2B4568u) {
        ctx->pc = 0x2B4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4564u;
        // 0x2b4568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B456Cu;
        goto label_2b456c;
    }
    ctx->pc = 0x2B4564u;
    SET_GPR_U32(ctx, 31, 0x2B456Cu);
    ctx->pc = 0x2B4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4564u;
    // 0x2b4568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2B4564u, 0x2B456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B456Cu;
label_2b456c:
    // 0x2b456c: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
label_2b4570:
    if (ctx->pc == 0x2B4570u) {
        ctx->pc = 0x2B4574u;
        goto label_2b4574;
    }
    ctx->pc = 0x2B456Cu;
    {
        const bool branch_taken_0x2b456c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b456c) {
            ctx->pc = 0x2B45BCu;
            goto label_2b45bc;
        }
    }
    ctx->pc = 0x2B4574u;
label_2b4574:
    // 0x2b4574: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4578:
    // 0x2b4578: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b4578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b457c:
    // 0x2b457c: 0x1c400110  bgtz        $v0, . + 4 + (0x110 << 2)
label_2b4580:
    if (ctx->pc == 0x2B4580u) {
        ctx->pc = 0x2B4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B457Cu;
        // 0x2b4580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4584u;
        goto label_2b4584;
    }
    ctx->pc = 0x2B457Cu;
    {
        const bool branch_taken_0x2b457c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B4580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B457Cu;
        // 0x2b4580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b457c) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B4584u;
label_2b4584:
    // 0x2b4584: 0xc0a367c  jal         func_28D9F0
label_2b4588:
    if (ctx->pc == 0x2B4588u) {
        ctx->pc = 0x2B458Cu;
        goto label_2b458c;
    }
    ctx->pc = 0x2B4584u;
    SET_GPR_U32(ctx, 31, 0x2B458Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B4584u, 0x2B458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B458Cu;
label_2b458c:
    // 0x2b458c: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
label_2b4590:
    if (ctx->pc == 0x2B4590u) {
        ctx->pc = 0x2B4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B458Cu;
        // 0x2b4590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4594u;
        goto label_2b4594;
    }
    ctx->pc = 0x2B458Cu;
    {
        const bool branch_taken_0x2b458c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B458Cu;
        // 0x2b4590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b458c) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B4594u;
label_2b4594:
    // 0x2b4594: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4598:
    // 0x2b4598: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b4598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2b459c:
    // 0x2b459c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b459cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b45a0:
    // 0x2b45a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b45a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b45a4:
    // 0x2b45a4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2b45a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2b45a8:
    // 0x2b45a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b45a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45ac:
    // 0x2b45ac: 0xc0bea46  jal         func_2FA918
label_2b45b0:
    if (ctx->pc == 0x2B45B0u) {
        ctx->pc = 0x2B45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45ACu;
        // 0x2b45b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45B4u;
        goto label_2b45b4;
    }
    ctx->pc = 0x2B45ACu;
    SET_GPR_U32(ctx, 31, 0x2B45B4u);
    ctx->pc = 0x2B45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45ACu;
    // 0x2b45b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B45ACu, 0x2B45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45B4u;
label_2b45b4:
    // 0x2b45b4: 0x10000102  b           . + 4 + (0x102 << 2)
label_2b45b8:
    if (ctx->pc == 0x2B45B8u) {
        ctx->pc = 0x2B45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45B4u;
        // 0x2b45b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45BCu;
        goto label_2b45bc;
    }
    ctx->pc = 0x2B45B4u;
    {
        const bool branch_taken_0x2b45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45B4u;
        // 0x2b45b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45b4) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B45BCu;
label_2b45bc:
    // 0x2b45bc: 0xc087502  jal         func_21D408
label_2b45c0:
    if (ctx->pc == 0x2B45C0u) {
        ctx->pc = 0x2B45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45BCu;
        // 0x2b45c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45C4u;
        goto label_2b45c4;
    }
    ctx->pc = 0x2B45BCu;
    SET_GPR_U32(ctx, 31, 0x2B45C4u);
    ctx->pc = 0x2B45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45BCu;
    // 0x2b45c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B45BCu, 0x2B45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45C4u;
label_2b45c4:
    // 0x2b45c4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b45c8:
    // 0x2b45c8: 0x906200dc  lbu         $v0, 0xDC($v1)
    ctx->pc = 0x2b45c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 220)));
label_2b45cc:
    // 0x2b45cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2b45d0:
    if (ctx->pc == 0x2B45D0u) {
        ctx->pc = 0x2B45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45CCu;
        // 0x2b45d0: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45D4u;
        goto label_2b45d4;
    }
    ctx->pc = 0x2B45CCu;
    {
        const bool branch_taken_0x2b45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b45cc) {
            ctx->pc = 0x2B45D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45CCu;
            // 0x2b45d0: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45D4u;
label_2b45d4:
    // 0x2b45d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b45d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b45d8:
    // 0x2b45d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b45d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b45dc:
    // 0x2b45dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b45dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45e0:
    // 0x2b45e0: 0xc0888a2  jal         func_222288
label_2b45e4:
    if (ctx->pc == 0x2B45E4u) {
        ctx->pc = 0x2B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45E0u;
        // 0x2b45e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45E8u;
        goto label_2b45e8;
    }
    ctx->pc = 0x2B45E0u;
    SET_GPR_U32(ctx, 31, 0x2B45E8u);
    ctx->pc = 0x2B45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45E0u;
    // 0x2b45e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2B45E0u, 0x2B45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45E8u;
label_2b45e8:
    // 0x2b45e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b45ec:
    if (ctx->pc == 0x2B45ECu) {
        ctx->pc = 0x2B45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45E8u;
        // 0x2b45ec: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45F0u;
        goto label_2b45f0;
    }
    ctx->pc = 0x2B45E8u;
    {
        const bool branch_taken_0x2b45e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b45e8) {
            ctx->pc = 0x2B45ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45E8u;
            // 0x2b45ec: 0x86620092  lh          $v0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45F0u;
label_2b45f0:
    // 0x2b45f0: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_2b45f4:
    if (ctx->pc == 0x2B45F4u) {
        ctx->pc = 0x2B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45F0u;
        // 0x2b45f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45F8u;
        goto label_2b45f8;
    }
    ctx->pc = 0x2B45F0u;
    {
        const bool branch_taken_0x2b45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45F0u;
        // 0x2b45f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45f0) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B45F8u;
label_2b45f8:
    // 0x2b45f8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2b45fc:
    // 0x2b45fc: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2b45fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2b4600:
    // 0x2b4600: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2b4600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2b4604:
    // 0x2b4604: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b4608:
    // 0x2b4608: 0x44b821  addu        $s7, $v0, $a0
    ctx->pc = 0x2b4608u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b460c:
    // 0x2b460c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b460cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2b4610:
    // 0x2b4610: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b4610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b4614:
    // 0x2b4614: 0xc0cdb26  jal         func_336C98
label_2b4618:
    if (ctx->pc == 0x2B4618u) {
        ctx->pc = 0x2B4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4614u;
        // 0x2b4618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B461Cu;
        goto label_2b461c;
    }
    ctx->pc = 0x2B4614u;
    SET_GPR_U32(ctx, 31, 0x2B461Cu);
    ctx->pc = 0x2B4618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4614u;
    // 0x2b4618: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x2B4614u, 0x2B461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B461Cu;
label_2b461c:
    // 0x2b461c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b461cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b4620:
    // 0x2b4620: 0xc087502  jal         func_21D408
label_2b4624:
    if (ctx->pc == 0x2B4624u) {
        ctx->pc = 0x2B4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4620u;
        // 0x2b4624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4628u;
        goto label_2b4628;
    }
    ctx->pc = 0x2B4620u;
    SET_GPR_U32(ctx, 31, 0x2B4628u);
    ctx->pc = 0x2B4624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4620u;
    // 0x2b4624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B4620u, 0x2B4628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4628u;
label_2b4628:
    // 0x2b4628: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2b4628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2b462c:
    // 0x2b462c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2b4630:
    if (ctx->pc == 0x2B4630u) {
        ctx->pc = 0x2B4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B462Cu;
        // 0x2b4630: 0x92300028  lbu         $s0, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4634u;
        goto label_2b4634;
    }
    ctx->pc = 0x2B462Cu;
    {
        const bool branch_taken_0x2b462c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b462c) {
            ctx->pc = 0x2B4630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B462Cu;
            // 0x2b4630: 0x92300028  lbu         $s0, 0x28($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4654u;
            goto label_2b4654;
        }
    }
    ctx->pc = 0x2B4634u;
label_2b4634:
    // 0x2b4634: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2b4634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2b4638:
    // 0x2b4638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b463c:
    // 0x2b463c: 0x0  nop
    ctx->pc = 0x2b463cu;
    // NOP
label_2b4640:
    // 0x2b4640: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b4640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4644:
    // 0x2b4644: 0x0  nop
    ctx->pc = 0x2b4644u;
    // NOP
label_2b4648:
    // 0x2b4648: 0x450100dd  bc1t        . + 4 + (0xDD << 2)
label_2b464c:
    if (ctx->pc == 0x2B464Cu) {
        ctx->pc = 0x2B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4648u;
        // 0x2b464c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4650u;
        goto label_2b4650;
    }
    ctx->pc = 0x2B4648u;
    {
        const bool branch_taken_0x2b4648 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4648u;
        // 0x2b464c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4648) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B4650u;
label_2b4650:
    // 0x2b4650: 0x92300028  lbu         $s0, 0x28($s1)
    ctx->pc = 0x2b4650u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2b4654:
    // 0x2b4654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4658:
    // 0x2b4658: 0x56020051  bnel        $s0, $v0, . + 4 + (0x51 << 2)
label_2b465c:
    if (ctx->pc == 0x2B465Cu) {
        ctx->pc = 0x2B465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4658u;
        // 0x2b465c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4660u;
        goto label_2b4660;
    }
    ctx->pc = 0x2B4658u;
    {
        const bool branch_taken_0x2b4658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4658) {
            ctx->pc = 0x2B465Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4658u;
            // 0x2b465c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47A0u;
            goto label_2b47a0;
        }
    }
    ctx->pc = 0x2B4660u;
label_2b4660:
    // 0x2b4660: 0xc088f0c  jal         func_223C30
label_2b4664:
    if (ctx->pc == 0x2B4664u) {
        ctx->pc = 0x2B4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4660u;
        // 0x2b4664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4668u;
        goto label_2b4668;
    }
    ctx->pc = 0x2B4660u;
    SET_GPR_U32(ctx, 31, 0x2B4668u);
    ctx->pc = 0x2B4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4660u;
    // 0x2b4664: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x2B4660u, 0x2B4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4668u;
label_2b4668:
    // 0x2b4668: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
label_2b466c:
    if (ctx->pc == 0x2B466Cu) {
        ctx->pc = 0x2B466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4668u;
        // 0x2b466c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4670u;
        goto label_2b4670;
    }
    ctx->pc = 0x2B4668u;
    {
        const bool branch_taken_0x2b4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4668) {
            ctx->pc = 0x2B466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4668u;
            // 0x2b466c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47A0u;
            goto label_2b47a0;
        }
    }
    ctx->pc = 0x2B4670u;
label_2b4670:
    // 0x2b4670: 0x92320029  lbu         $s2, 0x29($s1)
    ctx->pc = 0x2b4670u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2b4674:
    // 0x2b4674: 0x16500030  bne         $s2, $s0, . + 4 + (0x30 << 2)
label_2b4678:
    if (ctx->pc == 0x2B4678u) {
        ctx->pc = 0x2B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4674u;
        // 0x2b4678: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B467Cu;
        goto label_2b467c;
    }
    ctx->pc = 0x2B4674u;
    {
        const bool branch_taken_0x2b4674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4674u;
        // 0x2b4678: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4674) {
            ctx->pc = 0x2B4738u;
            goto label_2b4738;
        }
    }
    ctx->pc = 0x2B467Cu;
label_2b467c:
    // 0x2b467c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4680:
    // 0x2b4680: 0x16c0001c  bnez        $s6, . + 4 + (0x1C << 2)
label_2b4684:
    if (ctx->pc == 0x2B4684u) {
        ctx->pc = 0x2B4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4680u;
        // 0x2b4684: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4688u;
        goto label_2b4688;
    }
    ctx->pc = 0x2B4680u;
    {
        const bool branch_taken_0x2b4680 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4680u;
        // 0x2b4684: 0xc4940140  lwc1        $f20, 0x140($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4680) {
            ctx->pc = 0x2B46F4u;
            goto label_2b46f4;
        }
    }
    ctx->pc = 0x2B4688u;
label_2b4688:
    // 0x2b4688: 0xc0a4162  jal         func_290588
label_2b468c:
    if (ctx->pc == 0x2B468Cu) {
        ctx->pc = 0x2B468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4688u;
        // 0x2b468c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4690u;
        goto label_2b4690;
    }
    ctx->pc = 0x2B4688u;
    SET_GPR_U32(ctx, 31, 0x2B4690u);
    ctx->pc = 0x2B468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4688u;
    // 0x2b468c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x2B4688u, 0x2B4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4690u;
label_2b4690:
    // 0x2b4690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4694:
    // 0x2b4694: 0x16120018  bne         $s0, $s2, . + 4 + (0x18 << 2)
label_2b4698:
    if (ctx->pc == 0x2B4698u) {
        ctx->pc = 0x2B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4694u;
        // 0x2b4698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B469Cu;
        goto label_2b469c;
    }
    ctx->pc = 0x2B4694u;
    {
        const bool branch_taken_0x2b4694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4694u;
        // 0x2b4698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4694) {
            ctx->pc = 0x2B46F8u;
            goto label_2b46f8;
        }
    }
    ctx->pc = 0x2B469Cu;
label_2b469c:
    // 0x2b469c: 0xc088e98  jal         func_223A60
label_2b46a0:
    if (ctx->pc == 0x2B46A0u) {
        ctx->pc = 0x2B46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B469Cu;
        // 0x2b46a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46A4u;
        goto label_2b46a4;
    }
    ctx->pc = 0x2B469Cu;
    SET_GPR_U32(ctx, 31, 0x2B46A4u);
    ctx->pc = 0x2B46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B469Cu;
    // 0x2b46a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2B469Cu, 0x2B46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46A4u;
label_2b46a4:
    // 0x2b46a4: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2b46a8:
    if (ctx->pc == 0x2B46A8u) {
        ctx->pc = 0x2B46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A4u;
        // 0x2b46a8: 0x9222002c  lbu         $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46ACu;
        goto label_2b46ac;
    }
    ctx->pc = 0x2B46A4u;
    {
        const bool branch_taken_0x2b46a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b46a4) {
            ctx->pc = 0x2B46A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B46A4u;
            // 0x2b46a8: 0x9222002c  lbu         $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B46D4u;
            goto label_2b46d4;
        }
    }
    ctx->pc = 0x2B46ACu;
label_2b46ac:
    // 0x2b46ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b46b0:
    // 0x2b46b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b46b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b46b4:
    // 0x2b46b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2b46b8:
    if (ctx->pc == 0x2B46B8u) {
        ctx->pc = 0x2B46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46B4u;
        // 0x2b46b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46BCu;
        goto label_2b46bc;
    }
    ctx->pc = 0x2B46B4u;
    {
        const bool branch_taken_0x2b46b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b46b4) {
            ctx->pc = 0x2B46B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B46B4u;
            // 0x2b46b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B46BCu;
            goto label_2b46bc;
        }
    }
    ctx->pc = 0x2B46BCu;
label_2b46bc:
    // 0x2b46bc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2b46c0:
    // 0x2b46c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2b46c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2b46c4:
    // 0x2b46c4: 0x2010  mfhi        $a0
    ctx->pc = 0x2b46c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b46c8:
    // 0x2b46c8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2b46cc:
    if (ctx->pc == 0x2B46CCu) {
        ctx->pc = 0x2B46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46C8u;
        // 0x2b46cc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46D0u;
        goto label_2b46d0;
    }
    ctx->pc = 0x2B46C8u;
    {
        const bool branch_taken_0x2b46c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b46c8) {
            ctx->pc = 0x2B46CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B46C8u;
            // 0x2b46cc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B46F4u;
            goto label_2b46f4;
        }
    }
    ctx->pc = 0x2B46D0u;
label_2b46d0:
    // 0x2b46d0: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x2b46d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2b46d4:
    // 0x2b46d4: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_2b46d8:
    if (ctx->pc == 0x2B46D8u) {
        ctx->pc = 0x2B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46D4u;
        // 0x2b46d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46DCu;
        goto label_2b46dc;
    }
    ctx->pc = 0x2B46D4u;
    {
        const bool branch_taken_0x2b46d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46D4u;
        // 0x2b46d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46d4) {
            ctx->pc = 0x2B46F8u;
            goto label_2b46f8;
        }
    }
    ctx->pc = 0x2B46DCu;
label_2b46dc:
    // 0x2b46dc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b46dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2b46e0:
    // 0x2b46e0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b46e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b46e4:
    // 0x2b46e4: 0x0  nop
    ctx->pc = 0x2b46e4u;
    // NOP
label_2b46e8:
    // 0x2b46e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2b46ec:
    if (ctx->pc == 0x2B46ECu) {
        ctx->pc = 0x2B46F0u;
        goto label_2b46f0;
    }
    ctx->pc = 0x2B46E8u;
    {
        const bool branch_taken_0x2b46e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b46e8) {
            ctx->pc = 0x2B46F8u;
            goto label_2b46f8;
        }
    }
    ctx->pc = 0x2B46F0u;
label_2b46f0:
    // 0x2b46f0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b46f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b46f4:
    // 0x2b46f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b46f8:
    // 0x2b46f8: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
label_2b46fc:
    if (ctx->pc == 0x2B46FCu) {
        ctx->pc = 0x2B4700u;
        goto label_2b4700;
    }
    ctx->pc = 0x2B46F8u;
    {
        const bool branch_taken_0x2b46f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b46f8) {
            ctx->pc = 0x2B4738u;
            goto label_2b4738;
        }
    }
    ctx->pc = 0x2B4700u;
label_2b4700:
    // 0x2b4700: 0xc0a4e54  jal         func_293950
label_2b4704:
    if (ctx->pc == 0x2B4704u) {
        ctx->pc = 0x2B4708u;
        goto label_2b4708;
    }
    ctx->pc = 0x2B4700u;
    SET_GPR_U32(ctx, 31, 0x2B4708u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B4700u, 0x2B4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4708u;
label_2b4708:
    // 0x2b4708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b470c:
    // 0x2b470c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2b4710:
    if (ctx->pc == 0x2B4710u) {
        ctx->pc = 0x2B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B470Cu;
        // 0x2b4710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4714u;
        goto label_2b4714;
    }
    ctx->pc = 0x2B470Cu;
    {
        const bool branch_taken_0x2b470c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B470Cu;
        // 0x2b4710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b470c) {
            ctx->pc = 0x2B4724u;
            goto label_2b4724;
        }
    }
    ctx->pc = 0x2B4714u;
label_2b4714:
    // 0x2b4714: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4718:
    // 0x2b4718: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2b4718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b471c:
    // 0x2b471c: 0xc0abd6c  jal         func_2AF5B0
label_2b4720:
    if (ctx->pc == 0x2B4720u) {
        ctx->pc = 0x2B4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B471Cu;
        // 0x2b4720: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4724u;
        goto label_2b4724;
    }
    ctx->pc = 0x2B471Cu;
    SET_GPR_U32(ctx, 31, 0x2B4724u);
    ctx->pc = 0x2B4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B471Cu;
    // 0x2b4720: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2B471Cu, 0x2B4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4724u;
label_2b4724:
    // 0x2b4724: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4728:
    // 0x2b4728: 0xc0a35d6  jal         func_28D758
label_2b472c:
    if (ctx->pc == 0x2B472Cu) {
        ctx->pc = 0x2B472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4728u;
        // 0x2b472c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4730u;
        goto label_2b4730;
    }
    ctx->pc = 0x2B4728u;
    SET_GPR_U32(ctx, 31, 0x2B4730u);
    ctx->pc = 0x2B472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4728u;
    // 0x2b472c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B4728u, 0x2B4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4730u;
label_2b4730:
    // 0x2b4730: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2b4734:
    if (ctx->pc == 0x2B4734u) {
        ctx->pc = 0x2B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4730u;
        // 0x2b4734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4738u;
        goto label_2b4738;
    }
    ctx->pc = 0x2B4730u;
    {
        const bool branch_taken_0x2b4730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4730u;
        // 0x2b4734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4730) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B4738u;
label_2b4738:
    // 0x2b4738: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b4738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2b473c:
    // 0x2b473c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b473cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4740:
    // 0x2b4740: 0x0  nop
    ctx->pc = 0x2b4740u;
    // NOP
label_2b4744:
    // 0x2b4744: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2b4744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4748:
    // 0x2b4748: 0x0  nop
    ctx->pc = 0x2b4748u;
    // NOP
label_2b474c:
    // 0x2b474c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2b4750:
    if (ctx->pc == 0x2B4750u) {
        ctx->pc = 0x2B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B474Cu;
        // 0x2b4750: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4754u;
        goto label_2b4754;
    }
    ctx->pc = 0x2B474Cu;
    {
        const bool branch_taken_0x2b474c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b474c) {
            ctx->pc = 0x2B4750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B474Cu;
            // 0x2b4750: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47A0u;
            goto label_2b47a0;
        }
    }
    ctx->pc = 0x2B4754u;
label_2b4754:
    // 0x2b4754: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b4754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4758:
    // 0x2b4758: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b4758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2b475c:
    // 0x2b475c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2b4760:
    if (ctx->pc == 0x2B4760u) {
        ctx->pc = 0x2B4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B475Cu;
        // 0x2b4760: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4764u;
        goto label_2b4764;
    }
    ctx->pc = 0x2B475Cu;
    {
        const bool branch_taken_0x2b475c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B475Cu;
        // 0x2b4760: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b475c) {
            ctx->pc = 0x2B479Cu;
            goto label_2b479c;
        }
    }
    ctx->pc = 0x2B4764u;
label_2b4764:
    // 0x2b4764: 0xc0a36c2  jal         func_28DB08
label_2b4768:
    if (ctx->pc == 0x2B4768u) {
        ctx->pc = 0x2B476Cu;
        goto label_2b476c;
    }
    ctx->pc = 0x2B4764u;
    SET_GPR_U32(ctx, 31, 0x2B476Cu);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2B4764u, 0x2B476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B476Cu;
label_2b476c:
    // 0x2b476c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b476cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4770:
    // 0x2b4770: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_2b4774:
    if (ctx->pc == 0x2B4774u) {
        ctx->pc = 0x2B4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4770u;
        // 0x2b4774: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4778u;
        goto label_2b4778;
    }
    ctx->pc = 0x2B4770u;
    {
        const bool branch_taken_0x2b4770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4770) {
            ctx->pc = 0x2B4774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4770u;
            // 0x2b4774: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47A0u;
            goto label_2b47a0;
        }
    }
    ctx->pc = 0x2B4778u;
label_2b4778:
    // 0x2b4778: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2b4778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b477c:
    // 0x2b477c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2b477cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2b4780:
    // 0x2b4780: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2b4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b4784:
    // 0x2b4784: 0x40f809  jalr        $v0
label_2b4788:
    if (ctx->pc == 0x2B4788u) {
        ctx->pc = 0x2B4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4784u;
        // 0x2b4788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B478Cu;
        goto label_2b478c;
    }
    ctx->pc = 0x2B4784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B478Cu);
        ctx->pc = 0x2B4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4784u;
        // 0x2b4788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4784u, 0x2B478Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B478Cu;
label_2b478c:
    // 0x2b478c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2b4790:
    if (ctx->pc == 0x2B4790u) {
        ctx->pc = 0x2B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B478Cu;
        // 0x2b4790: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4794u;
        goto label_2b4794;
    }
    ctx->pc = 0x2B478Cu;
    {
        const bool branch_taken_0x2b478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b478c) {
            ctx->pc = 0x2B4790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B478Cu;
            // 0x2b4790: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B47A0u;
            goto label_2b47a0;
        }
    }
    ctx->pc = 0x2B4794u;
label_2b4794:
    // 0x2b4794: 0xc0a36c8  jal         func_28DB20
label_2b4798:
    if (ctx->pc == 0x2B4798u) {
        ctx->pc = 0x2B4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4794u;
        // 0x2b4798: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B479Cu;
        goto label_2b479c;
    }
    ctx->pc = 0x2B4794u;
    SET_GPR_U32(ctx, 31, 0x2B479Cu);
    ctx->pc = 0x2B4798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4794u;
    // 0x2b4798: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B4794u, 0x2B479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B479Cu;
label_2b479c:
    // 0x2b479c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b47a0:
    // 0x2b47a0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b47a4:
    // 0x2b47a4: 0x1c400085  bgtz        $v0, . + 4 + (0x85 << 2)
label_2b47a8:
    if (ctx->pc == 0x2B47A8u) {
        ctx->pc = 0x2B47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47A4u;
        // 0x2b47a8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47ACu;
        goto label_2b47ac;
    }
    ctx->pc = 0x2B47A4u;
    {
        const bool branch_taken_0x2b47a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47A4u;
        // 0x2b47a8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47a4) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B47ACu;
label_2b47ac:
    // 0x2b47ac: 0xc08bfa0  jal         func_22FE80
label_2b47b0:
    if (ctx->pc == 0x2B47B0u) {
        ctx->pc = 0x2B47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47ACu;
        // 0x2b47b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47B4u;
        goto label_2b47b4;
    }
    ctx->pc = 0x2B47ACu;
    SET_GPR_U32(ctx, 31, 0x2B47B4u);
    ctx->pc = 0x2B47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47ACu;
    // 0x2b47b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B47ACu, 0x2B47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47B4u;
label_2b47b4:
    // 0x2b47b4: 0x8fc3b734  lw          $v1, -0x48CC($fp)
    ctx->pc = 0x2b47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
label_2b47b8:
    // 0x2b47b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2b47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2b47bc:
    // 0x2b47bc: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x2b47bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b47c0:
    // 0x2b47c0: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2b47c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2b47c4:
    // 0x2b47c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2b47c8:
    if (ctx->pc == 0x2B47C8u) {
        ctx->pc = 0x2B47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47C4u;
        // 0x2b47c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47CCu;
        goto label_2b47cc;
    }
    ctx->pc = 0x2B47C4u;
    {
        const bool branch_taken_0x2b47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47C4u;
        // 0x2b47c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47c4) {
            ctx->pc = 0x2B4824u;
            goto label_2b4824;
        }
    }
    ctx->pc = 0x2B47CCu;
label_2b47cc:
    // 0x2b47cc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2b47ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b47d0:
    // 0x2b47d0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2b47d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b47d4:
    // 0x2b47d4: 0xc0cd4fc  jal         func_3353F0
label_2b47d8:
    if (ctx->pc == 0x2B47D8u) {
        ctx->pc = 0x2B47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47D4u;
        // 0x2b47d8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47DCu;
        goto label_2b47dc;
    }
    ctx->pc = 0x2B47D4u;
    SET_GPR_U32(ctx, 31, 0x2B47DCu);
    ctx->pc = 0x2B47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47D4u;
    // 0x2b47d8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B47D4u, 0x2B47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47DCu;
label_2b47dc:
    // 0x2b47dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2b47e0:
    // 0x2b47e0: 0x9230002a  lbu         $s0, 0x2A($s1)
    ctx->pc = 0x2b47e0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2b47e4:
    // 0x2b47e4: 0x1615000f  bne         $s0, $s5, . + 4 + (0xF << 2)
label_2b47e8:
    if (ctx->pc == 0x2B47E8u) {
        ctx->pc = 0x2B47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47E4u;
        // 0x2b47e8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47ECu;
        goto label_2b47ec;
    }
    ctx->pc = 0x2B47E4u;
    {
        const bool branch_taken_0x2b47e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47E4u;
        // 0x2b47e8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47e4) {
            ctx->pc = 0x2B4824u;
            goto label_2b4824;
        }
    }
    ctx->pc = 0x2B47ECu;
label_2b47ec:
    // 0x2b47ec: 0xc0a47b4  jal         func_291ED0
label_2b47f0:
    if (ctx->pc == 0x2B47F0u) {
        ctx->pc = 0x2B47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47ECu;
        // 0x2b47f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B47F4u;
        goto label_2b47f4;
    }
    ctx->pc = 0x2B47ECu;
    SET_GPR_U32(ctx, 31, 0x2B47F4u);
    ctx->pc = 0x2B47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47ECu;
    // 0x2b47f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B47ECu, 0x2B47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47F4u;
label_2b47f4:
    // 0x2b47f4: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2b47f8:
    if (ctx->pc == 0x2B47F8u) {
        ctx->pc = 0x2B47FCu;
        goto label_2b47fc;
    }
    ctx->pc = 0x2B47F4u;
    {
        const bool branch_taken_0x2b47f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b47f4) {
            ctx->pc = 0x2B4824u;
            goto label_2b4824;
        }
    }
    ctx->pc = 0x2B47FCu;
label_2b47fc:
    // 0x2b47fc: 0xc0a367c  jal         func_28D9F0
label_2b4800:
    if (ctx->pc == 0x2B4800u) {
        ctx->pc = 0x2B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47FCu;
        // 0x2b4800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4804u;
        goto label_2b4804;
    }
    ctx->pc = 0x2B47FCu;
    SET_GPR_U32(ctx, 31, 0x2B4804u);
    ctx->pc = 0x2B4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47FCu;
    // 0x2b4800: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B47FCu, 0x2B4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4804u;
label_2b4804:
    // 0x2b4804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b4808:
    if (ctx->pc == 0x2B4808u) {
        ctx->pc = 0x2B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4804u;
        // 0x2b4808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B480Cu;
        goto label_2b480c;
    }
    ctx->pc = 0x2B4804u;
    {
        const bool branch_taken_0x2b4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4804u;
        // 0x2b4808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4804) {
            ctx->pc = 0x2B4824u;
            goto label_2b4824;
        }
    }
    ctx->pc = 0x2B480Cu;
label_2b480c:
    // 0x2b480c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b480cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4810:
    // 0x2b4810: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b4810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b4814:
    // 0x2b4814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4818:
    // 0x2b4818: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2b4818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b481c:
    // 0x2b481c: 0xc0bec3c  jal         func_2FB0F0
label_2b4820:
    if (ctx->pc == 0x2B4820u) {
        ctx->pc = 0x2B4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B481Cu;
        // 0x2b4820: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4824u;
        goto label_2b4824;
    }
    ctx->pc = 0x2B481Cu;
    SET_GPR_U32(ctx, 31, 0x2B4824u);
    ctx->pc = 0x2B4820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B481Cu;
    // 0x2b4820: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2B481Cu, 0x2B4824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4824u;
label_2b4824:
    // 0x2b4824: 0x56c00026  bnel        $s6, $zero, . + 4 + (0x26 << 2)
label_2b4828:
    if (ctx->pc == 0x2B4828u) {
        ctx->pc = 0x2B4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4824u;
        // 0x2b4828: 0xc6340024  lwc1        $f20, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B482Cu;
        goto label_2b482c;
    }
    ctx->pc = 0x2B4824u;
    {
        const bool branch_taken_0x2b4824 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4824) {
            ctx->pc = 0x2B4828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4824u;
            // 0x2b4828: 0xc6340024  lwc1        $f20, 0x24($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B48C0u;
            goto label_2b48c0;
        }
    }
    ctx->pc = 0x2B482Cu;
label_2b482c:
    // 0x2b482c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b482cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2b4830:
    // 0x2b4830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4834:
    // 0x2b4834: 0x0  nop
    ctx->pc = 0x2b4834u;
    // NOP
label_2b4838:
    // 0x2b4838: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b4838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b483c:
    // 0x2b483c: 0x0  nop
    ctx->pc = 0x2b483cu;
    // NOP
label_2b4840:
    // 0x2b4840: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2b4844:
    if (ctx->pc == 0x2B4844u) {
        ctx->pc = 0x2B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4840u;
        // 0x2b4844: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4848u;
        goto label_2b4848;
    }
    ctx->pc = 0x2B4840u;
    {
        const bool branch_taken_0x2b4840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4840u;
        // 0x2b4844: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4840) {
            ctx->pc = 0x2B48BCu;
            goto label_2b48bc;
        }
    }
    ctx->pc = 0x2B4848u;
label_2b4848:
    // 0x2b4848: 0x8e6201a8  lw          $v0, 0x1A8($s3)
    ctx->pc = 0x2b4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2b484c:
    // 0x2b484c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b4850:
    // 0x2b4850: 0x92250028  lbu         $a1, 0x28($s1)
    ctx->pc = 0x2b4850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2b4854:
    // 0x2b4854: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2b4854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b4858:
    // 0x2b4858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b485c:
    // 0x2b485c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_2b4860:
    if (ctx->pc == 0x2B4860u) {
        ctx->pc = 0x2B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B485Cu;
        // 0x2b4860: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4864u;
        goto label_2b4864;
    }
    ctx->pc = 0x2B485Cu;
    {
        const bool branch_taken_0x2b485c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B485Cu;
        // 0x2b4860: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b485c) {
            ctx->pc = 0x2B4870u;
            goto label_2b4870;
        }
    }
    ctx->pc = 0x2B4864u;
label_2b4864:
    // 0x2b4864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b4868:
    // 0x2b4868: 0xc08bfbc  jal         func_22FEF0
label_2b486c:
    if (ctx->pc == 0x2B486Cu) {
        ctx->pc = 0x2B486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4868u;
        // 0x2b486c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4870u;
        goto label_2b4870;
    }
    ctx->pc = 0x2B4868u;
    SET_GPR_U32(ctx, 31, 0x2B4870u);
    ctx->pc = 0x2B486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4868u;
    // 0x2b486c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B4868u, 0x2B4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4870u;
label_2b4870:
    // 0x2b4870: 0xc0a367c  jal         func_28D9F0
label_2b4874:
    if (ctx->pc == 0x2B4874u) {
        ctx->pc = 0x2B4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4870u;
        // 0x2b4874: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4878u;
        goto label_2b4878;
    }
    ctx->pc = 0x2B4870u;
    SET_GPR_U32(ctx, 31, 0x2B4878u);
    ctx->pc = 0x2B4874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4870u;
    // 0x2b4874: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B4870u, 0x2B4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4878u;
label_2b4878:
    // 0x2b4878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b487c:
    // 0x2b487c: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
label_2b4880:
    if (ctx->pc == 0x2B4880u) {
        ctx->pc = 0x2B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B487Cu;
        // 0x2b4880: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4884u;
        goto label_2b4884;
    }
    ctx->pc = 0x2B487Cu;
    {
        const bool branch_taken_0x2b487c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B487Cu;
        // 0x2b4880: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b487c) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B4884u;
label_2b4884:
    // 0x2b4884: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4888:
    // 0x2b4888: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b4888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2b488c:
    // 0x2b488c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b488cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4890:
    // 0x2b4890: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b4890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b4894:
    // 0x2b4894: 0xc4ac0140  lwc1        $f12, 0x140($a1)
    ctx->pc = 0x2b4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b4898:
    // 0x2b4898: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b4898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b489c:
    // 0x2b489c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b489cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2b48a0:
    // 0x2b48a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b48a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b48a4:
    // 0x2b48a4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2b48a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2b48a8:
    // 0x2b48a8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b48ac:
    // 0x2b48ac: 0xc0bee7a  jal         func_2FB9E8
label_2b48b0:
    if (ctx->pc == 0x2B48B0u) {
        ctx->pc = 0x2B48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48ACu;
        // 0x2b48b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48B4u;
        goto label_2b48b4;
    }
    ctx->pc = 0x2B48ACu;
    SET_GPR_U32(ctx, 31, 0x2B48B4u);
    ctx->pc = 0x2B48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48ACu;
    // 0x2b48b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B48ACu, 0x2B48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48B4u;
label_2b48b4:
    // 0x2b48b4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2b48b8:
    if (ctx->pc == 0x2B48B8u) {
        ctx->pc = 0x2B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B4u;
        // 0x2b48b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48BCu;
        goto label_2b48bc;
    }
    ctx->pc = 0x2B48B4u;
    {
        const bool branch_taken_0x2b48b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B4u;
        // 0x2b48b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48b4) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B48BCu;
label_2b48bc:
    // 0x2b48bc: 0xc6340024  lwc1        $f20, 0x24($s1)
    ctx->pc = 0x2b48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b48c0:
    // 0x2b48c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b48c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b48c4:
    // 0x2b48c4: 0x0  nop
    ctx->pc = 0x2b48c4u;
    // NOP
label_2b48c8:
    // 0x2b48c8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2b48c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b48cc:
    // 0x2b48cc: 0x0  nop
    ctx->pc = 0x2b48ccu;
    // NOP
label_2b48d0:
    // 0x2b48d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2b48d4:
    if (ctx->pc == 0x2B48D4u) {
        ctx->pc = 0x2B48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48D0u;
        // 0x2b48d4: 0x92230028  lbu         $v1, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48D8u;
        goto label_2b48d8;
    }
    ctx->pc = 0x2B48D0u;
    {
        const bool branch_taken_0x2b48d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48D0u;
        // 0x2b48d4: 0x92230028  lbu         $v1, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48d0) {
            ctx->pc = 0x2B48E0u;
            goto label_2b48e0;
        }
    }
    ctx->pc = 0x2B48D8u;
label_2b48d8:
    // 0x2b48d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b48dc:
    // 0x2b48dc: 0xc4540140  lwc1        $f20, 0x140($v0)
    ctx->pc = 0x2b48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b48e0:
    // 0x2b48e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b48e4:
    // 0x2b48e4: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_2b48e8:
    if (ctx->pc == 0x2B48E8u) {
        ctx->pc = 0x2B48ECu;
        goto label_2b48ec;
    }
    ctx->pc = 0x2B48E4u;
    {
        const bool branch_taken_0x2b48e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b48e4) {
            ctx->pc = 0x2B4984u;
            goto label_2b4984;
        }
    }
    ctx->pc = 0x2B48ECu;
label_2b48ec:
    // 0x2b48ec: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2b48ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2b48f0:
    // 0x2b48f0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2b48f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b48f4:
    // 0x2b48f4: 0x0  nop
    ctx->pc = 0x2b48f4u;
    // NOP
label_2b48f8:
    // 0x2b48f8: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2b48fc:
    if (ctx->pc == 0x2B48FCu) {
        ctx->pc = 0x2B4900u;
        goto label_2b4900;
    }
    ctx->pc = 0x2B48F8u;
    {
        const bool branch_taken_0x2b48f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b48f8) {
            ctx->pc = 0x2B4984u;
            goto label_2b4984;
        }
    }
    ctx->pc = 0x2B4900u;
label_2b4900:
    // 0x2b4900: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2b4904:
    // 0x2b4904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4908:
    // 0x2b4908: 0x0  nop
    ctx->pc = 0x2b4908u;
    // NOP
label_2b490c:
    // 0x2b490c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b490cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2b4910:
    // 0x2b4910: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b4910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b4914:
    // 0x2b4914: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2b4914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4918:
    // 0x2b4918: 0x0  nop
    ctx->pc = 0x2b4918u;
    // NOP
label_2b491c:
    // 0x2b491c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2b4920:
    if (ctx->pc == 0x2B4920u) {
        ctx->pc = 0x2B4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B491Cu;
        // 0x2b4920: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4924u;
        goto label_2b4924;
    }
    ctx->pc = 0x2B491Cu;
    {
        const bool branch_taken_0x2b491c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B491Cu;
        // 0x2b4920: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b491c) {
            ctx->pc = 0x2B4984u;
            goto label_2b4984;
        }
    }
    ctx->pc = 0x2B4924u;
label_2b4924:
    // 0x2b4924: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b4928:
    // 0x2b4928: 0xc0cd4ee  jal         func_3353B8
label_2b492c:
    if (ctx->pc == 0x2B492Cu) {
        ctx->pc = 0x2B492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4928u;
        // 0x2b492c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4930u;
        goto label_2b4930;
    }
    ctx->pc = 0x2B4928u;
    SET_GPR_U32(ctx, 31, 0x2B4930u);
    ctx->pc = 0x2B492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4928u;
    // 0x2b492c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B4928u, 0x2B4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4930u;
label_2b4930:
    // 0x2b4930: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x2b4930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2b4934:
    // 0x2b4934: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2b4938:
    if (ctx->pc == 0x2B4938u) {
        ctx->pc = 0x2B493Cu;
        goto label_2b493c;
    }
    ctx->pc = 0x2B4934u;
    {
        const bool branch_taken_0x2b4934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4934) {
            ctx->pc = 0x2B4984u;
            goto label_2b4984;
        }
    }
    ctx->pc = 0x2B493Cu;
label_2b493c:
    // 0x2b493c: 0xc0a367c  jal         func_28D9F0
label_2b4940:
    if (ctx->pc == 0x2B4940u) {
        ctx->pc = 0x2B4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B493Cu;
        // 0x2b4940: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4944u;
        goto label_2b4944;
    }
    ctx->pc = 0x2B493Cu;
    SET_GPR_U32(ctx, 31, 0x2B4944u);
    ctx->pc = 0x2B4940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B493Cu;
    // 0x2b4940: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B493Cu, 0x2B4944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4944u;
label_2b4944:
    // 0x2b4944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4948:
    // 0x2b4948: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_2b494c:
    if (ctx->pc == 0x2B494Cu) {
        ctx->pc = 0x2B494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4948u;
        // 0x2b494c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4950u;
        goto label_2b4950;
    }
    ctx->pc = 0x2B4948u;
    {
        const bool branch_taken_0x2b4948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4948u;
        // 0x2b494c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4948) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B4950u;
label_2b4950:
    // 0x2b4950: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b4954:
    // 0x2b4954: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b4954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b4958:
    // 0x2b4958: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b495c:
    // 0x2b495c: 0x40f809  jalr        $v0
label_2b4960:
    if (ctx->pc == 0x2B4960u) {
        ctx->pc = 0x2B4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B495Cu;
        // 0x2b4960: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4964u;
        goto label_2b4964;
    }
    ctx->pc = 0x2B495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4964u);
        ctx->pc = 0x2B4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B495Cu;
        // 0x2b4960: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B495Cu, 0x2B4964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4964u;
label_2b4964:
    // 0x2b4964: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4968:
    // 0x2b4968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b496c:
    // 0x2b496c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b496cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4970:
    // 0x2b4970: 0x24070bb8  addiu       $a3, $zero, 0xBB8
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2b4974:
    // 0x2b4974: 0xc0bfabe  jal         func_2FEAF8
label_2b4978:
    if (ctx->pc == 0x2B4978u) {
        ctx->pc = 0x2B4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4974u;
        // 0x2b4978: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B497Cu;
        goto label_2b497c;
    }
    ctx->pc = 0x2B4974u;
    SET_GPR_U32(ctx, 31, 0x2B497Cu);
    ctx->pc = 0x2B4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4974u;
    // 0x2b4978: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2B4974u, 0x2B497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B497Cu;
label_2b497c:
    // 0x2b497c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b4980:
    if (ctx->pc == 0x2B4980u) {
        ctx->pc = 0x2B4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B497Cu;
        // 0x2b4980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4984u;
        goto label_2b4984;
    }
    ctx->pc = 0x2B497Cu;
    {
        const bool branch_taken_0x2b497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B497Cu;
        // 0x2b4980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b497c) {
            ctx->pc = 0x2B49C0u;
            goto label_2b49c0;
        }
    }
    ctx->pc = 0x2B4984u;
label_2b4984:
    // 0x2b4984: 0xc0a367c  jal         func_28D9F0
label_2b4988:
    if (ctx->pc == 0x2B4988u) {
        ctx->pc = 0x2B4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4984u;
        // 0x2b4988: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B498Cu;
        goto label_2b498c;
    }
    ctx->pc = 0x2B4984u;
    SET_GPR_U32(ctx, 31, 0x2B498Cu);
    ctx->pc = 0x2B4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4984u;
    // 0x2b4988: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B4984u, 0x2B498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B498Cu;
label_2b498c:
    // 0x2b498c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b4990:
    if (ctx->pc == 0x2B4990u) {
        ctx->pc = 0x2B4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B498Cu;
        // 0x2b4990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4994u;
        goto label_2b4994;
    }
    ctx->pc = 0x2B498Cu;
    {
        const bool branch_taken_0x2b498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B498Cu;
        // 0x2b4990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b498c) {
            ctx->pc = 0x2B49BCu;
            goto label_2b49bc;
        }
    }
    ctx->pc = 0x2B4994u;
label_2b4994:
    // 0x2b4994: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x2b4994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_2b4998:
    // 0x2b4998: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2b4998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2b499c:
    // 0x2b499c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b499cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b49a0:
    // 0x2b49a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b49a4:
    // 0x2b49a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b49a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b49a8:
    // 0x2b49a8: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x2b49a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_2b49ac:
    // 0x2b49ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b49acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b49b0:
    // 0x2b49b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b49b4:
    // 0x2b49b4: 0xc0bf3d4  jal         func_2FCF50
label_2b49b8:
    if (ctx->pc == 0x2B49B8u) {
        ctx->pc = 0x2B49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49B4u;
        // 0x2b49b8: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49BCu;
        goto label_2b49bc;
    }
    ctx->pc = 0x2B49B4u;
    SET_GPR_U32(ctx, 31, 0x2B49BCu);
    ctx->pc = 0x2B49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49B4u;
    // 0x2b49b8: 0x24080fa0  addiu       $t0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2B49B4u, 0x2B49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49BCu;
label_2b49bc:
    // 0x2b49bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b49bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b49c0:
    // 0x2b49c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2b49c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b49c4:
    // 0x2b49c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2b49c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b49c8:
    // 0x2b49c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2b49c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b49cc:
    // 0x2b49cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2b49ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b49d0:
    // 0x2b49d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2b49d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b49d4:
    // 0x2b49d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b49d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b49d8:
    // 0x2b49d8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2b49d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b49dc:
    // 0x2b49dc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2b49dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b49e0:
    // 0x2b49e0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2b49e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b49e4:
    // 0x2b49e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b49e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b49e8:
    // 0x2b49e8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b49ec:
    // 0x2b49ec: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b49ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b49f0:
    // 0x2b49f0: 0x3e00008  jr          $ra
label_2b49f4:
    if (ctx->pc == 0x2B49F4u) {
        ctx->pc = 0x2B49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F0u;
        // 0x2b49f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49F8u;
        goto label_fallthrough_0x2b49f0;
    }
    ctx->pc = 0x2B49F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F0u;
        // 0x2b49f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B49F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b49f0:
    ctx->pc = 0x2B49F8u;
}
