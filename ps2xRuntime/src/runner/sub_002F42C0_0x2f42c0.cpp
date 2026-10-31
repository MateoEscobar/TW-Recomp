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

// Function: sub_002F42C0
// Address: 0x2f42c0 - 0x2f4980
void sub_002F42C0_0x2f42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F42C0_0x2f42c0");
#endif

    switch (ctx->pc) {
        case 0x2f42c0u: goto label_2f42c0;
        case 0x2f42c4u: goto label_2f42c4;
        case 0x2f42c8u: goto label_2f42c8;
        case 0x2f42ccu: goto label_2f42cc;
        case 0x2f42d0u: goto label_2f42d0;
        case 0x2f42d4u: goto label_2f42d4;
        case 0x2f42d8u: goto label_2f42d8;
        case 0x2f42dcu: goto label_2f42dc;
        case 0x2f42e0u: goto label_2f42e0;
        case 0x2f42e4u: goto label_2f42e4;
        case 0x2f42e8u: goto label_2f42e8;
        case 0x2f42ecu: goto label_2f42ec;
        case 0x2f42f0u: goto label_2f42f0;
        case 0x2f42f4u: goto label_2f42f4;
        case 0x2f42f8u: goto label_2f42f8;
        case 0x2f42fcu: goto label_2f42fc;
        case 0x2f4300u: goto label_2f4300;
        case 0x2f4304u: goto label_2f4304;
        case 0x2f4308u: goto label_2f4308;
        case 0x2f430cu: goto label_2f430c;
        case 0x2f4310u: goto label_2f4310;
        case 0x2f4314u: goto label_2f4314;
        case 0x2f4318u: goto label_2f4318;
        case 0x2f431cu: goto label_2f431c;
        case 0x2f4320u: goto label_2f4320;
        case 0x2f4324u: goto label_2f4324;
        case 0x2f4328u: goto label_2f4328;
        case 0x2f432cu: goto label_2f432c;
        case 0x2f4330u: goto label_2f4330;
        case 0x2f4334u: goto label_2f4334;
        case 0x2f4338u: goto label_2f4338;
        case 0x2f433cu: goto label_2f433c;
        case 0x2f4340u: goto label_2f4340;
        case 0x2f4344u: goto label_2f4344;
        case 0x2f4348u: goto label_2f4348;
        case 0x2f434cu: goto label_2f434c;
        case 0x2f4350u: goto label_2f4350;
        case 0x2f4354u: goto label_2f4354;
        case 0x2f4358u: goto label_2f4358;
        case 0x2f435cu: goto label_2f435c;
        case 0x2f4360u: goto label_2f4360;
        case 0x2f4364u: goto label_2f4364;
        case 0x2f4368u: goto label_2f4368;
        case 0x2f436cu: goto label_2f436c;
        case 0x2f4370u: goto label_2f4370;
        case 0x2f4374u: goto label_2f4374;
        case 0x2f4378u: goto label_2f4378;
        case 0x2f437cu: goto label_2f437c;
        case 0x2f4380u: goto label_2f4380;
        case 0x2f4384u: goto label_2f4384;
        case 0x2f4388u: goto label_2f4388;
        case 0x2f438cu: goto label_2f438c;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f4398u: goto label_2f4398;
        case 0x2f439cu: goto label_2f439c;
        case 0x2f43a0u: goto label_2f43a0;
        case 0x2f43a4u: goto label_2f43a4;
        case 0x2f43a8u: goto label_2f43a8;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43b8u: goto label_2f43b8;
        case 0x2f43bcu: goto label_2f43bc;
        case 0x2f43c0u: goto label_2f43c0;
        case 0x2f43c4u: goto label_2f43c4;
        case 0x2f43c8u: goto label_2f43c8;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43d4u: goto label_2f43d4;
        case 0x2f43d8u: goto label_2f43d8;
        case 0x2f43dcu: goto label_2f43dc;
        case 0x2f43e0u: goto label_2f43e0;
        case 0x2f43e4u: goto label_2f43e4;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        case 0x2f4418u: goto label_2f4418;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4420u: goto label_2f4420;
        case 0x2f4424u: goto label_2f4424;
        case 0x2f4428u: goto label_2f4428;
        case 0x2f442cu: goto label_2f442c;
        case 0x2f4430u: goto label_2f4430;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f4438u: goto label_2f4438;
        case 0x2f443cu: goto label_2f443c;
        case 0x2f4440u: goto label_2f4440;
        case 0x2f4444u: goto label_2f4444;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f444cu: goto label_2f444c;
        case 0x2f4450u: goto label_2f4450;
        case 0x2f4454u: goto label_2f4454;
        case 0x2f4458u: goto label_2f4458;
        case 0x2f445cu: goto label_2f445c;
        case 0x2f4460u: goto label_2f4460;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4468u: goto label_2f4468;
        case 0x2f446cu: goto label_2f446c;
        case 0x2f4470u: goto label_2f4470;
        case 0x2f4474u: goto label_2f4474;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f447cu: goto label_2f447c;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f4484u: goto label_2f4484;
        case 0x2f4488u: goto label_2f4488;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f4490u: goto label_2f4490;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f4498u: goto label_2f4498;
        case 0x2f449cu: goto label_2f449c;
        case 0x2f44a0u: goto label_2f44a0;
        case 0x2f44a4u: goto label_2f44a4;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44b4u: goto label_2f44b4;
        case 0x2f44b8u: goto label_2f44b8;
        case 0x2f44bcu: goto label_2f44bc;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44c4u: goto label_2f44c4;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f44d0u: goto label_2f44d0;
        case 0x2f44d4u: goto label_2f44d4;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44dcu: goto label_2f44dc;
        case 0x2f44e0u: goto label_2f44e0;
        case 0x2f44e4u: goto label_2f44e4;
        case 0x2f44e8u: goto label_2f44e8;
        case 0x2f44ecu: goto label_2f44ec;
        case 0x2f44f0u: goto label_2f44f0;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f44f8u: goto label_2f44f8;
        case 0x2f44fcu: goto label_2f44fc;
        case 0x2f4500u: goto label_2f4500;
        case 0x2f4504u: goto label_2f4504;
        case 0x2f4508u: goto label_2f4508;
        case 0x2f450cu: goto label_2f450c;
        case 0x2f4510u: goto label_2f4510;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f4518u: goto label_2f4518;
        case 0x2f451cu: goto label_2f451c;
        case 0x2f4520u: goto label_2f4520;
        case 0x2f4524u: goto label_2f4524;
        case 0x2f4528u: goto label_2f4528;
        case 0x2f452cu: goto label_2f452c;
        case 0x2f4530u: goto label_2f4530;
        case 0x2f4534u: goto label_2f4534;
        case 0x2f4538u: goto label_2f4538;
        case 0x2f453cu: goto label_2f453c;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f4544u: goto label_2f4544;
        case 0x2f4548u: goto label_2f4548;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4550u: goto label_2f4550;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f4558u: goto label_2f4558;
        case 0x2f455cu: goto label_2f455c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f474cu: goto label_2f474c;
        case 0x2f4750u: goto label_2f4750;
        case 0x2f4754u: goto label_2f4754;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f475cu: goto label_2f475c;
        case 0x2f4760u: goto label_2f4760;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f4768u: goto label_2f4768;
        case 0x2f476cu: goto label_2f476c;
        case 0x2f4770u: goto label_2f4770;
        case 0x2f4774u: goto label_2f4774;
        case 0x2f4778u: goto label_2f4778;
        case 0x2f477cu: goto label_2f477c;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f4784u: goto label_2f4784;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f4790u: goto label_2f4790;
        case 0x2f4794u: goto label_2f4794;
        case 0x2f4798u: goto label_2f4798;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47a0u: goto label_2f47a0;
        case 0x2f47a4u: goto label_2f47a4;
        case 0x2f47a8u: goto label_2f47a8;
        case 0x2f47acu: goto label_2f47ac;
        case 0x2f47b0u: goto label_2f47b0;
        case 0x2f47b4u: goto label_2f47b4;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47bcu: goto label_2f47bc;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47c4u: goto label_2f47c4;
        case 0x2f47c8u: goto label_2f47c8;
        case 0x2f47ccu: goto label_2f47cc;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f47d8u: goto label_2f47d8;
        case 0x2f47dcu: goto label_2f47dc;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47e4u: goto label_2f47e4;
        case 0x2f47e8u: goto label_2f47e8;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f47f0u: goto label_2f47f0;
        case 0x2f47f4u: goto label_2f47f4;
        case 0x2f47f8u: goto label_2f47f8;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f4800u: goto label_2f4800;
        case 0x2f4804u: goto label_2f4804;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f4810u: goto label_2f4810;
        case 0x2f4814u: goto label_2f4814;
        case 0x2f4818u: goto label_2f4818;
        case 0x2f481cu: goto label_2f481c;
        case 0x2f4820u: goto label_2f4820;
        case 0x2f4824u: goto label_2f4824;
        case 0x2f4828u: goto label_2f4828;
        case 0x2f482cu: goto label_2f482c;
        case 0x2f4830u: goto label_2f4830;
        case 0x2f4834u: goto label_2f4834;
        case 0x2f4838u: goto label_2f4838;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f4840u: goto label_2f4840;
        case 0x2f4844u: goto label_2f4844;
        case 0x2f4848u: goto label_2f4848;
        case 0x2f484cu: goto label_2f484c;
        case 0x2f4850u: goto label_2f4850;
        case 0x2f4854u: goto label_2f4854;
        case 0x2f4858u: goto label_2f4858;
        case 0x2f485cu: goto label_2f485c;
        case 0x2f4860u: goto label_2f4860;
        case 0x2f4864u: goto label_2f4864;
        case 0x2f4868u: goto label_2f4868;
        case 0x2f486cu: goto label_2f486c;
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        case 0x2f48a8u: goto label_2f48a8;
        case 0x2f48acu: goto label_2f48ac;
        case 0x2f48b0u: goto label_2f48b0;
        case 0x2f48b4u: goto label_2f48b4;
        case 0x2f48b8u: goto label_2f48b8;
        case 0x2f48bcu: goto label_2f48bc;
        case 0x2f48c0u: goto label_2f48c0;
        case 0x2f48c4u: goto label_2f48c4;
        case 0x2f48c8u: goto label_2f48c8;
        case 0x2f48ccu: goto label_2f48cc;
        case 0x2f48d0u: goto label_2f48d0;
        case 0x2f48d4u: goto label_2f48d4;
        case 0x2f48d8u: goto label_2f48d8;
        case 0x2f48dcu: goto label_2f48dc;
        case 0x2f48e0u: goto label_2f48e0;
        case 0x2f48e4u: goto label_2f48e4;
        case 0x2f48e8u: goto label_2f48e8;
        case 0x2f48ecu: goto label_2f48ec;
        case 0x2f48f0u: goto label_2f48f0;
        case 0x2f48f4u: goto label_2f48f4;
        case 0x2f48f8u: goto label_2f48f8;
        case 0x2f48fcu: goto label_2f48fc;
        case 0x2f4900u: goto label_2f4900;
        case 0x2f4904u: goto label_2f4904;
        case 0x2f4908u: goto label_2f4908;
        case 0x2f490cu: goto label_2f490c;
        case 0x2f4910u: goto label_2f4910;
        case 0x2f4914u: goto label_2f4914;
        case 0x2f4918u: goto label_2f4918;
        case 0x2f491cu: goto label_2f491c;
        case 0x2f4920u: goto label_2f4920;
        case 0x2f4924u: goto label_2f4924;
        case 0x2f4928u: goto label_2f4928;
        case 0x2f492cu: goto label_2f492c;
        case 0x2f4930u: goto label_2f4930;
        case 0x2f4934u: goto label_2f4934;
        case 0x2f4938u: goto label_2f4938;
        case 0x2f493cu: goto label_2f493c;
        case 0x2f4940u: goto label_2f4940;
        case 0x2f4944u: goto label_2f4944;
        case 0x2f4948u: goto label_2f4948;
        case 0x2f494cu: goto label_2f494c;
        case 0x2f4950u: goto label_2f4950;
        case 0x2f4954u: goto label_2f4954;
        case 0x2f4958u: goto label_2f4958;
        case 0x2f495cu: goto label_2f495c;
        case 0x2f4960u: goto label_2f4960;
        case 0x2f4964u: goto label_2f4964;
        case 0x2f4968u: goto label_2f4968;
        case 0x2f496cu: goto label_2f496c;
        case 0x2f4970u: goto label_2f4970;
        case 0x2f4974u: goto label_2f4974;
        case 0x2f4978u: goto label_2f4978;
        case 0x2f497cu: goto label_2f497c;
        default: break;
    }

    ctx->pc = 0x2f42c0u;

