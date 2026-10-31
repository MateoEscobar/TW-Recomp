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

// Function: sub_003B42A8
// Address: 0x3b42a8 - 0x3b5440
void sub_003B42A8_0x3b42a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B42A8_0x3b42a8");
#endif

    switch (ctx->pc) {
        case 0x3b42a8u: goto label_3b42a8;
        case 0x3b42acu: goto label_3b42ac;
        case 0x3b42b0u: goto label_3b42b0;
        case 0x3b42b4u: goto label_3b42b4;
        case 0x3b42b8u: goto label_3b42b8;
        case 0x3b42bcu: goto label_3b42bc;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42c4u: goto label_3b42c4;
        case 0x3b42c8u: goto label_3b42c8;
        case 0x3b42ccu: goto label_3b42cc;
        case 0x3b42d0u: goto label_3b42d0;
        case 0x3b42d4u: goto label_3b42d4;
        case 0x3b42d8u: goto label_3b42d8;
        case 0x3b42dcu: goto label_3b42dc;
        case 0x3b42e0u: goto label_3b42e0;
        case 0x3b42e4u: goto label_3b42e4;
        case 0x3b42e8u: goto label_3b42e8;
        case 0x3b42ecu: goto label_3b42ec;
        case 0x3b42f0u: goto label_3b42f0;
        case 0x3b42f4u: goto label_3b42f4;
        case 0x3b42f8u: goto label_3b42f8;
        case 0x3b42fcu: goto label_3b42fc;
        case 0x3b4300u: goto label_3b4300;
        case 0x3b4304u: goto label_3b4304;
        case 0x3b4308u: goto label_3b4308;
        case 0x3b430cu: goto label_3b430c;
        case 0x3b4310u: goto label_3b4310;
        case 0x3b4314u: goto label_3b4314;
        case 0x3b4318u: goto label_3b4318;
        case 0x3b431cu: goto label_3b431c;
        case 0x3b4320u: goto label_3b4320;
        case 0x3b4324u: goto label_3b4324;
        case 0x3b4328u: goto label_3b4328;
        case 0x3b432cu: goto label_3b432c;
        case 0x3b4330u: goto label_3b4330;
        case 0x3b4334u: goto label_3b4334;
        case 0x3b4338u: goto label_3b4338;
        case 0x3b433cu: goto label_3b433c;
        case 0x3b4340u: goto label_3b4340;
        case 0x3b4344u: goto label_3b4344;
        case 0x3b4348u: goto label_3b4348;
        case 0x3b434cu: goto label_3b434c;
        case 0x3b4350u: goto label_3b4350;
        case 0x3b4354u: goto label_3b4354;
        case 0x3b4358u: goto label_3b4358;
        case 0x3b435cu: goto label_3b435c;
        case 0x3b4360u: goto label_3b4360;
        case 0x3b4364u: goto label_3b4364;
        case 0x3b4368u: goto label_3b4368;
        case 0x3b436cu: goto label_3b436c;
        case 0x3b4370u: goto label_3b4370;
        case 0x3b4374u: goto label_3b4374;
        case 0x3b4378u: goto label_3b4378;
        case 0x3b437cu: goto label_3b437c;
        case 0x3b4380u: goto label_3b4380;
        case 0x3b4384u: goto label_3b4384;
        case 0x3b4388u: goto label_3b4388;
        case 0x3b438cu: goto label_3b438c;
        case 0x3b4390u: goto label_3b4390;
        case 0x3b4394u: goto label_3b4394;
        case 0x3b4398u: goto label_3b4398;
        case 0x3b439cu: goto label_3b439c;
        case 0x3b43a0u: goto label_3b43a0;
        case 0x3b43a4u: goto label_3b43a4;
        case 0x3b43a8u: goto label_3b43a8;
        case 0x3b43acu: goto label_3b43ac;
        case 0x3b43b0u: goto label_3b43b0;
        case 0x3b43b4u: goto label_3b43b4;
        case 0x3b43b8u: goto label_3b43b8;
        case 0x3b43bcu: goto label_3b43bc;
        case 0x3b43c0u: goto label_3b43c0;
        case 0x3b43c4u: goto label_3b43c4;
        case 0x3b43c8u: goto label_3b43c8;
        case 0x3b43ccu: goto label_3b43cc;
        case 0x3b43d0u: goto label_3b43d0;
        case 0x3b43d4u: goto label_3b43d4;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b43dcu: goto label_3b43dc;
        case 0x3b43e0u: goto label_3b43e0;
        case 0x3b43e4u: goto label_3b43e4;
        case 0x3b43e8u: goto label_3b43e8;
        case 0x3b43ecu: goto label_3b43ec;
        case 0x3b43f0u: goto label_3b43f0;
        case 0x3b43f4u: goto label_3b43f4;
        case 0x3b43f8u: goto label_3b43f8;
        case 0x3b43fcu: goto label_3b43fc;
        case 0x3b4400u: goto label_3b4400;
        case 0x3b4404u: goto label_3b4404;
        case 0x3b4408u: goto label_3b4408;
        case 0x3b440cu: goto label_3b440c;
        case 0x3b4410u: goto label_3b4410;
        case 0x3b4414u: goto label_3b4414;
        case 0x3b4418u: goto label_3b4418;
        case 0x3b441cu: goto label_3b441c;
        case 0x3b4420u: goto label_3b4420;
        case 0x3b4424u: goto label_3b4424;
        case 0x3b4428u: goto label_3b4428;
        case 0x3b442cu: goto label_3b442c;
        case 0x3b4430u: goto label_3b4430;
        case 0x3b4434u: goto label_3b4434;
        case 0x3b4438u: goto label_3b4438;
        case 0x3b443cu: goto label_3b443c;
        case 0x3b4440u: goto label_3b4440;
        case 0x3b4444u: goto label_3b4444;
        case 0x3b4448u: goto label_3b4448;
        case 0x3b444cu: goto label_3b444c;
        case 0x3b4450u: goto label_3b4450;
        case 0x3b4454u: goto label_3b4454;
        case 0x3b4458u: goto label_3b4458;
        case 0x3b445cu: goto label_3b445c;
        case 0x3b4460u: goto label_3b4460;
        case 0x3b4464u: goto label_3b4464;
        case 0x3b4468u: goto label_3b4468;
        case 0x3b446cu: goto label_3b446c;
        case 0x3b4470u: goto label_3b4470;
        case 0x3b4474u: goto label_3b4474;
        case 0x3b4478u: goto label_3b4478;
        case 0x3b447cu: goto label_3b447c;
        case 0x3b4480u: goto label_3b4480;
        case 0x3b4484u: goto label_3b4484;
        case 0x3b4488u: goto label_3b4488;
        case 0x3b448cu: goto label_3b448c;
        case 0x3b4490u: goto label_3b4490;
        case 0x3b4494u: goto label_3b4494;
        case 0x3b4498u: goto label_3b4498;
        case 0x3b449cu: goto label_3b449c;
        case 0x3b44a0u: goto label_3b44a0;
        case 0x3b44a4u: goto label_3b44a4;
        case 0x3b44a8u: goto label_3b44a8;
        case 0x3b44acu: goto label_3b44ac;
        case 0x3b44b0u: goto label_3b44b0;
        case 0x3b44b4u: goto label_3b44b4;
        case 0x3b44b8u: goto label_3b44b8;
        case 0x3b44bcu: goto label_3b44bc;
        case 0x3b44c0u: goto label_3b44c0;
        case 0x3b44c4u: goto label_3b44c4;
        case 0x3b44c8u: goto label_3b44c8;
        case 0x3b44ccu: goto label_3b44cc;
        case 0x3b44d0u: goto label_3b44d0;
        case 0x3b44d4u: goto label_3b44d4;
        case 0x3b44d8u: goto label_3b44d8;
        case 0x3b44dcu: goto label_3b44dc;
        case 0x3b44e0u: goto label_3b44e0;
        case 0x3b44e4u: goto label_3b44e4;
        case 0x3b44e8u: goto label_3b44e8;
        case 0x3b44ecu: goto label_3b44ec;
        case 0x3b44f0u: goto label_3b44f0;
        case 0x3b44f4u: goto label_3b44f4;
        case 0x3b44f8u: goto label_3b44f8;
        case 0x3b44fcu: goto label_3b44fc;
        case 0x3b4500u: goto label_3b4500;
        case 0x3b4504u: goto label_3b4504;
        case 0x3b4508u: goto label_3b4508;
        case 0x3b450cu: goto label_3b450c;
        case 0x3b4510u: goto label_3b4510;
        case 0x3b4514u: goto label_3b4514;
        case 0x3b4518u: goto label_3b4518;
        case 0x3b451cu: goto label_3b451c;
        case 0x3b4520u: goto label_3b4520;
        case 0x3b4524u: goto label_3b4524;
        case 0x3b4528u: goto label_3b4528;
        case 0x3b452cu: goto label_3b452c;
        case 0x3b4530u: goto label_3b4530;
        case 0x3b4534u: goto label_3b4534;
        case 0x3b4538u: goto label_3b4538;
        case 0x3b453cu: goto label_3b453c;
        case 0x3b4540u: goto label_3b4540;
        case 0x3b4544u: goto label_3b4544;
        case 0x3b4548u: goto label_3b4548;
        case 0x3b454cu: goto label_3b454c;
        case 0x3b4550u: goto label_3b4550;
        case 0x3b4554u: goto label_3b4554;
        case 0x3b4558u: goto label_3b4558;
        case 0x3b455cu: goto label_3b455c;
        case 0x3b4560u: goto label_3b4560;
        case 0x3b4564u: goto label_3b4564;
        case 0x3b4568u: goto label_3b4568;
        case 0x3b456cu: goto label_3b456c;
        case 0x3b4570u: goto label_3b4570;
        case 0x3b4574u: goto label_3b4574;
        case 0x3b4578u: goto label_3b4578;
        case 0x3b457cu: goto label_3b457c;
        case 0x3b4580u: goto label_3b4580;
        case 0x3b4584u: goto label_3b4584;
        case 0x3b4588u: goto label_3b4588;
        case 0x3b458cu: goto label_3b458c;
        case 0x3b4590u: goto label_3b4590;
        case 0x3b4594u: goto label_3b4594;
        case 0x3b4598u: goto label_3b4598;
        case 0x3b459cu: goto label_3b459c;
        case 0x3b45a0u: goto label_3b45a0;
        case 0x3b45a4u: goto label_3b45a4;
        case 0x3b45a8u: goto label_3b45a8;
        case 0x3b45acu: goto label_3b45ac;
        case 0x3b45b0u: goto label_3b45b0;
        case 0x3b45b4u: goto label_3b45b4;
        case 0x3b45b8u: goto label_3b45b8;
        case 0x3b45bcu: goto label_3b45bc;
        case 0x3b45c0u: goto label_3b45c0;
        case 0x3b45c4u: goto label_3b45c4;
        case 0x3b45c8u: goto label_3b45c8;
        case 0x3b45ccu: goto label_3b45cc;
        case 0x3b45d0u: goto label_3b45d0;
        case 0x3b45d4u: goto label_3b45d4;
        case 0x3b45d8u: goto label_3b45d8;
        case 0x3b45dcu: goto label_3b45dc;
        case 0x3b45e0u: goto label_3b45e0;
        case 0x3b45e4u: goto label_3b45e4;
        case 0x3b45e8u: goto label_3b45e8;
        case 0x3b45ecu: goto label_3b45ec;
        case 0x3b45f0u: goto label_3b45f0;
        case 0x3b45f4u: goto label_3b45f4;
        case 0x3b45f8u: goto label_3b45f8;
        case 0x3b45fcu: goto label_3b45fc;
        case 0x3b4600u: goto label_3b4600;
        case 0x3b4604u: goto label_3b4604;
        case 0x3b4608u: goto label_3b4608;
        case 0x3b460cu: goto label_3b460c;
        case 0x3b4610u: goto label_3b4610;
        case 0x3b4614u: goto label_3b4614;
        case 0x3b4618u: goto label_3b4618;
        case 0x3b461cu: goto label_3b461c;
        case 0x3b4620u: goto label_3b4620;
        case 0x3b4624u: goto label_3b4624;
        case 0x3b4628u: goto label_3b4628;
        case 0x3b462cu: goto label_3b462c;
        case 0x3b4630u: goto label_3b4630;
        case 0x3b4634u: goto label_3b4634;
        case 0x3b4638u: goto label_3b4638;
        case 0x3b463cu: goto label_3b463c;
        case 0x3b4640u: goto label_3b4640;
        case 0x3b4644u: goto label_3b4644;
        case 0x3b4648u: goto label_3b4648;
        case 0x3b464cu: goto label_3b464c;
        case 0x3b4650u: goto label_3b4650;
        case 0x3b4654u: goto label_3b4654;
        case 0x3b4658u: goto label_3b4658;
        case 0x3b465cu: goto label_3b465c;
        case 0x3b4660u: goto label_3b4660;
        case 0x3b4664u: goto label_3b4664;
        case 0x3b4668u: goto label_3b4668;
        case 0x3b466cu: goto label_3b466c;
        case 0x3b4670u: goto label_3b4670;
        case 0x3b4674u: goto label_3b4674;
        case 0x3b4678u: goto label_3b4678;
        case 0x3b467cu: goto label_3b467c;
        case 0x3b4680u: goto label_3b4680;
        case 0x3b4684u: goto label_3b4684;
        case 0x3b4688u: goto label_3b4688;
        case 0x3b468cu: goto label_3b468c;
        case 0x3b4690u: goto label_3b4690;
        case 0x3b4694u: goto label_3b4694;
        case 0x3b4698u: goto label_3b4698;
        case 0x3b469cu: goto label_3b469c;
        case 0x3b46a0u: goto label_3b46a0;
        case 0x3b46a4u: goto label_3b46a4;
        case 0x3b46a8u: goto label_3b46a8;
        case 0x3b46acu: goto label_3b46ac;
        case 0x3b46b0u: goto label_3b46b0;
        case 0x3b46b4u: goto label_3b46b4;
        case 0x3b46b8u: goto label_3b46b8;
        case 0x3b46bcu: goto label_3b46bc;
        case 0x3b46c0u: goto label_3b46c0;
        case 0x3b46c4u: goto label_3b46c4;
        case 0x3b46c8u: goto label_3b46c8;
        case 0x3b46ccu: goto label_3b46cc;
        case 0x3b46d0u: goto label_3b46d0;
        case 0x3b46d4u: goto label_3b46d4;
        case 0x3b46d8u: goto label_3b46d8;
        case 0x3b46dcu: goto label_3b46dc;
        case 0x3b46e0u: goto label_3b46e0;
        case 0x3b46e4u: goto label_3b46e4;
        case 0x3b46e8u: goto label_3b46e8;
        case 0x3b46ecu: goto label_3b46ec;
        case 0x3b46f0u: goto label_3b46f0;
        case 0x3b46f4u: goto label_3b46f4;
        case 0x3b46f8u: goto label_3b46f8;
        case 0x3b46fcu: goto label_3b46fc;
        case 0x3b4700u: goto label_3b4700;
        case 0x3b4704u: goto label_3b4704;
        case 0x3b4708u: goto label_3b4708;
        case 0x3b470cu: goto label_3b470c;
        case 0x3b4710u: goto label_3b4710;
        case 0x3b4714u: goto label_3b4714;
        case 0x3b4718u: goto label_3b4718;
        case 0x3b471cu: goto label_3b471c;
        case 0x3b4720u: goto label_3b4720;
        case 0x3b4724u: goto label_3b4724;
        case 0x3b4728u: goto label_3b4728;
        case 0x3b472cu: goto label_3b472c;
        case 0x3b4730u: goto label_3b4730;
        case 0x3b4734u: goto label_3b4734;
        case 0x3b4738u: goto label_3b4738;
        case 0x3b473cu: goto label_3b473c;
        case 0x3b4740u: goto label_3b4740;
        case 0x3b4744u: goto label_3b4744;
        case 0x3b4748u: goto label_3b4748;
        case 0x3b474cu: goto label_3b474c;
        case 0x3b4750u: goto label_3b4750;
        case 0x3b4754u: goto label_3b4754;
        case 0x3b4758u: goto label_3b4758;
        case 0x3b475cu: goto label_3b475c;
        case 0x3b4760u: goto label_3b4760;
        case 0x3b4764u: goto label_3b4764;
        case 0x3b4768u: goto label_3b4768;
        case 0x3b476cu: goto label_3b476c;
        case 0x3b4770u: goto label_3b4770;
        case 0x3b4774u: goto label_3b4774;
        case 0x3b4778u: goto label_3b4778;
        case 0x3b477cu: goto label_3b477c;
        case 0x3b4780u: goto label_3b4780;
        case 0x3b4784u: goto label_3b4784;
        case 0x3b4788u: goto label_3b4788;
        case 0x3b478cu: goto label_3b478c;
        case 0x3b4790u: goto label_3b4790;
        case 0x3b4794u: goto label_3b4794;
        case 0x3b4798u: goto label_3b4798;
        case 0x3b479cu: goto label_3b479c;
        case 0x3b47a0u: goto label_3b47a0;
        case 0x3b47a4u: goto label_3b47a4;
        case 0x3b47a8u: goto label_3b47a8;
        case 0x3b47acu: goto label_3b47ac;
        case 0x3b47b0u: goto label_3b47b0;
        case 0x3b47b4u: goto label_3b47b4;
        case 0x3b47b8u: goto label_3b47b8;
        case 0x3b47bcu: goto label_3b47bc;
        case 0x3b47c0u: goto label_3b47c0;
        case 0x3b47c4u: goto label_3b47c4;
        case 0x3b47c8u: goto label_3b47c8;
        case 0x3b47ccu: goto label_3b47cc;
        case 0x3b47d0u: goto label_3b47d0;
        case 0x3b47d4u: goto label_3b47d4;
        case 0x3b47d8u: goto label_3b47d8;
        case 0x3b47dcu: goto label_3b47dc;
        case 0x3b47e0u: goto label_3b47e0;
        case 0x3b47e4u: goto label_3b47e4;
        case 0x3b47e8u: goto label_3b47e8;
        case 0x3b47ecu: goto label_3b47ec;
        case 0x3b47f0u: goto label_3b47f0;
        case 0x3b47f4u: goto label_3b47f4;
        case 0x3b47f8u: goto label_3b47f8;
        case 0x3b47fcu: goto label_3b47fc;
        case 0x3b4800u: goto label_3b4800;
        case 0x3b4804u: goto label_3b4804;
        case 0x3b4808u: goto label_3b4808;
        case 0x3b480cu: goto label_3b480c;
        case 0x3b4810u: goto label_3b4810;
        case 0x3b4814u: goto label_3b4814;
        case 0x3b4818u: goto label_3b4818;
        case 0x3b481cu: goto label_3b481c;
        case 0x3b4820u: goto label_3b4820;
        case 0x3b4824u: goto label_3b4824;
        case 0x3b4828u: goto label_3b4828;
        case 0x3b482cu: goto label_3b482c;
        case 0x3b4830u: goto label_3b4830;
        case 0x3b4834u: goto label_3b4834;
        case 0x3b4838u: goto label_3b4838;
        case 0x3b483cu: goto label_3b483c;
        case 0x3b4840u: goto label_3b4840;
        case 0x3b4844u: goto label_3b4844;
        case 0x3b4848u: goto label_3b4848;
        case 0x3b484cu: goto label_3b484c;
        case 0x3b4850u: goto label_3b4850;
        case 0x3b4854u: goto label_3b4854;
        case 0x3b4858u: goto label_3b4858;
        case 0x3b485cu: goto label_3b485c;
        case 0x3b4860u: goto label_3b4860;
        case 0x3b4864u: goto label_3b4864;
        case 0x3b4868u: goto label_3b4868;
        case 0x3b486cu: goto label_3b486c;
        case 0x3b4870u: goto label_3b4870;
        case 0x3b4874u: goto label_3b4874;
        case 0x3b4878u: goto label_3b4878;
        case 0x3b487cu: goto label_3b487c;
        case 0x3b4880u: goto label_3b4880;
        case 0x3b4884u: goto label_3b4884;
        case 0x3b4888u: goto label_3b4888;
        case 0x3b488cu: goto label_3b488c;
        case 0x3b4890u: goto label_3b4890;
        case 0x3b4894u: goto label_3b4894;
        case 0x3b4898u: goto label_3b4898;
        case 0x3b489cu: goto label_3b489c;
        case 0x3b48a0u: goto label_3b48a0;
        case 0x3b48a4u: goto label_3b48a4;
        case 0x3b48a8u: goto label_3b48a8;
        case 0x3b48acu: goto label_3b48ac;
        case 0x3b48b0u: goto label_3b48b0;
        case 0x3b48b4u: goto label_3b48b4;
        case 0x3b48b8u: goto label_3b48b8;
        case 0x3b48bcu: goto label_3b48bc;
        case 0x3b48c0u: goto label_3b48c0;
        case 0x3b48c4u: goto label_3b48c4;
        case 0x3b48c8u: goto label_3b48c8;
        case 0x3b48ccu: goto label_3b48cc;
        case 0x3b48d0u: goto label_3b48d0;
        case 0x3b48d4u: goto label_3b48d4;
        case 0x3b48d8u: goto label_3b48d8;
        case 0x3b48dcu: goto label_3b48dc;
        case 0x3b48e0u: goto label_3b48e0;
        case 0x3b48e4u: goto label_3b48e4;
        case 0x3b48e8u: goto label_3b48e8;
        case 0x3b48ecu: goto label_3b48ec;
        case 0x3b48f0u: goto label_3b48f0;
        case 0x3b48f4u: goto label_3b48f4;
        case 0x3b48f8u: goto label_3b48f8;
        case 0x3b48fcu: goto label_3b48fc;
        case 0x3b4900u: goto label_3b4900;
        case 0x3b4904u: goto label_3b4904;
        case 0x3b4908u: goto label_3b4908;
        case 0x3b490cu: goto label_3b490c;
        case 0x3b4910u: goto label_3b4910;
        case 0x3b4914u: goto label_3b4914;
        case 0x3b4918u: goto label_3b4918;
        case 0x3b491cu: goto label_3b491c;
        case 0x3b4920u: goto label_3b4920;
        case 0x3b4924u: goto label_3b4924;
        case 0x3b4928u: goto label_3b4928;
        case 0x3b492cu: goto label_3b492c;
        case 0x3b4930u: goto label_3b4930;
        case 0x3b4934u: goto label_3b4934;
        case 0x3b4938u: goto label_3b4938;
        case 0x3b493cu: goto label_3b493c;
        case 0x3b4940u: goto label_3b4940;
        case 0x3b4944u: goto label_3b4944;
        case 0x3b4948u: goto label_3b4948;
        case 0x3b494cu: goto label_3b494c;
        case 0x3b4950u: goto label_3b4950;
        case 0x3b4954u: goto label_3b4954;
        case 0x3b4958u: goto label_3b4958;
        case 0x3b495cu: goto label_3b495c;
        case 0x3b4960u: goto label_3b4960;
        case 0x3b4964u: goto label_3b4964;
        case 0x3b4968u: goto label_3b4968;
        case 0x3b496cu: goto label_3b496c;
        case 0x3b4970u: goto label_3b4970;
        case 0x3b4974u: goto label_3b4974;
        case 0x3b4978u: goto label_3b4978;
        case 0x3b497cu: goto label_3b497c;
        case 0x3b4980u: goto label_3b4980;
        case 0x3b4984u: goto label_3b4984;
        case 0x3b4988u: goto label_3b4988;
        case 0x3b498cu: goto label_3b498c;
        case 0x3b4990u: goto label_3b4990;
        case 0x3b4994u: goto label_3b4994;
        case 0x3b4998u: goto label_3b4998;
        case 0x3b499cu: goto label_3b499c;
        case 0x3b49a0u: goto label_3b49a0;
        case 0x3b49a4u: goto label_3b49a4;
        case 0x3b49a8u: goto label_3b49a8;
        case 0x3b49acu: goto label_3b49ac;
        case 0x3b49b0u: goto label_3b49b0;
        case 0x3b49b4u: goto label_3b49b4;
        case 0x3b49b8u: goto label_3b49b8;
        case 0x3b49bcu: goto label_3b49bc;
        case 0x3b49c0u: goto label_3b49c0;
        case 0x3b49c4u: goto label_3b49c4;
        case 0x3b49c8u: goto label_3b49c8;
        case 0x3b49ccu: goto label_3b49cc;
        case 0x3b49d0u: goto label_3b49d0;
        case 0x3b49d4u: goto label_3b49d4;
        case 0x3b49d8u: goto label_3b49d8;
        case 0x3b49dcu: goto label_3b49dc;
        case 0x3b49e0u: goto label_3b49e0;
        case 0x3b49e4u: goto label_3b49e4;
        case 0x3b49e8u: goto label_3b49e8;
        case 0x3b49ecu: goto label_3b49ec;
        case 0x3b49f0u: goto label_3b49f0;
        case 0x3b49f4u: goto label_3b49f4;
        case 0x3b49f8u: goto label_3b49f8;
        case 0x3b49fcu: goto label_3b49fc;
        case 0x3b4a00u: goto label_3b4a00;
        case 0x3b4a04u: goto label_3b4a04;
        case 0x3b4a08u: goto label_3b4a08;
        case 0x3b4a0cu: goto label_3b4a0c;
        case 0x3b4a10u: goto label_3b4a10;
        case 0x3b4a14u: goto label_3b4a14;
        case 0x3b4a18u: goto label_3b4a18;
        case 0x3b4a1cu: goto label_3b4a1c;
        case 0x3b4a20u: goto label_3b4a20;
        case 0x3b4a24u: goto label_3b4a24;
        case 0x3b4a28u: goto label_3b4a28;
        case 0x3b4a2cu: goto label_3b4a2c;
        case 0x3b4a30u: goto label_3b4a30;
        case 0x3b4a34u: goto label_3b4a34;
        case 0x3b4a38u: goto label_3b4a38;
        case 0x3b4a3cu: goto label_3b4a3c;
        case 0x3b4a40u: goto label_3b4a40;
        case 0x3b4a44u: goto label_3b4a44;
        case 0x3b4a48u: goto label_3b4a48;
        case 0x3b4a4cu: goto label_3b4a4c;
        case 0x3b4a50u: goto label_3b4a50;
        case 0x3b4a54u: goto label_3b4a54;
        case 0x3b4a58u: goto label_3b4a58;
        case 0x3b4a5cu: goto label_3b4a5c;
        case 0x3b4a60u: goto label_3b4a60;
        case 0x3b4a64u: goto label_3b4a64;
        case 0x3b4a68u: goto label_3b4a68;
        case 0x3b4a6cu: goto label_3b4a6c;
        case 0x3b4a70u: goto label_3b4a70;
        case 0x3b4a74u: goto label_3b4a74;
        case 0x3b4a78u: goto label_3b4a78;
        case 0x3b4a7cu: goto label_3b4a7c;
        case 0x3b4a80u: goto label_3b4a80;
        case 0x3b4a84u: goto label_3b4a84;
        case 0x3b4a88u: goto label_3b4a88;
        case 0x3b4a8cu: goto label_3b4a8c;
        case 0x3b4a90u: goto label_3b4a90;
        case 0x3b4a94u: goto label_3b4a94;
        case 0x3b4a98u: goto label_3b4a98;
        case 0x3b4a9cu: goto label_3b4a9c;
        case 0x3b4aa0u: goto label_3b4aa0;
        case 0x3b4aa4u: goto label_3b4aa4;
        case 0x3b4aa8u: goto label_3b4aa8;
        case 0x3b4aacu: goto label_3b4aac;
        case 0x3b4ab0u: goto label_3b4ab0;
        case 0x3b4ab4u: goto label_3b4ab4;
        case 0x3b4ab8u: goto label_3b4ab8;
        case 0x3b4abcu: goto label_3b4abc;
        case 0x3b4ac0u: goto label_3b4ac0;
        case 0x3b4ac4u: goto label_3b4ac4;
        case 0x3b4ac8u: goto label_3b4ac8;
        case 0x3b4accu: goto label_3b4acc;
        case 0x3b4ad0u: goto label_3b4ad0;
        case 0x3b4ad4u: goto label_3b4ad4;
        case 0x3b4ad8u: goto label_3b4ad8;
        case 0x3b4adcu: goto label_3b4adc;
        case 0x3b4ae0u: goto label_3b4ae0;
        case 0x3b4ae4u: goto label_3b4ae4;
        case 0x3b4ae8u: goto label_3b4ae8;
        case 0x3b4aecu: goto label_3b4aec;
        case 0x3b4af0u: goto label_3b4af0;
        case 0x3b4af4u: goto label_3b4af4;
        case 0x3b4af8u: goto label_3b4af8;
        case 0x3b4afcu: goto label_3b4afc;
        case 0x3b4b00u: goto label_3b4b00;
        case 0x3b4b04u: goto label_3b4b04;
        case 0x3b4b08u: goto label_3b4b08;
        case 0x3b4b0cu: goto label_3b4b0c;
        case 0x3b4b10u: goto label_3b4b10;
        case 0x3b4b14u: goto label_3b4b14;
        case 0x3b4b18u: goto label_3b4b18;
        case 0x3b4b1cu: goto label_3b4b1c;
        case 0x3b4b20u: goto label_3b4b20;
        case 0x3b4b24u: goto label_3b4b24;
        case 0x3b4b28u: goto label_3b4b28;
        case 0x3b4b2cu: goto label_3b4b2c;
        case 0x3b4b30u: goto label_3b4b30;
        case 0x3b4b34u: goto label_3b4b34;
        case 0x3b4b38u: goto label_3b4b38;
        case 0x3b4b3cu: goto label_3b4b3c;
        case 0x3b4b40u: goto label_3b4b40;
        case 0x3b4b44u: goto label_3b4b44;
        case 0x3b4b48u: goto label_3b4b48;
        case 0x3b4b4cu: goto label_3b4b4c;
        case 0x3b4b50u: goto label_3b4b50;
        case 0x3b4b54u: goto label_3b4b54;
        case 0x3b4b58u: goto label_3b4b58;
        case 0x3b4b5cu: goto label_3b4b5c;
        case 0x3b4b60u: goto label_3b4b60;
        case 0x3b4b64u: goto label_3b4b64;
        case 0x3b4b68u: goto label_3b4b68;
        case 0x3b4b6cu: goto label_3b4b6c;
        case 0x3b4b70u: goto label_3b4b70;
        case 0x3b4b74u: goto label_3b4b74;
        case 0x3b4b78u: goto label_3b4b78;
        case 0x3b4b7cu: goto label_3b4b7c;
        case 0x3b4b80u: goto label_3b4b80;
        case 0x3b4b84u: goto label_3b4b84;
        case 0x3b4b88u: goto label_3b4b88;
        case 0x3b4b8cu: goto label_3b4b8c;
        case 0x3b4b90u: goto label_3b4b90;
        case 0x3b4b94u: goto label_3b4b94;
        case 0x3b4b98u: goto label_3b4b98;
        case 0x3b4b9cu: goto label_3b4b9c;
        case 0x3b4ba0u: goto label_3b4ba0;
        case 0x3b4ba4u: goto label_3b4ba4;
        case 0x3b4ba8u: goto label_3b4ba8;
        case 0x3b4bacu: goto label_3b4bac;
        case 0x3b4bb0u: goto label_3b4bb0;
        case 0x3b4bb4u: goto label_3b4bb4;
        case 0x3b4bb8u: goto label_3b4bb8;
        case 0x3b4bbcu: goto label_3b4bbc;
        case 0x3b4bc0u: goto label_3b4bc0;
        case 0x3b4bc4u: goto label_3b4bc4;
        case 0x3b4bc8u: goto label_3b4bc8;
        case 0x3b4bccu: goto label_3b4bcc;
        case 0x3b4bd0u: goto label_3b4bd0;
        case 0x3b4bd4u: goto label_3b4bd4;
        case 0x3b4bd8u: goto label_3b4bd8;
        case 0x3b4bdcu: goto label_3b4bdc;
        case 0x3b4be0u: goto label_3b4be0;
        case 0x3b4be4u: goto label_3b4be4;
        case 0x3b4be8u: goto label_3b4be8;
        case 0x3b4becu: goto label_3b4bec;
        case 0x3b4bf0u: goto label_3b4bf0;
        case 0x3b4bf4u: goto label_3b4bf4;
        case 0x3b4bf8u: goto label_3b4bf8;
        case 0x3b4bfcu: goto label_3b4bfc;
        case 0x3b4c00u: goto label_3b4c00;
        case 0x3b4c04u: goto label_3b4c04;
        case 0x3b4c08u: goto label_3b4c08;
        case 0x3b4c0cu: goto label_3b4c0c;
        case 0x3b4c10u: goto label_3b4c10;
        case 0x3b4c14u: goto label_3b4c14;
        case 0x3b4c18u: goto label_3b4c18;
        case 0x3b4c1cu: goto label_3b4c1c;
        case 0x3b4c20u: goto label_3b4c20;
        case 0x3b4c24u: goto label_3b4c24;
        case 0x3b4c28u: goto label_3b4c28;
        case 0x3b4c2cu: goto label_3b4c2c;
        case 0x3b4c30u: goto label_3b4c30;
        case 0x3b4c34u: goto label_3b4c34;
        case 0x3b4c38u: goto label_3b4c38;
        case 0x3b4c3cu: goto label_3b4c3c;
        case 0x3b4c40u: goto label_3b4c40;
        case 0x3b4c44u: goto label_3b4c44;
        case 0x3b4c48u: goto label_3b4c48;
        case 0x3b4c4cu: goto label_3b4c4c;
        case 0x3b4c50u: goto label_3b4c50;
        case 0x3b4c54u: goto label_3b4c54;
        case 0x3b4c58u: goto label_3b4c58;
        case 0x3b4c5cu: goto label_3b4c5c;
        case 0x3b4c60u: goto label_3b4c60;
        case 0x3b4c64u: goto label_3b4c64;
        case 0x3b4c68u: goto label_3b4c68;
        case 0x3b4c6cu: goto label_3b4c6c;
        case 0x3b4c70u: goto label_3b4c70;
        case 0x3b4c74u: goto label_3b4c74;
        case 0x3b4c78u: goto label_3b4c78;
        case 0x3b4c7cu: goto label_3b4c7c;
        case 0x3b4c80u: goto label_3b4c80;
        case 0x3b4c84u: goto label_3b4c84;
        case 0x3b4c88u: goto label_3b4c88;
        case 0x3b4c8cu: goto label_3b4c8c;
        case 0x3b4c90u: goto label_3b4c90;
        case 0x3b4c94u: goto label_3b4c94;
        case 0x3b4c98u: goto label_3b4c98;
        case 0x3b4c9cu: goto label_3b4c9c;
        case 0x3b4ca0u: goto label_3b4ca0;
        case 0x3b4ca4u: goto label_3b4ca4;
        case 0x3b4ca8u: goto label_3b4ca8;
        case 0x3b4cacu: goto label_3b4cac;
        case 0x3b4cb0u: goto label_3b4cb0;
        case 0x3b4cb4u: goto label_3b4cb4;
        case 0x3b4cb8u: goto label_3b4cb8;
        case 0x3b4cbcu: goto label_3b4cbc;
        case 0x3b4cc0u: goto label_3b4cc0;
        case 0x3b4cc4u: goto label_3b4cc4;
        case 0x3b4cc8u: goto label_3b4cc8;
        case 0x3b4cccu: goto label_3b4ccc;
        case 0x3b4cd0u: goto label_3b4cd0;
        case 0x3b4cd4u: goto label_3b4cd4;
        case 0x3b4cd8u: goto label_3b4cd8;
        case 0x3b4cdcu: goto label_3b4cdc;
        case 0x3b4ce0u: goto label_3b4ce0;
        case 0x3b4ce4u: goto label_3b4ce4;
        case 0x3b4ce8u: goto label_3b4ce8;
        case 0x3b4cecu: goto label_3b4cec;
        case 0x3b4cf0u: goto label_3b4cf0;
        case 0x3b4cf4u: goto label_3b4cf4;
        case 0x3b4cf8u: goto label_3b4cf8;
        case 0x3b4cfcu: goto label_3b4cfc;
        case 0x3b4d00u: goto label_3b4d00;
        case 0x3b4d04u: goto label_3b4d04;
        case 0x3b4d08u: goto label_3b4d08;
        case 0x3b4d0cu: goto label_3b4d0c;
        case 0x3b4d10u: goto label_3b4d10;
        case 0x3b4d14u: goto label_3b4d14;
        case 0x3b4d18u: goto label_3b4d18;
        case 0x3b4d1cu: goto label_3b4d1c;
        case 0x3b4d20u: goto label_3b4d20;
        case 0x3b4d24u: goto label_3b4d24;
        case 0x3b4d28u: goto label_3b4d28;
        case 0x3b4d2cu: goto label_3b4d2c;
        case 0x3b4d30u: goto label_3b4d30;
        case 0x3b4d34u: goto label_3b4d34;
        case 0x3b4d38u: goto label_3b4d38;
        case 0x3b4d3cu: goto label_3b4d3c;
        case 0x3b4d40u: goto label_3b4d40;
        case 0x3b4d44u: goto label_3b4d44;
        case 0x3b4d48u: goto label_3b4d48;
        case 0x3b4d4cu: goto label_3b4d4c;
        case 0x3b4d50u: goto label_3b4d50;
        case 0x3b4d54u: goto label_3b4d54;
        case 0x3b4d58u: goto label_3b4d58;
        case 0x3b4d5cu: goto label_3b4d5c;
        case 0x3b4d60u: goto label_3b4d60;
        case 0x3b4d64u: goto label_3b4d64;
        case 0x3b4d68u: goto label_3b4d68;
        case 0x3b4d6cu: goto label_3b4d6c;
        case 0x3b4d70u: goto label_3b4d70;
        case 0x3b4d74u: goto label_3b4d74;
        case 0x3b4d78u: goto label_3b4d78;
        case 0x3b4d7cu: goto label_3b4d7c;
        case 0x3b4d80u: goto label_3b4d80;
        case 0x3b4d84u: goto label_3b4d84;
        case 0x3b4d88u: goto label_3b4d88;
        case 0x3b4d8cu: goto label_3b4d8c;
        case 0x3b4d90u: goto label_3b4d90;
        case 0x3b4d94u: goto label_3b4d94;
        case 0x3b4d98u: goto label_3b4d98;
        case 0x3b4d9cu: goto label_3b4d9c;
        case 0x3b4da0u: goto label_3b4da0;
        case 0x3b4da4u: goto label_3b4da4;
        case 0x3b4da8u: goto label_3b4da8;
        case 0x3b4dacu: goto label_3b4dac;
        case 0x3b4db0u: goto label_3b4db0;
        case 0x3b4db4u: goto label_3b4db4;
        case 0x3b4db8u: goto label_3b4db8;
        case 0x3b4dbcu: goto label_3b4dbc;
        case 0x3b4dc0u: goto label_3b4dc0;
        case 0x3b4dc4u: goto label_3b4dc4;
        case 0x3b4dc8u: goto label_3b4dc8;
        case 0x3b4dccu: goto label_3b4dcc;
        case 0x3b4dd0u: goto label_3b4dd0;
        case 0x3b4dd4u: goto label_3b4dd4;
        case 0x3b4dd8u: goto label_3b4dd8;
        case 0x3b4ddcu: goto label_3b4ddc;
        case 0x3b4de0u: goto label_3b4de0;
        case 0x3b4de4u: goto label_3b4de4;
        case 0x3b4de8u: goto label_3b4de8;
        case 0x3b4decu: goto label_3b4dec;
        case 0x3b4df0u: goto label_3b4df0;
        case 0x3b4df4u: goto label_3b4df4;
        case 0x3b4df8u: goto label_3b4df8;
        case 0x3b4dfcu: goto label_3b4dfc;
        case 0x3b4e00u: goto label_3b4e00;
        case 0x3b4e04u: goto label_3b4e04;
        case 0x3b4e08u: goto label_3b4e08;
        case 0x3b4e0cu: goto label_3b4e0c;
        case 0x3b4e10u: goto label_3b4e10;
        case 0x3b4e14u: goto label_3b4e14;
        case 0x3b4e18u: goto label_3b4e18;
        case 0x3b4e1cu: goto label_3b4e1c;
        case 0x3b4e20u: goto label_3b4e20;
        case 0x3b4e24u: goto label_3b4e24;
        case 0x3b4e28u: goto label_3b4e28;
        case 0x3b4e2cu: goto label_3b4e2c;
        case 0x3b4e30u: goto label_3b4e30;
        case 0x3b4e34u: goto label_3b4e34;
        case 0x3b4e38u: goto label_3b4e38;
        case 0x3b4e3cu: goto label_3b4e3c;
        case 0x3b4e40u: goto label_3b4e40;
        case 0x3b4e44u: goto label_3b4e44;
        case 0x3b4e48u: goto label_3b4e48;
        case 0x3b4e4cu: goto label_3b4e4c;
        case 0x3b4e50u: goto label_3b4e50;
        case 0x3b4e54u: goto label_3b4e54;
        case 0x3b4e58u: goto label_3b4e58;
        case 0x3b4e5cu: goto label_3b4e5c;
        case 0x3b4e60u: goto label_3b4e60;
        case 0x3b4e64u: goto label_3b4e64;
        case 0x3b4e68u: goto label_3b4e68;
        case 0x3b4e6cu: goto label_3b4e6c;
        case 0x3b4e70u: goto label_3b4e70;
        case 0x3b4e74u: goto label_3b4e74;
        case 0x3b4e78u: goto label_3b4e78;
        case 0x3b4e7cu: goto label_3b4e7c;
        case 0x3b4e80u: goto label_3b4e80;
        case 0x3b4e84u: goto label_3b4e84;
        case 0x3b4e88u: goto label_3b4e88;
        case 0x3b4e8cu: goto label_3b4e8c;
        case 0x3b4e90u: goto label_3b4e90;
        case 0x3b4e94u: goto label_3b4e94;
        case 0x3b4e98u: goto label_3b4e98;
        case 0x3b4e9cu: goto label_3b4e9c;
        case 0x3b4ea0u: goto label_3b4ea0;
        case 0x3b4ea4u: goto label_3b4ea4;
        case 0x3b4ea8u: goto label_3b4ea8;
        case 0x3b4eacu: goto label_3b4eac;
        case 0x3b4eb0u: goto label_3b4eb0;
        case 0x3b4eb4u: goto label_3b4eb4;
        case 0x3b4eb8u: goto label_3b4eb8;
        case 0x3b4ebcu: goto label_3b4ebc;
        case 0x3b4ec0u: goto label_3b4ec0;
        case 0x3b4ec4u: goto label_3b4ec4;
        case 0x3b4ec8u: goto label_3b4ec8;
        case 0x3b4eccu: goto label_3b4ecc;
        case 0x3b4ed0u: goto label_3b4ed0;
        case 0x3b4ed4u: goto label_3b4ed4;
        case 0x3b4ed8u: goto label_3b4ed8;
        case 0x3b4edcu: goto label_3b4edc;
        case 0x3b4ee0u: goto label_3b4ee0;
        case 0x3b4ee4u: goto label_3b4ee4;
        case 0x3b4ee8u: goto label_3b4ee8;
        case 0x3b4eecu: goto label_3b4eec;
        case 0x3b4ef0u: goto label_3b4ef0;
        case 0x3b4ef4u: goto label_3b4ef4;
        case 0x3b4ef8u: goto label_3b4ef8;
        case 0x3b4efcu: goto label_3b4efc;
        case 0x3b4f00u: goto label_3b4f00;
        case 0x3b4f04u: goto label_3b4f04;
        case 0x3b4f08u: goto label_3b4f08;
        case 0x3b4f0cu: goto label_3b4f0c;
        case 0x3b4f10u: goto label_3b4f10;
        case 0x3b4f14u: goto label_3b4f14;
        case 0x3b4f18u: goto label_3b4f18;
        case 0x3b4f1cu: goto label_3b4f1c;
        case 0x3b4f20u: goto label_3b4f20;
        case 0x3b4f24u: goto label_3b4f24;
        case 0x3b4f28u: goto label_3b4f28;
        case 0x3b4f2cu: goto label_3b4f2c;
        case 0x3b4f30u: goto label_3b4f30;
        case 0x3b4f34u: goto label_3b4f34;
        case 0x3b4f38u: goto label_3b4f38;
        case 0x3b4f3cu: goto label_3b4f3c;
        case 0x3b4f40u: goto label_3b4f40;
        case 0x3b4f44u: goto label_3b4f44;
        case 0x3b4f48u: goto label_3b4f48;
        case 0x3b4f4cu: goto label_3b4f4c;
        case 0x3b4f50u: goto label_3b4f50;
        case 0x3b4f54u: goto label_3b4f54;
        case 0x3b4f58u: goto label_3b4f58;
        case 0x3b4f5cu: goto label_3b4f5c;
        case 0x3b4f60u: goto label_3b4f60;
        case 0x3b4f64u: goto label_3b4f64;
        case 0x3b4f68u: goto label_3b4f68;
        case 0x3b4f6cu: goto label_3b4f6c;
        case 0x3b4f70u: goto label_3b4f70;
        case 0x3b4f74u: goto label_3b4f74;
        case 0x3b4f78u: goto label_3b4f78;
        case 0x3b4f7cu: goto label_3b4f7c;
        case 0x3b4f80u: goto label_3b4f80;
        case 0x3b4f84u: goto label_3b4f84;
        case 0x3b4f88u: goto label_3b4f88;
        case 0x3b4f8cu: goto label_3b4f8c;
        case 0x3b4f90u: goto label_3b4f90;
        case 0x3b4f94u: goto label_3b4f94;
        case 0x3b4f98u: goto label_3b4f98;
        case 0x3b4f9cu: goto label_3b4f9c;
        case 0x3b4fa0u: goto label_3b4fa0;
        case 0x3b4fa4u: goto label_3b4fa4;
        case 0x3b4fa8u: goto label_3b4fa8;
        case 0x3b4facu: goto label_3b4fac;
        case 0x3b4fb0u: goto label_3b4fb0;
        case 0x3b4fb4u: goto label_3b4fb4;
        case 0x3b4fb8u: goto label_3b4fb8;
        case 0x3b4fbcu: goto label_3b4fbc;
        case 0x3b4fc0u: goto label_3b4fc0;
        case 0x3b4fc4u: goto label_3b4fc4;
        case 0x3b4fc8u: goto label_3b4fc8;
        case 0x3b4fccu: goto label_3b4fcc;
        case 0x3b4fd0u: goto label_3b4fd0;
        case 0x3b4fd4u: goto label_3b4fd4;
        case 0x3b4fd8u: goto label_3b4fd8;
        case 0x3b4fdcu: goto label_3b4fdc;
        case 0x3b4fe0u: goto label_3b4fe0;
        case 0x3b4fe4u: goto label_3b4fe4;
        case 0x3b4fe8u: goto label_3b4fe8;
        case 0x3b4fecu: goto label_3b4fec;
        case 0x3b4ff0u: goto label_3b4ff0;
        case 0x3b4ff4u: goto label_3b4ff4;
        case 0x3b4ff8u: goto label_3b4ff8;
        case 0x3b4ffcu: goto label_3b4ffc;
        case 0x3b5000u: goto label_3b5000;
        case 0x3b5004u: goto label_3b5004;
        case 0x3b5008u: goto label_3b5008;
        case 0x3b500cu: goto label_3b500c;
        case 0x3b5010u: goto label_3b5010;
        case 0x3b5014u: goto label_3b5014;
        case 0x3b5018u: goto label_3b5018;
        case 0x3b501cu: goto label_3b501c;
        case 0x3b5020u: goto label_3b5020;
        case 0x3b5024u: goto label_3b5024;
        case 0x3b5028u: goto label_3b5028;
        case 0x3b502cu: goto label_3b502c;
        case 0x3b5030u: goto label_3b5030;
        case 0x3b5034u: goto label_3b5034;
        case 0x3b5038u: goto label_3b5038;
        case 0x3b503cu: goto label_3b503c;
        case 0x3b5040u: goto label_3b5040;
        case 0x3b5044u: goto label_3b5044;
        case 0x3b5048u: goto label_3b5048;
        case 0x3b504cu: goto label_3b504c;
        case 0x3b5050u: goto label_3b5050;
        case 0x3b5054u: goto label_3b5054;
        case 0x3b5058u: goto label_3b5058;
        case 0x3b505cu: goto label_3b505c;
        case 0x3b5060u: goto label_3b5060;
        case 0x3b5064u: goto label_3b5064;
        case 0x3b5068u: goto label_3b5068;
        case 0x3b506cu: goto label_3b506c;
        case 0x3b5070u: goto label_3b5070;
        case 0x3b5074u: goto label_3b5074;
        case 0x3b5078u: goto label_3b5078;
        case 0x3b507cu: goto label_3b507c;
        case 0x3b5080u: goto label_3b5080;
        case 0x3b5084u: goto label_3b5084;
        case 0x3b5088u: goto label_3b5088;
        case 0x3b508cu: goto label_3b508c;
        case 0x3b5090u: goto label_3b5090;
        case 0x3b5094u: goto label_3b5094;
        case 0x3b5098u: goto label_3b5098;
        case 0x3b509cu: goto label_3b509c;
        case 0x3b50a0u: goto label_3b50a0;
        case 0x3b50a4u: goto label_3b50a4;
        case 0x3b50a8u: goto label_3b50a8;
        case 0x3b50acu: goto label_3b50ac;
        case 0x3b50b0u: goto label_3b50b0;
        case 0x3b50b4u: goto label_3b50b4;
        case 0x3b50b8u: goto label_3b50b8;
        case 0x3b50bcu: goto label_3b50bc;
        case 0x3b50c0u: goto label_3b50c0;
        case 0x3b50c4u: goto label_3b50c4;
        case 0x3b50c8u: goto label_3b50c8;
        case 0x3b50ccu: goto label_3b50cc;
        case 0x3b50d0u: goto label_3b50d0;
        case 0x3b50d4u: goto label_3b50d4;
        case 0x3b50d8u: goto label_3b50d8;
        case 0x3b50dcu: goto label_3b50dc;
        case 0x3b50e0u: goto label_3b50e0;
        case 0x3b50e4u: goto label_3b50e4;
        case 0x3b50e8u: goto label_3b50e8;
        case 0x3b50ecu: goto label_3b50ec;
        case 0x3b50f0u: goto label_3b50f0;
        case 0x3b50f4u: goto label_3b50f4;
        case 0x3b50f8u: goto label_3b50f8;
        case 0x3b50fcu: goto label_3b50fc;
        case 0x3b5100u: goto label_3b5100;
        case 0x3b5104u: goto label_3b5104;
        case 0x3b5108u: goto label_3b5108;
        case 0x3b510cu: goto label_3b510c;
        case 0x3b5110u: goto label_3b5110;
        case 0x3b5114u: goto label_3b5114;
        case 0x3b5118u: goto label_3b5118;
        case 0x3b511cu: goto label_3b511c;
        case 0x3b5120u: goto label_3b5120;
        case 0x3b5124u: goto label_3b5124;
        case 0x3b5128u: goto label_3b5128;
        case 0x3b512cu: goto label_3b512c;
        case 0x3b5130u: goto label_3b5130;
        case 0x3b5134u: goto label_3b5134;
        case 0x3b5138u: goto label_3b5138;
        case 0x3b513cu: goto label_3b513c;
        case 0x3b5140u: goto label_3b5140;
        case 0x3b5144u: goto label_3b5144;
        case 0x3b5148u: goto label_3b5148;
        case 0x3b514cu: goto label_3b514c;
        case 0x3b5150u: goto label_3b5150;
        case 0x3b5154u: goto label_3b5154;
        case 0x3b5158u: goto label_3b5158;
        case 0x3b515cu: goto label_3b515c;
        case 0x3b5160u: goto label_3b5160;
        case 0x3b5164u: goto label_3b5164;
        case 0x3b5168u: goto label_3b5168;
        case 0x3b516cu: goto label_3b516c;
        case 0x3b5170u: goto label_3b5170;
        case 0x3b5174u: goto label_3b5174;
        case 0x3b5178u: goto label_3b5178;
        case 0x3b517cu: goto label_3b517c;
        case 0x3b5180u: goto label_3b5180;
        case 0x3b5184u: goto label_3b5184;
        case 0x3b5188u: goto label_3b5188;
        case 0x3b518cu: goto label_3b518c;
        case 0x3b5190u: goto label_3b5190;
        case 0x3b5194u: goto label_3b5194;
        case 0x3b5198u: goto label_3b5198;
        case 0x3b519cu: goto label_3b519c;
        case 0x3b51a0u: goto label_3b51a0;
        case 0x3b51a4u: goto label_3b51a4;
        case 0x3b51a8u: goto label_3b51a8;
        case 0x3b51acu: goto label_3b51ac;
        case 0x3b51b0u: goto label_3b51b0;
        case 0x3b51b4u: goto label_3b51b4;
        case 0x3b51b8u: goto label_3b51b8;
        case 0x3b51bcu: goto label_3b51bc;
        case 0x3b51c0u: goto label_3b51c0;
        case 0x3b51c4u: goto label_3b51c4;
        case 0x3b51c8u: goto label_3b51c8;
        case 0x3b51ccu: goto label_3b51cc;
        case 0x3b51d0u: goto label_3b51d0;
        case 0x3b51d4u: goto label_3b51d4;
        case 0x3b51d8u: goto label_3b51d8;
        case 0x3b51dcu: goto label_3b51dc;
        case 0x3b51e0u: goto label_3b51e0;
        case 0x3b51e4u: goto label_3b51e4;
        case 0x3b51e8u: goto label_3b51e8;
        case 0x3b51ecu: goto label_3b51ec;
        case 0x3b51f0u: goto label_3b51f0;
        case 0x3b51f4u: goto label_3b51f4;
        case 0x3b51f8u: goto label_3b51f8;
        case 0x3b51fcu: goto label_3b51fc;
        case 0x3b5200u: goto label_3b5200;
        case 0x3b5204u: goto label_3b5204;
        case 0x3b5208u: goto label_3b5208;
        case 0x3b520cu: goto label_3b520c;
        case 0x3b5210u: goto label_3b5210;
        case 0x3b5214u: goto label_3b5214;
        case 0x3b5218u: goto label_3b5218;
        case 0x3b521cu: goto label_3b521c;
        case 0x3b5220u: goto label_3b5220;
        case 0x3b5224u: goto label_3b5224;
        case 0x3b5228u: goto label_3b5228;
        case 0x3b522cu: goto label_3b522c;
        case 0x3b5230u: goto label_3b5230;
        case 0x3b5234u: goto label_3b5234;
        case 0x3b5238u: goto label_3b5238;
        case 0x3b523cu: goto label_3b523c;
        case 0x3b5240u: goto label_3b5240;
        case 0x3b5244u: goto label_3b5244;
        case 0x3b5248u: goto label_3b5248;
        case 0x3b524cu: goto label_3b524c;
        case 0x3b5250u: goto label_3b5250;
        case 0x3b5254u: goto label_3b5254;
        case 0x3b5258u: goto label_3b5258;
        case 0x3b525cu: goto label_3b525c;
        case 0x3b5260u: goto label_3b5260;
        case 0x3b5264u: goto label_3b5264;
        case 0x3b5268u: goto label_3b5268;
        case 0x3b526cu: goto label_3b526c;
        case 0x3b5270u: goto label_3b5270;
        case 0x3b5274u: goto label_3b5274;
        case 0x3b5278u: goto label_3b5278;
        case 0x3b527cu: goto label_3b527c;
        case 0x3b5280u: goto label_3b5280;
        case 0x3b5284u: goto label_3b5284;
        case 0x3b5288u: goto label_3b5288;
        case 0x3b528cu: goto label_3b528c;
        case 0x3b5290u: goto label_3b5290;
        case 0x3b5294u: goto label_3b5294;
        case 0x3b5298u: goto label_3b5298;
        case 0x3b529cu: goto label_3b529c;
        case 0x3b52a0u: goto label_3b52a0;
        case 0x3b52a4u: goto label_3b52a4;
        case 0x3b52a8u: goto label_3b52a8;
        case 0x3b52acu: goto label_3b52ac;
        case 0x3b52b0u: goto label_3b52b0;
        case 0x3b52b4u: goto label_3b52b4;
        case 0x3b52b8u: goto label_3b52b8;
        case 0x3b52bcu: goto label_3b52bc;
        case 0x3b52c0u: goto label_3b52c0;
        case 0x3b52c4u: goto label_3b52c4;
        case 0x3b52c8u: goto label_3b52c8;
        case 0x3b52ccu: goto label_3b52cc;
        case 0x3b52d0u: goto label_3b52d0;
        case 0x3b52d4u: goto label_3b52d4;
        case 0x3b52d8u: goto label_3b52d8;
        case 0x3b52dcu: goto label_3b52dc;
        case 0x3b52e0u: goto label_3b52e0;
        case 0x3b52e4u: goto label_3b52e4;
        case 0x3b52e8u: goto label_3b52e8;
        case 0x3b52ecu: goto label_3b52ec;
        case 0x3b52f0u: goto label_3b52f0;
        case 0x3b52f4u: goto label_3b52f4;
        case 0x3b52f8u: goto label_3b52f8;
        case 0x3b52fcu: goto label_3b52fc;
        case 0x3b5300u: goto label_3b5300;
        case 0x3b5304u: goto label_3b5304;
        case 0x3b5308u: goto label_3b5308;
        case 0x3b530cu: goto label_3b530c;
        case 0x3b5310u: goto label_3b5310;
        case 0x3b5314u: goto label_3b5314;
        case 0x3b5318u: goto label_3b5318;
        case 0x3b531cu: goto label_3b531c;
        case 0x3b5320u: goto label_3b5320;
        case 0x3b5324u: goto label_3b5324;
        case 0x3b5328u: goto label_3b5328;
        case 0x3b532cu: goto label_3b532c;
        case 0x3b5330u: goto label_3b5330;
        case 0x3b5334u: goto label_3b5334;
        case 0x3b5338u: goto label_3b5338;
        case 0x3b533cu: goto label_3b533c;
        case 0x3b5340u: goto label_3b5340;
        case 0x3b5344u: goto label_3b5344;
        case 0x3b5348u: goto label_3b5348;
        case 0x3b534cu: goto label_3b534c;
        case 0x3b5350u: goto label_3b5350;
        case 0x3b5354u: goto label_3b5354;
        case 0x3b5358u: goto label_3b5358;
        case 0x3b535cu: goto label_3b535c;
        case 0x3b5360u: goto label_3b5360;
        case 0x3b5364u: goto label_3b5364;
        case 0x3b5368u: goto label_3b5368;
        case 0x3b536cu: goto label_3b536c;
        case 0x3b5370u: goto label_3b5370;
        case 0x3b5374u: goto label_3b5374;
        case 0x3b5378u: goto label_3b5378;
        case 0x3b537cu: goto label_3b537c;
        case 0x3b5380u: goto label_3b5380;
        case 0x3b5384u: goto label_3b5384;
        case 0x3b5388u: goto label_3b5388;
        case 0x3b538cu: goto label_3b538c;
        case 0x3b5390u: goto label_3b5390;
        case 0x3b5394u: goto label_3b5394;
        case 0x3b5398u: goto label_3b5398;
        case 0x3b539cu: goto label_3b539c;
        case 0x3b53a0u: goto label_3b53a0;
        case 0x3b53a4u: goto label_3b53a4;
        case 0x3b53a8u: goto label_3b53a8;
        case 0x3b53acu: goto label_3b53ac;
        case 0x3b53b0u: goto label_3b53b0;
        case 0x3b53b4u: goto label_3b53b4;
        case 0x3b53b8u: goto label_3b53b8;
        case 0x3b53bcu: goto label_3b53bc;
        case 0x3b53c0u: goto label_3b53c0;
        case 0x3b53c4u: goto label_3b53c4;
        case 0x3b53c8u: goto label_3b53c8;
        case 0x3b53ccu: goto label_3b53cc;
        case 0x3b53d0u: goto label_3b53d0;
        case 0x3b53d4u: goto label_3b53d4;
        case 0x3b53d8u: goto label_3b53d8;
        case 0x3b53dcu: goto label_3b53dc;
        case 0x3b53e0u: goto label_3b53e0;
        case 0x3b53e4u: goto label_3b53e4;
        case 0x3b53e8u: goto label_3b53e8;
        case 0x3b53ecu: goto label_3b53ec;
        case 0x3b53f0u: goto label_3b53f0;
        case 0x3b53f4u: goto label_3b53f4;
        case 0x3b53f8u: goto label_3b53f8;
        case 0x3b53fcu: goto label_3b53fc;
        case 0x3b5400u: goto label_3b5400;
        case 0x3b5404u: goto label_3b5404;
        case 0x3b5408u: goto label_3b5408;
        case 0x3b540cu: goto label_3b540c;
        case 0x3b5410u: goto label_3b5410;
        case 0x3b5414u: goto label_3b5414;
        case 0x3b5418u: goto label_3b5418;
        case 0x3b541cu: goto label_3b541c;
        case 0x3b5420u: goto label_3b5420;
        case 0x3b5424u: goto label_3b5424;
        case 0x3b5428u: goto label_3b5428;
        case 0x3b542cu: goto label_3b542c;
        case 0x3b5430u: goto label_3b5430;
        case 0x3b5434u: goto label_3b5434;
        case 0x3b5438u: goto label_3b5438;
        case 0x3b543cu: goto label_3b543c;
        default: break;
    }

    ctx->pc = 0x3b42a8u;