label_2f42c0:
    // 0x2f42c0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2f42c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2f42c4:
    // 0x2f42c4: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x2f42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_2f42c8:
    // 0x2f42c8: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x2f42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_2f42cc:
    // 0x2f42cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f42ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f42d0:
    // 0x2f42d0: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x2f42d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_2f42d4:
    // 0x2f42d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f42d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f42d8:
    // 0x2f42d8: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x2f42d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_2f42dc:
    // 0x2f42dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f42dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f42e0:
    // 0x2f42e0: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x2f42e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_2f42e4:
    // 0x2f42e4: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x2f42e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_2f42e8:
    // 0x2f42e8: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x2f42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_2f42ec:
    // 0x2f42ec: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x2f42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_2f42f0:
    // 0x2f42f0: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x2f42f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_2f42f4:
    // 0x2f42f4: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2f42f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_2f42f8:
    // 0x2f42f8: 0xe7b60210  swc1        $f22, 0x210($sp)
    ctx->pc = 0x2f42f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_2f42fc:
    // 0x2f42fc: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x2f42fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_2f4300:
    // 0x2f4300: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2f4300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2f4304:
    // 0x2f4304: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4308:
    // 0x2f4308: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2f4308u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f430c:
    // 0x2f430c: 0xc089bfc  jal         func_226FF0
label_2f4310:
    if (ctx->pc == 0x2F4310u) {
        ctx->pc = 0x2F4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F430Cu;
        // 0x2f4310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4314u;
        goto label_2f4314;
    }
    ctx->pc = 0x2F430Cu;
    SET_GPR_U32(ctx, 31, 0x2F4314u);
    ctx->pc = 0x2F4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F430Cu;
    // 0x2f4310: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F430Cu, 0x2F4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4314u;
label_2f4314:
    // 0x2f4314: 0xc0e57ce  jal         func_395F38
label_2f4318:
    if (ctx->pc == 0x2F4318u) {
        ctx->pc = 0x2F4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4314u;
        // 0x2f4318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F431Cu;
        goto label_2f431c;
    }
    ctx->pc = 0x2F4314u;
    SET_GPR_U32(ctx, 31, 0x2F431Cu);
    ctx->pc = 0x2F4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4314u;
    // 0x2f4318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F4314u, 0x2F431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F431Cu;
label_2f431c:
    // 0x2f431c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_2f4320:
    if (ctx->pc == 0x2F4320u) {
        ctx->pc = 0x2F4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F431Cu;
        // 0x2f4320: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4324u;
        goto label_2f4324;
    }
    ctx->pc = 0x2F431Cu;
    {
        const bool branch_taken_0x2f431c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F431Cu;
        // 0x2f4320: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f431c) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F4324u;
label_2f4324:
    // 0x2f4324: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
label_2f4328:
    if (ctx->pc == 0x2F4328u) {
        ctx->pc = 0x2F432Cu;
        goto label_2f432c;
    }
    ctx->pc = 0x2F4324u;
    {
        const bool branch_taken_0x2f4324 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4324) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F432Cu;
label_2f432c:
    // 0x2f432c: 0x92620041  lbu         $v0, 0x41($s3)
    ctx->pc = 0x2f432cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
label_2f4330:
    // 0x2f4330: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2f4334:
    if (ctx->pc == 0x2F4334u) {
        ctx->pc = 0x2F4338u;
        goto label_2f4338;
    }
    ctx->pc = 0x2F4330u;
    {
        const bool branch_taken_0x2f4330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4330) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F4338u;
label_2f4338:
    // 0x2f4338: 0xc088ed2  jal         func_223B48
label_2f433c:
    if (ctx->pc == 0x2F433Cu) {
        ctx->pc = 0x2F433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4338u;
        // 0x2f433c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4340u;
        goto label_2f4340;
    }
    ctx->pc = 0x2F4338u;
    SET_GPR_U32(ctx, 31, 0x2F4340u);
    ctx->pc = 0x2F433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4338u;
    // 0x2f433c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F4338u, 0x2F4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4340u;
label_2f4340:
    // 0x2f4340: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f4344:
    if (ctx->pc == 0x2F4344u) {
        ctx->pc = 0x2F4348u;
        goto label_2f4348;
    }
    ctx->pc = 0x2F4340u;
    {
        const bool branch_taken_0x2f4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4340) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F4348u;
label_2f4348:
    // 0x2f4348: 0xc0899ae  jal         func_2266B8
label_2f434c:
    if (ctx->pc == 0x2F434Cu) {
        ctx->pc = 0x2F434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4348u;
        // 0x2f434c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4350u;
        goto label_2f4350;
    }
    ctx->pc = 0x2F4348u;
    SET_GPR_U32(ctx, 31, 0x2F4350u);
    ctx->pc = 0x2F434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4348u;
    // 0x2f434c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2F4348u, 0x2F4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4350u;
label_2f4350:
    // 0x2f4350: 0x38420299  xori        $v0, $v0, 0x299
    ctx->pc = 0x2f4350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)665);
label_2f4354:
    // 0x2f4354: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4358:
    if (ctx->pc == 0x2F4358u) {
        ctx->pc = 0x2F435Cu;
        goto label_2f435c;
    }
    ctx->pc = 0x2F4354u;
    {
        const bool branch_taken_0x2f4354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4354) {
            ctx->pc = 0x2F436Cu;
            goto label_2f436c;
        }
    }
    ctx->pc = 0x2F435Cu;
label_2f435c:
    // 0x2f435c: 0xc087502  jal         func_21D408
label_2f4360:
    if (ctx->pc == 0x2F4360u) {
        ctx->pc = 0x2F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F435Cu;
        // 0x2f4360: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4364u;
        goto label_2f4364;
    }
    ctx->pc = 0x2F435Cu;
    SET_GPR_U32(ctx, 31, 0x2F4364u);
    ctx->pc = 0x2F4360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F435Cu;
    // 0x2f4360: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F435Cu, 0x2F4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4364u;
label_2f4364:
    // 0x2f4364: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x2f4364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_2f4368:
    // 0x2f4368: 0x2c700001  sltiu       $s0, $v1, 0x1
    ctx->pc = 0x2f4368u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f436c:
    // 0x2f436c: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