label_3b42a8:
    // 0x3b42a8: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3b42a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_3b42ac:
    // 0x3b42ac: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3b42acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_3b42b0:
    // 0x3b42b0: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3b42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_3b42b4:
    // 0x3b42b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b42b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b42b8:
    // 0x3b42b8: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x3b42b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_3b42bc:
    // 0x3b42bc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3b42bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b42c0:
    // 0x3b42c0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3b42c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_3b42c4:
    // 0x3b42c4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3b42c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b42c8:
    // 0x3b42c8: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3b42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_3b42cc:
    // 0x3b42cc: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3b42ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_3b42d0:
    // 0x3b42d0: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3b42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_3b42d4:
    // 0x3b42d4: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3b42d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_3b42d8:
    // 0x3b42d8: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3b42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_3b42dc:
    // 0x3b42dc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3b42dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_3b42e0:
    // 0x3b42e0: 0xe7bf0218  swc1        $f31, 0x218($sp)
    ctx->pc = 0x3b42e0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_3b42e4:
    // 0x3b42e4: 0xe7be0210  swc1        $f30, 0x210($sp)
    ctx->pc = 0x3b42e4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_3b42e8:
    // 0x3b42e8: 0xe7bd0208  swc1        $f29, 0x208($sp)
    ctx->pc = 0x3b42e8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_3b42ec:
    // 0x3b42ec: 0xe7bc0200  swc1        $f28, 0x200($sp)
    ctx->pc = 0x3b42ecu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_3b42f0:
    // 0x3b42f0: 0xe7bb01f8  swc1        $f27, 0x1F8($sp)
    ctx->pc = 0x3b42f0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_3b42f4:
    // 0x3b42f4: 0xe7ba01f0  swc1        $f26, 0x1F0($sp)
    ctx->pc = 0x3b42f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3b42f8:
    // 0x3b42f8: 0xe7b901e8  swc1        $f25, 0x1E8($sp)
    ctx->pc = 0x3b42f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_3b42fc:
    // 0x3b42fc: 0xe7b801e0  swc1        $f24, 0x1E0($sp)
    ctx->pc = 0x3b42fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_3b4300:
    // 0x3b4300: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3b4300u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3b4304:
    // 0x3b4304: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3b4304u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3b4308:
    // 0x3b4308: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3b4308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_3b430c:
    // 0x3b430c: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3b430cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_3b4310:
    // 0x3b4310: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3b4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3b4314:
    // 0x3b4314: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b4314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b4318:
    // 0x3b4318: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b431c:
    // 0x3b431c: 0x40f809  jalr        $v0
label_3b4320:
    if (ctx->pc == 0x3B4320u) {
        ctx->pc = 0x3B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B431Cu;
        // 0x3b4320: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4324u;
        goto label_3b4324;
    }
    ctx->pc = 0x3B431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4324u);
        ctx->pc = 0x3B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B431Cu;
        // 0x3b4320: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B431Cu, 0x3B4324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4324u;
label_3b4324:
    // 0x3b4324: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_3b4328:
    // 0x3b4328: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b432c:
    // 0x3b432c: 0x12020426  beq         $s0, $v0, . + 4 + (0x426 << 2)
label_3b4330:
    if (ctx->pc == 0x3B4330u) {
        ctx->pc = 0x3B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B432Cu;
        // 0x3b4330: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4334u;
        goto label_3b4334;
    }
    ctx->pc = 0x3B432Cu;
    {
        const bool branch_taken_0x3b432c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B432Cu;
        // 0x3b4330: 0x2e02000b  sltiu       $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b432c) {
            ctx->pc = 0x3B53C8u;
            goto label_3b53c8;
        }
    }
    ctx->pc = 0x3B4334u;
label_3b4334:
    // 0x3b4334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b4338:
    if (ctx->pc == 0x3B4338u) {
        ctx->pc = 0x3B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4334u;
        // 0x3b4338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B433Cu;
        goto label_3b433c;
    }
    ctx->pc = 0x3B4334u;
    {
        const bool branch_taken_0x3b4334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4334u;
        // 0x3b4338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4334) {
            ctx->pc = 0x3B434Cu;
            goto label_3b434c;
        }
    }
    ctx->pc = 0x3B433Cu;
label_3b433c:
    // 0x3b433c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3b4340:
    if (ctx->pc == 0x3B4340u) {
        ctx->pc = 0x3B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B433Cu;
        // 0x3b4340: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4344u;
        goto label_3b4344;
    }
    ctx->pc = 0x3B433Cu;
    {
        const bool branch_taken_0x3b433c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B433Cu;
        // 0x3b4340: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b433c) {
            ctx->pc = 0x3B4360u;
            goto label_3b4360;
        }
    }
    ctx->pc = 0x3B4344u;
label_3b4344:
    // 0x3b4344: 0x10000427  b           . + 4 + (0x427 << 2)
label_3b4348:
    if (ctx->pc == 0x3B4348u) {
        ctx->pc = 0x3B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4344u;
        // 0x3b4348: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B434Cu;
        goto label_3b434c;
    }
    ctx->pc = 0x3B4344u;
    {
        const bool branch_taken_0x3b4344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4344u;
        // 0x3b4348: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4344) {
            ctx->pc = 0x3B53E4u;
            goto label_3b53e4;
        }
    }
    ctx->pc = 0x3B434Cu;
label_3b434c:
    // 0x3b434c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3b434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3b4350:
    // 0x3b4350: 0x12020414  beq         $s0, $v0, . + 4 + (0x414 << 2)
label_3b4354:
    if (ctx->pc == 0x3B4354u) {
        ctx->pc = 0x3B4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4350u;
        // 0x3b4354: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4358u;
        goto label_3b4358;
    }
    ctx->pc = 0x3B4350u;
    {
        const bool branch_taken_0x3b4350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4350u;
        // 0x3b4354: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4350) {
            ctx->pc = 0x3B53A4u;
            goto label_3b53a4;
        }
    }
    ctx->pc = 0x3B4358u;
label_3b4358:
    // 0x3b4358: 0x10000422  b           . + 4 + (0x422 << 2)