label_2f4370:
    if (ctx->pc == 0x2F4370u) {
        ctx->pc = 0x2F4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F436Cu;
        // 0x2f4370: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4374u;
        goto label_2f4374;
    }
    ctx->pc = 0x2F436Cu;
    {
        const bool branch_taken_0x2f436c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F436Cu;
        // 0x2f4370: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f436c) {
            ctx->pc = 0x2F4930u;
            goto label_2f4930;
        }
    }
    ctx->pc = 0x2F4374u;
label_2f4374:
    // 0x2f4374: 0xc08997c  jal         func_2265F0
label_2f4378:
    if (ctx->pc == 0x2F4378u) {
        ctx->pc = 0x2F4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4374u;
        // 0x2f4378: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F437Cu;
        goto label_2f437c;
    }
    ctx->pc = 0x2F4374u;
    SET_GPR_U32(ctx, 31, 0x2F437Cu);
    ctx->pc = 0x2F4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4374u;
    // 0x2f4378: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F4374u, 0x2F437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F437Cu;
label_2f437c:
    // 0x2f437c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4380:
    // 0x2f4380: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
label_2f4384:
    if (ctx->pc == 0x2F4384u) {
        ctx->pc = 0x2F4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4380u;
        // 0x2f4384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4388u;
        goto label_2f4388;
    }
    ctx->pc = 0x2F4380u;
    {
        const bool branch_taken_0x2f4380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4380u;
        // 0x2f4384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4380) {
            ctx->pc = 0x2F43B8u;
            goto label_2f43b8;
        }
    }
    ctx->pc = 0x2F4388u;
label_2f4388:
    // 0x2f4388: 0xc08997c  jal         func_2265F0
label_2f438c:
    if (ctx->pc == 0x2F438Cu) {
        ctx->pc = 0x2F438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4388u;
        // 0x2f438c: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4390u;
        goto label_2f4390;
    }
    ctx->pc = 0x2F4388u;
    SET_GPR_U32(ctx, 31, 0x2F4390u);
    ctx->pc = 0x2F438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4388u;
    // 0x2f438c: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F4388u, 0x2F4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4390u;
label_2f4390:
    // 0x2f4390: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_2f4394:
    if (ctx->pc == 0x2F4394u) {
        ctx->pc = 0x2F4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4390u;
        // 0x2f4394: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4398u;
        goto label_2f4398;
    }
    ctx->pc = 0x2F4390u;
    {
        const bool branch_taken_0x2f4390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4390u;
        // 0x2f4394: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4390) {
            ctx->pc = 0x2F43B8u;
            goto label_2f43b8;
        }
    }
    ctx->pc = 0x2F4398u;
label_2f4398:
    // 0x2f4398: 0xc08997c  jal         func_2265F0
label_2f439c:
    if (ctx->pc == 0x2F439Cu) {
        ctx->pc = 0x2F439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4398u;
        // 0x2f439c: 0x24050c00  addiu       $a1, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43A0u;
        goto label_2f43a0;
    }
    ctx->pc = 0x2F4398u;
    SET_GPR_U32(ctx, 31, 0x2F43A0u);
    ctx->pc = 0x2F439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4398u;
    // 0x2f439c: 0x24050c00  addiu       $a1, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F4398u, 0x2F43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43A0u;
label_2f43a0:
    // 0x2f43a0: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2f43a4:
    if (ctx->pc == 0x2F43A4u) {
        ctx->pc = 0x2F43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A0u;
        // 0x2f43a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43A8u;
        goto label_2f43a8;
    }
    ctx->pc = 0x2F43A0u;
    {
        const bool branch_taken_0x2f43a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A0u;
        // 0x2f43a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43a0) {
            ctx->pc = 0x2F43B8u;
            goto label_2f43b8;
        }
    }
    ctx->pc = 0x2F43A8u;
label_2f43a8:
    // 0x2f43a8: 0xc08997c  jal         func_2265F0
label_2f43ac:
    if (ctx->pc == 0x2F43ACu) {
        ctx->pc = 0x2F43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A8u;
        // 0x2f43ac: 0x24050300  addiu       $a1, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43B0u;
        goto label_2f43b0;
    }
    ctx->pc = 0x2F43A8u;
    SET_GPR_U32(ctx, 31, 0x2F43B0u);
    ctx->pc = 0x2F43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43A8u;
    // 0x2f43ac: 0x24050300  addiu       $a1, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2F43A8u, 0x2F43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43B0u;
label_2f43b0:
    // 0x2f43b0: 0x5450000b  bnel        $v0, $s0, . + 4 + (0xB << 2)
label_2f43b4:
    if (ctx->pc == 0x2F43B4u) {
        ctx->pc = 0x2F43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B0u;
        // 0x2f43b4: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43B8u;
        goto label_2f43b8;
    }
    ctx->pc = 0x2F43B0u;
    {
        const bool branch_taken_0x2f43b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f43b0) {
            ctx->pc = 0x2F43B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F43B0u;
            // 0x2f43b4: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F43E0u;
            goto label_2f43e0;
        }
    }
    ctx->pc = 0x2F43B8u;
label_2f43b8:
    // 0x2f43b8: 0xc0e409a  jal         func_390268
label_2f43bc:
    if (ctx->pc == 0x2F43BCu) {
        ctx->pc = 0x2F43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B8u;
        // 0x2f43bc: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43C0u;
        goto label_2f43c0;
    }
    ctx->pc = 0x2F43B8u;
    SET_GPR_U32(ctx, 31, 0x2F43C0u);
    ctx->pc = 0x2F43BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43B8u;
    // 0x2f43bc: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F43B8u, 0x2F43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43C0u;
label_2f43c0:
    // 0x2f43c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f43c4:
    if (ctx->pc == 0x2F43C4u) {
        ctx->pc = 0x2F43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C0u;
        // 0x2f43c4: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43C8u;
        goto label_2f43c8;
    }
    ctx->pc = 0x2F43C0u;
    {
        const bool branch_taken_0x2f43c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f43c0) {
            ctx->pc = 0x2F43C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F43C0u;
            // 0x2f43c4: 0x86c50092  lh          $a1, 0x92($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F43E0u;
            goto label_2f43e0;
        }
    }
    ctx->pc = 0x2F43C8u;
label_2f43c8:
    // 0x2f43c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f43c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f43cc:
    // 0x2f43cc: 0xc088aa4  jal         func_222A90
label_2f43d0:
    if (ctx->pc == 0x2F43D0u) {
        ctx->pc = 0x2F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43CCu;
        // 0x2f43d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43D4u;
        goto label_2f43d4;
    }
    ctx->pc = 0x2F43CCu;
    SET_GPR_U32(ctx, 31, 0x2F43D4u);
    ctx->pc = 0x2F43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43CCu;
    // 0x2f43d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2F43CCu, 0x2F43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D4u;
label_2f43d4:
    // 0x2f43d4: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
label_2f43d8:
    if (ctx->pc == 0x2F43D8u) {
        ctx->pc = 0x2F43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D4u;
        // 0x2f43d8: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43DCu;
        goto label_2f43dc;
    }
    ctx->pc = 0x2F43D4u;
    {
        const bool branch_taken_0x2f43d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D4u;
        // 0x2f43d8: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43d4) {
            ctx->pc = 0x2F4944u;
            goto label_2f4944;
        }
    }
    ctx->pc = 0x2F43DCu;
label_2f43dc:
    // 0x2f43dc: 0x86c50092  lh          $a1, 0x92($s6)
    ctx->pc = 0x2f43dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_2f43e0:
    // 0x2f43e0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f43e4:
    // 0x2f43e4: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2f43e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f43e8:
    // 0x2f43e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f43e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f43ec:
    // 0x2f43ec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2f43f0:
    // 0x2f43f0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2f43f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2f43f4:
    // 0x2f43f4: 0xc0cd8c2  jal         func_336308
label_2f43f8:
    if (ctx->pc == 0x2F43F8u) {
        ctx->pc = 0x2F43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F4u;
        // 0x2f43f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43FCu;
        goto label_2f43fc;
    }
    ctx->pc = 0x2F43F4u;
    SET_GPR_U32(ctx, 31, 0x2F43FCu);
    ctx->pc = 0x2F43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43F4u;
    // 0x2f43f8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2F43F4u, 0x2F43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43FCu;
label_2f43fc:
    // 0x2f43fc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2f43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2f4400:
    // 0x2f4400: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f4400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f4404:
    // 0x2f4404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f4404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4408:
    // 0x2f4408: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f4408u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f440c:
    // 0x2f440c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f4410:
    // 0x2f4410: 0x60f809  jalr        $v1
label_2f4414:
    if (ctx->pc == 0x2F4414u) {
        ctx->pc = 0x2F4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4410u;
        // 0x2f4414: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4418u;
        goto label_2f4418;
    }
    ctx->pc = 0x2F4410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4418u);
        ctx->pc = 0x2F4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4410u;
        // 0x2f4414: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4410u, 0x2F4418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4418u;
label_2f4418:
    // 0x2f4418: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2f4418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f441c:
    // 0x2f441c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f4420:
    // 0x2f4420: 0xc088ee6  jal         func_223B98
label_2f4424:
    if (ctx->pc == 0x2F4424u) {
        ctx->pc = 0x2F4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4420u;
        // 0x2f4424: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4428u;
        goto label_2f4428;
    }
    ctx->pc = 0x2F4420u;
    SET_GPR_U32(ctx, 31, 0x2F4428u);
    ctx->pc = 0x2F4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4420u;
    // 0x2f4424: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2F4420u, 0x2F4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4428u;