label_3b435c:
    if (ctx->pc == 0x3B435Cu) {
        ctx->pc = 0x3B435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4358u;
        // 0x3b435c: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4360u;
        goto label_3b4360;
    }
    ctx->pc = 0x3B4358u;
    {
        const bool branch_taken_0x3b4358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4358u;
        // 0x3b435c: 0x7bb101a0  lq          $s1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4358) {
            ctx->pc = 0x3B53E4u;
            goto label_3b53e4;
        }
    }
    ctx->pc = 0x3B4360u;
label_3b4360:
    // 0x3b4360: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4364:
    // 0x3b4364: 0xc0ea12a  jal         func_3A84A8
label_3b4368:
    if (ctx->pc == 0x3B4368u) {
        ctx->pc = 0x3B4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4364u;
        // 0x3b4368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B436Cu;
        goto label_3b436c;
    }
    ctx->pc = 0x3B4364u;
    SET_GPR_U32(ctx, 31, 0x3B436Cu);
    ctx->pc = 0x3B4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4364u;
    // 0x3b4368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B4364u, 0x3B436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B436Cu;
label_3b436c:
    // 0x3b436c: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x3b436cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_3b4370:
    // 0x3b4370: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b4370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4374:
    // 0x3b4374: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4378:
    // 0x3b4378: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b4378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b437c:
    // 0x3b437c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b4380:
    // 0x3b4380: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b4380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b4384:
    // 0x3b4384: 0xc0ea12a  jal         func_3A84A8
label_3b4388:
    if (ctx->pc == 0x3B4388u) {
        ctx->pc = 0x3B4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4384u;
        // 0x3b4388: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B438Cu;
        goto label_3b438c;
    }
    ctx->pc = 0x3B4384u;
    SET_GPR_U32(ctx, 31, 0x3B438Cu);
    ctx->pc = 0x3B4388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4384u;
    // 0x3b4388: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B4384u, 0x3B438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B438Cu;
label_3b438c:
    // 0x3b438c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b438cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b4390:
    // 0x3b4390: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x3b4390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_3b4394:
    // 0x3b4394: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b4394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4398:
    // 0x3b4398: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b439c:
    // 0x3b439c: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x3b439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_3b43a0:
    // 0x3b43a0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b43a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b43a4:
    // 0x3b43a4: 0xc0ea146  jal         func_3A8518
label_3b43a8:
    if (ctx->pc == 0x3B43A8u) {
        ctx->pc = 0x3B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43A4u;
        // 0x3b43a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43ACu;
        goto label_3b43ac;
    }
    ctx->pc = 0x3B43A4u;
    SET_GPR_U32(ctx, 31, 0x3B43ACu);
    ctx->pc = 0x3B43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43A4u;
    // 0x3b43a8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B43A4u, 0x3B43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43ACu;
label_3b43ac:
    // 0x3b43ac: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x3b43acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
label_3b43b0:
    // 0x3b43b0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b43b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b43b4:
    // 0x3b43b4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3b43b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3b43b8:
    // 0x3b43b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b43b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b43bc:
    // 0x3b43bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3b43bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3b43c0:
    // 0x3b43c0: 0xc0ea146  jal         func_3A8518
label_3b43c4:
    if (ctx->pc == 0x3B43C4u) {
        ctx->pc = 0x3B43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43C0u;
        // 0x3b43c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43C8u;
        goto label_3b43c8;
    }
    ctx->pc = 0x3B43C0u;
    SET_GPR_U32(ctx, 31, 0x3B43C8u);
    ctx->pc = 0x3B43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43C0u;
    // 0x3b43c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B43C0u, 0x3B43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43C8u;
label_3b43c8:
    // 0x3b43c8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3b43c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3b43cc:
    // 0x3b43cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3b43ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3b43d0:
    // 0x3b43d0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b43d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b43d4:
    // 0x3b43d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b43d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b43d8:
    // 0x3b43d8: 0xc0ea14c  jal         func_3A8530
label_3b43dc:
    if (ctx->pc == 0x3B43DCu) {
        ctx->pc = 0x3B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43D8u;
        // 0x3b43dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43E0u;
        goto label_3b43e0;
    }
    ctx->pc = 0x3B43D8u;
    SET_GPR_U32(ctx, 31, 0x3B43E0u);
    ctx->pc = 0x3B43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43D8u;
    // 0x3b43dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B43D8u, 0x3B43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43E0u;
label_3b43e0:
    // 0x3b43e0: 0xc0ea14c  jal         func_3A8530
label_3b43e4:
    if (ctx->pc == 0x3B43E4u) {
        ctx->pc = 0x3B43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43E0u;
        // 0x3b43e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B43E8u;
        goto label_3b43e8;
    }
    ctx->pc = 0x3B43E0u;
    SET_GPR_U32(ctx, 31, 0x3B43E8u);
    ctx->pc = 0x3B43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43E0u;
    // 0x3b43e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B43E0u, 0x3B43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43E8u;
label_3b43e8:
    // 0x3b43e8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b43ec:
    // 0x3b43ec: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x3b43ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3b43f0:
    // 0x3b43f0: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x3b43f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3b43f4:
    // 0x3b43f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b43f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b43f8:
    // 0x3b43f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b43fc:
    // 0x3b43fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b43fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4400:
    // 0x3b4400: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3b4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3b4404:
    // 0x3b4404: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b4404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b4408:
    // 0x3b4408: 0xc0e90ca  jal         func_3A4328
label_3b440c:
    if (ctx->pc == 0x3B440Cu) {
        ctx->pc = 0x3B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4408u;
        // 0x3b440c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4410u;
        goto label_3b4410;
    }
    ctx->pc = 0x3B4408u;
    SET_GPR_U32(ctx, 31, 0x3B4410u);
    ctx->pc = 0x3B440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4408u;
    // 0x3b440c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B4408u, 0x3B4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4410u;
label_3b4410:
    // 0x3b4410: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x3b4410u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b4414:
    // 0x3b4414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b4418:
    // 0x3b4418: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b4418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b441c:
    // 0x3b441c: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3b441cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3b4420:
    // 0x3b4420: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b4420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4424:
    // 0x3b4424: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b4424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4428:
    // 0x3b4428: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b4428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b442c:
    // 0x3b442c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b442cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4430:
    // 0x3b4430: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b4430u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b4434:
    // 0x3b4434: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b4434u;
    // VWAITQ (Q already resolved in this runtime)
label_3b4438:
    // 0x3b4438: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b4438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b443c:
    // 0x3b443c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b443cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b4440:
    // 0x3b4440: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3b4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3b4444:
    // 0x3b4444: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b4444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b4448:
    // 0x3b4448: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b4448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b444c:
    // 0x3b444c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3b444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3b4450:
    // 0x3b4450: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x3b4450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
label_3b4454:
    // 0x3b4454: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b4454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b4458:
    // 0x3b4458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b445c:
    // 0x3b445c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3b445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3b4460:
    // 0x3b4460: 0xc0cd518  jal         func_335460
label_3b4464:
    if (ctx->pc == 0x3B4464u) {
        ctx->pc = 0x3B4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4460u;
        // 0x3b4464: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4468u;
        goto label_3b4468;
    }
    ctx->pc = 0x3B4460u;
    SET_GPR_U32(ctx, 31, 0x3B4468u);
    ctx->pc = 0x3B4464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4460u;
    // 0x3b4464: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4460u, 0x3B4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4468u;
label_3b4468:
    // 0x3b4468: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x3b4468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b446c:
    // 0x3b446c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b4470:
    // 0x3b4470: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x3b4470u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b4474:
    // 0x3b4474: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b4474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4478:
    // 0x3b4478: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x3b4478u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b447c:
    // 0x3b447c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b4480:
    // 0x3b4480: 0xe6bf000c  swc1        $f31, 0xC($s5)
    ctx->pc = 0x3b4480u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b4484:
    // 0x3b4484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4488:
    // 0x3b4488: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b448c:
    // 0x3b448c: 0xc136b18  jal         func_4DAC60
label_3b4490:
    if (ctx->pc == 0x3B4490u) {
        ctx->pc = 0x3B4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B448Cu;
        // 0x3b4490: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4494u;
        goto label_3b4494;
    }
    ctx->pc = 0x3B448Cu;
    SET_GPR_U32(ctx, 31, 0x3B4494u);
    ctx->pc = 0x3B4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B448Cu;
    // 0x3b4490: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B448Cu, 0x3B4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4494u;
label_3b4494:
    // 0x3b4494: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4498:
    // 0x3b4498: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b4498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b449c:
    // 0x3b449c: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b449cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b44a0:
    // 0x3b44a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b44a4:
    // 0x3b44a4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b44a8:
    // 0x3b44a8: 0xc0f15f6  jal         func_3C57D8
label_3b44ac:
    if (ctx->pc == 0x3B44ACu) {
        ctx->pc = 0x3B44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44A8u;
        // 0x3b44ac: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44B0u;
        goto label_3b44b0;
    }
    ctx->pc = 0x3B44A8u;
    SET_GPR_U32(ctx, 31, 0x3B44B0u);
    ctx->pc = 0x3B44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44A8u;
    // 0x3b44ac: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B44A8u, 0x3B44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44B0u;
label_3b44b0:
    // 0x3b44b0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3b44b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3b44b4:
    // 0x3b44b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b44b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b44b8:
    // 0x3b44b8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b44b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b44bc:
    // 0x3b44bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b44bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b44c0:
    // 0x3b44c0: 0xc0cd518  jal         func_335460
label_3b44c4:
    if (ctx->pc == 0x3B44C4u) {
        ctx->pc = 0x3B44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44C0u;
        // 0x3b44c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44C8u;
        goto label_3b44c8;
    }
    ctx->pc = 0x3B44C0u;
    SET_GPR_U32(ctx, 31, 0x3B44C8u);
    ctx->pc = 0x3B44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44C0u;
    // 0x3b44c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B44C0u, 0x3B44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44C8u;
label_3b44c8:
    // 0x3b44c8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3b44c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b44cc:
    // 0x3b44cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b44d0:
    // 0x3b44d0: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x3b44d0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b44d4:
    // 0x3b44d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b44d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b44d8:
    // 0x3b44d8: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x3b44d8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b44dc:
    // 0x3b44dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b44dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b44e0:
    // 0x3b44e0: 0xe6bf000c  swc1        $f31, 0xC($s5)
    ctx->pc = 0x3b44e0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b44e4:
    // 0x3b44e4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b44e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b44e8:
    // 0x3b44e8: 0xc136b18  jal         func_4DAC60
label_3b44ec:
    if (ctx->pc == 0x3B44ECu) {
        ctx->pc = 0x3B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B44E8u;
        // 0x3b44ec: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B44F0u;
        goto label_3b44f0;
    }
    ctx->pc = 0x3B44E8u;
    SET_GPR_U32(ctx, 31, 0x3B44F0u);
    ctx->pc = 0x3B44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B44E8u;
    // 0x3b44ec: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B44E8u, 0x3B44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B44F0u;
label_3b44f0:
    // 0x3b44f0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b44f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b44f4:
    // 0x3b44f4: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b44f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b44f8:
    // 0x3b44f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b44f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b44fc:
    // 0x3b44fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b44fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4500:
    // 0x3b4500: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4504:
    // 0x3b4504: 0xc0f15f6  jal         func_3C57D8
label_3b4508:
    if (ctx->pc == 0x3B4508u) {
        ctx->pc = 0x3B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4504u;
        // 0x3b4508: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B450Cu;
        goto label_3b450c;
    }
    ctx->pc = 0x3B4504u;
    SET_GPR_U32(ctx, 31, 0x3B450Cu);
    ctx->pc = 0x3B4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4504u;
    // 0x3b4508: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B4504u, 0x3B450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B450Cu;
label_3b450c:
    // 0x3b450c: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x3b450cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b4510:
    // 0x3b4510: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b4510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4514:
    // 0x3b4514: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x3b4514u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b4518:
    // 0x3b4518: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b4518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b451c:
    // 0x3b451c: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b451cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b4520:
    // 0x3b4520: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4524:
    // 0x3b4524: 0xe6bf000c  swc1        $f31, 0xC($s5)
    ctx->pc = 0x3b4524u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b4528:
    // 0x3b4528: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b452c:
    // 0x3b452c: 0xc136b18  jal         func_4DAC60
label_3b4530:
    if (ctx->pc == 0x3B4530u) {
        ctx->pc = 0x3B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B452Cu;
        // 0x3b4530: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4534u;
        goto label_3b4534;
    }
    ctx->pc = 0x3B452Cu;
    SET_GPR_U32(ctx, 31, 0x3B4534u);
    ctx->pc = 0x3B4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B452Cu;
    // 0x3b4530: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B452Cu, 0x3B4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4534u;
label_3b4534:
    // 0x3b4534: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4538:
    // 0x3b4538: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b4538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b453c:
    // 0x3b453c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b4540:
    // 0x3b4540: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4544:
    // 0x3b4544: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b4544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b4548:
    // 0x3b4548: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b4548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b454c:
    // 0x3b454c: 0xc136b24  jal         func_4DAC90
label_3b4550:
    if (ctx->pc == 0x3B4550u) {
        ctx->pc = 0x3B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B454Cu;
        // 0x3b4550: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4554u;
        goto label_3b4554;
    }
    ctx->pc = 0x3B454Cu;
    SET_GPR_U32(ctx, 31, 0x3B4554u);
    ctx->pc = 0x3B4550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B454Cu;
    // 0x3b4550: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B454Cu, 0x3B4554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4554u;
label_3b4554:
    // 0x3b4554: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b4554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4558:
    // 0x3b4558: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3b4558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3b455c:
    // 0x3b455c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b455cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b4560:
    // 0x3b4560: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3b4560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3b4564:
    // 0x3b4564: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b4564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4568:
    // 0x3b4568: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b456c:
    // 0x3b456c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4570:
    // 0x3b4570: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b4570u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b4574:
    // 0x3b4574: 0x4600fb46  mov.s       $f13, $f31
    ctx->pc = 0x3b4574u;
    ctx->f[13] = FPU_MOV_S(ctx->f[31]);
label_3b4578:
    // 0x3b4578: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x3b4578u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_3b457c:
    // 0x3b457c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3b457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b4580:
    // 0x3b4580: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3b4580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3b4584:
    // 0x3b4584: 0xc0f16c0  jal         func_3C5B00
label_3b4588:
    if (ctx->pc == 0x3B4588u) {
        ctx->pc = 0x3B4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4584u;
        // 0x3b4588: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B458Cu;
        goto label_3b458c;
    }
    ctx->pc = 0x3B4584u;
    SET_GPR_U32(ctx, 31, 0x3B458Cu);
    ctx->pc = 0x3B4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4584u;
    // 0x3b4588: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B4584u, 0x3B458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B458Cu;
label_3b458c:
    // 0x3b458c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b4590:
    // 0x3b4590: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b4594:
    // 0x3b4594: 0x1c40037e  bgtz        $v0, . + 4 + (0x37E << 2)
label_3b4598:
    if (ctx->pc == 0x3B4598u) {
        ctx->pc = 0x3B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4594u;
        // 0x3b4598: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B459Cu;
        goto label_3b459c;
    }
    ctx->pc = 0x3B4594u;
    {
        const bool branch_taken_0x3b4594 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4594u;
        // 0x3b4598: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4594) {
            ctx->pc = 0x3B5390u;
            goto label_3b5390;
        }
    }
    ctx->pc = 0x3B459Cu;
label_3b459c:
    // 0x3b459c: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x3b459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_3b45a0:
    // 0x3b45a0: 0x8ee400d8  lw          $a0, 0xD8($s7)
    ctx->pc = 0x3b45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 216)));
label_3b45a4:
    // 0x3b45a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3b45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3b45a8:
    // 0x3b45a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b45a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b45ac:
    // 0x3b45ac: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x3b45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_3b45b0:
    // 0x3b45b0: 0xc0e91b2  jal         func_3A46C8
label_3b45b4:
    if (ctx->pc == 0x3B45B4u) {
        ctx->pc = 0x3B45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45B0u;
        // 0x3b45b4: 0xaee20054  sw          $v0, 0x54($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45B8u;
        goto label_3b45b8;
    }
    ctx->pc = 0x3B45B0u;
    SET_GPR_U32(ctx, 31, 0x3B45B8u);
    ctx->pc = 0x3B45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45B0u;
    // 0x3b45b4: 0xaee20054  sw          $v0, 0x54($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B45B0u, 0x3B45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45B8u;
label_3b45b8:
    // 0x3b45b8: 0xc0e91b2  jal         func_3A46C8
label_3b45bc:
    if (ctx->pc == 0x3B45BCu) {
        ctx->pc = 0x3B45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45B8u;
        // 0x3b45bc: 0x8ee400dc  lw          $a0, 0xDC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45C0u;
        goto label_3b45c0;
    }
    ctx->pc = 0x3B45B8u;
    SET_GPR_U32(ctx, 31, 0x3B45C0u);
    ctx->pc = 0x3B45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45B8u;
    // 0x3b45bc: 0x8ee400dc  lw          $a0, 0xDC($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B45B8u, 0x3B45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45C0u;
label_3b45c0:
    // 0x3b45c0: 0xc0e92c0  jal         func_3A4B00
label_3b45c4:
    if (ctx->pc == 0x3B45C4u) {
        ctx->pc = 0x3B45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45C0u;
        // 0x3b45c4: 0x8ee400e0  lw          $a0, 0xE0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45C8u;
        goto label_3b45c8;
    }
    ctx->pc = 0x3B45C0u;
    SET_GPR_U32(ctx, 31, 0x3B45C8u);
    ctx->pc = 0x3B45C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45C0u;
    // 0x3b45c4: 0x8ee400e0  lw          $a0, 0xE0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B45C0u, 0x3B45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45C8u;
label_3b45c8:
    // 0x3b45c8: 0xc0e8fc0  jal         func_3A3F00
label_3b45cc:
    if (ctx->pc == 0x3B45CCu) {
        ctx->pc = 0x3B45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45C8u;
        // 0x3b45cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45D0u;
        goto label_3b45d0;
    }
    ctx->pc = 0x3B45C8u;
    SET_GPR_U32(ctx, 31, 0x3B45D0u);
    ctx->pc = 0x3B45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45C8u;
    // 0x3b45cc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F00u, 0x3B45C8u, 0x3B45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45D0u;
label_3b45d0:
    // 0x3b45d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b45d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b45d4:
    // 0x3b45d4: 0xc0e90ca  jal         func_3A4328
label_3b45d8:
    if (ctx->pc == 0x3B45D8u) {
        ctx->pc = 0x3B45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45D4u;
        // 0x3b45d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45DCu;
        goto label_3b45dc;
    }
    ctx->pc = 0x3B45D4u;
    SET_GPR_U32(ctx, 31, 0x3B45DCu);
    ctx->pc = 0x3B45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45D4u;
    // 0x3b45d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B45D4u, 0x3B45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45DCu;
label_3b45dc:
    // 0x3b45dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b45e0:
    // 0x3b45e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b45e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b45e4:
    // 0x3b45e4: 0xc136afa  jal         func_4DABE8
label_3b45e8:
    if (ctx->pc == 0x3B45E8u) {
        ctx->pc = 0x3B45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45E4u;
        // 0x3b45e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B45ECu;
        goto label_3b45ec;
    }
    ctx->pc = 0x3B45E4u;
    SET_GPR_U32(ctx, 31, 0x3B45ECu);
    ctx->pc = 0x3B45E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45E4u;
    // 0x3b45e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3B45E4u, 0x3B45ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45ECu;
label_3b45ec:
    // 0x3b45ec: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b45ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b45f0:
    // 0x3b45f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b45f4:
    // 0x3b45f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b45f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b45f8:
    // 0x3b45f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b45f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b45fc:
    // 0x3b45fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b45fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b4600:
    // 0x3b4600: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3b4600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b4604:
    // 0x3b4604: 0xc136b24  jal         func_4DAC90
label_3b4608:
    if (ctx->pc == 0x3B4608u) {
        ctx->pc = 0x3B4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4604u;
        // 0x3b4608: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B460Cu;
        goto label_3b460c;
    }
    ctx->pc = 0x3B4604u;
    SET_GPR_U32(ctx, 31, 0x3B460Cu);
    ctx->pc = 0x3B4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4604u;
    // 0x3b4608: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B4604u, 0x3B460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B460Cu;
label_3b460c:
    // 0x3b460c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b460cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4610:
    // 0x3b4610: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b4610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b4614:
    // 0x3b4614: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b4614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4618:
    // 0x3b4618: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4618u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b461c:
    // 0x3b461c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b4620:
    // 0x3b4620: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3b4620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3b4624:
    // 0x3b4624: 0xc0f15f6  jal         func_3C57D8
label_3b4628:
    if (ctx->pc == 0x3B4628u) {
        ctx->pc = 0x3B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4624u;
        // 0x3b4628: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B462Cu;
        goto label_3b462c;
    }
    ctx->pc = 0x3B4624u;
    SET_GPR_U32(ctx, 31, 0x3B462Cu);
    ctx->pc = 0x3B4628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4624u;
    // 0x3b4628: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B4624u, 0x3B462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B462Cu;
label_3b462c:
    // 0x3b462c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3b462cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3b4630:
    // 0x3b4630: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4634:
    // 0x3b4634: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b4634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b4638:
    // 0x3b4638: 0xc0f15f6  jal         func_3C57D8
label_3b463c:
    if (ctx->pc == 0x3B463Cu) {
        ctx->pc = 0x3B463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4638u;
        // 0x3b463c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4640u;
        goto label_3b4640;
    }
    ctx->pc = 0x3B4638u;
    SET_GPR_U32(ctx, 31, 0x3B4640u);
    ctx->pc = 0x3B463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4638u;
    // 0x3b463c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3B4638u, 0x3B4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4640u;
label_3b4640:
    // 0x3b4640: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x3b4640u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b4644:
    // 0x3b4644: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b4644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b4648:
    // 0x3b4648: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x3b4648u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b464c:
    // 0x3b464c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4650:
    // 0x3b4650: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b4650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b4654:
    // 0x3b4654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4658:
    // 0x3b4658: 0xe6bf000c  swc1        $f31, 0xC($s5)
    ctx->pc = 0x3b4658u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b465c:
    // 0x3b465c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b465cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4660:
    // 0x3b4660: 0xc136b18  jal         func_4DAC60
label_3b4664:
    if (ctx->pc == 0x3B4664u) {
        ctx->pc = 0x3B4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4660u;
        // 0x3b4664: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4668u;
        goto label_3b4668;
    }
    ctx->pc = 0x3B4660u;
    SET_GPR_U32(ctx, 31, 0x3B4668u);
    ctx->pc = 0x3B4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4660u;
    // 0x3b4664: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B4660u, 0x3B4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4668u;
label_3b4668:
    // 0x3b4668: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b466c:
    // 0x3b466c: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b466cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b4670:
    // 0x3b4670: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3b4670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3b4674:
    // 0x3b4674: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3b4674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3b4678:
    // 0x3b4678: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3b4678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3b467c:
    // 0x3b467c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b4680:
    // 0x3b4680: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4684:
    // 0x3b4684: 0x4600fb46  mov.s       $f13, $f31
    ctx->pc = 0x3b4684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[31]);
label_3b4688:
    // 0x3b4688: 0x4600f3c6  mov.s       $f15, $f30
    ctx->pc = 0x3b4688u;
    ctx->f[15] = FPU_MOV_S(ctx->f[30]);
label_3b468c:
    // 0x3b468c: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b468cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b4690:
    // 0x3b4690: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3b4690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3b4694:
    // 0x3b4694: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b4694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b4698:
    // 0x3b4698: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b4698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b469c:
    // 0x3b469c: 0xc0f16c0  jal         func_3C5B00
label_3b46a0:
    if (ctx->pc == 0x3B46A0u) {
        ctx->pc = 0x3B46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B469Cu;
        // 0x3b46a0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46A4u;
        goto label_3b46a4;
    }
    ctx->pc = 0x3B469Cu;
    SET_GPR_U32(ctx, 31, 0x3B46A4u);
    ctx->pc = 0x3B46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B469Cu;
    // 0x3b46a0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B469Cu, 0x3B46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B46A4u;
label_3b46a4:
    // 0x3b46a4: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x3b46a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b46a8:
    // 0x3b46a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b46a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b46ac:
    // 0x3b46ac: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x3b46acu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b46b0:
    // 0x3b46b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b46b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b46b4:
    // 0x3b46b4: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x3b46b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3b46b8:
    // 0x3b46b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b46b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b46bc:
    // 0x3b46bc: 0xe6bf000c  swc1        $f31, 0xC($s5)
    ctx->pc = 0x3b46bcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b46c0:
    // 0x3b46c0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b46c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b46c4:
    // 0x3b46c4: 0xc136b18  jal         func_4DAC60
label_3b46c8:
    if (ctx->pc == 0x3B46C8u) {
        ctx->pc = 0x3B46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46C4u;
        // 0x3b46c8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46CCu;
        goto label_3b46cc;
    }
    ctx->pc = 0x3B46C4u;
    SET_GPR_U32(ctx, 31, 0x3B46CCu);
    ctx->pc = 0x3B46C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B46C4u;
    // 0x3b46c8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B46C4u, 0x3B46CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B46CCu;
label_3b46cc:
    // 0x3b46cc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b46ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b46d0:
    // 0x3b46d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b46d4:
    // 0x3b46d4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b46d8:
    // 0x3b46d8: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x3b46d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
label_3b46dc:
    // 0x3b46dc: 0xc136b24  jal         func_4DAC90
label_3b46e0:
    if (ctx->pc == 0x3B46E0u) {
        ctx->pc = 0x3B46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46DCu;
        // 0x3b46e0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B46E4u;
        goto label_3b46e4;
    }
    ctx->pc = 0x3B46DCu;
    SET_GPR_U32(ctx, 31, 0x3B46E4u);
    ctx->pc = 0x3B46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B46DCu;
    // 0x3b46e0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B46DCu, 0x3B46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B46E4u;
label_3b46e4:
    // 0x3b46e4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b46e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b46e8:
    // 0x3b46e8: 0x3c075f50  lui         $a3, 0x5F50
    ctx->pc = 0x3b46e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24400 << 16));
label_3b46ec:
    // 0x3b46ec: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b46ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b46f0:
    // 0x3b46f0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3b46f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3b46f4:
    // 0x3b46f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b46f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b46f8:
    // 0x3b46f8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b46fc:
    // 0x3b46fc: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x3b46fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_3b4700:
    // 0x3b4700: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4704:
    // 0x3b4704: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b4704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4708:
    // 0x3b4708: 0x4600fb46  mov.s       $f13, $f31
    ctx->pc = 0x3b4708u;
    ctx->f[13] = FPU_MOV_S(ctx->f[31]);
label_3b470c:
    // 0x3b470c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3b470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b4710:
    // 0x3b4710: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x3b4710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
label_3b4714:
    // 0x3b4714: 0xc0f16c0  jal         func_3C5B00
label_3b4718:
    if (ctx->pc == 0x3B4718u) {
        ctx->pc = 0x3B4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4714u;
        // 0x3b4718: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B471Cu;
        goto label_3b471c;
    }
    ctx->pc = 0x3B4714u;
    SET_GPR_U32(ctx, 31, 0x3B471Cu);
    ctx->pc = 0x3B4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4714u;
    // 0x3b4718: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3B4714u, 0x3B471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B471Cu;
label_3b471c:
    // 0x3b471c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b4720:
    // 0x3b4720: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b4720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4724:
    // 0x3b4724: 0xc1073cc  jal         func_41CF30
label_3b4728:
    if (ctx->pc == 0x3B4728u) {
        ctx->pc = 0x3B4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4724u;
        // 0x3b4728: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B472Cu;
        goto label_3b472c;
    }
    ctx->pc = 0x3B4724u;
    SET_GPR_U32(ctx, 31, 0x3B472Cu);
    ctx->pc = 0x3B4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4724u;
    // 0x3b4728: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B4724u, 0x3B472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B472Cu;
label_3b472c:
    // 0x3b472c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3b4730:
    // 0x3b4730: 0x14400304  bnez        $v0, . + 4 + (0x304 << 2)
label_3b4734:
    if (ctx->pc == 0x3B4734u) {
        ctx->pc = 0x3B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4730u;
        // 0x3b4734: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4738u;
        goto label_3b4738;
    }
    ctx->pc = 0x3B4730u;
    {
        const bool branch_taken_0x3b4730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4730u;
        // 0x3b4734: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4730) {
            ctx->pc = 0x3B5344u;
            goto label_3b5344;
        }
    }
    ctx->pc = 0x3B4738u;
label_3b4738:
    // 0x3b4738: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3b4738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3b473c:
    // 0x3b473c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b473cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b4740:
    // 0x3b4740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4744:
    // 0x3b4744: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3b4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3b4748:
    // 0x3b4748: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3b4748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3b474c:
    // 0x3b474c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b474cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b4750:
    // 0x3b4750: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x3b4750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_3b4754:
    // 0x3b4754: 0xc0cd518  jal         func_335460
label_3b4758:
    if (ctx->pc == 0x3B4758u) {
        ctx->pc = 0x3B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4754u;
        // 0x3b4758: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B475Cu;
        goto label_3b475c;
    }
    ctx->pc = 0x3B4754u;
    SET_GPR_U32(ctx, 31, 0x3B475Cu);
    ctx->pc = 0x3B4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4754u;
    // 0x3b4758: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4754u, 0x3B475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B475Cu;
label_3b475c:
    // 0x3b475c: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b475cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4760:
    // 0x3b4760: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4764:
    // 0x3b4764: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4768:
    // 0x3b4768: 0xc0cd518  jal         func_335460
label_3b476c:
    if (ctx->pc == 0x3B476Cu) {
        ctx->pc = 0x3B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4768u;
        // 0x3b476c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4770u;
        goto label_3b4770;
    }
    ctx->pc = 0x3B4768u;
    SET_GPR_U32(ctx, 31, 0x3B4770u);
    ctx->pc = 0x3B476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4768u;
    // 0x3b476c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4768u, 0x3B4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4770u;
label_3b4770:
    // 0x3b4770: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b4770u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4774:
    // 0x3b4774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4778:
    // 0x3b4778: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b477c:
    // 0x3b477c: 0xc0cd518  jal         func_335460
label_3b4780:
    if (ctx->pc == 0x3B4780u) {
        ctx->pc = 0x3B4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B477Cu;
        // 0x3b4780: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4784u;
        goto label_3b4784;
    }
    ctx->pc = 0x3B477Cu;
    SET_GPR_U32(ctx, 31, 0x3B4784u);
    ctx->pc = 0x3B4780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B477Cu;
    // 0x3b4780: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B477Cu, 0x3B4784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4784u;
label_3b4784:
    // 0x3b4784: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b4784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4788:
    // 0x3b4788: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b4788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b478c:
    // 0x3b478c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b478cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4790:
    // 0x3b4790: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x3b4790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b4794:
    // 0x3b4794: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b4794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b4798:
    // 0x3b4798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b479c:
    // 0x3b479c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b479cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b47a0:
    // 0x3b47a0: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3b47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3b47a4:
    // 0x3b47a4: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b47a4u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b47a8:
    // 0x3b47a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b47a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b47ac:
    // 0x3b47ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3b47acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3b47b0:
    // 0x3b47b0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3b47b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b47b4:
    // 0x3b47b4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b47b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b47b8:
    // 0x3b47b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3b47b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3b47bc:
    // 0x3b47bc: 0xc0e911e  jal         func_3A4478
label_3b47c0:
    if (ctx->pc == 0x3B47C0u) {
        ctx->pc = 0x3B47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47BCu;
        // 0x3b47c0: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B47C4u;
        goto label_3b47c4;
    }
    ctx->pc = 0x3B47BCu;
    SET_GPR_U32(ctx, 31, 0x3B47C4u);
    ctx->pc = 0x3B47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47BCu;
    // 0x3b47c0: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B47BCu, 0x3B47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47C4u;
label_3b47c4:
    // 0x3b47c4: 0x3c013c2c  lui         $at, 0x3C2C
    ctx->pc = 0x3b47c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15404 << 16));
label_3b47c8:
    // 0x3b47c8: 0x3421d9e8  ori         $at, $at, 0xD9E8
    ctx->pc = 0x3b47c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55784);
label_3b47cc:
    // 0x3b47cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b47ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b47d0:
    // 0x3b47d0: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x3b47d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b47d4:
    // 0x3b47d4: 0x3c013bc7  lui         $at, 0x3BC7
    ctx->pc = 0x3b47d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15303 << 16));
label_3b47d8:
    // 0x3b47d8: 0x3421e282  ori         $at, $at, 0xE282
    ctx->pc = 0x3b47d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57986);
label_3b47dc:
    // 0x3b47dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b47dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b47e0:
    // 0x3b47e0: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x3b47e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
label_3b47e4:
    // 0x3b47e4: 0x3421630b  ori         $at, $at, 0x630B
    ctx->pc = 0x3b47e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25355);
label_3b47e8:
    // 0x3b47e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b47e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b47ec:
    // 0x3b47ec: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3b47ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b47f0:
    // 0x3b47f0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x3b47f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b47f4:
    // 0x3b47f4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3b47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b47f8:
    // 0x3b47f8: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b47f8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b47fc:
    // 0x3b47fc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b47fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4800:
    // 0x3b4800: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b4800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4804:
    // 0x3b4804: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4808:
    // 0x3b4808: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b480c:
    // 0x3b480c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b480cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b4810:
    // 0x3b4810: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b4810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4814:
    // 0x3b4814: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b4814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4818:
    // 0x3b4818: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b4818u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b481c:
    // 0x3b481c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b481cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4820:
    // 0x3b4820: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b4820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4824:
    // 0x3b4824: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b4824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4828:
    // 0x3b4828: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b4828u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b482c:
    // 0x3b482c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b482cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4830:
    // 0x3b4830: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b4830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4834:
    // 0x3b4834: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b4834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4838:
    // 0x3b4838: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b4838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b483c:
    // 0x3b483c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b483cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4840:
    // 0x3b4840: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b4840u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4844:
    // 0x3b4844: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b4844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4848:
    // 0x3b4848: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b484c:
    // 0x3b484c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b484cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4850:
    // 0x3b4850: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b4850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b4854:
    // 0x3b4854: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b4854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b4858:
    // 0x3b4858: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b4858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b485c:
    // 0x3b485c: 0x26102310  addiu       $s0, $s0, 0x2310
    ctx->pc = 0x3b485cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8976));
label_3b4860:
    // 0x3b4860: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3b4860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3b4864:
    // 0x3b4864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4868:
    // 0x3b4868: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b486c:
    // 0x3b486c: 0xc0e90ca  jal         func_3A4328
label_3b4870:
    if (ctx->pc == 0x3B4870u) {
        ctx->pc = 0x3B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B486Cu;
        // 0x3b4870: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4874u;
        goto label_3b4874;
    }
    ctx->pc = 0x3B486Cu;
    SET_GPR_U32(ctx, 31, 0x3B4874u);
    ctx->pc = 0x3B4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B486Cu;
    // 0x3b4870: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B486Cu, 0x3B4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4874u;
label_3b4874:
    // 0x3b4874: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b4874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4878:
    // 0x3b4878: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b487c:
    // 0x3b487c: 0xc136b18  jal         func_4DAC60
label_3b4880:
    if (ctx->pc == 0x3B4880u) {
        ctx->pc = 0x3B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B487Cu;
        // 0x3b4880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4884u;
        goto label_3b4884;
    }
    ctx->pc = 0x3B487Cu;
    SET_GPR_U32(ctx, 31, 0x3B4884u);
    ctx->pc = 0x3B4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B487Cu;
    // 0x3b4880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B487Cu, 0x3B4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4884u;
label_3b4884:
    // 0x3b4884: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4888:
    // 0x3b4888: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3b4888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b488c:
    // 0x3b488c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b488cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4890:
    // 0x3b4890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b4890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4894:
    // 0x3b4894: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4898:
    // 0x3b4898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b489c:
    // 0x3b489c: 0xc0e94fc  jal         func_3A53F0
label_3b48a0:
    if (ctx->pc == 0x3B48A0u) {
        ctx->pc = 0x3B48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B489Cu;
        // 0x3b48a0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B48A4u;
        goto label_3b48a4;
    }
    ctx->pc = 0x3B489Cu;
    SET_GPR_U32(ctx, 31, 0x3B48A4u);
    ctx->pc = 0x3B48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B489Cu;
    // 0x3b48a0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B489Cu, 0x3B48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48A4u;
label_3b48a4:
    // 0x3b48a4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b48a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b48a8:
    // 0x3b48a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b48a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b48ac:
    // 0x3b48ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b48acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b48b0:
    // 0x3b48b0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b48b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b48b4:
    // 0x3b48b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b48b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b48b8:
    // 0x3b48b8: 0xc0cd518  jal         func_335460
label_3b48bc:
    if (ctx->pc == 0x3B48BCu) {
        ctx->pc = 0x3B48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48B8u;
        // 0x3b48bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B48C0u;
        goto label_3b48c0;
    }
    ctx->pc = 0x3B48B8u;
    SET_GPR_U32(ctx, 31, 0x3B48C0u);
    ctx->pc = 0x3B48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48B8u;
    // 0x3b48bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B48B8u, 0x3B48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48C0u;
label_3b48c0:
    // 0x3b48c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b48c4:
    // 0x3b48c4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b48c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b48c8:
    // 0x3b48c8: 0xc136b24  jal         func_4DAC90
label_3b48cc:
    if (ctx->pc == 0x3B48CCu) {
        ctx->pc = 0x3B48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48C8u;
        // 0x3b48cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B48D0u;
        goto label_3b48d0;
    }
    ctx->pc = 0x3B48C8u;
    SET_GPR_U32(ctx, 31, 0x3B48D0u);
    ctx->pc = 0x3B48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48C8u;
    // 0x3b48cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B48C8u, 0x3B48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48D0u;
label_3b48d0:
    // 0x3b48d0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b48d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b48d4:
    // 0x3b48d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b48d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b48d8:
    // 0x3b48d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b48d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b48dc:
    // 0x3b48dc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b48e0:
    // 0x3b48e0: 0xc0ea158  jal         func_3A8560
label_3b48e4:
    if (ctx->pc == 0x3B48E4u) {
        ctx->pc = 0x3B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48E0u;
        // 0x3b48e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B48E8u;
        goto label_3b48e8;
    }
    ctx->pc = 0x3B48E0u;
    SET_GPR_U32(ctx, 31, 0x3B48E8u);
    ctx->pc = 0x3B48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48E0u;
    // 0x3b48e4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B48E0u, 0x3B48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48E8u;
label_3b48e8:
    // 0x3b48e8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b48e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b48ec:
    // 0x3b48ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b48f0:
    // 0x3b48f0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b48f4:
    // 0x3b48f4: 0xc0ea158  jal         func_3A8560
label_3b48f8:
    if (ctx->pc == 0x3B48F8u) {
        ctx->pc = 0x3B48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48F4u;
        // 0x3b48f8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B48FCu;
        goto label_3b48fc;
    }
    ctx->pc = 0x3B48F4u;
    SET_GPR_U32(ctx, 31, 0x3B48FCu);
    ctx->pc = 0x3B48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48F4u;
    // 0x3b48f8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B48F4u, 0x3B48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48FCu;
label_3b48fc:
    // 0x3b48fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b4900:
    // 0x3b4900: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b4900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4904:
    // 0x3b4904: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4908:
    // 0x3b4908: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b4908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b490c:
    // 0x3b490c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b4910:
    // 0x3b4910: 0x40f809  jalr        $v0
label_3b4914:
    if (ctx->pc == 0x3B4914u) {
        ctx->pc = 0x3B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4910u;
        // 0x3b4914: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4918u;
        goto label_3b4918;
    }
    ctx->pc = 0x3B4910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4918u);
        ctx->pc = 0x3B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4910u;
        // 0x3b4914: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4910u, 0x3B4918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4918u;
label_3b4918:
    // 0x3b4918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b491c:
    // 0x3b491c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b491cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4920:
    // 0x3b4920: 0xc0cd518  jal         func_335460
label_3b4924:
    if (ctx->pc == 0x3B4924u) {
        ctx->pc = 0x3B4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4920u;
        // 0x3b4924: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4928u;
        goto label_3b4928;
    }
    ctx->pc = 0x3B4920u;
    SET_GPR_U32(ctx, 31, 0x3B4928u);
    ctx->pc = 0x3B4924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4920u;
    // 0x3b4924: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4920u, 0x3B4928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4928u;
label_3b4928:
    // 0x3b4928: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b4928u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b492c:
    // 0x3b492c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4930:
    // 0x3b4930: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4934:
    // 0x3b4934: 0xc0cd518  jal         func_335460
label_3b4938:
    if (ctx->pc == 0x3B4938u) {
        ctx->pc = 0x3B4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4934u;
        // 0x3b4938: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B493Cu;
        goto label_3b493c;
    }
    ctx->pc = 0x3B4934u;
    SET_GPR_U32(ctx, 31, 0x3B493Cu);
    ctx->pc = 0x3B4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4934u;
    // 0x3b4938: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4934u, 0x3B493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B493Cu;
label_3b493c:
    // 0x3b493c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b493cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4940:
    // 0x3b4940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4944:
    // 0x3b4944: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4948:
    // 0x3b4948: 0xc0cd518  jal         func_335460
label_3b494c:
    if (ctx->pc == 0x3B494Cu) {
        ctx->pc = 0x3B494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4948u;
        // 0x3b494c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4950u;
        goto label_3b4950;
    }
    ctx->pc = 0x3B4948u;
    SET_GPR_U32(ctx, 31, 0x3B4950u);
    ctx->pc = 0x3B494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4948u;
    // 0x3b494c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4948u, 0x3B4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4950u;
label_3b4950:
    // 0x3b4950: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b4950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4954:
    // 0x3b4954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b4958:
    // 0x3b4958: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3b495c:
    // 0x3b495c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b495cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4960:
    // 0x3b4960: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b4960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4964:
    // 0x3b4964: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b4964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b4968:
    // 0x3b4968: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b4968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b496c:
    // 0x3b496c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b496cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b4970:
    // 0x3b4970: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b4970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4974:
    // 0x3b4974: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b4974u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b4978:
    // 0x3b4978: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b497c:
    // 0x3b497c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b497cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4980:
    // 0x3b4980: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b4980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b4984:
    // 0x3b4984: 0xc0e911e  jal         func_3A4478
label_3b4988:
    if (ctx->pc == 0x3B4988u) {
        ctx->pc = 0x3B4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4984u;
        // 0x3b4988: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B498Cu;
        goto label_3b498c;
    }
    ctx->pc = 0x3B4984u;
    SET_GPR_U32(ctx, 31, 0x3B498Cu);
    ctx->pc = 0x3B4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4984u;
    // 0x3b4988: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B4984u, 0x3B498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B498Cu;
label_3b498c:
    // 0x3b498c: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x3b498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_3b4990:
    // 0x3b4990: 0x3421ce70  ori         $at, $at, 0xCE70
    ctx->pc = 0x3b4990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52848);
label_3b4994:
    // 0x3b4994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b4994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b4998:
    // 0x3b4998: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x3b4998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_3b499c:
    // 0x3b499c: 0x3421afcd  ori         $at, $at, 0xAFCD
    ctx->pc = 0x3b499cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45005);
label_3b49a0:
    // 0x3b49a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b49a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b49a4:
    // 0x3b49a4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b49a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b49a8:
    // 0x3b49a8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3b49a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b49ac:
    // 0x3b49ac: 0xe7bd00a4  swc1        $f29, 0xA4($sp)
    ctx->pc = 0x3b49acu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b49b0:
    // 0x3b49b0: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b49b0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b49b4:
    // 0x3b49b4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b49b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b49b8:
    // 0x3b49b8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b49b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b49bc:
    // 0x3b49bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b49bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b49c0:
    // 0x3b49c0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b49c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b49c4:
    // 0x3b49c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b49c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b49c8:
    // 0x3b49c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b49c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b49cc:
    // 0x3b49cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b49ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b49d0:
    // 0x3b49d0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b49d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b49d4:
    // 0x3b49d4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b49d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b49d8:
    // 0x3b49d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b49d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b49dc:
    // 0x3b49dc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b49dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b49e0:
    // 0x3b49e0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b49e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b49e4:
    // 0x3b49e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b49e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b49e8:
    // 0x3b49e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b49e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b49ec:
    // 0x3b49ec: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b49ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b49f0:
    // 0x3b49f0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b49f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b49f4:
    // 0x3b49f4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b49f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b49f8:
    // 0x3b49f8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b49f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b49fc:
    // 0x3b49fc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b49fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4a00:
    // 0x3b4a00: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4a04:
    // 0x3b4a04: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b4a04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4a08:
    // 0x3b4a08: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b4a08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b4a0c:
    // 0x3b4a0c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b4a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b4a10:
    // 0x3b4a10: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b4a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b4a14:
    // 0x3b4a14: 0x26102320  addiu       $s0, $s0, 0x2320
    ctx->pc = 0x3b4a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8992));
label_3b4a18:
    // 0x3b4a18: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4a1c:
    // 0x3b4a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a20:
    // 0x3b4a20: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4a24:
    // 0x3b4a24: 0xc0e90ca  jal         func_3A4328