label_2f4428:
    // 0x2f4428: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2f442c:
    if (ctx->pc == 0x2F442Cu) {
        ctx->pc = 0x2F442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4428u;
        // 0x2f442c: 0x86a20092  lh          $v0, 0x92($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4430u;
        goto label_2f4430;
    }
    ctx->pc = 0x2F4428u;
    {
        const bool branch_taken_0x2f4428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4428) {
            ctx->pc = 0x2F442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4428u;
            // 0x2f442c: 0x86a20092  lh          $v0, 0x92($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F449Cu;
            goto label_2f449c;
        }
    }
    ctx->pc = 0x2F4430u;
label_2f4430:
    // 0x2f4430: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f4430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f4434:
    // 0x2f4434: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2f4434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2f4438:
    // 0x2f4438: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2f4438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2f443c:
    // 0x2f443c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2f443cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2f4440:
    // 0x2f4440: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f4440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f4444:
    // 0x2f4444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f4444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4448:
    // 0x2f4448: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f4448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f444c:
    // 0x2f444c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f444cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2f4450:
    // 0x2f4450: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f4450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2f4454:
    // 0x2f4454: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2f4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2f4458:
    // 0x2f4458: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f4458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f445c:
    // 0x2f445c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f445cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4460:
    // 0x2f4460: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f4460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f4464:
    // 0x2f4464: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f4464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2f4468:
    // 0x2f4468: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2f4468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f446c:
    // 0x2f446c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f446cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2f4470:
    // 0x2f4470: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f4470u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f4474:
    // 0x2f4474: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f4474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f4478:
    // 0x2f4478: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f4478u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2f447c:
    // 0x2f447c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f447cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2f4480:
    // 0x2f4480: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2f4480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2f4484:
    // 0x2f4484: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f4484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f4488:
    // 0x2f4488: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f4488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f448c:
    // 0x2f448c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2f4490:
    // 0x2f4490: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f4490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f4494:
    // 0x2f4494: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f4498:
    if (ctx->pc == 0x2F4498u) {
        ctx->pc = 0x2F4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4494u;
        // 0x2f4498: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F449Cu;
        goto label_2f449c;
    }
    ctx->pc = 0x2F4494u;
    {
        const bool branch_taken_0x2f4494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4494u;
        // 0x2f4498: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4494) {
            ctx->pc = 0x2F44ACu;
            goto label_2f44ac;
        }
    }
    ctx->pc = 0x2F449Cu;
label_2f449c:
    // 0x2f449c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f449cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f44a0:
    // 0x2f44a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2f44a4:
    // 0x2f44a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f44a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f44a8:
    // 0x2f44a8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2f44ac:
    // 0x2f44ac: 0x82a201b0  lb          $v0, 0x1B0($s5)
    ctx->pc = 0x2f44acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 432)));
label_2f44b0:
    // 0x2f44b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f44b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f44b4:
    // 0x2f44b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f44b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f44b8:
    // 0x2f44b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2f44b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2f44bc:
    // 0x2f44bc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2f44bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f44c0:
    // 0x2f44c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2f44c4:
    if (ctx->pc == 0x2F44C4u) {
        ctx->pc = 0x2F44C8u;
        goto label_2f44c8;
    }
    ctx->pc = 0x2F44C0u;
    {
        const bool branch_taken_0x2f44c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44c0) {
            ctx->pc = 0x2F44D4u;
            goto label_2f44d4;
        }
    }
    ctx->pc = 0x2F44C8u;
label_2f44c8:
    // 0x2f44c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f44cc:
    // 0x2f44cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f44ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f44d0:
    // 0x2f44d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f44d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f44d4:
    // 0x2f44d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f44d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f44d8:
    // 0x2f44d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f44d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f44dc:
    // 0x2f44dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2f44e0:
    if (ctx->pc == 0x2F44E0u) {
        ctx->pc = 0x2F44E4u;
        goto label_2f44e4;
    }
    ctx->pc = 0x2F44DCu;
    {
        const bool branch_taken_0x2f44dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44dc) {
            ctx->pc = 0x2F44F0u;
            goto label_2f44f0;
        }
    }
    ctx->pc = 0x2F44E4u;
label_2f44e4:
    // 0x2f44e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f44e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f44e8:
    // 0x2f44e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f44e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f44ec:
    // 0x2f44ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f44ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f44f0:
    // 0x2f44f0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2f44f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2f44f4:
    // 0x2f44f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f44f8:
    // 0x2f44f8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2f44fc:
    if (ctx->pc == 0x2F44FCu) {
        ctx->pc = 0x2F44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44F8u;
        // 0x2f44fc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4500u;
        goto label_2f4500;
    }
    ctx->pc = 0x2F44F8u;
    {
        const bool branch_taken_0x2f44f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44F8u;
        // 0x2f44fc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44f8) {
            ctx->pc = 0x2F4538u;
            goto label_2f4538;
        }
    }
    ctx->pc = 0x2F4500u;
label_2f4500:
    // 0x2f4500: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f4500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2f4504:
    // 0x2f4504: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2f4508:
    // 0x2f4508: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2f4508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2f450c:
    // 0x2f450c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2f450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f4510:
    // 0x2f4510: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2f4510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f4514:
    // 0x2f4514: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_2f4518:
    if (ctx->pc == 0x2F4518u) {
        ctx->pc = 0x2F4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4514u;
        // 0x2f4518: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F451Cu;
        goto label_2f451c;
    }
    ctx->pc = 0x2F4514u;
    {
        const bool branch_taken_0x2f4514 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f4514) {
            ctx->pc = 0x2F4518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4514u;
            // 0x2f4518: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F451Cu;
            goto label_2f451c;
        }
    }
    ctx->pc = 0x2F451Cu;
label_2f451c:
    // 0x2f451c: 0x284261a8  slti        $v0, $v0, 0x61A8
    ctx->pc = 0x2f451cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)25000) ? 1 : 0);
label_2f4520:
    // 0x2f4520: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2f4524:
    if (ctx->pc == 0x2F4524u) {
        ctx->pc = 0x2F4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4520u;
        // 0x2f4524: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4528u;
        goto label_2f4528;
    }
    ctx->pc = 0x2F4520u;
    {
        const bool branch_taken_0x2f4520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4520u;
        // 0x2f4524: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4520) {
            ctx->pc = 0x2F4574u;
            goto label_2f4574;
        }
    }
    ctx->pc = 0x2F4528u;
label_2f4528:
    // 0x2f4528: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f4528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2f452c:
    // 0x2f452c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f452cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f4530:
    // 0x2f4530: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f4534:
    if (ctx->pc == 0x2F4534u) {
        ctx->pc = 0x2F4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4530u;
        // 0x2f4534: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4538u;
        goto label_2f4538;
    }
    ctx->pc = 0x2F4530u;
    {
        const bool branch_taken_0x2f4530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4530u;
        // 0x2f4534: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4530) {
            ctx->pc = 0x2F4574u;
            goto label_2f4574;
        }
    }
    ctx->pc = 0x2F4538u;
label_2f4538:
    // 0x2f4538: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2f453c:
    // 0x2f453c: 0xc0e409a  jal         func_390268
label_2f4540:
    if (ctx->pc == 0x2F4540u) {
        ctx->pc = 0x2F4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F453Cu;
        // 0x2f4540: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4544u;
        goto label_2f4544;
    }
    ctx->pc = 0x2F453Cu;
    SET_GPR_U32(ctx, 31, 0x2F4544u);
    ctx->pc = 0x2F4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F453Cu;
    // 0x2f4540: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F453Cu, 0x2F4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4544u;
label_2f4544:
    // 0x2f4544: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f4548:
    if (ctx->pc == 0x2F4548u) {
        ctx->pc = 0x2F4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4544u;
        // 0x2f4548: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F454Cu;
        goto label_2f454c;
    }
    ctx->pc = 0x2F4544u;
    {
        const bool branch_taken_0x2f4544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4544u;
        // 0x2f4548: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4544) {
            ctx->pc = 0x2F4570u;
            goto label_2f4570;
        }
    }
    ctx->pc = 0x2F454Cu;
label_2f454c:
    // 0x2f454c: 0x804401b0  lb          $a0, 0x1B0($v0)
    ctx->pc = 0x2f454cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_2f4550:
    // 0x2f4550: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x2f4550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2f4554:
    // 0x2f4554: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f4554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f4558:
    // 0x2f4558: 0x9043041a  lbu         $v1, 0x41A($v0)
    ctx->pc = 0x2f4558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
label_2f455c:
    // 0x2f455c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_2f4560:
    if (ctx->pc == 0x2F4560u) {
        ctx->pc = 0x2F4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F455Cu;
        // 0x2f4560: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4564u;
        goto label_2f4564;
    }
    ctx->pc = 0x2F455Cu;
    {
        const bool branch_taken_0x2f455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F455Cu;
        // 0x2f4560: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f455c) {
            ctx->pc = 0x2F4574u;
            goto label_2f4574;
        }
    }
    ctx->pc = 0x2F4564u;
label_2f4564:
    // 0x2f4564: 0x3c013df1  lui         $at, 0x3DF1
    ctx->pc = 0x2f4564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15857 << 16));