label_3b4a28:
    if (ctx->pc == 0x3B4A28u) {
        ctx->pc = 0x3B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A24u;
        // 0x3b4a28: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A2Cu;
        goto label_3b4a2c;
    }
    ctx->pc = 0x3B4A24u;
    SET_GPR_U32(ctx, 31, 0x3B4A2Cu);
    ctx->pc = 0x3B4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A24u;
    // 0x3b4a28: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B4A24u, 0x3B4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A2Cu;
label_3b4a2c:
    // 0x3b4a2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4a30:
    // 0x3b4a30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a34:
    // 0x3b4a34: 0xc136b18  jal         func_4DAC60
label_3b4a38:
    if (ctx->pc == 0x3B4A38u) {
        ctx->pc = 0x3B4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A34u;
        // 0x3b4a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A3Cu;
        goto label_3b4a3c;
    }
    ctx->pc = 0x3B4A34u;
    SET_GPR_U32(ctx, 31, 0x3B4A3Cu);
    ctx->pc = 0x3B4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A34u;
    // 0x3b4a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B4A34u, 0x3B4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A3Cu;
label_3b4a3c:
    // 0x3b4a3c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4a40:
    // 0x3b4a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a44:
    // 0x3b4a44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b4a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a48:
    // 0x3b4a48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b4a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a4c:
    // 0x3b4a4c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4a50:
    // 0x3b4a50: 0xc0e94fc  jal         func_3A53F0
label_3b4a54:
    if (ctx->pc == 0x3B4A54u) {
        ctx->pc = 0x3B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A50u;
        // 0x3b4a54: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A58u;
        goto label_3b4a58;
    }
    ctx->pc = 0x3B4A50u;
    SET_GPR_U32(ctx, 31, 0x3B4A58u);
    ctx->pc = 0x3B4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A50u;
    // 0x3b4a54: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B4A50u, 0x3B4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A58u;
label_3b4a58:
    // 0x3b4a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a5c:
    // 0x3b4a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a60:
    // 0x3b4a60: 0xc0e911e  jal         func_3A4478
label_3b4a64:
    if (ctx->pc == 0x3B4A64u) {
        ctx->pc = 0x3B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A60u;
        // 0x3b4a64: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A68u;
        goto label_3b4a68;
    }
    ctx->pc = 0x3B4A60u;
    SET_GPR_U32(ctx, 31, 0x3B4A68u);
    ctx->pc = 0x3B4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A60u;
    // 0x3b4a64: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B4A60u, 0x3B4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A68u;
label_3b4a68:
    // 0x3b4a68: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3b4a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3b4a6c:
    // 0x3b4a6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4a70:
    // 0x3b4a70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b4a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b4a74:
    // 0x3b4a74: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3b4a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3b4a78:
    // 0x3b4a78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4a7c:
    // 0x3b4a7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b4a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b4a80:
    // 0x3b4a80: 0xc0cd518  jal         func_335460
label_3b4a84:
    if (ctx->pc == 0x3B4A84u) {
        ctx->pc = 0x3B4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A80u;
        // 0x3b4a84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A88u;
        goto label_3b4a88;
    }
    ctx->pc = 0x3B4A80u;
    SET_GPR_U32(ctx, 31, 0x3B4A88u);
    ctx->pc = 0x3B4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4A80u;
    // 0x3b4a84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4A80u, 0x3B4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A88u;
label_3b4a88:
    // 0x3b4a88: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b4a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b4a8c:
    // 0x3b4a8c: 0xe7bd00a4  swc1        $f29, 0xA4($sp)
    ctx->pc = 0x3b4a8cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b4a90:
    // 0x3b4a90: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x3b4a90u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b4a94:
    // 0x3b4a94: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b4a94u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b4a98:
    // 0x3b4a98: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4a9c:
    // 0x3b4a9c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b4a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4aa0:
    // 0x3b4aa0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b4aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b4aa4:
    // 0x3b4aa4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b4aa8:
    // 0x3b4aa8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b4aa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b4aac:
    // 0x3b4aac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b4aacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4ab0:
    // 0x3b4ab0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b4ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4ab4:
    // 0x3b4ab4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b4ab4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4ab8:
    // 0x3b4ab8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b4ab8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4abc:
    // 0x3b4abc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b4abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4ac0:
    // 0x3b4ac0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b4ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ac4:
    // 0x3b4ac4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b4ac4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b4ac8:
    // 0x3b4ac8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b4ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4acc:
    // 0x3b4acc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b4accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4ad0:
    // 0x3b4ad0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b4ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4ad4:
    // 0x3b4ad4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b4ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ad8:
    // 0x3b4ad8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b4ad8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4adc:
    // 0x3b4adc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b4adcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4ae0:
    // 0x3b4ae0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b4ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ae4:
    // 0x3b4ae4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ae8:
    // 0x3b4ae8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b4ae8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4aec:
    // 0x3b4aec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b4af0:
    // 0x3b4af0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3b4af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b4af4:
    // 0x3b4af4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b4af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b4af8:
    // 0x3b4af8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b4afc:
    // 0x3b4afc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4b00:
    // 0x3b4b00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b04:
    // 0x3b4b04: 0xc136b18  jal         func_4DAC60
label_3b4b08:
    if (ctx->pc == 0x3B4B08u) {
        ctx->pc = 0x3B4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B04u;
        // 0x3b4b08: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B0Cu;
        goto label_3b4b0c;
    }
    ctx->pc = 0x3B4B04u;
    SET_GPR_U32(ctx, 31, 0x3B4B0Cu);
    ctx->pc = 0x3B4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B04u;
    // 0x3b4b08: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B4B04u, 0x3B4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B0Cu;
label_3b4b0c:
    // 0x3b4b0c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3b4b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3b4b10:
    // 0x3b4b10: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3b4b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3b4b14:
    // 0x3b4b14: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x3b4b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_3b4b18:
    // 0x3b4b18: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4b1c:
    // 0x3b4b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b20:
    // 0x3b4b20: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3b4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3b4b24:
    // 0x3b4b24: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4b28:
    // 0x3b4b28: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x3b4b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_3b4b2c:
    // 0x3b4b2c: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x3b4b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_3b4b30:
    // 0x3b4b30: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3b4b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3b4b34:
    // 0x3b4b34: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3b4b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3b4b38:
    // 0x3b4b38: 0x34210529  ori         $at, $at, 0x529
    ctx->pc = 0x3b4b38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1321);
label_3b4b3c:
    // 0x3b4b3c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b4b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b4b40:
    // 0x3b4b40: 0xc0cd518  jal         func_335460
label_3b4b44:
    if (ctx->pc == 0x3B4B44u) {
        ctx->pc = 0x3B4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B40u;
        // 0x3b4b44: 0x4600db46  mov.s       $f13, $f27 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B48u;
        goto label_3b4b48;
    }
    ctx->pc = 0x3B4B40u;
    SET_GPR_U32(ctx, 31, 0x3B4B48u);
    ctx->pc = 0x3B4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B40u;
    // 0x3b4b44: 0x4600db46  mov.s       $f13, $f27 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4B40u, 0x3B4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B48u;
label_3b4b48:
    // 0x3b4b48: 0x3c01bc53  lui         $at, 0xBC53
    ctx->pc = 0x3b4b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48211 << 16));
label_3b4b4c:
    // 0x3b4b4c: 0x34218477  ori         $at, $at, 0x8477
    ctx->pc = 0x3b4b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33911);
label_3b4b50:
    // 0x3b4b50: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3b4b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3b4b54:
    // 0x3b4b54: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b4b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b4b58:
    // 0x3b4b58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b5c:
    // 0x3b4b5c: 0xc136b24  jal         func_4DAC90
label_3b4b60:
    if (ctx->pc == 0x3B4B60u) {
        ctx->pc = 0x3B4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B5Cu;
        // 0x3b4b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B64u;
        goto label_3b4b64;
    }
    ctx->pc = 0x3B4B5Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B64u);
    ctx->pc = 0x3B4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B5Cu;
    // 0x3b4b60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B4B5Cu, 0x3B4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B64u;
label_3b4b64:
    // 0x3b4b64: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4b68:
    // 0x3b4b68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b6c:
    // 0x3b4b6c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b70:
    // 0x3b4b70: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4b74:
    // 0x3b4b74: 0xc0ea158  jal         func_3A8560
label_3b4b78:
    if (ctx->pc == 0x3B4B78u) {
        ctx->pc = 0x3B4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B74u;
        // 0x3b4b78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B7Cu;
        goto label_3b4b7c;
    }
    ctx->pc = 0x3B4B74u;
    SET_GPR_U32(ctx, 31, 0x3B4B7Cu);
    ctx->pc = 0x3B4B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B74u;
    // 0x3b4b78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4B74u, 0x3B4B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B7Cu;
label_3b4b7c:
    // 0x3b4b7c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b4b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b4b80:
    // 0x3b4b80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b84:
    // 0x3b4b84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b88:
    // 0x3b4b88: 0xc0ea158  jal         func_3A8560
label_3b4b8c:
    if (ctx->pc == 0x3B4B8Cu) {
        ctx->pc = 0x3B4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B88u;
        // 0x3b4b8c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B90u;
        goto label_3b4b90;
    }
    ctx->pc = 0x3B4B88u;
    SET_GPR_U32(ctx, 31, 0x3B4B90u);
    ctx->pc = 0x3B4B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B88u;
    // 0x3b4b8c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4B88u, 0x3B4B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B90u;
label_3b4b90:
    // 0x3b4b90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b4b94:
    // 0x3b4b94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b4b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b98:
    // 0x3b4b98: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4b9c:
    // 0x3b4b9c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b4b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b4ba0:
    // 0x3b4ba0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b4ba4:
    // 0x3b4ba4: 0x40f809  jalr        $v0
label_3b4ba8:
    if (ctx->pc == 0x3B4BA8u) {
        ctx->pc = 0x3B4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BA4u;
        // 0x3b4ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BACu;
        goto label_3b4bac;
    }
    ctx->pc = 0x3B4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4BACu);
        ctx->pc = 0x3B4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BA4u;
        // 0x3b4ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4BA4u, 0x3B4BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4BACu;
label_3b4bac:
    // 0x3b4bac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bb0:
    // 0x3b4bb0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4bb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4bb4:
    // 0x3b4bb4: 0xc0cd518  jal         func_335460
label_3b4bb8:
    if (ctx->pc == 0x3B4BB8u) {
        ctx->pc = 0x3B4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BB4u;
        // 0x3b4bb8: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BBCu;
        goto label_3b4bbc;
    }
    ctx->pc = 0x3B4BB4u;
    SET_GPR_U32(ctx, 31, 0x3B4BBCu);
    ctx->pc = 0x3B4BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BB4u;
    // 0x3b4bb8: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4BB4u, 0x3B4BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BBCu;
label_3b4bbc:
    // 0x3b4bbc: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b4bbcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4bc0:
    // 0x3b4bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bc4:
    // 0x3b4bc4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4bc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4bc8:
    // 0x3b4bc8: 0xc0cd518  jal         func_335460
label_3b4bcc:
    if (ctx->pc == 0x3B4BCCu) {
        ctx->pc = 0x3B4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BC8u;
        // 0x3b4bcc: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BD0u;
        goto label_3b4bd0;
    }
    ctx->pc = 0x3B4BC8u;
    SET_GPR_U32(ctx, 31, 0x3B4BD0u);
    ctx->pc = 0x3B4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BC8u;
    // 0x3b4bcc: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4BC8u, 0x3B4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BD0u;
label_3b4bd0:
    // 0x3b4bd0: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b4bd0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4bd4:
    // 0x3b4bd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bd8:
    // 0x3b4bd8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4bd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4bdc:
    // 0x3b4bdc: 0xc0cd518  jal         func_335460
label_3b4be0:
    if (ctx->pc == 0x3B4BE0u) {
        ctx->pc = 0x3B4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BDCu;
        // 0x3b4be0: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4BE4u;
        goto label_3b4be4;
    }
    ctx->pc = 0x3B4BDCu;
    SET_GPR_U32(ctx, 31, 0x3B4BE4u);
    ctx->pc = 0x3B4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BDCu;
    // 0x3b4be0: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4BDCu, 0x3B4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BE4u;
label_3b4be4:
    // 0x3b4be4: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b4be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4be8:
    // 0x3b4be8: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b4be8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b4bec:
    // 0x3b4bec: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b4becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4bf0:
    // 0x3b4bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bf4:
    // 0x3b4bf4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b4bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bf8:
    // 0x3b4bf8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b4bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b4bfc:
    // 0x3b4bfc: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b4bfcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b4c00:
    // 0x3b4c00: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4c04:
    // 0x3b4c04: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3b4c04u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b4c08:
    // 0x3b4c08: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4c0c:
    // 0x3b4c0c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b4c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b4c10:
    // 0x3b4c10: 0xe7bd0084  swc1        $f29, 0x84($sp)
    ctx->pc = 0x3b4c10u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4c14:
    // 0x3b4c14: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x3b4c14u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b4c18:
    // 0x3b4c18: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3b4c18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b4c1c:
    // 0x3b4c1c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4c20:
    // 0x3b4c20: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b4c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b4c24:
    // 0x3b4c24: 0xc0e911e  jal         func_3A4478
label_3b4c28:
    if (ctx->pc == 0x3B4C28u) {
        ctx->pc = 0x3B4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C24u;
        // 0x3b4c28: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4C2Cu;
        goto label_3b4c2c;
    }
    ctx->pc = 0x3B4C24u;
    SET_GPR_U32(ctx, 31, 0x3B4C2Cu);
    ctx->pc = 0x3B4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C24u;
    // 0x3b4c28: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B4C24u, 0x3B4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C2Cu;
label_3b4c2c:
    // 0x3b4c2c: 0x3c01bf10  lui         $at, 0xBF10
    ctx->pc = 0x3b4c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48912 << 16));
label_3b4c30:
    // 0x3b4c30: 0x3421f323  ori         $at, $at, 0xF323
    ctx->pc = 0x3b4c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62243);
label_3b4c34:
    // 0x3b4c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b4c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b4c38:
    // 0x3b4c38: 0x3c013ab0  lui         $at, 0x3AB0
    ctx->pc = 0x3b4c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15024 << 16));
label_3b4c3c:
    // 0x3b4c3c: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x3b4c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
label_3b4c40:
    // 0x3b4c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b4c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b4c44:
    // 0x3b4c44: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b4c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b4c48:
    // 0x3b4c48: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3b4c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b4c4c:
    // 0x3b4c4c: 0xe6590008  swc1        $f25, 0x8($s2)
    ctx->pc = 0x3b4c4cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b4c50:
    // 0x3b4c50: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b4c50u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b4c54:
    // 0x3b4c54: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4c58:
    // 0x3b4c58: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b4c58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4c5c:
    // 0x3b4c5c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b4c60:
    // 0x3b4c60: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b4c64:
    // 0x3b4c64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b4c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b4c68:
    // 0x3b4c68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b4c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4c6c:
    // 0x3b4c6c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b4c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4c70:
    // 0x3b4c70: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b4c70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4c74:
    // 0x3b4c74: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b4c74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4c78:
    // 0x3b4c78: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b4c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4c7c:
    // 0x3b4c7c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b4c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4c80:
    // 0x3b4c80: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b4c80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b4c84:
    // 0x3b4c84: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b4c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4c88:
    // 0x3b4c88: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b4c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4c8c:
    // 0x3b4c8c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b4c8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4c90:
    // 0x3b4c90: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b4c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4c94:
    // 0x3b4c94: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b4c94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4c98:
    // 0x3b4c98: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b4c98u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4c9c:
    // 0x3b4c9c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b4c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ca0:
    // 0x3b4ca0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4ca4:
    // 0x3b4ca4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b4ca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4ca8:
    // 0x3b4ca8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b4ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b4cac:
    // 0x3b4cac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b4cb0:
    // 0x3b4cb0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b4cb4:
    // 0x3b4cb4: 0x26102330  addiu       $s0, $s0, 0x2330
    ctx->pc = 0x3b4cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9008));
label_3b4cb8:
    // 0x3b4cb8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4cbc:
    // 0x3b4cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4cc0:
    // 0x3b4cc0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4cc4:
    // 0x3b4cc4: 0xc0e90ca  jal         func_3A4328
label_3b4cc8:
    if (ctx->pc == 0x3B4CC8u) {
        ctx->pc = 0x3B4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CC4u;
        // 0x3b4cc8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4CCCu;
        goto label_3b4ccc;
    }
    ctx->pc = 0x3B4CC4u;
    SET_GPR_U32(ctx, 31, 0x3B4CCCu);
    ctx->pc = 0x3B4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CC4u;
    // 0x3b4cc8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B4CC4u, 0x3B4CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CCCu;
label_3b4ccc:
    // 0x3b4ccc: 0x3c01b9f6  lui         $at, 0xB9F6
    ctx->pc = 0x3b4cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47606 << 16));
label_3b4cd0:
    // 0x3b4cd0: 0x34216a55  ori         $at, $at, 0x6A55
    ctx->pc = 0x3b4cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27221);
label_3b4cd4:
    // 0x3b4cd4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3b4cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3b4cd8:
    // 0x3b4cd8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b4cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4cdc:
    // 0x3b4cdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ce0:
    // 0x3b4ce0: 0xc136b18  jal         func_4DAC60
label_3b4ce4:
    if (ctx->pc == 0x3B4CE4u) {
        ctx->pc = 0x3B4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CE0u;
        // 0x3b4ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4CE8u;
        goto label_3b4ce8;
    }
    ctx->pc = 0x3B4CE0u;
    SET_GPR_U32(ctx, 31, 0x3B4CE8u);
    ctx->pc = 0x3B4CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CE0u;
    // 0x3b4ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B4CE0u, 0x3B4CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CE8u;
label_3b4ce8:
    // 0x3b4ce8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4cec:
    // 0x3b4cec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b4cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4cf0:
    // 0x3b4cf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b4cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4cf4:
    // 0x3b4cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4cf8:
    // 0x3b4cf8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4cfc:
    // 0x3b4cfc: 0xc0e94fc  jal         func_3A53F0
label_3b4d00:
    if (ctx->pc == 0x3B4D00u) {
        ctx->pc = 0x3B4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CFCu;
        // 0x3b4d00: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D04u;
        goto label_3b4d04;
    }
    ctx->pc = 0x3B4CFCu;
    SET_GPR_U32(ctx, 31, 0x3B4D04u);
    ctx->pc = 0x3B4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CFCu;
    // 0x3b4d00: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B4CFCu, 0x3B4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D04u;
label_3b4d04:
    // 0x3b4d04: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b4d08:
    // 0x3b4d08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b4d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b4d0c:
    // 0x3b4d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d10:
    // 0x3b4d10: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b4d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b4d14:
    // 0x3b4d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b4d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b4d18:
    // 0x3b4d18: 0xc0cd518  jal         func_335460
label_3b4d1c:
    if (ctx->pc == 0x3B4D1Cu) {
        ctx->pc = 0x3B4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D18u;
        // 0x3b4d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D20u;
        goto label_3b4d20;
    }
    ctx->pc = 0x3B4D18u;
    SET_GPR_U32(ctx, 31, 0x3B4D20u);
    ctx->pc = 0x3B4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D18u;
    // 0x3b4d1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4D18u, 0x3B4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D20u;
label_3b4d20:
    // 0x3b4d20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b4d24:
    // 0x3b4d24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b4d24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b4d28:
    // 0x3b4d28: 0xc136b24  jal         func_4DAC90
label_3b4d2c:
    if (ctx->pc == 0x3B4D2Cu) {
        ctx->pc = 0x3B4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D28u;
        // 0x3b4d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D30u;
        goto label_3b4d30;
    }
    ctx->pc = 0x3B4D28u;
    SET_GPR_U32(ctx, 31, 0x3B4D30u);
    ctx->pc = 0x3B4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D28u;
    // 0x3b4d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B4D28u, 0x3B4D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D30u;
label_3b4d30:
    // 0x3b4d30: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4d34:
    // 0x3b4d34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d38:
    // 0x3b4d38: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d3c:
    // 0x3b4d3c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4d40:
    // 0x3b4d40: 0xc0ea158  jal         func_3A8560
label_3b4d44:
    if (ctx->pc == 0x3B4D44u) {
        ctx->pc = 0x3B4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D40u;
        // 0x3b4d44: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D48u;
        goto label_3b4d48;
    }
    ctx->pc = 0x3B4D40u;
    SET_GPR_U32(ctx, 31, 0x3B4D48u);
    ctx->pc = 0x3B4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D40u;
    // 0x3b4d44: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4D40u, 0x3B4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D48u;
label_3b4d48:
    // 0x3b4d48: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b4d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b4d4c:
    // 0x3b4d4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d50:
    // 0x3b4d50: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d54:
    // 0x3b4d54: 0xc0ea158  jal         func_3A8560
label_3b4d58:
    if (ctx->pc == 0x3B4D58u) {
        ctx->pc = 0x3B4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D54u;
        // 0x3b4d58: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D5Cu;
        goto label_3b4d5c;
    }
    ctx->pc = 0x3B4D54u;
    SET_GPR_U32(ctx, 31, 0x3B4D5Cu);
    ctx->pc = 0x3B4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D54u;
    // 0x3b4d58: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4D54u, 0x3B4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D5Cu;
label_3b4d5c:
    // 0x3b4d5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b4d60:
    // 0x3b4d60: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b4d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d64:
    // 0x3b4d64: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4d68:
    // 0x3b4d68: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b4d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b4d6c:
    // 0x3b4d6c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b4d70:
    // 0x3b4d70: 0x40f809  jalr        $v0
label_3b4d74:
    if (ctx->pc == 0x3B4D74u) {
        ctx->pc = 0x3B4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D70u;
        // 0x3b4d74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D78u;
        goto label_3b4d78;
    }
    ctx->pc = 0x3B4D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4D78u);
        ctx->pc = 0x3B4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D70u;
        // 0x3b4d74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D70u, 0x3B4D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4D78u;
label_3b4d78:
    // 0x3b4d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d7c:
    // 0x3b4d7c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4d80:
    // 0x3b4d80: 0xc0cd518  jal         func_335460
label_3b4d84:
    if (ctx->pc == 0x3B4D84u) {
        ctx->pc = 0x3B4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D80u;
        // 0x3b4d84: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D88u;
        goto label_3b4d88;
    }
    ctx->pc = 0x3B4D80u;
    SET_GPR_U32(ctx, 31, 0x3B4D88u);
    ctx->pc = 0x3B4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D80u;
    // 0x3b4d84: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4D80u, 0x3B4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D88u;
label_3b4d88:
    // 0x3b4d88: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b4d88u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4d8c:
    // 0x3b4d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4d90:
    // 0x3b4d90: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4d90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4d94:
    // 0x3b4d94: 0xc0cd518  jal         func_335460