label_2f4568:
    // 0x2f4568: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x2f4568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_2f456c:
    // 0x2f456c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f456cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2f4570:
    // 0x2f4570: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f4570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f4574:
    // 0x2f4574: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2f4574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f4578:
    // 0x2f4578: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2f4578u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_2f457c:
    // 0x2f457c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f457cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f4580:
    // 0x2f4580: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2f4580u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2f4584:
    // 0x2f4584: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f4584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4588:
    // 0x2f4588: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f4588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f458c:
    // 0x2f458c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f458cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4590:
    // 0x2f4590: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f4590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f4594:
    // 0x2f4594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4598:
    // 0x2f4598: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f4598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f459c:
    // 0x2f459c: 0xc0bcfe6  jal         func_2F3F98
label_2f45a0:
    if (ctx->pc == 0x2F45A0u) {
        ctx->pc = 0x2F45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F459Cu;
        // 0x2f45a0: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45A4u;
        goto label_2f45a4;
    }
    ctx->pc = 0x2F459Cu;
    SET_GPR_U32(ctx, 31, 0x2F45A4u);
    ctx->pc = 0x2F45A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F459Cu;
    // 0x2f45a0: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3F98u, 0x2F459Cu, 0x2F45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45A4u;
label_2f45a4:
    // 0x2f45a4: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f45a8:
    // 0x2f45a8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f45a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f45ac:
    // 0x2f45ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f45b0:
    // 0x2f45b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f45b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f45b4:
    // 0x2f45b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f45b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f45b8:
    // 0x2f45b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f45b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f45bc:
    // 0x2f45bc: 0xc0b9d82  jal         func_2E7608
label_2f45c0:
    if (ctx->pc == 0x2F45C0u) {
        ctx->pc = 0x2F45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45BCu;
        // 0x2f45c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45C4u;
        goto label_2f45c4;
    }
    ctx->pc = 0x2F45BCu;
    SET_GPR_U32(ctx, 31, 0x2F45C4u);
    ctx->pc = 0x2F45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45BCu;
    // 0x2f45c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7608u, 0x2F45BCu, 0x2F45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45C4u;
label_2f45c4:
    // 0x2f45c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f45c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f45c8:
    // 0x2f45c8: 0xc08a61a  jal         func_229868
label_2f45cc:
    if (ctx->pc == 0x2F45CCu) {
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C8u;
        // 0x2f45cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45D0u;
        goto label_2f45d0;
    }
    ctx->pc = 0x2F45C8u;
    SET_GPR_U32(ctx, 31, 0x2F45D0u);
    ctx->pc = 0x2F45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45C8u;
    // 0x2f45cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2F45C8u, 0x2F45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45D0u;
label_2f45d0:
    // 0x2f45d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f45d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f45d4:
    // 0x2f45d4: 0xc0e57ce  jal         func_395F38
label_2f45d8:
    if (ctx->pc == 0x2F45D8u) {
        ctx->pc = 0x2F45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D4u;
        // 0x2f45d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45DCu;
        goto label_2f45dc;
    }
    ctx->pc = 0x2F45D4u;
    SET_GPR_U32(ctx, 31, 0x2F45DCu);
    ctx->pc = 0x2F45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45D4u;
    // 0x2f45d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F45D4u, 0x2F45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45DCu;
label_2f45dc:
    // 0x2f45dc: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2f45e0:
    if (ctx->pc == 0x2F45E0u) {
        ctx->pc = 0x2F45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45DCu;
        // 0x2f45e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45E4u;
        goto label_2f45e4;
    }
    ctx->pc = 0x2F45DCu;
    {
        const bool branch_taken_0x2f45dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45DCu;
        // 0x2f45e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45dc) {
            ctx->pc = 0x2F45F4u;
            goto label_2f45f4;
        }
    }
    ctx->pc = 0x2F45E4u;
label_2f45e4:
    // 0x2f45e4: 0xc0bd260  jal         func_2F4980
label_2f45e8:
    if (ctx->pc == 0x2F45E8u) {
        ctx->pc = 0x2F45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45E4u;
        // 0x2f45e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45ECu;
        goto label_2f45ec;
    }
    ctx->pc = 0x2F45E4u;
    SET_GPR_U32(ctx, 31, 0x2F45ECu);
    ctx->pc = 0x2F45E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45E4u;
    // 0x2f45e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4980u, 0x2F45E4u, 0x2F45ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45ECu;
label_2f45ec:
    // 0x2f45ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f45f0:
    if (ctx->pc == 0x2F45F0u) {
        ctx->pc = 0x2F45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45ECu;
        // 0x2f45f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45F4u;
        goto label_2f45f4;
    }
    ctx->pc = 0x2F45ECu;
    {
        const bool branch_taken_0x2f45ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45ECu;
        // 0x2f45f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45ec) {
            ctx->pc = 0x2F4618u;
            goto label_2f4618;
        }
    }
    ctx->pc = 0x2F45F4u;
label_2f45f4:
    // 0x2f45f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f45f8:
    if (ctx->pc == 0x2F45F8u) {
        ctx->pc = 0x2F45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F4u;
        // 0x2f45f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45FCu;
        goto label_2f45fc;
    }
    ctx->pc = 0x2F45F4u;
    {
        const bool branch_taken_0x2f45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F4u;
        // 0x2f45f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45f4) {
            ctx->pc = 0x2F460Cu;
            goto label_2f460c;
        }
    }
    ctx->pc = 0x2F45FCu;
label_2f45fc:
    // 0x2f45fc: 0xc0bd270  jal         func_2F49C0
label_2f4600:
    if (ctx->pc == 0x2F4600u) {
        ctx->pc = 0x2F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45FCu;
        // 0x2f4600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4604u;
        goto label_2f4604;
    }
    ctx->pc = 0x2F45FCu;
    SET_GPR_U32(ctx, 31, 0x2F4604u);
    ctx->pc = 0x2F4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45FCu;
    // 0x2f4600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F49C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F49C0u, 0x2F45FCu, 0x2F4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4604u;
label_2f4604:
    // 0x2f4604: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f4608:
    if (ctx->pc == 0x2F4608u) {
        ctx->pc = 0x2F4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4604u;
        // 0x2f4608: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F460Cu;
        goto label_2f460c;
    }
    ctx->pc = 0x2F4604u;
    {
        const bool branch_taken_0x2f4604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4604u;
        // 0x2f4608: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4604) {
            ctx->pc = 0x2F461Cu;
            goto label_2f461c;
        }
    }
    ctx->pc = 0x2F460Cu;
label_2f460c:
    // 0x2f460c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f460cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4610:
    // 0x2f4610: 0xc0bd29e  jal         func_2F4A78
label_2f4614:
    if (ctx->pc == 0x2F4614u) {
        ctx->pc = 0x2F4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4610u;
        // 0x2f4614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4618u;
        goto label_2f4618;
    }
    ctx->pc = 0x2F4610u;
    SET_GPR_U32(ctx, 31, 0x2F4618u);
    ctx->pc = 0x2F4614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4610u;
    // 0x2f4614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A78u, 0x2F4610u, 0x2F4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4618u;
label_2f4618:
    // 0x2f4618: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f4618u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f461c:
    // 0x2f461c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4620:
    // 0x2f4620: 0x146200b8  bne         $v1, $v0, . + 4 + (0xB8 << 2)
label_2f4624:
    if (ctx->pc == 0x2F4624u) {
        ctx->pc = 0x2F4628u;
        goto label_2f4628;
    }
    ctx->pc = 0x2F4620u;
    {
        const bool branch_taken_0x2f4620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4620) {
            ctx->pc = 0x2F4904u;
            goto label_2f4904;
        }
    }
    ctx->pc = 0x2F4628u;
label_2f4628:
    // 0x2f4628: 0xc0a367c  jal         func_28D9F0
label_2f462c:
    if (ctx->pc == 0x2F462Cu) {
        ctx->pc = 0x2F462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4628u;
        // 0x2f462c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4630u;
        goto label_2f4630;
    }
    ctx->pc = 0x2F4628u;
    SET_GPR_U32(ctx, 31, 0x2F4630u);
    ctx->pc = 0x2F462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4628u;
    // 0x2f462c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F4628u, 0x2F4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4630u;
label_2f4630:
    // 0x2f4630: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f4634:
    if (ctx->pc == 0x2F4634u) {
        ctx->pc = 0x2F4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4630u;
        // 0x2f4634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4638u;
        goto label_2f4638;
    }
    ctx->pc = 0x2F4630u;
    {
        const bool branch_taken_0x2f4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4630u;
        // 0x2f4634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4630) {
            ctx->pc = 0x2F4658u;
            goto label_2f4658;
        }
    }
    ctx->pc = 0x2F4638u;
label_2f4638:
    // 0x2f4638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f4638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f463c:
    // 0x2f463c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4640:
    // 0x2f4640: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2f4640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f4644:
    // 0x2f4644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4648:
    // 0x2f4648: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f4648u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f464c:
    // 0x2f464c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4650:
    // 0x2f4650: 0xc0be968  jal         func_2FA5A0
label_2f4654:
    if (ctx->pc == 0x2F4654u) {
        ctx->pc = 0x2F4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4650u;
        // 0x2f4654: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4658u;
        goto label_2f4658;
    }
    ctx->pc = 0x2F4650u;
    SET_GPR_U32(ctx, 31, 0x2F4658u);
    ctx->pc = 0x2F4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4650u;
    // 0x2f4654: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2F4650u, 0x2F4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4658u;
label_2f4658:
    // 0x2f4658: 0x92620041  lbu         $v0, 0x41($s3)
    ctx->pc = 0x2f4658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