label_3b4d98:
    if (ctx->pc == 0x3B4D98u) {
        ctx->pc = 0x3B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D94u;
        // 0x3b4d98: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4D9Cu;
        goto label_3b4d9c;
    }
    ctx->pc = 0x3B4D94u;
    SET_GPR_U32(ctx, 31, 0x3B4D9Cu);
    ctx->pc = 0x3B4D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D94u;
    // 0x3b4d98: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4D94u, 0x3B4D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D9Cu;
label_3b4d9c:
    // 0x3b4d9c: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b4d9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4da0:
    // 0x3b4da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4da4:
    // 0x3b4da4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4da4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4da8:
    // 0x3b4da8: 0xc0cd518  jal         func_335460
label_3b4dac:
    if (ctx->pc == 0x3B4DACu) {
        ctx->pc = 0x3B4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DA8u;
        // 0x3b4dac: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4DB0u;
        goto label_3b4db0;
    }
    ctx->pc = 0x3B4DA8u;
    SET_GPR_U32(ctx, 31, 0x3B4DB0u);
    ctx->pc = 0x3B4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DA8u;
    // 0x3b4dac: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4DA8u, 0x3B4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DB0u;
label_3b4db0:
    // 0x3b4db0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b4db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4db4:
    // 0x3b4db4: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b4db4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b4db8:
    // 0x3b4db8: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b4db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4dbc:
    // 0x3b4dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4dc0:
    // 0x3b4dc0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b4dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b4dc4:
    // 0x3b4dc4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b4dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b4dc8:
    // 0x3b4dc8: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b4dc8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b4dcc:
    // 0x3b4dcc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4dd0:
    // 0x3b4dd0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3b4dd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b4dd4:
    // 0x3b4dd4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4dd8:
    // 0x3b4dd8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b4ddc:
    // 0x3b4ddc: 0xe7bd0084  swc1        $f29, 0x84($sp)
    ctx->pc = 0x3b4ddcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b4de0:
    // 0x3b4de0: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x3b4de0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b4de4:
    // 0x3b4de4: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3b4de4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b4de8:
    // 0x3b4de8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4dec:
    // 0x3b4dec: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b4decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b4df0:
    // 0x3b4df0: 0xc0e911e  jal         func_3A4478
label_3b4df4:
    if (ctx->pc == 0x3B4DF4u) {
        ctx->pc = 0x3B4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DF0u;
        // 0x3b4df4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4DF8u;
        goto label_3b4df8;
    }
    ctx->pc = 0x3B4DF0u;
    SET_GPR_U32(ctx, 31, 0x3B4DF8u);
    ctx->pc = 0x3B4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DF0u;
    // 0x3b4df4: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B4DF0u, 0x3B4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DF8u;
label_3b4df8:
    // 0x3b4df8: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3b4df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3b4dfc:
    // 0x3b4dfc: 0x3421b7d4  ori         $at, $at, 0xB7D4
    ctx->pc = 0x3b4dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47060);
label_3b4e00:
    // 0x3b4e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b4e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b4e04:
    // 0x3b4e04: 0x0  nop
    ctx->pc = 0x3b4e04u;
    // NOP
label_3b4e08:
    // 0x3b4e08: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b4e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b4e0c:
    // 0x3b4e0c: 0xe65a0004  swc1        $f26, 0x4($s2)
    ctx->pc = 0x3b4e0cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b4e10:
    // 0x3b4e10: 0xe6590008  swc1        $f25, 0x8($s2)
    ctx->pc = 0x3b4e10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b4e14:
    // 0x3b4e14: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b4e14u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b4e18:
    // 0x3b4e18: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4e1c:
    // 0x3b4e1c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b4e1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4e20:
    // 0x3b4e20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b4e24:
    // 0x3b4e24: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b4e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b4e28:
    // 0x3b4e28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b4e28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b4e2c:
    // 0x3b4e2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b4e2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4e30:
    // 0x3b4e30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b4e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4e34:
    // 0x3b4e34: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b4e34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4e38:
    // 0x3b4e38: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b4e38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4e3c:
    // 0x3b4e3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b4e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4e40:
    // 0x3b4e40: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b4e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4e44:
    // 0x3b4e44: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b4e44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b4e48:
    // 0x3b4e48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b4e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4e4c:
    // 0x3b4e4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b4e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4e50:
    // 0x3b4e50: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b4e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4e54:
    // 0x3b4e54: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b4e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4e58:
    // 0x3b4e58: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b4e58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4e5c:
    // 0x3b4e5c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b4e5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4e60:
    // 0x3b4e60: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b4e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4e64:
    // 0x3b4e64: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4e68:
    // 0x3b4e68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b4e68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4e6c:
    // 0x3b4e6c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b4e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b4e70:
    // 0x3b4e70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b4e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b4e74:
    // 0x3b4e74: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b4e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b4e78:
    // 0x3b4e78: 0x26102340  addiu       $s0, $s0, 0x2340
    ctx->pc = 0x3b4e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9024));
label_3b4e7c:
    // 0x3b4e7c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4e80:
    // 0x3b4e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4e84:
    // 0x3b4e84: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4e88:
    // 0x3b4e88: 0xc0e90ca  jal         func_3A4328
label_3b4e8c:
    if (ctx->pc == 0x3B4E8Cu) {
        ctx->pc = 0x3B4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E88u;
        // 0x3b4e8c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4E90u;
        goto label_3b4e90;
    }
    ctx->pc = 0x3B4E88u;
    SET_GPR_U32(ctx, 31, 0x3B4E90u);
    ctx->pc = 0x3B4E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E88u;
    // 0x3b4e8c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B4E88u, 0x3B4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E90u;
label_3b4e90:
    // 0x3b4e90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b4e94:
    // 0x3b4e94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b4e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b4e98:
    // 0x3b4e98: 0xc136b18  jal         func_4DAC60
label_3b4e9c:
    if (ctx->pc == 0x3B4E9Cu) {
        ctx->pc = 0x3B4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E98u;
        // 0x3b4e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4EA0u;
        goto label_3b4ea0;
    }
    ctx->pc = 0x3B4E98u;
    SET_GPR_U32(ctx, 31, 0x3B4EA0u);
    ctx->pc = 0x3B4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E98u;
    // 0x3b4e9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B4E98u, 0x3B4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EA0u;
label_3b4ea0:
    // 0x3b4ea0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b4ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b4ea4:
    // 0x3b4ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ea8:
    // 0x3b4ea8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b4ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eac:
    // 0x3b4eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b4eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eb0:
    // 0x3b4eb0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4eb4:
    // 0x3b4eb4: 0xc0e94fc  jal         func_3A53F0
label_3b4eb8:
    if (ctx->pc == 0x3B4EB8u) {
        ctx->pc = 0x3B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB4u;
        // 0x3b4eb8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4EBCu;
        goto label_3b4ebc;
    }
    ctx->pc = 0x3B4EB4u;
    SET_GPR_U32(ctx, 31, 0x3B4EBCu);
    ctx->pc = 0x3B4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EB4u;
    // 0x3b4eb8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B4EB4u, 0x3B4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EBCu;
label_3b4ebc:
    // 0x3b4ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ec0:
    // 0x3b4ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ec4:
    // 0x3b4ec4: 0xc0e911e  jal         func_3A4478
label_3b4ec8:
    if (ctx->pc == 0x3B4EC8u) {
        ctx->pc = 0x3B4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EC4u;
        // 0x3b4ec8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4ECCu;
        goto label_3b4ecc;
    }
    ctx->pc = 0x3B4EC4u;
    SET_GPR_U32(ctx, 31, 0x3B4ECCu);
    ctx->pc = 0x3B4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EC4u;
    // 0x3b4ec8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B4EC4u, 0x3B4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4ECCu;
label_3b4ecc:
    // 0x3b4ecc: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x3b4eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_3b4ed0:
    // 0x3b4ed0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4ed4:
    // 0x3b4ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b4ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b4ed8:
    // 0x3b4ed8: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3b4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3b4edc:
    // 0x3b4edc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3b4edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3b4ee0:
    // 0x3b4ee0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b4ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b4ee4:
    // 0x3b4ee4: 0xc0cd518  jal         func_335460
label_3b4ee8:
    if (ctx->pc == 0x3B4EE8u) {
        ctx->pc = 0x3B4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EE4u;
        // 0x3b4ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4EECu;
        goto label_3b4eec;
    }
    ctx->pc = 0x3B4EE4u;
    SET_GPR_U32(ctx, 31, 0x3B4EECu);
    ctx->pc = 0x3B4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EE4u;
    // 0x3b4ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4EE4u, 0x3B4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EECu;
label_3b4eec:
    // 0x3b4eec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b4ef0:
    // 0x3b4ef0: 0xe7bd00a4  swc1        $f29, 0xA4($sp)
    ctx->pc = 0x3b4ef0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b4ef4:
    // 0x3b4ef4: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x3b4ef4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b4ef8:
    // 0x3b4ef8: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b4ef8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b4efc:
    // 0x3b4efc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4f00:
    // 0x3b4f00: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b4f00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b4f04:
    // 0x3b4f04: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b4f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b4f08:
    // 0x3b4f08: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b4f0c:
    // 0x3b4f0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b4f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b4f10:
    // 0x3b4f10: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b4f10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b4f14:
    // 0x3b4f14: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b4f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4f18:
    // 0x3b4f18: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b4f18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4f1c:
    // 0x3b4f1c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b4f1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4f20:
    // 0x3b4f20: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b4f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4f24:
    // 0x3b4f24: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b4f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4f28:
    // 0x3b4f28: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b4f28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b4f2c:
    // 0x3b4f2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b4f2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4f30:
    // 0x3b4f30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b4f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b4f34:
    // 0x3b4f34: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b4f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b4f38:
    // 0x3b4f38: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b4f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4f3c:
    // 0x3b4f3c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b4f3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b4f40:
    // 0x3b4f40: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b4f40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b4f44:
    // 0x3b4f44: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b4f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4f48:
    // 0x3b4f48: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b4f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b4f4c:
    // 0x3b4f4c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b4f4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b4f50:
    // 0x3b4f50: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3b4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3b4f54:
    // 0x3b4f54: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3b4f54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_3b4f58:
    // 0x3b4f58: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b4f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b4f5c:
    // 0x3b4f5c: 0x4600e306  mov.s       $f12, $f28
    ctx->pc = 0x3b4f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[28]);
label_3b4f60:
    // 0x3b4f60: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b4f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b4f64:
    // 0x3b4f64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f68:
    // 0x3b4f68: 0xc0cd518  jal         func_335460
label_3b4f6c:
    if (ctx->pc == 0x3B4F6Cu) {
        ctx->pc = 0x3B4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F68u;
        // 0x3b4f6c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F70u;
        goto label_3b4f70;
    }
    ctx->pc = 0x3B4F68u;
    SET_GPR_U32(ctx, 31, 0x3B4F70u);
    ctx->pc = 0x3B4F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F68u;
    // 0x3b4f6c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4F68u, 0x3B4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F70u;
label_3b4f70:
    // 0x3b4f70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b4f74:
    // 0x3b4f74: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b4f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b4f78:
    // 0x3b4f78: 0xc136b24  jal         func_4DAC90
label_3b4f7c:
    if (ctx->pc == 0x3B4F7Cu) {
        ctx->pc = 0x3B4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F78u;
        // 0x3b4f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F80u;
        goto label_3b4f80;
    }
    ctx->pc = 0x3B4F78u;
    SET_GPR_U32(ctx, 31, 0x3B4F80u);
    ctx->pc = 0x3B4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F78u;
    // 0x3b4f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B4F78u, 0x3B4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F80u;
label_3b4f80:
    // 0x3b4f80: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b4f80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b4f84:
    // 0x3b4f84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f88:
    // 0x3b4f88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f8c:
    // 0x3b4f8c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b4f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b4f90:
    // 0x3b4f90: 0xc0ea158  jal         func_3A8560
label_3b4f94:
    if (ctx->pc == 0x3B4F94u) {
        ctx->pc = 0x3B4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F90u;
        // 0x3b4f94: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4F98u;
        goto label_3b4f98;
    }
    ctx->pc = 0x3B4F90u;
    SET_GPR_U32(ctx, 31, 0x3B4F98u);
    ctx->pc = 0x3B4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F90u;
    // 0x3b4f94: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4F90u, 0x3B4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F98u;
label_3b4f98:
    // 0x3b4f98: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b4f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b4f9c:
    // 0x3b4f9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fa0:
    // 0x3b4fa0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b4fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fa4:
    // 0x3b4fa4: 0xc0ea158  jal         func_3A8560
label_3b4fa8:
    if (ctx->pc == 0x3B4FA8u) {
        ctx->pc = 0x3B4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FA4u;
        // 0x3b4fa8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FACu;
        goto label_3b4fac;
    }
    ctx->pc = 0x3B4FA4u;
    SET_GPR_U32(ctx, 31, 0x3B4FACu);
    ctx->pc = 0x3B4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FA4u;
    // 0x3b4fa8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B4FA4u, 0x3B4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FACu;
label_3b4fac:
    // 0x3b4fac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b4fb0:
    // 0x3b4fb0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b4fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fb4:
    // 0x3b4fb4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4fb8:
    // 0x3b4fb8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b4fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b4fbc:
    // 0x3b4fbc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b4fc0:
    // 0x3b4fc0: 0x40f809  jalr        $v0
label_3b4fc4:
    if (ctx->pc == 0x3B4FC4u) {
        ctx->pc = 0x3B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FC0u;
        // 0x3b4fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FC8u;
        goto label_3b4fc8;
    }
    ctx->pc = 0x3B4FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4FC8u);
        ctx->pc = 0x3B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FC0u;
        // 0x3b4fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4FC0u, 0x3B4FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4FC8u;
label_3b4fc8:
    // 0x3b4fc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fcc:
    // 0x3b4fcc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4fccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4fd0:
    // 0x3b4fd0: 0xc0cd518  jal         func_335460
label_3b4fd4:
    if (ctx->pc == 0x3B4FD4u) {
        ctx->pc = 0x3B4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FD0u;
        // 0x3b4fd4: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FD8u;
        goto label_3b4fd8;
    }
    ctx->pc = 0x3B4FD0u;
    SET_GPR_U32(ctx, 31, 0x3B4FD8u);
    ctx->pc = 0x3B4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FD0u;
    // 0x3b4fd4: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4FD0u, 0x3B4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FD8u;
label_3b4fd8:
    // 0x3b4fd8: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b4fd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4fdc:
    // 0x3b4fdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fe0:
    // 0x3b4fe0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4fe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4fe4:
    // 0x3b4fe4: 0xc0cd518  jal         func_335460
label_3b4fe8:
    if (ctx->pc == 0x3B4FE8u) {
        ctx->pc = 0x3B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FE4u;
        // 0x3b4fe8: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4FECu;
        goto label_3b4fec;
    }
    ctx->pc = 0x3B4FE4u;
    SET_GPR_U32(ctx, 31, 0x3B4FECu);
    ctx->pc = 0x3B4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FE4u;
    // 0x3b4fe8: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4FE4u, 0x3B4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FECu;
label_3b4fec:
    // 0x3b4fec: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b4fecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b4ff0:
    // 0x3b4ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b4ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ff4:
    // 0x3b4ff4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b4ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b4ff8:
    // 0x3b4ff8: 0xc0cd518  jal         func_335460
label_3b4ffc:
    if (ctx->pc == 0x3B4FFCu) {
        ctx->pc = 0x3B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FF8u;
        // 0x3b4ffc: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5000u;
        goto label_3b5000;
    }
    ctx->pc = 0x3B4FF8u;
    SET_GPR_U32(ctx, 31, 0x3B5000u);
    ctx->pc = 0x3B4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FF8u;
    // 0x3b4ffc: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B4FF8u, 0x3B5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5000u;
label_3b5000:
    // 0x3b5000: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b5000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5004:
    // 0x3b5004: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b5004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5008:
    // 0x3b5008: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b5008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b500c:
    // 0x3b500c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5010:
    // 0x3b5010: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5014:
    // 0x3b5014: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b5014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b5018:
    // 0x3b5018: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b5018u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b501c:
    // 0x3b501c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b501cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5020:
    // 0x3b5020: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x3b5020u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b5024:
    // 0x3b5024: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5028:
    // 0x3b5028: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b502c:
    // 0x3b502c: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3b502cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b5030:
    // 0x3b5030: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3b5030u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b5034:
    // 0x3b5034: 0xe7bd0084  swc1        $f29, 0x84($sp)
    ctx->pc = 0x3b5034u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b5038:
    // 0x3b5038: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b503c:
    // 0x3b503c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b5040:
    // 0x3b5040: 0xc0e911e  jal         func_3A4478
label_3b5044:
    if (ctx->pc == 0x3B5044u) {
        ctx->pc = 0x3B5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5040u;
        // 0x3b5044: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5048u;
        goto label_3b5048;
    }
    ctx->pc = 0x3B5040u;
    SET_GPR_U32(ctx, 31, 0x3B5048u);
    ctx->pc = 0x3B5044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5040u;
    // 0x3b5044: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B5040u, 0x3B5048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5048u;
label_3b5048:
    // 0x3b5048: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x3b5048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
label_3b504c:
    // 0x3b504c: 0x342195ff  ori         $at, $at, 0x95FF
    ctx->pc = 0x3b504cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38399);
label_3b5050:
    // 0x3b5050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b5050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5054:
    // 0x3b5054: 0x0  nop
    ctx->pc = 0x3b5054u;
    // NOP
label_3b5058:
    // 0x3b5058: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b5058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b505c:
    // 0x3b505c: 0xe65a0004  swc1        $f26, 0x4($s2)
    ctx->pc = 0x3b505cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b5060:
    // 0x3b5060: 0xe6590008  swc1        $f25, 0x8($s2)
    ctx->pc = 0x3b5060u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b5064:
    // 0x3b5064: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b5064u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b5068:
    // 0x3b5068: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b506c:
    // 0x3b506c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b506cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5070:
    // 0x3b5070: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b5070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b5074:
    // 0x3b5074: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b5074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b5078:
    // 0x3b5078: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b5078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b507c:
    // 0x3b507c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b507cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b5080:
    // 0x3b5080: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b5080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5084:
    // 0x3b5084: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b5084u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b5088:
    // 0x3b5088: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b5088u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b508c:
    // 0x3b508c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b508cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5090:
    // 0x3b5090: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b5090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5094:
    // 0x3b5094: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b5094u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b5098:
    // 0x3b5098: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b5098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b509c:
    // 0x3b509c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b509cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b50a0:
    // 0x3b50a0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b50a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b50a4:
    // 0x3b50a4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b50a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b50a8:
    // 0x3b50a8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b50a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b50ac:
    // 0x3b50ac: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b50acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b50b0:
    // 0x3b50b0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b50b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b50b4:
    // 0x3b50b4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b50b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b50b8:
    // 0x3b50b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b50b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b50bc:
    // 0x3b50bc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b50bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b50c0:
    // 0x3b50c0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b50c4:
    // 0x3b50c4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b50c8:
    // 0x3b50c8: 0x26102350  addiu       $s0, $s0, 0x2350
    ctx->pc = 0x3b50c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9040));
label_3b50cc:
    // 0x3b50cc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b50d0:
    // 0x3b50d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b50d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b50d4:
    // 0x3b50d4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b50d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b50d8:
    // 0x3b50d8: 0xc0e90ca  jal         func_3A4328
label_3b50dc:
    if (ctx->pc == 0x3B50DCu) {
        ctx->pc = 0x3B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50D8u;
        // 0x3b50dc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50E0u;
        goto label_3b50e0;
    }
    ctx->pc = 0x3B50D8u;
    SET_GPR_U32(ctx, 31, 0x3B50E0u);
    ctx->pc = 0x3B50DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50D8u;
    // 0x3b50dc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B50D8u, 0x3B50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50E0u;
label_3b50e0:
    // 0x3b50e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b50e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b50e4:
    // 0x3b50e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b50e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b50e8:
    // 0x3b50e8: 0xc136b18  jal         func_4DAC60
label_3b50ec:
    if (ctx->pc == 0x3B50ECu) {
        ctx->pc = 0x3B50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50E8u;
        // 0x3b50ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B50F0u;
        goto label_3b50f0;
    }
    ctx->pc = 0x3B50E8u;
    SET_GPR_U32(ctx, 31, 0x3B50F0u);
    ctx->pc = 0x3B50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50E8u;
    // 0x3b50ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B50E8u, 0x3B50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50F0u;
label_3b50f0:
    // 0x3b50f0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b50f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b50f4:
    // 0x3b50f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b50f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b50f8:
    // 0x3b50f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b50f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b50fc:
    // 0x3b50fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b50fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5100:
    // 0x3b5100: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5104:
    // 0x3b5104: 0xc0e94fc  jal         func_3A53F0
label_3b5108:
    if (ctx->pc == 0x3B5108u) {
        ctx->pc = 0x3B5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5104u;
        // 0x3b5108: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B510Cu;
        goto label_3b510c;
    }
    ctx->pc = 0x3B5104u;
    SET_GPR_U32(ctx, 31, 0x3B510Cu);
    ctx->pc = 0x3B5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5104u;
    // 0x3b5108: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B5104u, 0x3B510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B510Cu;
label_3b510c:
    // 0x3b510c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b510cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b5110:
    // 0x3b5110: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b5110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b5114:
    // 0x3b5114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5118:
    // 0x3b5118: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b5118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b511c:
    // 0x3b511c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b511cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b5120:
    // 0x3b5120: 0xc0cd518  jal         func_335460
label_3b5124:
    if (ctx->pc == 0x3B5124u) {
        ctx->pc = 0x3B5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5120u;
        // 0x3b5124: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5128u;
        goto label_3b5128;
    }
    ctx->pc = 0x3B5120u;
    SET_GPR_U32(ctx, 31, 0x3B5128u);
    ctx->pc = 0x3B5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5120u;
    // 0x3b5124: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5120u, 0x3B5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5128u;
label_3b5128:
    // 0x3b5128: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b5128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b512c:
    // 0x3b512c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b512cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b5130:
    // 0x3b5130: 0xc136b24  jal         func_4DAC90
label_3b5134:
    if (ctx->pc == 0x3B5134u) {
        ctx->pc = 0x3B5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5130u;
        // 0x3b5134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5138u;
        goto label_3b5138;
    }
    ctx->pc = 0x3B5130u;
    SET_GPR_U32(ctx, 31, 0x3B5138u);
    ctx->pc = 0x3B5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5130u;
    // 0x3b5134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B5130u, 0x3B5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5138u;
label_3b5138:
    // 0x3b5138: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b513c:
    // 0x3b513c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5140:
    // 0x3b5140: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5144:
    // 0x3b5144: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5148:
    // 0x3b5148: 0xc0ea158  jal         func_3A8560