label_2f465c:
    // 0x2f465c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f4660:
    // 0x2f4660: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f4664:
    // 0x2f4664: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2f4668:
    if (ctx->pc == 0x2F4668u) {
        ctx->pc = 0x2F4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4664u;
        // 0x2f4668: 0xa2620041  sb          $v0, 0x41($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F466Cu;
        goto label_2f466c;
    }
    ctx->pc = 0x2F4664u;
    {
        const bool branch_taken_0x2f4664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4664u;
        // 0x2f4668: 0xa2620041  sb          $v0, 0x41($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4664) {
            ctx->pc = 0x2F4680u;
            goto label_2f4680;
        }
    }
    ctx->pc = 0x2F466Cu;
label_2f466c:
    // 0x2f466c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4670:
    // 0x2f4670: 0xa2600042  sb          $zero, 0x42($s3)
    ctx->pc = 0x2f4670u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 66), (uint8_t)GPR_U32(ctx, 0));
label_2f4674:
    // 0x2f4674: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2f4674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_2f4678:
    // 0x2f4678: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f467c:
    if (ctx->pc == 0x2F467Cu) {
        ctx->pc = 0x2F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4678u;
        // 0x2f467c: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4680u;
        goto label_2f4680;
    }
    ctx->pc = 0x2F4678u;
    {
        const bool branch_taken_0x2f4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4678u;
        // 0x2f467c: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4678) {
            ctx->pc = 0x2F46B4u;
            goto label_2f46b4;
        }
    }
    ctx->pc = 0x2F4680u;
label_2f4680:
    // 0x2f4680: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4684:
    // 0x2f4684: 0xc0a367c  jal         func_28D9F0
label_2f4688:
    if (ctx->pc == 0x2F4688u) {
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F468Cu;
        goto label_2f468c;
    }
    ctx->pc = 0x2F4684u;
    SET_GPR_U32(ctx, 31, 0x2F468Cu);
    ctx->pc = 0x2F4688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4684u;
    // 0x2f4688: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F4684u, 0x2F468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f468cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4690:
    // 0x2f4690: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2f4694:
    if (ctx->pc == 0x2F4694u) {
        ctx->pc = 0x2F4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4690u;
        // 0x2f4694: 0x2644b880  addiu       $a0, $s2, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4698u;
        goto label_2f4698;
    }
    ctx->pc = 0x2F4690u;
    {
        const bool branch_taken_0x2f4690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4690u;
        // 0x2f4694: 0x2644b880  addiu       $a0, $s2, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4690) {
            ctx->pc = 0x2F46B4u;
            goto label_2f46b4;
        }
    }
    ctx->pc = 0x2F4698u;
label_2f4698:
    // 0x2f4698: 0x96650038  lhu         $a1, 0x38($s3)
    ctx->pc = 0x2f4698u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_2f469c:
    // 0x2f469c: 0xc0cd4fc  jal         func_3353F0
label_2f46a0:
    if (ctx->pc == 0x2F46A0u) {
        ctx->pc = 0x2F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F469Cu;
        // 0x2f46a0: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46A4u;
        goto label_2f46a4;
    }
    ctx->pc = 0x2F469Cu;
    SET_GPR_U32(ctx, 31, 0x2F46A4u);
    ctx->pc = 0x2F46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F469Cu;
    // 0x2f46a0: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2F469Cu, 0x2F46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46A4u;
label_2f46a4:
    // 0x2f46a4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f46a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f46a8:
    // 0x2f46a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f46a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f46ac:
    // 0x2f46ac: 0xc0bebdc  jal         func_2FAF70
label_2f46b0:
    if (ctx->pc == 0x2F46B0u) {
        ctx->pc = 0x2F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46ACu;
        // 0x2f46b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46B4u;
        goto label_2f46b4;
    }
    ctx->pc = 0x2F46ACu;
    SET_GPR_U32(ctx, 31, 0x2F46B4u);
    ctx->pc = 0x2F46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46ACu;
    // 0x2f46b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F46ACu, 0x2F46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46B4u;
label_2f46b4:
    // 0x2f46b4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x2f46b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_2f46b8:
    // 0x2f46b8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2f46b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2f46bc:
    // 0x2f46bc: 0x2644b880  addiu       $a0, $s2, -0x4780
    ctx->pc = 0x2f46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
label_2f46c0:
    // 0x2f46c0: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x2f46c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
label_2f46c4:
    // 0x2f46c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f46c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f46c8:
    // 0x2f46c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f46c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f46cc:
    // 0x2f46cc: 0xc0cd4e4  jal         func_335390
label_2f46d0:
    if (ctx->pc == 0x2F46D0u) {
        ctx->pc = 0x2F46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46CCu;
        // 0x2f46d0: 0x26310f80  addiu       $s1, $s1, 0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46D4u;
        goto label_2f46d4;
    }
    ctx->pc = 0x2F46CCu;
    SET_GPR_U32(ctx, 31, 0x2F46D4u);
    ctx->pc = 0x2F46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46CCu;
    // 0x2f46d0: 0x26310f80  addiu       $s1, $s1, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2F46CCu, 0x2F46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46D4u;
label_2f46d4:
    // 0x2f46d4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2f46d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_2f46d8:
    // 0x2f46d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f46dc:
    // 0x2f46dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f46dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f46e0:
    // 0x2f46e0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2f46e0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2f46e4:
    // 0x2f46e4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2f46e8:
    if (ctx->pc == 0x2F46E8u) {
        ctx->pc = 0x2F46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46E4u;
        // 0x2f46e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46ECu;
        goto label_2f46ec;
    }
    ctx->pc = 0x2F46E4u;
    {
        const bool branch_taken_0x2f46e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f46e4) {
            ctx->pc = 0x2F46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46E4u;
            // 0x2f46e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F46ECu;
            goto label_2f46ec;
        }
    }
    ctx->pc = 0x2F46ECu;
label_2f46ec:
    // 0x2f46ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2f46ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2f46f0:
    // 0x2f46f0: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2f46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2f46f4:
    // 0x2f46f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f46f8:
    // 0x2f46f8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2f46fc:
    // 0x2f46fc: 0xc050fda  jal         func_143F68
label_2f4700:
    if (ctx->pc == 0x2F4700u) {
        ctx->pc = 0x2F4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46FCu;
        // 0x2f4700: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4704u;
        goto label_2f4704;
    }
    ctx->pc = 0x2F46FCu;
    SET_GPR_U32(ctx, 31, 0x2F4704u);
    ctx->pc = 0x2F4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46FCu;
    // 0x2f4700: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F46FCu, 0x2F4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4704u;
label_2f4704:
    // 0x2f4704: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x2f4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_2f4708:
    // 0x2f4708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f470c:
    // 0x2f470c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f4710:
    // 0x2f4710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f4710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f4714:
    // 0x2f4714: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f4714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f4718:
    // 0x2f4718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f471c:
    // 0x2f471c: 0xc043f74  jal         func_10FDD0
label_2f4720:
    if (ctx->pc == 0x2F4720u) {
        ctx->pc = 0x2F4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F471Cu;
        // 0x2f4720: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4724u;
        goto label_2f4724;
    }
    ctx->pc = 0x2F471Cu;
    SET_GPR_U32(ctx, 31, 0x2F4724u);
    ctx->pc = 0x2F4720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F471Cu;
    // 0x2f4720: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x2F471Cu, 0x2F4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4724u;
label_2f4724:
    // 0x2f4724: 0x1280005a  beqz        $s4, . + 4 + (0x5A << 2)
label_2f4728:
    if (ctx->pc == 0x2F4728u) {
        ctx->pc = 0x2F4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4724u;
        // 0x2f4728: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F472Cu;
        goto label_2f472c;
    }
    ctx->pc = 0x2F4724u;
    {
        const bool branch_taken_0x2f4724 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4724u;
        // 0x2f4728: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4724) {
            ctx->pc = 0x2F4890u;
            goto label_2f4890;
        }
    }
    ctx->pc = 0x2F472Cu;
label_2f472c:
    // 0x2f472c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f472cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4730:
    // 0x2f4730: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2f4730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4734:
    // 0x2f4734: 0xc10c1fa  jal         func_4307E8
label_2f4738:
    if (ctx->pc == 0x2F4738u) {
        ctx->pc = 0x2F4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4734u;
        // 0x2f4738: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F473Cu;
        goto label_2f473c;
    }
    ctx->pc = 0x2F4734u;
    SET_GPR_U32(ctx, 31, 0x2F473Cu);
    ctx->pc = 0x2F4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4734u;
    // 0x2f4738: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2F4734u, 0x2F473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F473Cu;
label_2f473c:
    // 0x2f473c: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x2f473cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2f4740:
    // 0x2f4740: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f4740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2f4744:
    // 0x2f4744: 0x24434b00  addiu       $v1, $v0, 0x4B00
    ctx->pc = 0x2f4744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2f4748:
    // 0x2f4748: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f4748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2f474c:
    // 0x2f474c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f474cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f4750:
    // 0x2f4750: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2f4750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2f4754:
    // 0x2f4754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4758:
    // 0x2f4758: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2f475c:
    // 0x2f475c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f4760:
    // 0x2f4760: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4764:
    // 0x2f4764: 0xc087502  jal         func_21D408
label_2f4768:
    if (ctx->pc == 0x2F4768u) {
        ctx->pc = 0x2F4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4764u;
        // 0x2f4768: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F476Cu;
        goto label_2f476c;
    }
    ctx->pc = 0x2F4764u;
    SET_GPR_U32(ctx, 31, 0x2F476Cu);
    ctx->pc = 0x2F4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4764u;
    // 0x2f4768: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F4764u, 0x2F476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F476Cu;
label_2f476c:
    // 0x2f476c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4770:
    // 0x2f4770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f4774:
    // 0x2f4774: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_2f4778:
    if (ctx->pc == 0x2F4778u) {
        ctx->pc = 0x2F4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4774u;
        // 0x2f4778: 0x8670003a  lh          $s0, 0x3A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F477Cu;
        goto label_2f477c;
    }
    ctx->pc = 0x2F4774u;
    {
        const bool branch_taken_0x2f4774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4774) {
            ctx->pc = 0x2F4778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4774u;
            // 0x2f4778: 0x8670003a  lh          $s0, 0x3A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F47A8u;
            goto label_2f47a8;
        }
    }
    ctx->pc = 0x2F477Cu;
label_2f477c:
    // 0x2f477c: 0x8662003a  lh          $v0, 0x3A($s3)
    ctx->pc = 0x2f477cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_2f4780:
    // 0x2f4780: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2f4780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_2f4784:
    // 0x2f4784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f4788:
    // 0x2f4788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f478c:
    // 0x2f478c: 0x0  nop
    ctx->pc = 0x2f478cu;
    // NOP
label_2f4790:
    // 0x2f4790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f4794:
    // 0x2f4794: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f4798:
    // 0x2f4798: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f4798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2f479c:
    // 0x2f479c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2f479cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2f47a0:
    // 0x2f47a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f47a4:
    if (ctx->pc == 0x2F47A4u) {
        ctx->pc = 0x2F47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A0u;
        // 0x2f47a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47A8u;
        goto label_2f47a8;
    }
    ctx->pc = 0x2F47A0u;
    {
        const bool branch_taken_0x2f47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A0u;
        // 0x2f47a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47a0) {
            ctx->pc = 0x2F47ACu;
            goto label_2f47ac;
        }
    }
    ctx->pc = 0x2F47A8u;
label_2f47a8:
    // 0x2f47a8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2f47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f47ac:
    // 0x2f47ac: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2f47acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f47b0:
    // 0x2f47b0: 0x0  nop
    ctx->pc = 0x2f47b0u;
    // NOP
label_2f47b4:
    // 0x2f47b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f47b8:
    if (ctx->pc == 0x2F47B8u) {
        ctx->pc = 0x2F47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47B4u;
        // 0x2f47b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47BCu;
        goto label_2f47bc;
    }
    ctx->pc = 0x2F47B4u;
    {
        const bool branch_taken_0x2f47b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47B4u;
        // 0x2f47b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47b4) {
            ctx->pc = 0x2F47C0u;
            goto label_2f47c0;
        }
    }
    ctx->pc = 0x2F47BCu;
label_2f47bc:
    // 0x2f47bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f47bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f47c0:
    // 0x2f47c0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f47c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f47c4:
    // 0x2f47c4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2f47c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f47c8:
    // 0x2f47c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f47c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f47cc:
    // 0x2f47cc: 0xc0992f6  jal         func_264BD8
label_2f47d0:
    if (ctx->pc == 0x2F47D0u) {
        ctx->pc = 0x2F47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47CCu;
        // 0x2f47d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47D4u;
        goto label_2f47d4;
    }
    ctx->pc = 0x2F47CCu;
    SET_GPR_U32(ctx, 31, 0x2F47D4u);
    ctx->pc = 0x2F47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47CCu;
    // 0x2f47d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x2F47CCu, 0x2F47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f47d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f47d8:
    // 0x2f47d8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2f47d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2f47dc:
    // 0x2f47dc: 0xacb20020  sw          $s2, 0x20($a1)
    ctx->pc = 0x2f47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 18));
label_2f47e0:
    // 0x2f47e0: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x2f47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
label_2f47e4:
    // 0x2f47e4: 0xafb70128  sw          $s7, 0x128($sp)
    ctx->pc = 0x2f47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 23));
label_2f47e8:
    // 0x2f47e8: 0xafb40144  sw          $s4, 0x144($sp)
    ctx->pc = 0x2f47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 20));
label_2f47ec:
    // 0x2f47ec: 0xafb60124  sw          $s6, 0x124($sp)
    ctx->pc = 0x2f47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 22));
label_2f47f0:
    // 0x2f47f0: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2f47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_2f47f4:
    // 0x2f47f4: 0xa3b20131  sb          $s2, 0x131($sp)
    ctx->pc = 0x2f47f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 18));
label_2f47f8:
    // 0x2f47f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f47fc:
    // 0x2f47fc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2f47fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2f4800:
    // 0x2f4800: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f4804:
    // 0x2f4804: 0x40f809  jalr        $v0
label_2f4808:
    if (ctx->pc == 0x2F4808u) {
        ctx->pc = 0x2F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4804u;
        // 0x2f4808: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F480Cu;
        goto label_2f480c;
    }
    ctx->pc = 0x2F4804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F480Cu);
        ctx->pc = 0x2F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4804u;
        // 0x2f4808: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4804u, 0x2F480Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F480Cu;
label_2f480c:
    // 0x2f480c: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2f480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4810:
    // 0x2f4810: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2f4814:
    // 0x2f4814: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2f4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4818:
    // 0x2f4818: 0x26107b98  addiu       $s0, $s0, 0x7B98
    ctx->pc = 0x2f4818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31640));
label_2f481c:
    // 0x2f481c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2f481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4820:
    // 0x2f4820: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2f4820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f4824:
    // 0x2f4824: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x2f4824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f4828:
    // 0x2f4828: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x2f4828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f482c:
    // 0x2f482c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2f482cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f4830:
    // 0x2f4830: 0x6ba20157  ldl         $v0, 0x157($sp)
    ctx->pc = 0x2f4830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f4834:
    // 0x2f4834: 0x6fa20150  ldr         $v0, 0x150($sp)
    ctx->pc = 0x2f4834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f4838:
    // 0x2f4838: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2f4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2f483c:
    // 0x2f483c: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2f483cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f4840:
    // 0x2f4840: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2f4840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f4844:
    // 0x2f4844: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2f4844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2f4848:
    // 0x2f4848: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f484c:
    // 0x2f484c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f484cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f4850:
    // 0x2f4850: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f4854:
    // 0x2f4854: 0x40f809  jalr        $v0
label_2f4858:
    if (ctx->pc == 0x2F4858u) {
        ctx->pc = 0x2F4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4854u;
        // 0x2f4858: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F485Cu;
        goto label_2f485c;
    }
    ctx->pc = 0x2F4854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F485Cu);
        ctx->pc = 0x2F4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4854u;
        // 0x2f4858: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4854u, 0x2F485Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F485Cu;
label_2f485c:
    // 0x2f485c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4860:
    // 0x2f4860: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4864:
    // 0x2f4864: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f4864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f4868:
    // 0x2f4868: 0xc0e6fec  jal         func_39BFB0
label_2f486c:
    if (ctx->pc == 0x2F486Cu) {
        ctx->pc = 0x2F486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4868u;
        // 0x2f486c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4870u;
        goto label_2f4870;
    }
    ctx->pc = 0x2F4868u;
    SET_GPR_U32(ctx, 31, 0x2F4870u);
    ctx->pc = 0x2F486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4868u;
    // 0x2f486c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFB0u, 0x2F4868u, 0x2F4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4870u;
label_2f4870:
    // 0x2f4870: 0x56950019  bnel        $s4, $s5, . + 4 + (0x19 << 2)
label_2f4874:
    if (ctx->pc == 0x2F4874u) {
        ctx->pc = 0x2F4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4870u;
        // 0x2f4874: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4878u;
        goto label_2f4878;
    }
    ctx->pc = 0x2F4870u;
    {
        const bool branch_taken_0x2f4870 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f4870) {
            ctx->pc = 0x2F4874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4870u;
            // 0x2f4874: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F48D8u;
            goto label_2f48d8;
        }
    }
    ctx->pc = 0x2F4878u;
label_2f4878:
    // 0x2f4878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f4878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f487c:
    // 0x2f487c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f4880:
    // 0x2f4880: 0xc0bd31a  jal         func_2F4C68
label_2f4884:
    if (ctx->pc == 0x2F4884u) {
        ctx->pc = 0x2F4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4880u;
        // 0x2f4884: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4888u;
        goto label_2f4888;
    }
    ctx->pc = 0x2F4880u;
    SET_GPR_U32(ctx, 31, 0x2F4888u);
    ctx->pc = 0x2F4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4880u;
    // 0x2f4884: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C68u, 0x2F4880u, 0x2F4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4888u;
label_2f4888:
    // 0x2f4888: 0x10000012  b           . + 4 + (0x12 << 2)
label_2f488c:
    if (ctx->pc == 0x2F488Cu) {
        ctx->pc = 0x2F488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4888u;
        // 0x2f488c: 0xa2720043  sb          $s2, 0x43($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4890u;
        goto label_2f4890;
    }
    ctx->pc = 0x2F4888u;
    {
        const bool branch_taken_0x2f4888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4888u;
        // 0x2f488c: 0xa2720043  sb          $s2, 0x43($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4888) {
            ctx->pc = 0x2F48D4u;
            goto label_2f48d4;
        }
    }
    ctx->pc = 0x2F4890u;
label_2f4890:
    // 0x2f4890: 0x92620041  lbu         $v0, 0x41($s3)
    ctx->pc = 0x2f4890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