label_3b514c:
    if (ctx->pc == 0x3B514Cu) {
        ctx->pc = 0x3B514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5148u;
        // 0x3b514c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5150u;
        goto label_3b5150;
    }
    ctx->pc = 0x3B5148u;
    SET_GPR_U32(ctx, 31, 0x3B5150u);
    ctx->pc = 0x3B514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5148u;
    // 0x3b514c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B5148u, 0x3B5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5150u;
label_3b5150:
    // 0x3b5150: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b5150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b5154:
    // 0x3b5154: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5158:
    // 0x3b5158: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b515c:
    // 0x3b515c: 0xc0ea158  jal         func_3A8560
label_3b5160:
    if (ctx->pc == 0x3B5160u) {
        ctx->pc = 0x3B5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B515Cu;
        // 0x3b5160: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5164u;
        goto label_3b5164;
    }
    ctx->pc = 0x3B515Cu;
    SET_GPR_U32(ctx, 31, 0x3B5164u);
    ctx->pc = 0x3B5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B515Cu;
    // 0x3b5160: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B515Cu, 0x3B5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5164u;
label_3b5164:
    // 0x3b5164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b5164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b5168:
    // 0x3b5168: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b5168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b516c:
    // 0x3b516c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b5170:
    // 0x3b5170: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b5170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b5174:
    // 0x3b5174: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b5178:
    // 0x3b5178: 0x40f809  jalr        $v0
label_3b517c:
    if (ctx->pc == 0x3B517Cu) {
        ctx->pc = 0x3B517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5178u;
        // 0x3b517c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5180u;
        goto label_3b5180;
    }
    ctx->pc = 0x3B5178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B5180u);
        ctx->pc = 0x3B517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5178u;
        // 0x3b517c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5178u, 0x3B5180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5180u;
label_3b5180:
    // 0x3b5180: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b5180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b5184:
    // 0x3b5184: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b5188:
    // 0x3b5188: 0xc0cd518  jal         func_335460
label_3b518c:
    if (ctx->pc == 0x3B518Cu) {
        ctx->pc = 0x3B518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5188u;
        // 0x3b518c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5190u;
        goto label_3b5190;
    }
    ctx->pc = 0x3B5188u;
    SET_GPR_U32(ctx, 31, 0x3B5190u);
    ctx->pc = 0x3B518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5188u;
    // 0x3b518c: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B5188u, 0x3B5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5190u;
label_3b5190:
    // 0x3b5190: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x3b5190u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b5194:
    // 0x3b5194: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b5194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b5198:
    // 0x3b5198: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b5198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b519c:
    // 0x3b519c: 0xc0cd518  jal         func_335460
label_3b51a0:
    if (ctx->pc == 0x3B51A0u) {
        ctx->pc = 0x3B51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B519Cu;
        // 0x3b51a0: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51A4u;
        goto label_3b51a4;
    }
    ctx->pc = 0x3B519Cu;
    SET_GPR_U32(ctx, 31, 0x3B51A4u);
    ctx->pc = 0x3B51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B519Cu;
    // 0x3b51a0: 0x4600f346  mov.s       $f13, $f30 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B519Cu, 0x3B51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51A4u;
label_3b51a4:
    // 0x3b51a4: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3b51a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b51a8:
    // 0x3b51a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b51a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b51ac:
    // 0x3b51ac: 0x4600f346  mov.s       $f13, $f30
    ctx->pc = 0x3b51acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[30]);
label_3b51b0:
    // 0x3b51b0: 0xc0cd518  jal         func_335460
label_3b51b4:
    if (ctx->pc == 0x3B51B4u) {
        ctx->pc = 0x3B51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51B0u;
        // 0x3b51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51B8u;
        goto label_3b51b8;
    }
    ctx->pc = 0x3B51B0u;
    SET_GPR_U32(ctx, 31, 0x3B51B8u);
    ctx->pc = 0x3B51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51B0u;
    // 0x3b51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B51B0u, 0x3B51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51B8u;
label_3b51b8:
    // 0x3b51b8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3b51b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3b51bc:
    // 0x3b51bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3b51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3b51c0:
    // 0x3b51c0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3b51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3b51c4:
    // 0x3b51c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b51c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b51c8:
    // 0x3b51c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3b51c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b51cc:
    // 0x3b51cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b51ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b51d0:
    // 0x3b51d0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3b51d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b51d4:
    // 0x3b51d4: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x3b51d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b51d8:
    // 0x3b51d8: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3b51d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b51dc:
    // 0x3b51dc: 0xe63f000c  swc1        $f31, 0xC($s1)
    ctx->pc = 0x3b51dcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3b51e0:
    // 0x3b51e0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3b51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3b51e4:
    // 0x3b51e4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b51e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b51e8:
    // 0x3b51e8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b51ec:
    // 0x3b51ec: 0xc0e911e  jal         func_3A4478
label_3b51f0:
    if (ctx->pc == 0x3B51F0u) {
        ctx->pc = 0x3B51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51ECu;
        // 0x3b51f0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B51F4u;
        goto label_3b51f4;
    }
    ctx->pc = 0x3B51ECu;
    SET_GPR_U32(ctx, 31, 0x3B51F4u);
    ctx->pc = 0x3B51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B51ECu;
    // 0x3b51f0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3B51ECu, 0x3B51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51F4u;
label_3b51f4:
    // 0x3b51f4: 0x3c01bf56  lui         $at, 0xBF56
    ctx->pc = 0x3b51f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48982 << 16));
label_3b51f8:
    // 0x3b51f8: 0x34211f9f  ori         $at, $at, 0x1F9F
    ctx->pc = 0x3b51f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8095);
label_3b51fc:
    // 0x3b51fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b51fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5200:
    // 0x3b5200: 0xe65f000c  swc1        $f31, 0xC($s2)
    ctx->pc = 0x3b5200u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3b5204:
    // 0x3b5204: 0x3c013bc3  lui         $at, 0x3BC3
    ctx->pc = 0x3b5204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15299 << 16));
label_3b5208:
    // 0x3b5208: 0x34219ffd  ori         $at, $at, 0x9FFD
    ctx->pc = 0x3b5208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40957);
label_3b520c:
    // 0x3b520c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3b520cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b5210:
    // 0x3b5210: 0x3c01bc09  lui         $at, 0xBC09
    ctx->pc = 0x3b5210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48137 << 16));
label_3b5214:
    // 0x3b5214: 0x34212253  ori         $at, $at, 0x2253
    ctx->pc = 0x3b5214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8787);
label_3b5218:
    // 0x3b5218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b5218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b521c:
    // 0x3b521c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x3b521cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b5220:
    // 0x3b5220: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x3b5220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3b5224:
    // 0x3b5224: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3b5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3b5228:
    // 0x3b5228: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b5228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b522c:
    // 0x3b522c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b522cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5230:
    // 0x3b5230: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b5230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b5234:
    // 0x3b5234: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3b5234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3b5238:
    // 0x3b5238: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b5238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b523c:
    // 0x3b523c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b523cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b5240:
    // 0x3b5240: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3b5240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5244:
    // 0x3b5244: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3b5244u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b5248:
    // 0x3b5248: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3b5248u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b524c:
    // 0x3b524c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3b524cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5250:
    // 0x3b5250: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3b5250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5254:
    // 0x3b5254: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3b5254u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b5258:
    // 0x3b5258: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3b5258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b525c:
    // 0x3b525c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3b525cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3b5260:
    // 0x3b5260: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3b5260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b5264:
    // 0x3b5264: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3b5264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5268:
    // 0x3b5268: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3b5268u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3b526c:
    // 0x3b526c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3b526cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3b5270:
    // 0x3b5270: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3b5270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5274:
    // 0x3b5274: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3b5274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3b5278:
    // 0x3b5278: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3b5278u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3b527c:
    // 0x3b527c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3b527cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3b5280:
    // 0x3b5280: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b5284:
    // 0x3b5284: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b5284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b5288:
    // 0x3b5288: 0x26102360  addiu       $s0, $s0, 0x2360
    ctx->pc = 0x3b5288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9056));
label_3b528c:
    // 0x3b528c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b5290:
    // 0x3b5290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5294:
    // 0x3b5294: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5298:
    // 0x3b5298: 0xc0e90ca  jal         func_3A4328
label_3b529c:
    if (ctx->pc == 0x3B529Cu) {
        ctx->pc = 0x3B529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5298u;
        // 0x3b529c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B52A0u;
        goto label_3b52a0;
    }
    ctx->pc = 0x3B5298u;
    SET_GPR_U32(ctx, 31, 0x3B52A0u);
    ctx->pc = 0x3B529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5298u;
    // 0x3b529c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B5298u, 0x3B52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52A0u;
label_3b52a0:
    // 0x3b52a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3b52a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b52a4:
    // 0x3b52a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b52a8:
    // 0x3b52a8: 0xc136b18  jal         func_4DAC60
label_3b52ac:
    if (ctx->pc == 0x3B52ACu) {
        ctx->pc = 0x3B52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52A8u;
        // 0x3b52ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B52B0u;
        goto label_3b52b0;
    }
    ctx->pc = 0x3B52A8u;
    SET_GPR_U32(ctx, 31, 0x3B52B0u);
    ctx->pc = 0x3B52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52A8u;
    // 0x3b52ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3B52A8u, 0x3B52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52B0u;
label_3b52b0:
    // 0x3b52b0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3b52b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b52b4:
    // 0x3b52b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b52b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b52b8:
    // 0x3b52b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b52b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b52bc:
    // 0x3b52bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b52c0:
    // 0x3b52c0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b52c4:
    // 0x3b52c4: 0xc0e94fc  jal         func_3A53F0
label_3b52c8:
    if (ctx->pc == 0x3B52C8u) {
        ctx->pc = 0x3B52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52C4u;
        // 0x3b52c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B52CCu;
        goto label_3b52cc;
    }
    ctx->pc = 0x3B52C4u;
    SET_GPR_U32(ctx, 31, 0x3B52CCu);
    ctx->pc = 0x3B52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52C4u;
    // 0x3b52c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3B52C4u, 0x3B52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52CCu;
label_3b52cc:
    // 0x3b52cc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b52ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b52d0:
    // 0x3b52d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b52d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b52d4:
    // 0x3b52d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b52d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b52d8:
    // 0x3b52d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b52d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b52dc:
    // 0x3b52dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b52dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b52e0:
    // 0x3b52e0: 0xc0cd518  jal         func_335460
label_3b52e4:
    if (ctx->pc == 0x3B52E4u) {
        ctx->pc = 0x3B52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52E0u;
        // 0x3b52e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B52E8u;
        goto label_3b52e8;
    }
    ctx->pc = 0x3B52E0u;
    SET_GPR_U32(ctx, 31, 0x3B52E8u);
    ctx->pc = 0x3B52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52E0u;
    // 0x3b52e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B52E0u, 0x3B52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52E8u;
label_3b52e8:
    // 0x3b52e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b52e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b52ec:
    // 0x3b52ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3b52ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3b52f0:
    // 0x3b52f0: 0xc136b24  jal         func_4DAC90
label_3b52f4:
    if (ctx->pc == 0x3B52F4u) {
        ctx->pc = 0x3B52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52F0u;
        // 0x3b52f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B52F8u;
        goto label_3b52f8;
    }
    ctx->pc = 0x3B52F0u;
    SET_GPR_U32(ctx, 31, 0x3B52F8u);
    ctx->pc = 0x3B52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52F0u;
    // 0x3b52f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3B52F0u, 0x3B52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52F8u;
label_3b52f8:
    // 0x3b52f8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3b52f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b52fc:
    // 0x3b52fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b52fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5300:
    // 0x3b5300: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5304:
    // 0x3b5304: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b5308:
    // 0x3b5308: 0xc0ea158  jal         func_3A8560
label_3b530c:
    if (ctx->pc == 0x3B530Cu) {
        ctx->pc = 0x3B530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5308u;
        // 0x3b530c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5310u;
        goto label_3b5310;
    }
    ctx->pc = 0x3B5308u;
    SET_GPR_U32(ctx, 31, 0x3B5310u);
    ctx->pc = 0x3B530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5308u;
    // 0x3b530c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B5308u, 0x3B5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5310u;
label_3b5310:
    // 0x3b5310: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3b5310u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b5314:
    // 0x3b5314: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b5314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b5318:
    // 0x3b5318: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b531c:
    // 0x3b531c: 0xc0ea158  jal         func_3A8560
label_3b5320:
    if (ctx->pc == 0x3B5320u) {
        ctx->pc = 0x3B5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B531Cu;
        // 0x3b5320: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5324u;
        goto label_3b5324;
    }
    ctx->pc = 0x3B531Cu;
    SET_GPR_U32(ctx, 31, 0x3B5324u);
    ctx->pc = 0x3B5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B531Cu;
    // 0x3b5320: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3B531Cu, 0x3B5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5324u;
label_3b5324:
    // 0x3b5324: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b5328:
    // 0x3b5328: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b5328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b532c:
    // 0x3b532c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b5330:
    // 0x3b5330: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b5330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b5334:
    // 0x3b5334: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b5338:
    // 0x3b5338: 0x40f809  jalr        $v0
label_3b533c:
    if (ctx->pc == 0x3B533Cu) {
        ctx->pc = 0x3B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5338u;
        // 0x3b533c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5340u;
        goto label_3b5340;
    }
    ctx->pc = 0x3B5338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B5340u);
        ctx->pc = 0x3B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5338u;
        // 0x3b533c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5338u, 0x3B5340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5340u;
label_3b5340:
    // 0x3b5340: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3b5340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3b5344:
    // 0x3b5344: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b5344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b5348:
    // 0x3b5348: 0xc1073cc  jal         func_41CF30
label_3b534c:
    if (ctx->pc == 0x3B534Cu) {
        ctx->pc = 0x3B534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5348u;
        // 0x3b534c: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5350u;
        goto label_3b5350;
    }
    ctx->pc = 0x3B5348u;
    SET_GPR_U32(ctx, 31, 0x3B5350u);
    ctx->pc = 0x3B534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5348u;
    // 0x3b534c: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3B5348u, 0x3B5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5350u;
label_3b5350:
    // 0x3b5350: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b5350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b5354:
    // 0x3b5354: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3b5358:
    if (ctx->pc == 0x3B5358u) {
        ctx->pc = 0x3B5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5354u;
        // 0x3b5358: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B535Cu;
        goto label_3b535c;
    }
    ctx->pc = 0x3B5354u;
    {
        const bool branch_taken_0x3b5354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5354u;
        // 0x3b5358: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5354) {
            ctx->pc = 0x3B5384u;
            goto label_3b5384;
        }
    }
    ctx->pc = 0x3B535Cu;
label_3b535c:
    // 0x3b535c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5360:
    // 0x3b5360: 0xc0e8dee  jal         func_3A37B8
label_3b5364:
    if (ctx->pc == 0x3B5364u) {
        ctx->pc = 0x3B5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5360u;
        // 0x3b5364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5368u;
        goto label_3b5368;
    }
    ctx->pc = 0x3B5360u;
    SET_GPR_U32(ctx, 31, 0x3B5368u);
    ctx->pc = 0x3B5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5360u;
    // 0x3b5364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B5360u, 0x3B5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5368u;
label_3b5368:
    // 0x3b5368: 0x7ae30010  lq          $v1, 0x10($s7)
    ctx->pc = 0x3b5368u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_3b536c:
    // 0x3b536c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5370:
    // 0x3b5370: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3b5370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5374:
    // 0x3b5374: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5378:
    // 0x3b5378: 0xc045ca0  jal         func_117280
label_3b537c:
    if (ctx->pc == 0x3B537Cu) {
        ctx->pc = 0x3B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5378u;
        // 0x3b537c: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5380u;
        goto label_3b5380;
    }
    ctx->pc = 0x3B5378u;
    SET_GPR_U32(ctx, 31, 0x3B5380u);
    ctx->pc = 0x3B537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5378u;
    // 0x3b537c: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3B5378u, 0x3B5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5380u;
label_3b5380:
    // 0x3b5380: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5384:
    // 0x3b5384: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3b5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3b5388:
    // 0x3b5388: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3b5388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3b538c:
    // 0x3b538c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3b538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5390:
    // 0x3b5390: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b5390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b5394:
    // 0x3b5394: 0xc0e9bb2  jal         func_3A6EC8
label_3b5398:
    if (ctx->pc == 0x3B5398u) {
        ctx->pc = 0x3B5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5394u;
        // 0x3b5398: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B539Cu;
        goto label_3b539c;
    }
    ctx->pc = 0x3B5394u;
    SET_GPR_U32(ctx, 31, 0x3B539Cu);
    ctx->pc = 0x3B5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5394u;
    // 0x3b5398: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B5394u, 0x3B539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B539Cu;
label_3b539c:
    // 0x3b539c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b53a0:
    if (ctx->pc == 0x3B53A0u) {
        ctx->pc = 0x3B53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B539Cu;
        // 0x3b53a0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53A4u;
        goto label_3b53a4;
    }
    ctx->pc = 0x3B539Cu;
    {
        const bool branch_taken_0x3b539c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B539Cu;
        // 0x3b53a0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b539c) {
            ctx->pc = 0x3B53E0u;
            goto label_3b53e0;
        }
    }
    ctx->pc = 0x3B53A4u;
label_3b53a4:
    // 0x3b53a4: 0xc0ea146  jal         func_3A8518
label_3b53a8:
    if (ctx->pc == 0x3B53A8u) {
        ctx->pc = 0x3B53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53A4u;
        // 0x3b53a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53ACu;
        goto label_3b53ac;
    }
    ctx->pc = 0x3B53A4u;
    SET_GPR_U32(ctx, 31, 0x3B53ACu);
    ctx->pc = 0x3B53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53A4u;
    // 0x3b53a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B53A4u, 0x3B53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53ACu;
label_3b53ac:
    // 0x3b53ac: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x3b53acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3b53b0:
    // 0x3b53b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b53b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b53b4:
    // 0x3b53b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b53b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b53b8:
    // 0x3b53b8: 0xc0e9bb2  jal         func_3A6EC8
label_3b53bc:
    if (ctx->pc == 0x3B53BCu) {
        ctx->pc = 0x3B53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53B8u;
        // 0x3b53bc: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53C0u;
        goto label_3b53c0;
    }
    ctx->pc = 0x3B53B8u;
    SET_GPR_U32(ctx, 31, 0x3B53C0u);
    ctx->pc = 0x3B53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53B8u;
    // 0x3b53bc: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B53B8u, 0x3B53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53C0u;
label_3b53c0:
    // 0x3b53c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b53c4:
    if (ctx->pc == 0x3B53C4u) {
        ctx->pc = 0x3B53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53C0u;
        // 0x3b53c4: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53C8u;
        goto label_3b53c8;
    }
    ctx->pc = 0x3B53C0u;
    {
        const bool branch_taken_0x3b53c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53C0u;
        // 0x3b53c4: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b53c0) {
            ctx->pc = 0x3B53E0u;
            goto label_3b53e0;
        }
    }
    ctx->pc = 0x3B53C8u;
label_3b53c8:
    // 0x3b53c8: 0xc0ea146  jal         func_3A8518
label_3b53cc:
    if (ctx->pc == 0x3B53CCu) {
        ctx->pc = 0x3B53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53C8u;
        // 0x3b53cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53D0u;
        goto label_3b53d0;
    }
    ctx->pc = 0x3B53C8u;
    SET_GPR_U32(ctx, 31, 0x3B53D0u);
    ctx->pc = 0x3B53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53C8u;
    // 0x3b53cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B53C8u, 0x3B53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53D0u;
label_3b53d0:
    // 0x3b53d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b53d4:
    // 0x3b53d4: 0xc0e85fa  jal         func_3A17E8
label_3b53d8:
    if (ctx->pc == 0x3B53D8u) {
        ctx->pc = 0x3B53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B53D4u;
        // 0x3b53d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B53DCu;
        goto label_3b53dc;
    }
    ctx->pc = 0x3B53D4u;
    SET_GPR_U32(ctx, 31, 0x3B53DCu);
    ctx->pc = 0x3B53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53D4u;
    // 0x3b53d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3B53D4u, 0x3B53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53DCu;
label_3b53dc:
    // 0x3b53dc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3b53dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3b53e0:
    // 0x3b53e0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3b53e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3b53e4:
    // 0x3b53e4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3b53e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3b53e8:
    // 0x3b53e8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3b53e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3b53ec:
    // 0x3b53ec: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3b53ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3b53f0:
    // 0x3b53f0: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x3b53f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3b53f4:
    // 0x3b53f4: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x3b53f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3b53f8:
    // 0x3b53f8: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x3b53f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3b53fc:
    // 0x3b53fc: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x3b53fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3b5400:
    // 0x3b5400: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x3b5400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_3b5404:
    // 0x3b5404: 0xc7bf0218  lwc1        $f31, 0x218($sp)
    ctx->pc = 0x3b5404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_3b5408:
    // 0x3b5408: 0xc7be0210  lwc1        $f30, 0x210($sp)
    ctx->pc = 0x3b5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_3b540c:
    // 0x3b540c: 0xc7bd0208  lwc1        $f29, 0x208($sp)
    ctx->pc = 0x3b540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3b5410:
    // 0x3b5410: 0xc7bc0200  lwc1        $f28, 0x200($sp)
    ctx->pc = 0x3b5410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3b5414:
    // 0x3b5414: 0xc7bb01f8  lwc1        $f27, 0x1F8($sp)
    ctx->pc = 0x3b5414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3b5418:
    // 0x3b5418: 0xc7ba01f0  lwc1        $f26, 0x1F0($sp)
    ctx->pc = 0x3b5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b541c:
    // 0x3b541c: 0xc7b901e8  lwc1        $f25, 0x1E8($sp)
    ctx->pc = 0x3b541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b5420:
    // 0x3b5420: 0xc7b801e0  lwc1        $f24, 0x1E0($sp)
    ctx->pc = 0x3b5420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b5424:
    // 0x3b5424: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x3b5424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b5428:
    // 0x3b5428: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x3b5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b542c:
    // 0x3b542c: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x3b542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b5430:
    // 0x3b5430: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x3b5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b5434:
    // 0x3b5434: 0x3e00008  jr          $ra
label_3b5438:
    if (ctx->pc == 0x3B5438u) {
        ctx->pc = 0x3B5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5434u;
        // 0x3b5438: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B543Cu;
        goto label_3b543c;
    }
    ctx->pc = 0x3B5434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5434u;
        // 0x3b5438: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B543Cu;
label_3b543c:
    // 0x3b543c: 0x0  nop
    ctx->pc = 0x3b543cu;
    // NOP
    ctx->pc = 0x3b5440u;
}