label_2f4894:
    // 0x2f4894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f4898:
    // 0x2f4898: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2f489c:
    if (ctx->pc == 0x2F489Cu) {
        ctx->pc = 0x2F489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4898u;
        // 0x2f489c: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A0u;
        goto label_2f48a0;
    }
    ctx->pc = 0x2F4898u;
    {
        const bool branch_taken_0x2f4898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4898) {
            ctx->pc = 0x2F489Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4898u;
            // 0x2f489c: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F48D8u;
            goto label_2f48d8;
        }
    }
    ctx->pc = 0x2F48A0u;
label_2f48a0:
    // 0x2f48a0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f48a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2f48a4:
    // 0x2f48a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f48a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f48a8:
    // 0x2f48a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f48a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f48ac:
    // 0x2f48ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f48acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f48b0:
    // 0x2f48b0: 0xc0b9de8  jal         func_2E77A0
label_2f48b4:
    if (ctx->pc == 0x2F48B4u) {
        ctx->pc = 0x2F48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48B0u;
        // 0x2f48b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48B8u;
        goto label_2f48b8;
    }
    ctx->pc = 0x2F48B0u;
    SET_GPR_U32(ctx, 31, 0x2F48B8u);
    ctx->pc = 0x2F48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48B0u;
    // 0x2f48b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E77A0u, 0x2F48B0u, 0x2F48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48B8u;
label_2f48b8:
    // 0x2f48b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f48bc:
    // 0x2f48bc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_2f48c0:
    if (ctx->pc == 0x2F48C0u) {
        ctx->pc = 0x2F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48BCu;
        // 0x2f48c0: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48C4u;
        goto label_2f48c4;
    }
    ctx->pc = 0x2F48BCu;
    {
        const bool branch_taken_0x2f48bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f48bc) {
            ctx->pc = 0x2F48C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F48BCu;
            // 0x2f48c0: 0x92620041  lbu         $v0, 0x41($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F48D8u;
            goto label_2f48d8;
        }
    }
    ctx->pc = 0x2F48C4u;
label_2f48c4:
    // 0x2f48c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f48c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f48c8:
    // 0x2f48c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f48c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f48cc:
    // 0x2f48cc: 0xc0bd31a  jal         func_2F4C68
label_2f48d0:
    if (ctx->pc == 0x2F48D0u) {
        ctx->pc = 0x2F48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48CCu;
        // 0x2f48d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48D4u;
        goto label_2f48d4;
    }
    ctx->pc = 0x2F48CCu;
    SET_GPR_U32(ctx, 31, 0x2F48D4u);
    ctx->pc = 0x2F48D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48CCu;
    // 0x2f48d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C68u, 0x2F48CCu, 0x2F48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48D4u;
label_2f48d4:
    // 0x2f48d4: 0x92620041  lbu         $v0, 0x41($s3)
    ctx->pc = 0x2f48d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 65)));
label_2f48d8:
    // 0x2f48d8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f48dc:
    if (ctx->pc == 0x2F48DCu) {
        ctx->pc = 0x2F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D8u;
        // 0x2f48dc: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48E0u;
        goto label_2f48e0;
    }
    ctx->pc = 0x2F48D8u;
    {
        const bool branch_taken_0x2f48d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D8u;
        // 0x2f48dc: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48d8) {
            ctx->pc = 0x2F4944u;
            goto label_2f4944;
        }
    }
    ctx->pc = 0x2F48E0u;
label_2f48e0:
    // 0x2f48e0: 0x92620043  lbu         $v0, 0x43($s3)
    ctx->pc = 0x2f48e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 67)));
label_2f48e4:
    // 0x2f48e4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2f48e8:
    if (ctx->pc == 0x2F48E8u) {
        ctx->pc = 0x2F48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48E4u;
        // 0x2f48e8: 0x7bb101e0  lq          $s1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48ECu;
        goto label_2f48ec;
    }
    ctx->pc = 0x2F48E4u;
    {
        const bool branch_taken_0x2f48e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48E4u;
        // 0x2f48e8: 0x7bb101e0  lq          $s1, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48e4) {
            ctx->pc = 0x2F4948u;
            goto label_2f4948;
        }
    }
    ctx->pc = 0x2F48ECu;
label_2f48ec:
    // 0x2f48ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f48f0:
    // 0x2f48f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f48f4:
    // 0x2f48f4: 0xc0bd31a  jal         func_2F4C68
label_2f48f8:
    if (ctx->pc == 0x2F48F8u) {
        ctx->pc = 0x2F48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48F4u;
        // 0x2f48f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48FCu;
        goto label_2f48fc;
    }
    ctx->pc = 0x2F48F4u;
    SET_GPR_U32(ctx, 31, 0x2F48FCu);
    ctx->pc = 0x2F48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48F4u;
    // 0x2f48f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C68u, 0x2F48F4u, 0x2F48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48FCu;
label_2f48fc:
    // 0x2f48fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_2f4900:
    if (ctx->pc == 0x2F4900u) {
        ctx->pc = 0x2F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48FCu;
        // 0x2f4900: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4904u;
        goto label_2f4904;
    }
    ctx->pc = 0x2F48FCu;
    {
        const bool branch_taken_0x2f48fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48FCu;
        // 0x2f4900: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48fc) {
            ctx->pc = 0x2F4944u;
            goto label_2f4944;
        }
    }
    ctx->pc = 0x2F4904u;
label_2f4904:
    // 0x2f4904: 0xc0a367c  jal         func_28D9F0
label_2f4908:
    if (ctx->pc == 0x2F4908u) {
        ctx->pc = 0x2F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4904u;
        // 0x2f4908: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F490Cu;
        goto label_2f490c;
    }
    ctx->pc = 0x2F4904u;
    SET_GPR_U32(ctx, 31, 0x2F490Cu);
    ctx->pc = 0x2F4908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4904u;
    // 0x2f4908: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F4904u, 0x2F490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F490Cu;
label_2f490c:
    // 0x2f490c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f4910:
    if (ctx->pc == 0x2F4910u) {
        ctx->pc = 0x2F4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F490Cu;
        // 0x2f4910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4914u;
        goto label_2f4914;
    }
    ctx->pc = 0x2F490Cu;
    {
        const bool branch_taken_0x2f490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F490Cu;
        // 0x2f4910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f490c) {
            ctx->pc = 0x2F4920u;
            goto label_2f4920;
        }
    }
    ctx->pc = 0x2F4914u;
label_2f4914:
    // 0x2f4914: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4918:
    // 0x2f4918: 0xc0bebdc  jal         func_2FAF70
label_2f491c:
    if (ctx->pc == 0x2F491Cu) {
        ctx->pc = 0x2F491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4918u;
        // 0x2f491c: 0x96660038  lhu         $a2, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4920u;
        goto label_2f4920;
    }
    ctx->pc = 0x2F4918u;
    SET_GPR_U32(ctx, 31, 0x2F4920u);
    ctx->pc = 0x2F491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4918u;
    // 0x2f491c: 0x96660038  lhu         $a2, 0x38($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F4918u, 0x2F4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4920u;
label_2f4920:
    // 0x2f4920: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f4924:
    // 0x2f4924: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2f4924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f4928:
    // 0x2f4928: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f492c:
    if (ctx->pc == 0x2F492Cu) {
        ctx->pc = 0x2F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4928u;
        // 0x2f492c: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4930u;
        goto label_2f4930;
    }
    ctx->pc = 0x2F4928u;
    {
        const bool branch_taken_0x2f4928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4928u;
        // 0x2f492c: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4928) {
            ctx->pc = 0x2F4940u;
            goto label_2f4940;
        }
    }
    ctx->pc = 0x2F4930u;
label_2f4930:
    // 0x2f4930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4934:
    // 0x2f4934: 0xa2600043  sb          $zero, 0x43($s3)
    ctx->pc = 0x2f4934u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 0));
label_2f4938:
    // 0x2f4938: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2f4938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_2f493c:
    // 0x2f493c: 0xa2600042  sb          $zero, 0x42($s3)
    ctx->pc = 0x2f493cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 66), (uint8_t)GPR_U32(ctx, 0));
label_2f4940:
    // 0x2f4940: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x2f4940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2f4944:
    // 0x2f4944: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x2f4944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2f4948:
    // 0x2f4948: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x2f4948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2f494c:
    // 0x2f494c: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x2f494cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2f4950:
    // 0x2f4950: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x2f4950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f4954:
    // 0x2f4954: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x2f4954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2f4958:
    // 0x2f4958: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x2f4958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2f495c:
    // 0x2f495c: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x2f495cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2f4960:
    // 0x2f4960: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x2f4960u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2f4964:
    // 0x2f4964: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2f4964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f4968:
    // 0x2f4968: 0xc7b60210  lwc1        $f22, 0x210($sp)
    ctx->pc = 0x2f4968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f496c:
    // 0x2f496c: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x2f496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f4970:
    // 0x2f4970: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2f4970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f4974:
    // 0x2f4974: 0x3e00008  jr          $ra
label_2f4978:
    if (ctx->pc == 0x2F4978u) {
        ctx->pc = 0x2F4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4974u;
        // 0x2f4978: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F497Cu;
        goto label_2f497c;
    }
    ctx->pc = 0x2F4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4974u;
        // 0x2f4978: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F497Cu;
label_2f497c:
    // 0x2f497c: 0x0  nop
    ctx->pc = 0x2f497cu;
    // NOP
    ctx->pc = 0x2f4980u;
}
