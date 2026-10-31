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

// Function: sub_002A4230
// Address: 0x2a4230 - 0x2a4aa0
void sub_002A4230_0x2a4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4230_0x2a4230");
#endif

    switch (ctx->pc) {
        case 0x2a4230u: goto label_2a4230;
        case 0x2a4234u: goto label_2a4234;
        case 0x2a4238u: goto label_2a4238;
        case 0x2a423cu: goto label_2a423c;
        case 0x2a4240u: goto label_2a4240;
        case 0x2a4244u: goto label_2a4244;
        case 0x2a4248u: goto label_2a4248;
        case 0x2a424cu: goto label_2a424c;
        case 0x2a4250u: goto label_2a4250;
        case 0x2a4254u: goto label_2a4254;
        case 0x2a4258u: goto label_2a4258;
        case 0x2a425cu: goto label_2a425c;
        case 0x2a4260u: goto label_2a4260;
        case 0x2a4264u: goto label_2a4264;
        case 0x2a4268u: goto label_2a4268;
        case 0x2a426cu: goto label_2a426c;
        case 0x2a4270u: goto label_2a4270;
        case 0x2a4274u: goto label_2a4274;
        case 0x2a4278u: goto label_2a4278;
        case 0x2a427cu: goto label_2a427c;
        case 0x2a4280u: goto label_2a4280;
        case 0x2a4284u: goto label_2a4284;
        case 0x2a4288u: goto label_2a4288;
        case 0x2a428cu: goto label_2a428c;
        case 0x2a4290u: goto label_2a4290;
        case 0x2a4294u: goto label_2a4294;
        case 0x2a4298u: goto label_2a4298;
        case 0x2a429cu: goto label_2a429c;
        case 0x2a42a0u: goto label_2a42a0;
        case 0x2a42a4u: goto label_2a42a4;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42acu: goto label_2a42ac;
        case 0x2a42b0u: goto label_2a42b0;
        case 0x2a42b4u: goto label_2a42b4;
        case 0x2a42b8u: goto label_2a42b8;
        case 0x2a42bcu: goto label_2a42bc;
        case 0x2a42c0u: goto label_2a42c0;
        case 0x2a42c4u: goto label_2a42c4;
        case 0x2a42c8u: goto label_2a42c8;
        case 0x2a42ccu: goto label_2a42cc;
        case 0x2a42d0u: goto label_2a42d0;
        case 0x2a42d4u: goto label_2a42d4;
        case 0x2a42d8u: goto label_2a42d8;
        case 0x2a42dcu: goto label_2a42dc;
        case 0x2a42e0u: goto label_2a42e0;
        case 0x2a42e4u: goto label_2a42e4;
        case 0x2a42e8u: goto label_2a42e8;
        case 0x2a42ecu: goto label_2a42ec;
        case 0x2a42f0u: goto label_2a42f0;
        case 0x2a42f4u: goto label_2a42f4;
        case 0x2a42f8u: goto label_2a42f8;
        case 0x2a42fcu: goto label_2a42fc;
        case 0x2a4300u: goto label_2a4300;
        case 0x2a4304u: goto label_2a4304;
        case 0x2a4308u: goto label_2a4308;
        case 0x2a430cu: goto label_2a430c;
        case 0x2a4310u: goto label_2a4310;
        case 0x2a4314u: goto label_2a4314;
        case 0x2a4318u: goto label_2a4318;
        case 0x2a431cu: goto label_2a431c;
        case 0x2a4320u: goto label_2a4320;
        case 0x2a4324u: goto label_2a4324;
        case 0x2a4328u: goto label_2a4328;
        case 0x2a432cu: goto label_2a432c;
        case 0x2a4330u: goto label_2a4330;
        case 0x2a4334u: goto label_2a4334;
        case 0x2a4338u: goto label_2a4338;
        case 0x2a433cu: goto label_2a433c;
        case 0x2a4340u: goto label_2a4340;
        case 0x2a4344u: goto label_2a4344;
        case 0x2a4348u: goto label_2a4348;
        case 0x2a434cu: goto label_2a434c;
        case 0x2a4350u: goto label_2a4350;
        case 0x2a4354u: goto label_2a4354;
        case 0x2a4358u: goto label_2a4358;
        case 0x2a435cu: goto label_2a435c;
        case 0x2a4360u: goto label_2a4360;
        case 0x2a4364u: goto label_2a4364;
        case 0x2a4368u: goto label_2a4368;
        case 0x2a436cu: goto label_2a436c;
        case 0x2a4370u: goto label_2a4370;
        case 0x2a4374u: goto label_2a4374;
        case 0x2a4378u: goto label_2a4378;
        case 0x2a437cu: goto label_2a437c;
        case 0x2a4380u: goto label_2a4380;
        case 0x2a4384u: goto label_2a4384;
        case 0x2a4388u: goto label_2a4388;
        case 0x2a438cu: goto label_2a438c;
        case 0x2a4390u: goto label_2a4390;
        case 0x2a4394u: goto label_2a4394;
        case 0x2a4398u: goto label_2a4398;
        case 0x2a439cu: goto label_2a439c;
        case 0x2a43a0u: goto label_2a43a0;
        case 0x2a43a4u: goto label_2a43a4;
        case 0x2a43a8u: goto label_2a43a8;
        case 0x2a43acu: goto label_2a43ac;
        case 0x2a43b0u: goto label_2a43b0;
        case 0x2a43b4u: goto label_2a43b4;
        case 0x2a43b8u: goto label_2a43b8;
        case 0x2a43bcu: goto label_2a43bc;
        case 0x2a43c0u: goto label_2a43c0;
        case 0x2a43c4u: goto label_2a43c4;
        case 0x2a43c8u: goto label_2a43c8;
        case 0x2a43ccu: goto label_2a43cc;
        case 0x2a43d0u: goto label_2a43d0;
        case 0x2a43d4u: goto label_2a43d4;
        case 0x2a43d8u: goto label_2a43d8;
        case 0x2a43dcu: goto label_2a43dc;
        case 0x2a43e0u: goto label_2a43e0;
        case 0x2a43e4u: goto label_2a43e4;
        case 0x2a43e8u: goto label_2a43e8;
        case 0x2a43ecu: goto label_2a43ec;
        case 0x2a43f0u: goto label_2a43f0;
        case 0x2a43f4u: goto label_2a43f4;
        case 0x2a43f8u: goto label_2a43f8;
        case 0x2a43fcu: goto label_2a43fc;
        case 0x2a4400u: goto label_2a4400;
        case 0x2a4404u: goto label_2a4404;
        case 0x2a4408u: goto label_2a4408;
        case 0x2a440cu: goto label_2a440c;
        case 0x2a4410u: goto label_2a4410;
        case 0x2a4414u: goto label_2a4414;
        case 0x2a4418u: goto label_2a4418;
        case 0x2a441cu: goto label_2a441c;
        case 0x2a4420u: goto label_2a4420;
        case 0x2a4424u: goto label_2a4424;
        case 0x2a4428u: goto label_2a4428;
        case 0x2a442cu: goto label_2a442c;
        case 0x2a4430u: goto label_2a4430;
        case 0x2a4434u: goto label_2a4434;
        case 0x2a4438u: goto label_2a4438;
        case 0x2a443cu: goto label_2a443c;
        case 0x2a4440u: goto label_2a4440;
        case 0x2a4444u: goto label_2a4444;
        case 0x2a4448u: goto label_2a4448;
        case 0x2a444cu: goto label_2a444c;
        case 0x2a4450u: goto label_2a4450;
        case 0x2a4454u: goto label_2a4454;
        case 0x2a4458u: goto label_2a4458;
        case 0x2a445cu: goto label_2a445c;
        case 0x2a4460u: goto label_2a4460;
        case 0x2a4464u: goto label_2a4464;
        case 0x2a4468u: goto label_2a4468;
        case 0x2a446cu: goto label_2a446c;
        case 0x2a4470u: goto label_2a4470;
        case 0x2a4474u: goto label_2a4474;
        case 0x2a4478u: goto label_2a4478;
        case 0x2a447cu: goto label_2a447c;
        case 0x2a4480u: goto label_2a4480;
        case 0x2a4484u: goto label_2a4484;
        case 0x2a4488u: goto label_2a4488;
        case 0x2a448cu: goto label_2a448c;
        case 0x2a4490u: goto label_2a4490;
        case 0x2a4494u: goto label_2a4494;
        case 0x2a4498u: goto label_2a4498;
        case 0x2a449cu: goto label_2a449c;
        case 0x2a44a0u: goto label_2a44a0;
        case 0x2a44a4u: goto label_2a44a4;
        case 0x2a44a8u: goto label_2a44a8;
        case 0x2a44acu: goto label_2a44ac;
        case 0x2a44b0u: goto label_2a44b0;
        case 0x2a44b4u: goto label_2a44b4;
        case 0x2a44b8u: goto label_2a44b8;
        case 0x2a44bcu: goto label_2a44bc;
        case 0x2a44c0u: goto label_2a44c0;
        case 0x2a44c4u: goto label_2a44c4;
        case 0x2a44c8u: goto label_2a44c8;
        case 0x2a44ccu: goto label_2a44cc;
        case 0x2a44d0u: goto label_2a44d0;
        case 0x2a44d4u: goto label_2a44d4;
        case 0x2a44d8u: goto label_2a44d8;
        case 0x2a44dcu: goto label_2a44dc;
        case 0x2a44e0u: goto label_2a44e0;
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a44e8u: goto label_2a44e8;
        case 0x2a44ecu: goto label_2a44ec;
        case 0x2a44f0u: goto label_2a44f0;
        case 0x2a44f4u: goto label_2a44f4;
        case 0x2a44f8u: goto label_2a44f8;
        case 0x2a44fcu: goto label_2a44fc;
        case 0x2a4500u: goto label_2a4500;
        case 0x2a4504u: goto label_2a4504;
        case 0x2a4508u: goto label_2a4508;
        case 0x2a450cu: goto label_2a450c;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a4514u: goto label_2a4514;
        case 0x2a4518u: goto label_2a4518;
        case 0x2a451cu: goto label_2a451c;
        case 0x2a4520u: goto label_2a4520;
        case 0x2a4524u: goto label_2a4524;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a452cu: goto label_2a452c;
        case 0x2a4530u: goto label_2a4530;
        case 0x2a4534u: goto label_2a4534;
        case 0x2a4538u: goto label_2a4538;
        case 0x2a453cu: goto label_2a453c;
        case 0x2a4540u: goto label_2a4540;
        case 0x2a4544u: goto label_2a4544;
        case 0x2a4548u: goto label_2a4548;
        case 0x2a454cu: goto label_2a454c;
        case 0x2a4550u: goto label_2a4550;
        case 0x2a4554u: goto label_2a4554;
        case 0x2a4558u: goto label_2a4558;
        case 0x2a455cu: goto label_2a455c;
        case 0x2a4560u: goto label_2a4560;
        case 0x2a4564u: goto label_2a4564;
        case 0x2a4568u: goto label_2a4568;
        case 0x2a456cu: goto label_2a456c;
        case 0x2a4570u: goto label_2a4570;
        case 0x2a4574u: goto label_2a4574;
        case 0x2a4578u: goto label_2a4578;
        case 0x2a457cu: goto label_2a457c;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a4584u: goto label_2a4584;
        case 0x2a4588u: goto label_2a4588;
        case 0x2a458cu: goto label_2a458c;
        case 0x2a4590u: goto label_2a4590;
        case 0x2a4594u: goto label_2a4594;
        case 0x2a4598u: goto label_2a4598;
        case 0x2a459cu: goto label_2a459c;
        case 0x2a45a0u: goto label_2a45a0;
        case 0x2a45a4u: goto label_2a45a4;
        case 0x2a45a8u: goto label_2a45a8;
        case 0x2a45acu: goto label_2a45ac;
        case 0x2a45b0u: goto label_2a45b0;
        case 0x2a45b4u: goto label_2a45b4;
        case 0x2a45b8u: goto label_2a45b8;
        case 0x2a45bcu: goto label_2a45bc;
        case 0x2a45c0u: goto label_2a45c0;
        case 0x2a45c4u: goto label_2a45c4;
        case 0x2a45c8u: goto label_2a45c8;
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45d0u: goto label_2a45d0;
        case 0x2a45d4u: goto label_2a45d4;
        case 0x2a45d8u: goto label_2a45d8;
        case 0x2a45dcu: goto label_2a45dc;
        case 0x2a45e0u: goto label_2a45e0;
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a45e8u: goto label_2a45e8;
        case 0x2a45ecu: goto label_2a45ec;
        case 0x2a45f0u: goto label_2a45f0;
        case 0x2a45f4u: goto label_2a45f4;
        case 0x2a45f8u: goto label_2a45f8;
        case 0x2a45fcu: goto label_2a45fc;
        case 0x2a4600u: goto label_2a4600;
        case 0x2a4604u: goto label_2a4604;
        case 0x2a4608u: goto label_2a4608;
        case 0x2a460cu: goto label_2a460c;
        case 0x2a4610u: goto label_2a4610;
        case 0x2a4614u: goto label_2a4614;
        case 0x2a4618u: goto label_2a4618;
        case 0x2a461cu: goto label_2a461c;
        case 0x2a4620u: goto label_2a4620;
        case 0x2a4624u: goto label_2a4624;
        case 0x2a4628u: goto label_2a4628;
        case 0x2a462cu: goto label_2a462c;
        case 0x2a4630u: goto label_2a4630;
        case 0x2a4634u: goto label_2a4634;
        case 0x2a4638u: goto label_2a4638;
        case 0x2a463cu: goto label_2a463c;
        case 0x2a4640u: goto label_2a4640;
        case 0x2a4644u: goto label_2a4644;
        case 0x2a4648u: goto label_2a4648;
        case 0x2a464cu: goto label_2a464c;
        case 0x2a4650u: goto label_2a4650;
        case 0x2a4654u: goto label_2a4654;
        case 0x2a4658u: goto label_2a4658;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a4660u: goto label_2a4660;
        case 0x2a4664u: goto label_2a4664;
        case 0x2a4668u: goto label_2a4668;
        case 0x2a466cu: goto label_2a466c;
        case 0x2a4670u: goto label_2a4670;
        case 0x2a4674u: goto label_2a4674;
        case 0x2a4678u: goto label_2a4678;
        case 0x2a467cu: goto label_2a467c;
        case 0x2a4680u: goto label_2a4680;
        case 0x2a4684u: goto label_2a4684;
        case 0x2a4688u: goto label_2a4688;
        case 0x2a468cu: goto label_2a468c;
        case 0x2a4690u: goto label_2a4690;
        case 0x2a4694u: goto label_2a4694;
        case 0x2a4698u: goto label_2a4698;
        case 0x2a469cu: goto label_2a469c;
        case 0x2a46a0u: goto label_2a46a0;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46a8u: goto label_2a46a8;
        case 0x2a46acu: goto label_2a46ac;
        case 0x2a46b0u: goto label_2a46b0;
        case 0x2a46b4u: goto label_2a46b4;
        case 0x2a46b8u: goto label_2a46b8;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a46c0u: goto label_2a46c0;
        case 0x2a46c4u: goto label_2a46c4;
        case 0x2a46c8u: goto label_2a46c8;
        case 0x2a46ccu: goto label_2a46cc;
        case 0x2a46d0u: goto label_2a46d0;
        case 0x2a46d4u: goto label_2a46d4;
        case 0x2a46d8u: goto label_2a46d8;
        case 0x2a46dcu: goto label_2a46dc;
        case 0x2a46e0u: goto label_2a46e0;
        case 0x2a46e4u: goto label_2a46e4;
        case 0x2a46e8u: goto label_2a46e8;
        case 0x2a46ecu: goto label_2a46ec;
        case 0x2a46f0u: goto label_2a46f0;
        case 0x2a46f4u: goto label_2a46f4;
        case 0x2a46f8u: goto label_2a46f8;
        case 0x2a46fcu: goto label_2a46fc;
        case 0x2a4700u: goto label_2a4700;
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4708u: goto label_2a4708;
        case 0x2a470cu: goto label_2a470c;
        case 0x2a4710u: goto label_2a4710;
        case 0x2a4714u: goto label_2a4714;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a471cu: goto label_2a471c;
        case 0x2a4720u: goto label_2a4720;
        case 0x2a4724u: goto label_2a4724;
        case 0x2a4728u: goto label_2a4728;
        case 0x2a472cu: goto label_2a472c;
        case 0x2a4730u: goto label_2a4730;
        case 0x2a4734u: goto label_2a4734;
        case 0x2a4738u: goto label_2a4738;
        case 0x2a473cu: goto label_2a473c;
        case 0x2a4740u: goto label_2a4740;
        case 0x2a4744u: goto label_2a4744;
        case 0x2a4748u: goto label_2a4748;
        case 0x2a474cu: goto label_2a474c;
        case 0x2a4750u: goto label_2a4750;
        case 0x2a4754u: goto label_2a4754;
        case 0x2a4758u: goto label_2a4758;
        case 0x2a475cu: goto label_2a475c;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a4764u: goto label_2a4764;
        case 0x2a4768u: goto label_2a4768;
        case 0x2a476cu: goto label_2a476c;
        case 0x2a4770u: goto label_2a4770;
        case 0x2a4774u: goto label_2a4774;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a477cu: goto label_2a477c;
        case 0x2a4780u: goto label_2a4780;
        case 0x2a4784u: goto label_2a4784;
        case 0x2a4788u: goto label_2a4788;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a4798u: goto label_2a4798;
        case 0x2a479cu: goto label_2a479c;
        case 0x2a47a0u: goto label_2a47a0;
        case 0x2a47a4u: goto label_2a47a4;
        case 0x2a47a8u: goto label_2a47a8;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47b0u: goto label_2a47b0;
        case 0x2a47b4u: goto label_2a47b4;
        case 0x2a47b8u: goto label_2a47b8;
        case 0x2a47bcu: goto label_2a47bc;
        case 0x2a47c0u: goto label_2a47c0;
        case 0x2a47c4u: goto label_2a47c4;
        case 0x2a47c8u: goto label_2a47c8;
        case 0x2a47ccu: goto label_2a47cc;
        case 0x2a47d0u: goto label_2a47d0;
        case 0x2a47d4u: goto label_2a47d4;
        case 0x2a47d8u: goto label_2a47d8;
        case 0x2a47dcu: goto label_2a47dc;
        case 0x2a47e0u: goto label_2a47e0;
        case 0x2a47e4u: goto label_2a47e4;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a47ecu: goto label_2a47ec;
        case 0x2a47f0u: goto label_2a47f0;
        case 0x2a47f4u: goto label_2a47f4;
        case 0x2a47f8u: goto label_2a47f8;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a4800u: goto label_2a4800;
        case 0x2a4804u: goto label_2a4804;
        case 0x2a4808u: goto label_2a4808;
        case 0x2a480cu: goto label_2a480c;
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4814u: goto label_2a4814;
        case 0x2a4818u: goto label_2a4818;
        case 0x2a481cu: goto label_2a481c;
        case 0x2a4820u: goto label_2a4820;
        case 0x2a4824u: goto label_2a4824;
        case 0x2a4828u: goto label_2a4828;
        case 0x2a482cu: goto label_2a482c;
        case 0x2a4830u: goto label_2a4830;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a4838u: goto label_2a4838;
        case 0x2a483cu: goto label_2a483c;
        case 0x2a4840u: goto label_2a4840;
        case 0x2a4844u: goto label_2a4844;
        case 0x2a4848u: goto label_2a4848;
        case 0x2a484cu: goto label_2a484c;
        case 0x2a4850u: goto label_2a4850;
        case 0x2a4854u: goto label_2a4854;
        case 0x2a4858u: goto label_2a4858;
        case 0x2a485cu: goto label_2a485c;
        case 0x2a4860u: goto label_2a4860;
        case 0x2a4864u: goto label_2a4864;
        case 0x2a4868u: goto label_2a4868;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4870u: goto label_2a4870;
        case 0x2a4874u: goto label_2a4874;
        case 0x2a4878u: goto label_2a4878;
        case 0x2a487cu: goto label_2a487c;
        case 0x2a4880u: goto label_2a4880;
        case 0x2a4884u: goto label_2a4884;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a488cu: goto label_2a488c;
        case 0x2a4890u: goto label_2a4890;
        case 0x2a4894u: goto label_2a4894;
        case 0x2a4898u: goto label_2a4898;
        case 0x2a489cu: goto label_2a489c;
        case 0x2a48a0u: goto label_2a48a0;
        case 0x2a48a4u: goto label_2a48a4;
        case 0x2a48a8u: goto label_2a48a8;
        case 0x2a48acu: goto label_2a48ac;
        case 0x2a48b0u: goto label_2a48b0;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a48b8u: goto label_2a48b8;
        case 0x2a48bcu: goto label_2a48bc;
        case 0x2a48c0u: goto label_2a48c0;
        case 0x2a48c4u: goto label_2a48c4;
        case 0x2a48c8u: goto label_2a48c8;
        case 0x2a48ccu: goto label_2a48cc;
        case 0x2a48d0u: goto label_2a48d0;
        case 0x2a48d4u: goto label_2a48d4;
        case 0x2a48d8u: goto label_2a48d8;
        case 0x2a48dcu: goto label_2a48dc;
        case 0x2a48e0u: goto label_2a48e0;
        case 0x2a48e4u: goto label_2a48e4;
        case 0x2a48e8u: goto label_2a48e8;
        case 0x2a48ecu: goto label_2a48ec;
        case 0x2a48f0u: goto label_2a48f0;
        case 0x2a48f4u: goto label_2a48f4;
        case 0x2a48f8u: goto label_2a48f8;
        case 0x2a48fcu: goto label_2a48fc;
        case 0x2a4900u: goto label_2a4900;
        case 0x2a4904u: goto label_2a4904;
        case 0x2a4908u: goto label_2a4908;
        case 0x2a490cu: goto label_2a490c;
        case 0x2a4910u: goto label_2a4910;
        case 0x2a4914u: goto label_2a4914;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a491cu: goto label_2a491c;
        case 0x2a4920u: goto label_2a4920;
        case 0x2a4924u: goto label_2a4924;
        case 0x2a4928u: goto label_2a4928;
        case 0x2a492cu: goto label_2a492c;
        case 0x2a4930u: goto label_2a4930;
        case 0x2a4934u: goto label_2a4934;
        case 0x2a4938u: goto label_2a4938;
        case 0x2a493cu: goto label_2a493c;
        case 0x2a4940u: goto label_2a4940;
        case 0x2a4944u: goto label_2a4944;
        case 0x2a4948u: goto label_2a4948;
        case 0x2a494cu: goto label_2a494c;
        case 0x2a4950u: goto label_2a4950;
        case 0x2a4954u: goto label_2a4954;
        case 0x2a4958u: goto label_2a4958;
        case 0x2a495cu: goto label_2a495c;
        case 0x2a4960u: goto label_2a4960;
        case 0x2a4964u: goto label_2a4964;
        case 0x2a4968u: goto label_2a4968;
        case 0x2a496cu: goto label_2a496c;
        case 0x2a4970u: goto label_2a4970;
        case 0x2a4974u: goto label_2a4974;
        case 0x2a4978u: goto label_2a4978;
        case 0x2a497cu: goto label_2a497c;
        case 0x2a4980u: goto label_2a4980;
        case 0x2a4984u: goto label_2a4984;
        case 0x2a4988u: goto label_2a4988;
        case 0x2a498cu: goto label_2a498c;
        case 0x2a4990u: goto label_2a4990;
        case 0x2a4994u: goto label_2a4994;
        case 0x2a4998u: goto label_2a4998;
        case 0x2a499cu: goto label_2a499c;
        case 0x2a49a0u: goto label_2a49a0;
        case 0x2a49a4u: goto label_2a49a4;
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49acu: goto label_2a49ac;
        case 0x2a49b0u: goto label_2a49b0;
        case 0x2a49b4u: goto label_2a49b4;
        case 0x2a49b8u: goto label_2a49b8;
        case 0x2a49bcu: goto label_2a49bc;
        case 0x2a49c0u: goto label_2a49c0;
        case 0x2a49c4u: goto label_2a49c4;
        case 0x2a49c8u: goto label_2a49c8;
        case 0x2a49ccu: goto label_2a49cc;
        case 0x2a49d0u: goto label_2a49d0;
        case 0x2a49d4u: goto label_2a49d4;
        case 0x2a49d8u: goto label_2a49d8;
        case 0x2a49dcu: goto label_2a49dc;
        case 0x2a49e0u: goto label_2a49e0;
        case 0x2a49e4u: goto label_2a49e4;
        case 0x2a49e8u: goto label_2a49e8;
        case 0x2a49ecu: goto label_2a49ec;
        case 0x2a49f0u: goto label_2a49f0;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a49f8u: goto label_2a49f8;
        case 0x2a49fcu: goto label_2a49fc;
        case 0x2a4a00u: goto label_2a4a00;
        case 0x2a4a04u: goto label_2a4a04;
        case 0x2a4a08u: goto label_2a4a08;
        case 0x2a4a0cu: goto label_2a4a0c;
        case 0x2a4a10u: goto label_2a4a10;
        case 0x2a4a14u: goto label_2a4a14;
        case 0x2a4a18u: goto label_2a4a18;
        case 0x2a4a1cu: goto label_2a4a1c;
        case 0x2a4a20u: goto label_2a4a20;
        case 0x2a4a24u: goto label_2a4a24;
        case 0x2a4a28u: goto label_2a4a28;
        case 0x2a4a2cu: goto label_2a4a2c;
        case 0x2a4a30u: goto label_2a4a30;
        case 0x2a4a34u: goto label_2a4a34;
        case 0x2a4a38u: goto label_2a4a38;
        case 0x2a4a3cu: goto label_2a4a3c;
        case 0x2a4a40u: goto label_2a4a40;
        case 0x2a4a44u: goto label_2a4a44;
        case 0x2a4a48u: goto label_2a4a48;
        case 0x2a4a4cu: goto label_2a4a4c;
        case 0x2a4a50u: goto label_2a4a50;
        case 0x2a4a54u: goto label_2a4a54;
        case 0x2a4a58u: goto label_2a4a58;
        case 0x2a4a5cu: goto label_2a4a5c;
        case 0x2a4a60u: goto label_2a4a60;
        case 0x2a4a64u: goto label_2a4a64;
        case 0x2a4a68u: goto label_2a4a68;
        case 0x2a4a6cu: goto label_2a4a6c;
        case 0x2a4a70u: goto label_2a4a70;
        case 0x2a4a74u: goto label_2a4a74;
        case 0x2a4a78u: goto label_2a4a78;
        case 0x2a4a7cu: goto label_2a4a7c;
        case 0x2a4a80u: goto label_2a4a80;
        case 0x2a4a84u: goto label_2a4a84;
        case 0x2a4a88u: goto label_2a4a88;
        case 0x2a4a8cu: goto label_2a4a8c;
        case 0x2a4a90u: goto label_2a4a90;
        case 0x2a4a94u: goto label_2a4a94;
        case 0x2a4a98u: goto label_2a4a98;
        case 0x2a4a9cu: goto label_2a4a9c;
        default: break;
    }

    ctx->pc = 0x2a4230u;

label_2a4230:
    // 0x2a4230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a4234:
    // 0x2a4234: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a4238:
    // 0x2a4238: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a423c:
    // 0x2a423c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a423cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4240:
    // 0x2a4240: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a4244:
    // 0x2a4244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4248:
    // 0x2a4248: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a4248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a424c:
    // 0x2a424c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2a4250:
    // 0x2a4250: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a4254:
    // 0x2a4254: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2a4254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2a4258:
    // 0x2a4258: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2a4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2a425c:
    // 0x2a425c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a4260:
    // 0x2a4260: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4264:
    // 0x2a4264: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4268:
    // 0x2a4268: 0xc08bfa0  jal         func_22FE80
label_2a426c:
    if (ctx->pc == 0x2A426Cu) {
        ctx->pc = 0x2A426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4268u;
        // 0x2a426c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4270u;
        goto label_2a4270;
    }
    ctx->pc = 0x2A4268u;
    SET_GPR_U32(ctx, 31, 0x2A4270u);
    ctx->pc = 0x2A426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4268u;
    // 0x2a426c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2A4268u, 0x2A4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4270u;
label_2a4270:
    // 0x2a4270: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4274:
    // 0x2a4274: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a4274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a4278:
    // 0x2a4278: 0x1c6000fc  bgtz        $v1, . + 4 + (0xFC << 2)
label_2a427c:
    if (ctx->pc == 0x2A427Cu) {
        ctx->pc = 0x2A427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4278u;
        // 0x2a427c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4280u;
        goto label_2a4280;
    }
    ctx->pc = 0x2A4278u;
    {
        const bool branch_taken_0x2a4278 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4278u;
        // 0x2a427c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4278) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4280u;
label_2a4280:
    // 0x2a4280: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2a4280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2a4284:
    // 0x2a4284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a4284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a4288:
    // 0x2a4288: 0xc089998  jal         func_226660
label_2a428c:
    if (ctx->pc == 0x2A428Cu) {
        ctx->pc = 0x2A428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4288u;
        // 0x2a428c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4290u;
        goto label_2a4290;
    }
    ctx->pc = 0x2A4288u;
    SET_GPR_U32(ctx, 31, 0x2A4290u);
    ctx->pc = 0x2A428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4288u;
    // 0x2a428c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2A4288u, 0x2A4290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4290u;
label_2a4290:
    // 0x2a4290: 0x105000f6  beq         $v0, $s0, . + 4 + (0xF6 << 2)
label_2a4294:
    if (ctx->pc == 0x2A4294u) {
        ctx->pc = 0x2A4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4290u;
        // 0x2a4294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4298u;
        goto label_2a4298;
    }
    ctx->pc = 0x2A4290u;
    {
        const bool branch_taken_0x2a4290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4290u;
        // 0x2a4294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4290) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4298u;
label_2a4298:
    // 0x2a4298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a4298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a429c:
    // 0x2a429c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2a42a0:
    // 0x2a42a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2a42a4:
    if (ctx->pc == 0x2A42A4u) {
        ctx->pc = 0x2A42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42A0u;
        // 0x2a42a4: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A42A8u;
        goto label_2a42a8;
    }
    ctx->pc = 0x2A42A0u;
    {
        const bool branch_taken_0x2a42a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a42a0) {
            ctx->pc = 0x2A42A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A42A0u;
            // 0x2a42a4: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A42A8u;
            goto label_2a42a8;
        }
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a42ac:
    // 0x2a42ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a42acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a42b0:
    // 0x2a42b0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2a42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a42b4:
    // 0x2a42b4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a42b8:
    // 0x2a42b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a42b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a42bc:
    // 0x2a42bc: 0xac830128  sw          $v1, 0x128($a0)
    ctx->pc = 0x2a42bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
label_2a42c0:
    // 0x2a42c0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2a42c4:
    if (ctx->pc == 0x2A42C4u) {
        ctx->pc = 0x2A42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42C0u;
        // 0x2a42c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A42C8u;
        goto label_2a42c8;
    }
    ctx->pc = 0x2A42C0u;
    {
        const bool branch_taken_0x2a42c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a42c0) {
            ctx->pc = 0x2A42C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A42C0u;
            // 0x2a42c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A42C8u;
            goto label_2a42c8;
        }
    }
    ctx->pc = 0x2A42C8u;
label_2a42c8:
    // 0x2a42c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a42cc:
    // 0x2a42cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a42d0:
    // 0x2a42d0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2a42d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a42d4:
    // 0x2a42d4: 0x2010  mfhi        $a0
    ctx->pc = 0x2a42d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a42d8:
    // 0x2a42d8: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2a42dc:
    if (ctx->pc == 0x2A42DCu) {
        ctx->pc = 0x2A42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42D8u;
        // 0x2a42dc: 0x92230029  lbu         $v1, 0x29($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A42E0u;
        goto label_2a42e0;
    }
    ctx->pc = 0x2A42D8u;
    {
        const bool branch_taken_0x2a42d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a42d8) {
            ctx->pc = 0x2A42DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A42D8u;
            // 0x2a42dc: 0x92230029  lbu         $v1, 0x29($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4300u;
            goto label_2a4300;
        }
    }
    ctx->pc = 0x2A42E0u;
label_2a42e0:
    // 0x2a42e0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2a42e4:
    // 0x2a42e4: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x2a42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a42e8:
    // 0x2a42e8: 0x24a5be58  addiu       $a1, $a1, -0x41A8
    ctx->pc = 0x2a42e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
label_2a42ec:
    // 0x2a42ec: 0xc0a72ee  jal         func_29CBB8
label_2a42f0:
    if (ctx->pc == 0x2A42F0u) {
        ctx->pc = 0x2A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42ECu;
        // 0x2a42f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A42F4u;
        goto label_2a42f4;
    }
    ctx->pc = 0x2A42ECu;
    SET_GPR_U32(ctx, 31, 0x2A42F4u);
    ctx->pc = 0x2A42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42ECu;
    // 0x2a42f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2A42ECu, 0x2A42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42F4u;
label_2a42f4:
    // 0x2a42f4: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
label_2a42f8:
    if (ctx->pc == 0x2A42F8u) {
        ctx->pc = 0x2A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42F4u;
        // 0x2a42f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A42FCu;
        goto label_2a42fc;
    }
    ctx->pc = 0x2A42F4u;
    {
        const bool branch_taken_0x2a42f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42F4u;
        // 0x2a42f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42f4) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A42FCu;
label_2a42fc:
    // 0x2a42fc: 0x92230029  lbu         $v1, 0x29($s1)
    ctx->pc = 0x2a42fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2a4300:
    // 0x2a4300: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2a4304:
    if (ctx->pc == 0x2A4304u) {
        ctx->pc = 0x2A4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4300u;
        // 0x2a4304: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4308u;
        goto label_2a4308;
    }
    ctx->pc = 0x2A4300u;
    {
        const bool branch_taken_0x2a4300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4300) {
            ctx->pc = 0x2A4304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4300u;
            // 0x2a4304: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A4308u;
label_2a4308:
    // 0x2a4308: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2a4308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2a430c:
    // 0x2a430c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2a430cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a4310:
    // 0x2a4310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a4314:
    if (ctx->pc == 0x2A4314u) {
        ctx->pc = 0x2A4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4310u;
        // 0x2a4314: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4318u;
        goto label_2a4318;
    }
    ctx->pc = 0x2A4310u;
    {
        const bool branch_taken_0x2a4310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4310u;
        // 0x2a4314: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4310) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A4318u;
label_2a4318:
    // 0x2a4318: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2a431c:
    if (ctx->pc == 0x2A431Cu) {
        ctx->pc = 0x2A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4318u;
        // 0x2a431c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4320u;
        goto label_2a4320;
    }
    ctx->pc = 0x2A4318u;
    {
        const bool branch_taken_0x2a4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4318u;
        // 0x2a431c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4318) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4320u;
label_2a4320:
    // 0x2a4320: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2a4320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4324:
    // 0x2a4324: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a4328:
    if (ctx->pc == 0x2A4328u) {
        ctx->pc = 0x2A4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4324u;
        // 0x2a4328: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A432Cu;
        goto label_2a432c;
    }
    ctx->pc = 0x2A4324u;
    {
        const bool branch_taken_0x2a4324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4324) {
            ctx->pc = 0x2A4328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4324u;
            // 0x2a4328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A432Cu;
            goto label_2a432c;
        }
    }
    ctx->pc = 0x2A432Cu;
label_2a432c:
    // 0x2a432c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2a432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2a4330:
    // 0x2a4330: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a4330u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a4334:
    // 0x2a4334: 0x2010  mfhi        $a0
    ctx->pc = 0x2a4334u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a4338:
    // 0x2a4338: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
label_2a433c:
    if (ctx->pc == 0x2A433Cu) {
        ctx->pc = 0x2A433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4338u;
        // 0x2a433c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4340u;
        goto label_2a4340;
    }
    ctx->pc = 0x2A4338u;
    {
        const bool branch_taken_0x2a4338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4338) {
            ctx->pc = 0x2A433Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4338u;
            // 0x2a433c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A438Cu;
            goto label_2a438c;
        }
    }
    ctx->pc = 0x2A4340u;
label_2a4340:
    // 0x2a4340: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2a4340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2a4344:
    // 0x2a4344: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2a4344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2a4348:
    // 0x2a4348: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2a4348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2a434c:
    // 0x2a434c: 0x24c40164  addiu       $a0, $a2, 0x164
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 356));
label_2a4350:
    // 0x2a4350: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2a4354:
    // 0x2a4354: 0xc13b782  jal         func_4EDE08
label_2a4358:
    if (ctx->pc == 0x2A4358u) {
        ctx->pc = 0x2A4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4354u;
        // 0x2a4358: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A435Cu;
        goto label_2a435c;
    }
    ctx->pc = 0x2A4354u;
    SET_GPR_U32(ctx, 31, 0x2A435Cu);
    ctx->pc = 0x2A4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4354u;
    // 0x2a4358: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2A4354u, 0x2A435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A435Cu;
label_2a435c:
    // 0x2a435c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2a435cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2a4360:
    // 0x2a4360: 0xc0e409a  jal         func_390268
label_2a4364:
    if (ctx->pc == 0x2A4364u) {
        ctx->pc = 0x2A4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4360u;
        // 0x2a4364: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4368u;
        goto label_2a4368;
    }
    ctx->pc = 0x2A4360u;
    SET_GPR_U32(ctx, 31, 0x2A4368u);
    ctx->pc = 0x2A4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4360u;
    // 0x2a4364: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A4360u, 0x2A4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4368u;
label_2a4368:
    // 0x2a4368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a436c:
    if (ctx->pc == 0x2A436Cu) {
        ctx->pc = 0x2A436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4368u;
        // 0x2a436c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4370u;
        goto label_2a4370;
    }
    ctx->pc = 0x2A4368u;
    {
        const bool branch_taken_0x2a4368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4368u;
        // 0x2a436c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4368) {
            ctx->pc = 0x2A4388u;
            goto label_2a4388;
        }
    }
    ctx->pc = 0x2A4370u;
label_2a4370:
    // 0x2a4370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4374:
    // 0x2a4374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a4378:
    // 0x2a4378: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2a4378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2a437c:
    // 0x2a437c: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2a437cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2a4380:
    // 0x2a4380: 0xc0a6800  jal         func_29A000
label_2a4384:
    if (ctx->pc == 0x2A4384u) {
        ctx->pc = 0x2A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4380u;
        // 0x2a4384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4388u;
        goto label_2a4388;
    }
    ctx->pc = 0x2A4380u;
    SET_GPR_U32(ctx, 31, 0x2A4388u);
    ctx->pc = 0x2A4384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4380u;
    // 0x2a4384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2A4380u, 0x2A4388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4388u;
label_2a4388:
    // 0x2a4388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a4388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a438c:
    // 0x2a438c: 0xc088fa8  jal         func_223EA0
label_2a4390:
    if (ctx->pc == 0x2A4390u) {
        ctx->pc = 0x2A4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A438Cu;
        // 0x2a4390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4394u;
        goto label_2a4394;
    }
    ctx->pc = 0x2A438Cu;
    SET_GPR_U32(ctx, 31, 0x2A4394u);
    ctx->pc = 0x2A4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A438Cu;
    // 0x2a4390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2A438Cu, 0x2A4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4394u;
label_2a4394:
    // 0x2a4394: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2a4394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4398:
    // 0x2a4398: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_2a439c:
    if (ctx->pc == 0x2A439Cu) {
        ctx->pc = 0x2A439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4398u;
        // 0x2a439c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43A0u;
        goto label_2a43a0;
    }
    ctx->pc = 0x2A4398u;
    {
        const bool branch_taken_0x2a4398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4398u;
        // 0x2a439c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4398) {
            ctx->pc = 0x2A43B0u;
            goto label_2a43b0;
        }
    }
    ctx->pc = 0x2A43A0u;
label_2a43a0:
    // 0x2a43a0: 0xc089000  jal         func_224000
label_2a43a4:
    if (ctx->pc == 0x2A43A4u) {
        ctx->pc = 0x2A43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43A0u;
        // 0x2a43a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43A8u;
        goto label_2a43a8;
    }
    ctx->pc = 0x2A43A0u;
    SET_GPR_U32(ctx, 31, 0x2A43A8u);
    ctx->pc = 0x2A43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43A0u;
    // 0x2a43a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2A43A0u, 0x2A43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43A8u;
label_2a43a8:
    // 0x2a43a8: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
label_2a43ac:
    if (ctx->pc == 0x2A43ACu) {
        ctx->pc = 0x2A43B0u;
        goto label_2a43b0;
    }
    ctx->pc = 0x2A43A8u;
    {
        const bool branch_taken_0x2a43a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2a43a8) {
            ctx->pc = 0x2A43B4u;
            goto label_2a43b4;
        }
    }
    ctx->pc = 0x2A43B0u;
label_2a43b0:
    // 0x2a43b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a43b4:
    // 0x2a43b4: 0x16000070  bnez        $s0, . + 4 + (0x70 << 2)
label_2a43b8:
    if (ctx->pc == 0x2A43B8u) {
        ctx->pc = 0x2A43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43B4u;
        // 0x2a43b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43BCu;
        goto label_2a43bc;
    }
    ctx->pc = 0x2A43B4u;
    {
        const bool branch_taken_0x2a43b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43B4u;
        // 0x2a43b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43b4) {
            ctx->pc = 0x2A4578u;
            goto label_2a4578;
        }
    }
    ctx->pc = 0x2A43BCu;
label_2a43bc:
    // 0x2a43bc: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x2a43bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2a43c0:
    // 0x2a43c0: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2a43c4:
    if (ctx->pc == 0x2A43C4u) {
        ctx->pc = 0x2A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43C0u;
        // 0x2a43c4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43C8u;
        goto label_2a43c8;
    }
    ctx->pc = 0x2A43C0u;
    {
        const bool branch_taken_0x2a43c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43C0u;
        // 0x2a43c4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43c0) {
            ctx->pc = 0x2A44ACu;
            goto label_2a44ac;
        }
    }
    ctx->pc = 0x2A43C8u;
label_2a43c8:
    // 0x2a43c8: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2a43c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2a43cc:
    // 0x2a43cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a43ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a43d0:
    // 0x2a43d0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_2a43d4:
    if (ctx->pc == 0x2A43D4u) {
        ctx->pc = 0x2A43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43D0u;
        // 0x2a43d4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43D8u;
        goto label_2a43d8;
    }
    ctx->pc = 0x2A43D0u;
    {
        const bool branch_taken_0x2a43d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a43d0) {
            ctx->pc = 0x2A43D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A43D0u;
            // 0x2a43d4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A44B0u;
            goto label_2a44b0;
        }
    }
    ctx->pc = 0x2A43D8u;
label_2a43d8:
    // 0x2a43d8: 0x9224002a  lbu         $a0, 0x2A($s1)
    ctx->pc = 0x2a43d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2a43dc:
    // 0x2a43dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a43e0:
    // 0x2a43e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2a43e4:
    if (ctx->pc == 0x2A43E4u) {
        ctx->pc = 0x2A43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43E0u;
        // 0x2a43e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43E8u;
        goto label_2a43e8;
    }
    ctx->pc = 0x2A43E0u;
    {
        const bool branch_taken_0x2a43e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a43e0) {
            ctx->pc = 0x2A43E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A43E0u;
            // 0x2a43e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A43E8u;
            goto label_2a43e8;
        }
    }
    ctx->pc = 0x2A43E8u;
label_2a43e8:
    // 0x2a43e8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2a43e8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2a43ec:
    // 0x2a43ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2a43ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a43f0:
    // 0x2a43f0: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_2a43f4:
    if (ctx->pc == 0x2A43F4u) {
        ctx->pc = 0x2A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43F0u;
        // 0x2a43f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A43F8u;
        goto label_2a43f8;
    }
    ctx->pc = 0x2A43F0u;
    {
        const bool branch_taken_0x2a43f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43F0u;
        // 0x2a43f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43f0) {
            ctx->pc = 0x2A44ACu;
            goto label_2a44ac;
        }
    }
    ctx->pc = 0x2A43F8u;
label_2a43f8:
    // 0x2a43f8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a43f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a43fc:
    // 0x2a43fc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a43fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a4400:
    // 0x2a4400: 0xc0cd4ee  jal         func_3353B8
label_2a4404:
    if (ctx->pc == 0x2A4404u) {
        ctx->pc = 0x2A4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4400u;
        // 0x2a4404: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4408u;
        goto label_2a4408;
    }
    ctx->pc = 0x2A4400u;
    SET_GPR_U32(ctx, 31, 0x2A4408u);
    ctx->pc = 0x2A4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4400u;
    // 0x2a4404: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2A4400u, 0x2A4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4408u;
label_2a4408:
    // 0x2a4408: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2a4408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2a440c:
    // 0x2a440c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2a4410:
    if (ctx->pc == 0x2A4410u) {
        ctx->pc = 0x2A4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A440Cu;
        // 0x2a4410: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4414u;
        goto label_2a4414;
    }
    ctx->pc = 0x2A440Cu;
    {
        const bool branch_taken_0x2a440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A440Cu;
        // 0x2a4410: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a440c) {
            ctx->pc = 0x2A44ACu;
            goto label_2a44ac;
        }
    }
    ctx->pc = 0x2A4414u;
label_2a4414:
    // 0x2a4414: 0xc047e6c  jal         func_11F9B0
label_2a4418:
    if (ctx->pc == 0x2A4418u) {
        ctx->pc = 0x2A4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4414u;
        // 0x2a4418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A441Cu;
        goto label_2a441c;
    }
    ctx->pc = 0x2A4414u;
    SET_GPR_U32(ctx, 31, 0x2A441Cu);
    ctx->pc = 0x2A4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4414u;
    // 0x2a4418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2A4414u, 0x2A441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A441Cu;
label_2a441c:
    // 0x2a441c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a441cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4420:
    // 0x2a4420: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2a4424:
    if (ctx->pc == 0x2A4424u) {
        ctx->pc = 0x2A4428u;
        goto label_2a4428;
    }
    ctx->pc = 0x2A4420u;
    {
        const bool branch_taken_0x2a4420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4420) {
            ctx->pc = 0x2A4474u;
            goto label_2a4474;
        }
    }
    ctx->pc = 0x2A4428u;
label_2a4428:
    // 0x2a4428: 0xc0a367c  jal         func_28D9F0
label_2a442c:
    if (ctx->pc == 0x2A442Cu) {
        ctx->pc = 0x2A442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4428u;
        // 0x2a442c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4430u;
        goto label_2a4430;
    }
    ctx->pc = 0x2A4428u;
    SET_GPR_U32(ctx, 31, 0x2A4430u);
    ctx->pc = 0x2A442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4428u;
    // 0x2a442c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A4428u, 0x2A4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4430u;
label_2a4430:
    // 0x2a4430: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a4430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4434:
    // 0x2a4434: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2a4438:
    if (ctx->pc == 0x2A4438u) {
        ctx->pc = 0x2A443Cu;
        goto label_2a443c;
    }
    ctx->pc = 0x2A4434u;
    {
        const bool branch_taken_0x2a4434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4434) {
            ctx->pc = 0x2A4474u;
            goto label_2a4474;
        }
    }
    ctx->pc = 0x2A443Cu;
label_2a443c:
    // 0x2a443c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a4440:
    // 0x2a4440: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x2a4440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_2a4444:
    // 0x2a4444: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2a4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_2a4448:
    // 0x2a4448: 0x40f809  jalr        $v0
label_2a444c:
    if (ctx->pc == 0x2A444Cu) {
        ctx->pc = 0x2A444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4448u;
        // 0x2a444c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4450u;
        goto label_2a4450;
    }
    ctx->pc = 0x2A4448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4450u);
        ctx->pc = 0x2A444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4448u;
        // 0x2a444c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4448u, 0x2A4450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4450u;
label_2a4450:
    // 0x2a4450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4454:
    // 0x2a4454: 0xc0884f6  jal         func_2213D8
label_2a4458:
    if (ctx->pc == 0x2A4458u) {
        ctx->pc = 0x2A4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4454u;
        // 0x2a4458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A445Cu;
        goto label_2a445c;
    }
    ctx->pc = 0x2A4454u;
    SET_GPR_U32(ctx, 31, 0x2A445Cu);
    ctx->pc = 0x2A4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4454u;
    // 0x2a4458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A4454u, 0x2A445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A445Cu;
label_2a445c:
    // 0x2a445c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4460:
    // 0x2a4460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4464:
    // 0x2a4464: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4468:
    // 0x2a4468: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a4468u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a446c:
    // 0x2a446c: 0xc0bf800  jal         func_2FE000
label_2a4470:
    if (ctx->pc == 0x2A4470u) {
        ctx->pc = 0x2A4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A446Cu;
        // 0x2a4470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4474u;
        goto label_2a4474;
    }
    ctx->pc = 0x2A446Cu;
    SET_GPR_U32(ctx, 31, 0x2A4474u);
    ctx->pc = 0x2A4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A446Cu;
    // 0x2a4470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A446Cu, 0x2A4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4474u;
label_2a4474:
    // 0x2a4474: 0xc0a367c  jal         func_28D9F0
label_2a4478:
    if (ctx->pc == 0x2A4478u) {
        ctx->pc = 0x2A4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4474u;
        // 0x2a4478: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A447Cu;
        goto label_2a447c;
    }
    ctx->pc = 0x2A4474u;
    SET_GPR_U32(ctx, 31, 0x2A447Cu);
    ctx->pc = 0x2A4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4474u;
    // 0x2a4478: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A4474u, 0x2A447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A447Cu;
label_2a447c:
    // 0x2a447c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a4480:
    if (ctx->pc == 0x2A4480u) {
        ctx->pc = 0x2A4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A447Cu;
        // 0x2a4480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4484u;
        goto label_2a4484;
    }
    ctx->pc = 0x2A447Cu;
    {
        const bool branch_taken_0x2a447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A447Cu;
        // 0x2a4480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a447c) {
            ctx->pc = 0x2A449Cu;
            goto label_2a449c;
        }
    }
    ctx->pc = 0x2A4484u;
label_2a4484:
    // 0x2a4484: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4488:
    // 0x2a4488: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a448c:
    // 0x2a448c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a448cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4490:
    // 0x2a4490: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a4494:
    // 0x2a4494: 0xc0bec3c  jal         func_2FB0F0
label_2a4498:
    if (ctx->pc == 0x2A4498u) {
        ctx->pc = 0x2A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4494u;
        // 0x2a4498: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A449Cu;
        goto label_2a449c;
    }
    ctx->pc = 0x2A4494u;
    SET_GPR_U32(ctx, 31, 0x2A449Cu);
    ctx->pc = 0x2A4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4494u;
    // 0x2a4498: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2A4494u, 0x2A449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A449Cu;
label_2a449c:
    // 0x2a449c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a44a0:
    // 0x2a44a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a44a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a44a4:
    // 0x2a44a4: 0x10000071  b           . + 4 + (0x71 << 2)
label_2a44a8:
    if (ctx->pc == 0x2A44A8u) {
        ctx->pc = 0x2A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44A4u;
        // 0x2a44a8: 0xa223002c  sb          $v1, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A44ACu;
        goto label_2a44ac;
    }
    ctx->pc = 0x2A44A4u;
    {
        const bool branch_taken_0x2a44a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44A4u;
        // 0x2a44a8: 0xa223002c  sb          $v1, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44a4) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A44ACu;
label_2a44ac:
    // 0x2a44ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a44b0:
    // 0x2a44b0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a44b4:
    if (ctx->pc == 0x2A44B4u) {
        ctx->pc = 0x2A44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44B0u;
        // 0x2a44b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A44B8u;
        goto label_2a44b8;
    }
    ctx->pc = 0x2A44B0u;
    {
        const bool branch_taken_0x2a44b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a44b0) {
            ctx->pc = 0x2A44B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A44B0u;
            // 0x2a44b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A44B8u;
            goto label_2a44b8;
        }
    }
    ctx->pc = 0x2A44B8u;
label_2a44b8:
    // 0x2a44b8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2a44bc:
    // 0x2a44bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a44bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a44c0:
    // 0x2a44c0: 0x2010  mfhi        $a0
    ctx->pc = 0x2a44c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a44c4:
    // 0x2a44c4: 0x14800069  bnez        $a0, . + 4 + (0x69 << 2)
label_2a44c8:
    if (ctx->pc == 0x2A44C8u) {
        ctx->pc = 0x2A44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44C4u;
        // 0x2a44c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A44CCu;
        goto label_2a44cc;
    }
    ctx->pc = 0x2A44C4u;
    {
        const bool branch_taken_0x2a44c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44C4u;
        // 0x2a44c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44c4) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A44CCu;
label_2a44cc:
    // 0x2a44cc: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2a44ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a44d0:
    // 0x2a44d0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_2a44d4:
    // 0x2a44d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2a44d8:
    // 0x2a44d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a44dc:
    // 0x2a44dc: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x2a44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_2a44e0:
    // 0x2a44e0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2a44e4:
    // 0x2a44e4: 0x2474f2f0  addiu       $s4, $v1, -0xD10
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_2a44e8:
    // 0x2a44e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2a44ec:
    // 0x2a44ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a44ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a44f0:
    // 0x2a44f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a44f4:
    // 0x2a44f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a44f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a44f8:
    // 0x2a44f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a44f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a44fc:
    // 0x2a44fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a44fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a4500:
    // 0x2a4500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4504:
    // 0x2a4504: 0xc0a757c  jal         func_29D5F0
label_2a4508:
    if (ctx->pc == 0x2A4508u) {
        ctx->pc = 0x2A4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4504u;
        // 0x2a4508: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A450Cu;
        goto label_2a450c;
    }
    ctx->pc = 0x2A4504u;
    SET_GPR_U32(ctx, 31, 0x2A450Cu);
    ctx->pc = 0x2A4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4504u;
    // 0x2a4508: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2A4504u, 0x2A450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A450Cu;
label_2a450c:
    // 0x2a450c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a450cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4510:
    // 0x2a4510: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
label_2a4514:
    if (ctx->pc == 0x2A4514u) {
        ctx->pc = 0x2A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4510u;
        // 0x2a4514: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4518u;
        goto label_2a4518;
    }
    ctx->pc = 0x2A4510u;
    {
        const bool branch_taken_0x2a4510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4510) {
            ctx->pc = 0x2A4514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4510u;
            // 0x2a4514: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4668u;
            goto label_2a4668;
        }
    }
    ctx->pc = 0x2A4518u;
label_2a4518:
    // 0x2a4518: 0xc095fce  jal         func_257F38
label_2a451c:
    if (ctx->pc == 0x2A451Cu) {
        ctx->pc = 0x2A451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4518u;
        // 0x2a451c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4520u;
        goto label_2a4520;
    }
    ctx->pc = 0x2A4518u;
    SET_GPR_U32(ctx, 31, 0x2A4520u);
    ctx->pc = 0x2A451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4518u;
    // 0x2a451c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2A4518u, 0x2A4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4520u;
label_2a4520:
    // 0x2a4520: 0xc0a4e54  jal         func_293950
label_2a4524:
    if (ctx->pc == 0x2A4524u) {
        ctx->pc = 0x2A4528u;
        goto label_2a4528;
    }
    ctx->pc = 0x2A4520u;
    SET_GPR_U32(ctx, 31, 0x2A4528u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A4520u, 0x2A4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4528u;
label_2a4528:
    // 0x2a4528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a4528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a452c:
    // 0x2a452c: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_2a4530:
    if (ctx->pc == 0x2A4530u) {
        ctx->pc = 0x2A4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A452Cu;
        // 0x2a4530: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4534u;
        goto label_2a4534;
    }
    ctx->pc = 0x2A452Cu;
    {
        const bool branch_taken_0x2a452c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a452c) {
            ctx->pc = 0x2A4530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A452Cu;
            // 0x2a4530: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4568u;
            goto label_2a4568;
        }
    }
    ctx->pc = 0x2A4534u;
label_2a4534:
    // 0x2a4534: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a4538:
    // 0x2a4538: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a453c:
    // 0x2a453c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4540:
    // 0x2a4540: 0x40f809  jalr        $v0
label_2a4544:
    if (ctx->pc == 0x2A4544u) {
        ctx->pc = 0x2A4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4540u;
        // 0x2a4544: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4548u;
        goto label_2a4548;
    }
    ctx->pc = 0x2A4540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4548u);
        ctx->pc = 0x2A4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4540u;
        // 0x2a4544: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4540u, 0x2A4548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4548u;
label_2a4548:
    // 0x2a4548: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2a4548u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2a454c:
    // 0x2a454c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a454cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4550:
    // 0x2a4550: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4554:
    // 0x2a4554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4558:
    // 0x2a4558: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a4558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a455c:
    // 0x2a455c: 0xc0b71e8  jal         func_2DC7A0
label_2a4560:
    if (ctx->pc == 0x2A4560u) {
        ctx->pc = 0x2A4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A455Cu;
        // 0x2a4560: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4564u;
        goto label_2a4564;
    }
    ctx->pc = 0x2A455Cu;
    SET_GPR_U32(ctx, 31, 0x2A4564u);
    ctx->pc = 0x2A4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A455Cu;
    // 0x2a4560: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7A0u, 0x2A455Cu, 0x2A4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4564u;
label_2a4564:
    // 0x2a4564: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4568:
    // 0x2a4568: 0xc0a35d6  jal         func_28D758
label_2a456c:
    if (ctx->pc == 0x2A456Cu) {
        ctx->pc = 0x2A456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4568u;
        // 0x2a456c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4570u;
        goto label_2a4570;
    }
    ctx->pc = 0x2A4568u;
    SET_GPR_U32(ctx, 31, 0x2A4570u);
    ctx->pc = 0x2A456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4568u;
    // 0x2a456c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A4568u, 0x2A4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4570u;
label_2a4570:
    // 0x2a4570: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2a4574:
    if (ctx->pc == 0x2A4574u) {
        ctx->pc = 0x2A4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4570u;
        // 0x2a4574: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4578u;
        goto label_2a4578;
    }
    ctx->pc = 0x2A4570u;
    {
        const bool branch_taken_0x2a4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4570u;
        // 0x2a4574: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4570) {
            ctx->pc = 0x2A4668u;
            goto label_2a4668;
        }
    }
    ctx->pc = 0x2A4578u;
label_2a4578:
    // 0x2a4578: 0x1602003c  bne         $s0, $v0, . + 4 + (0x3C << 2)
label_2a457c:
    if (ctx->pc == 0x2A457Cu) {
        ctx->pc = 0x2A457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4578u;
        // 0x2a457c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4580u;
        goto label_2a4580;
    }
    ctx->pc = 0x2A4578u;
    {
        const bool branch_taken_0x2a4578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4578u;
        // 0x2a457c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4578) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4580u;
label_2a4580:
    // 0x2a4580: 0x9225002b  lbu         $a1, 0x2B($s1)
    ctx->pc = 0x2a4580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
label_2a4584:
    // 0x2a4584: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a4588:
    // 0x2a4588: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2a4588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_2a458c:
    // 0x2a458c: 0xc0cd526  jal         func_335498
label_2a4590:
    if (ctx->pc == 0x2A4590u) {
        ctx->pc = 0x2A4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A458Cu;
        // 0x2a4590: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4594u;
        goto label_2a4594;
    }
    ctx->pc = 0x2A458Cu;
    SET_GPR_U32(ctx, 31, 0x2A4594u);
    ctx->pc = 0x2A4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A458Cu;
    // 0x2a4590: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2A458Cu, 0x2A4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4594u;
label_2a4594:
    // 0x2a4594: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a4594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4598:
    // 0x2a4598: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x2a4598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2a459c:
    // 0x2a459c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a45a0:
    // 0x2a45a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a45a4:
    // 0x2a45a4: 0xc0a367c  jal         func_28D9F0
label_2a45a8:
    if (ctx->pc == 0x2A45A8u) {
        ctx->pc = 0x2A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45A4u;
        // 0x2a45a8: 0x62b018  mult        $s6, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45ACu;
        goto label_2a45ac;
    }
    ctx->pc = 0x2A45A4u;
    SET_GPR_U32(ctx, 31, 0x2A45ACu);
    ctx->pc = 0x2A45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45A4u;
    // 0x2a45a8: 0x62b018  mult        $s6, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A45A4u, 0x2A45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45ACu;
label_2a45ac:
    // 0x2a45ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a45acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a45b0:
    // 0x2a45b0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2a45b4:
    if (ctx->pc == 0x2A45B4u) {
        ctx->pc = 0x2A45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45B0u;
        // 0x2a45b4: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45B8u;
        goto label_2a45b8;
    }
    ctx->pc = 0x2A45B0u;
    {
        const bool branch_taken_0x2a45b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45B0u;
        // 0x2a45b4: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45b0) {
            ctx->pc = 0x2A45E8u;
            goto label_2a45e8;
        }
    }
    ctx->pc = 0x2A45B8u;
label_2a45b8:
    // 0x2a45b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2a45bc:
    // 0x2a45bc: 0xc10587a  jal         func_4161E8
label_2a45c0:
    if (ctx->pc == 0x2A45C0u) {
        ctx->pc = 0x2A45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45BCu;
        // 0x2a45c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45C4u;
        goto label_2a45c4;
    }
    ctx->pc = 0x2A45BCu;
    SET_GPR_U32(ctx, 31, 0x2A45C4u);
    ctx->pc = 0x2A45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45BCu;
    // 0x2a45c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A45BCu, 0x2A45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45C4u;
label_2a45c4:
    // 0x2a45c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a45c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a45c8:
    // 0x2a45c8: 0xc0884f6  jal         func_2213D8
label_2a45cc:
    if (ctx->pc == 0x2A45CCu) {
        ctx->pc = 0x2A45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45C8u;
        // 0x2a45cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45D0u;
        goto label_2a45d0;
    }
    ctx->pc = 0x2A45C8u;
    SET_GPR_U32(ctx, 31, 0x2A45D0u);
    ctx->pc = 0x2A45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45C8u;
    // 0x2a45cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2A45C8u, 0x2A45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45D0u;
label_2a45d0:
    // 0x2a45d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a45d4:
    // 0x2a45d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a45d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a45d8:
    // 0x2a45d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a45d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a45dc:
    // 0x2a45dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a45dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a45e0:
    // 0x2a45e0: 0xc0bf800  jal         func_2FE000
label_2a45e4:
    if (ctx->pc == 0x2A45E4u) {
        ctx->pc = 0x2A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45E0u;
        // 0x2a45e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45E8u;
        goto label_2a45e8;
    }
    ctx->pc = 0x2A45E0u;
    SET_GPR_U32(ctx, 31, 0x2A45E8u);
    ctx->pc = 0x2A45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45E0u;
    // 0x2a45e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A45E0u, 0x2A45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45E8u;
label_2a45e8:
    // 0x2a45e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2a45ec:
    // 0x2a45ec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2a45f0:
    // 0x2a45f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a45f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a45f4:
    // 0x2a45f4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2a45f8:
    if (ctx->pc == 0x2A45F8u) {
        ctx->pc = 0x2A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45F4u;
        // 0x2a45f8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45FCu;
        goto label_2a45fc;
    }
    ctx->pc = 0x2A45F4u;
    {
        const bool branch_taken_0x2a45f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45F4u;
        // 0x2a45f8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45f4) {
            ctx->pc = 0x2A4618u;
            goto label_2a4618;
        }
    }
    ctx->pc = 0x2A45FCu;
label_2a45fc:
    // 0x2a45fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a4600:
    // 0x2a4600: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a4604:
    // 0x2a4604: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4608:
    // 0x2a4608: 0x40f809  jalr        $v0
label_2a460c:
    if (ctx->pc == 0x2A460Cu) {
        ctx->pc = 0x2A460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4608u;
        // 0x2a460c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4610u;
        goto label_2a4610;
    }
    ctx->pc = 0x2A4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4610u);
        ctx->pc = 0x2A460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4608u;
        // 0x2a460c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4608u, 0x2A4610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4610u;
label_2a4610:
    // 0x2a4610: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a4614:
    if (ctx->pc == 0x2A4614u) {
        ctx->pc = 0x2A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4610u;
        // 0x2a4614: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4618u;
        goto label_2a4618;
    }
    ctx->pc = 0x2A4610u;
    {
        const bool branch_taken_0x2a4610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4610u;
        // 0x2a4614: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4610) {
            ctx->pc = 0x2A4620u;
            goto label_2a4620;
        }
    }
    ctx->pc = 0x2A4618u;
label_2a4618:
    // 0x2a4618: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_2a461c:
    // 0x2a461c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a461cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a4620:
    // 0x2a4620: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a4620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a4624:
    // 0x2a4624: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a4624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a4628:
    // 0x2a4628: 0x162842  srl         $a1, $s6, 1
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_2a462c:
    // 0x2a462c: 0xc0cd4fc  jal         func_3353F0
label_2a4630:
    if (ctx->pc == 0x2A4630u) {
        ctx->pc = 0x2A4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A462Cu;
        // 0x2a4630: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4634u;
        goto label_2a4634;
    }
    ctx->pc = 0x2A462Cu;
    SET_GPR_U32(ctx, 31, 0x2A4634u);
    ctx->pc = 0x2A4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A462Cu;
    // 0x2a4630: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2A462Cu, 0x2A4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4634u;
label_2a4634:
    // 0x2a4634: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a4634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4638:
    // 0x2a4638: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a463c:
    // 0x2a463c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a4640:
    // 0x2a4640: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a4644:
    // 0x2a4644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a4648:
    // 0x2a4648: 0xc0a3892  jal         func_28E248
label_2a464c:
    if (ctx->pc == 0x2A464Cu) {
        ctx->pc = 0x2A464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4648u;
        // 0x2a464c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4650u;
        goto label_2a4650;
    }
    ctx->pc = 0x2A4648u;
    SET_GPR_U32(ctx, 31, 0x2A4650u);
    ctx->pc = 0x2A464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4648u;
    // 0x2a464c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2A4648u, 0x2A4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4650u;
label_2a4650:
    // 0x2a4650: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x2a4650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_2a4654:
    // 0x2a4654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4658:
    // 0x2a4658: 0xa220002c  sb          $zero, 0x2C($s1)
    ctx->pc = 0x2a4658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 0));
label_2a465c:
    // 0x2a465c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4660:
    // 0x2a4660: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a4664:
    if (ctx->pc == 0x2A4664u) {
        ctx->pc = 0x2A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4660u;
        // 0x2a4664: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4668u;
        goto label_2a4668;
    }
    ctx->pc = 0x2A4660u;
    {
        const bool branch_taken_0x2a4660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4660u;
        // 0x2a4664: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4660) {
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4668u;
label_2a4668:
    // 0x2a4668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a466c:
    // 0x2a466c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a466cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a4670:
    // 0x2a4670: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a4670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a4674:
    // 0x2a4674: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a4674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a4678:
    // 0x2a4678: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a4678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a467c:
    // 0x2a467c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a467cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a4680:
    // 0x2a4680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a4680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a4684:
    // 0x2a4684: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2a4684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4688:
    // 0x2a4688: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2a4688u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a468c:
    // 0x2a468c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4690:
    // 0x2a4690: 0x3e00008  jr          $ra
label_2a4694:
    if (ctx->pc == 0x2A4694u) {
        ctx->pc = 0x2A4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4690u;
        // 0x2a4694: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4698u;
        goto label_2a4698;
    }
    ctx->pc = 0x2A4690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4690u;
        // 0x2a4694: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4698u;
label_2a4698:
    // 0x2a4698: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a469c:
    // 0x2a469c: 0x0  nop
    ctx->pc = 0x2a469cu;
    // NOP
label_2a46a0:
    // 0x2a46a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a46a4:
    // 0x2a46a4: 0x0  nop
    ctx->pc = 0x2a46a4u;
    // NOP
label_2a46a8:
    // 0x2a46a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a46a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a46ac:
    // 0x2a46ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a46acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a46b0:
    // 0x2a46b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a46b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2a46b4:
    // 0x2a46b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a46b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a46b8:
    // 0x2a46b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2a46bc:
    // 0x2a46bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a46bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2a46c0:
    // 0x2a46c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a46c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a46c4:
    // 0x2a46c4: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_2a46c8:
    // 0x2a46c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a46cc:
    // 0x2a46cc: 0x2ca30006  sltiu       $v1, $a1, 0x6
    ctx->pc = 0x2a46ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2a46d0:
    // 0x2a46d0: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
label_2a46d4:
    if (ctx->pc == 0x2A46D4u) {
        ctx->pc = 0x2A46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46D0u;
        // 0x2a46d4: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A46D8u;
        goto label_2a46d8;
    }
    ctx->pc = 0x2A46D0u;
    {
        const bool branch_taken_0x2a46d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46D0u;
        // 0x2a46d4: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a46d0) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A46D8u;
label_2a46d8:
    // 0x2a46d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2a46dc:
    // 0x2a46dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a46e0:
    // 0x2a46e0: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_2a46e4:
    // 0x2a46e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a46e8:
    // 0x2a46e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a46ec:
    // 0x2a46ec: 0x800008  jr          $a0
label_2a46f0:
    if (ctx->pc == 0x2A46F0u) {
        ctx->pc = 0x2A46F4u;
        goto label_2a46f4;
    }
    ctx->pc = 0x2A46ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A46F4u: goto label_2a46f4;
            case 0x2A47C4u: goto label_2a47c4;
            case 0x2A4848u: goto label_2a4848;
            case 0x2A493Cu: goto label_2a493c;
            case 0x2A49B0u: goto label_2a49b0;
            case 0x2A4A08u: goto label_2a4a08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A46ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A46F4u;
label_2a46f4:
    // 0x2a46f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a46f8:
    // 0x2a46f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a46fc:
    // 0x2a46fc: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2a46fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a4700:
    // 0x2a4700: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x2a4700u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a4704:
    // 0x2a4704: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a4708:
    // 0x2a4708: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2a4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2a470c:
    // 0x2a470c: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2a470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2a4710:
    // 0x2a4710: 0xc0a367c  jal         func_28D9F0
label_2a4714:
    if (ctx->pc == 0x2A4714u) {
        ctx->pc = 0x2A4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4710u;
        // 0x2a4714: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4718u;
        goto label_2a4718;
    }
    ctx->pc = 0x2A4710u;
    SET_GPR_U32(ctx, 31, 0x2A4718u);
    ctx->pc = 0x2A4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4710u;
    // 0x2a4714: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A4710u, 0x2A4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4718u;
label_2a4718:
    // 0x2a4718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a471c:
    // 0x2a471c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_2a4720:
    if (ctx->pc == 0x2A4720u) {
        ctx->pc = 0x2A4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A471Cu;
        // 0x2a4720: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4724u;
        goto label_2a4724;
    }
    ctx->pc = 0x2A471Cu;
    {
        const bool branch_taken_0x2a471c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a471c) {
            ctx->pc = 0x2A4720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A471Cu;
            // 0x2a4720: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4768u;
            goto label_2a4768;
        }
    }
    ctx->pc = 0x2A4724u;
label_2a4724:
    // 0x2a4724: 0xc0e40a2  jal         func_390288
label_2a4728:
    if (ctx->pc == 0x2A4728u) {
        ctx->pc = 0x2A4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4724u;
        // 0x2a4728: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A472Cu;
        goto label_2a472c;
    }
    ctx->pc = 0x2A4724u;
    SET_GPR_U32(ctx, 31, 0x2A472Cu);
    ctx->pc = 0x2A4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4724u;
    // 0x2a4728: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A4724u, 0x2A472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A472Cu;
label_2a472c:
    // 0x2a472c: 0xc10587a  jal         func_4161E8
label_2a4730:
    if (ctx->pc == 0x2A4730u) {
        ctx->pc = 0x2A4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A472Cu;
        // 0x2a4730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4734u;
        goto label_2a4734;
    }
    ctx->pc = 0x2A472Cu;
    SET_GPR_U32(ctx, 31, 0x2A4734u);
    ctx->pc = 0x2A4730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A472Cu;
    // 0x2a4730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A472Cu, 0x2A4734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4734u;
label_2a4734:
    // 0x2a4734: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a4734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a4738:
    // 0x2a4738: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a4738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a473c:
    // 0x2a473c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a473cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a4740:
    // 0x2a4740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4744:
    // 0x2a4744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4748:
    // 0x2a4748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a474c:
    // 0x2a474c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4750:
    // 0x2a4750: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a4750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a4754:
    // 0x2a4754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4758:
    // 0x2a4758: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a4758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a475c:
    // 0x2a475c: 0xc0bee7a  jal         func_2FB9E8
label_2a4760:
    if (ctx->pc == 0x2A4760u) {
        ctx->pc = 0x2A4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A475Cu;
        // 0x2a4760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4764u;
        goto label_2a4764;
    }
    ctx->pc = 0x2A475Cu;
    SET_GPR_U32(ctx, 31, 0x2A4764u);
    ctx->pc = 0x2A4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A475Cu;
    // 0x2a4760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A475Cu, 0x2A4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4764u;
label_2a4764:
    // 0x2a4764: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a4764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a4768:
    // 0x2a4768: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a4768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a476c:
    // 0x2a476c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4770:
    // 0x2a4770: 0x40f809  jalr        $v0
label_2a4774:
    if (ctx->pc == 0x2A4774u) {
        ctx->pc = 0x2A4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4770u;
        // 0x2a4774: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4778u;
        goto label_2a4778;
    }
    ctx->pc = 0x2A4770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A4778u);
        ctx->pc = 0x2A4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4770u;
        // 0x2a4774: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4770u, 0x2A4778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4778u;
label_2a4778:
    // 0x2a4778: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a4778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a477c:
    // 0x2a477c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a477cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4780:
    // 0x2a4780: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2a4780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2a4784:
    // 0x2a4784: 0xc0e409a  jal         func_390268
label_2a4788:
    if (ctx->pc == 0x2A4788u) {
        ctx->pc = 0x2A4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4784u;
        // 0x2a4788: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A478Cu;
        goto label_2a478c;
    }
    ctx->pc = 0x2A4784u;
    SET_GPR_U32(ctx, 31, 0x2A478Cu);
    ctx->pc = 0x2A4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4784u;
    // 0x2a4788: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A4784u, 0x2A478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A478Cu;
label_2a478c:
    // 0x2a478c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4790:
    // 0x2a4790: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a4794:
    // 0x2a4794: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a4794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4798:
    // 0x2a4798: 0xa0f809  jalr        $a1
label_2a479c:
    if (ctx->pc == 0x2A479Cu) {
        ctx->pc = 0x2A479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4798u;
        // 0x2a479c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47A0u;
        goto label_2a47a0;
    }
    ctx->pc = 0x2A4798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A47A0u);
        ctx->pc = 0x2A479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4798u;
        // 0x2a479c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4798u, 0x2A47A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A47A0u;
label_2a47a0:
    // 0x2a47a0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2a47a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2a47a4:
    // 0x2a47a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a47a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a47a8:
    // 0x2a47a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a47a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a47ac:
    // 0x2a47ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a47acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a47b0:
    // 0x2a47b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a47b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a47b4:
    // 0x2a47b4: 0xc0bf832  jal         func_2FE0C8
label_2a47b8:
    if (ctx->pc == 0x2A47B8u) {
        ctx->pc = 0x2A47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47B4u;
        // 0x2a47b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47BCu;
        goto label_2a47bc;
    }
    ctx->pc = 0x2A47B4u;
    SET_GPR_U32(ctx, 31, 0x2A47BCu);
    ctx->pc = 0x2A47B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A47B4u;
    // 0x2a47b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A47B4u, 0x2A47BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47BCu;
label_2a47bc:
    // 0x2a47bc: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2a47c0:
    if (ctx->pc == 0x2A47C0u) {
        ctx->pc = 0x2A47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47BCu;
        // 0x2a47c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47C4u;
        goto label_2a47c4;
    }
    ctx->pc = 0x2A47BCu;
    {
        const bool branch_taken_0x2a47bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47BCu;
        // 0x2a47c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47bc) {
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A47C4u;
label_2a47c4:
    // 0x2a47c4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a47c8:
    // 0x2a47c8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2a47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a47cc:
    // 0x2a47cc: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a47d0:
    // 0x2a47d0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a47d4:
    // 0x2a47d4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a47d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a47d8:
    // 0x2a47d8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2a47dc:
    if (ctx->pc == 0x2A47DCu) {
        ctx->pc = 0x2A47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D8u;
        // 0x2a47dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47E0u;
        goto label_2a47e0;
    }
    ctx->pc = 0x2A47D8u;
    {
        const bool branch_taken_0x2a47d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D8u;
        // 0x2a47dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47d8) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A47E0u;
label_2a47e0:
    // 0x2a47e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a47e4:
    // 0x2a47e4: 0xc0a36c8  jal         func_28DB20
label_2a47e8:
    if (ctx->pc == 0x2A47E8u) {
        ctx->pc = 0x2A47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47E4u;
        // 0x2a47e8: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47ECu;
        goto label_2a47ec;
    }
    ctx->pc = 0x2A47E4u;
    SET_GPR_U32(ctx, 31, 0x2A47ECu);
    ctx->pc = 0x2A47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A47E4u;
    // 0x2a47e8: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A47E4u, 0x2A47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47ECu;
label_2a47ec:
    // 0x2a47ec: 0xc0a367c  jal         func_28D9F0
label_2a47f0:
    if (ctx->pc == 0x2A47F0u) {
        ctx->pc = 0x2A47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47ECu;
        // 0x2a47f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47F4u;
        goto label_2a47f4;
    }
    ctx->pc = 0x2A47ECu;
    SET_GPR_U32(ctx, 31, 0x2A47F4u);
    ctx->pc = 0x2A47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A47ECu;
    // 0x2a47f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A47ECu, 0x2A47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47F4u;
label_2a47f4:
    // 0x2a47f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a47f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a47f8:
    // 0x2a47f8: 0x520000a1  beql        $s0, $zero, . + 4 + (0xA1 << 2)
label_2a47fc:
    if (ctx->pc == 0x2A47FCu) {
        ctx->pc = 0x2A47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47F8u;
        // 0x2a47fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4800u;
        goto label_2a4800;
    }
    ctx->pc = 0x2A47F8u;
    {
        const bool branch_taken_0x2a47f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47f8) {
            ctx->pc = 0x2A47FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A47F8u;
            // 0x2a47fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A4800u;
label_2a4800:
    // 0x2a4800: 0xc0e40a2  jal         func_390288
label_2a4804:
    if (ctx->pc == 0x2A4804u) {
        ctx->pc = 0x2A4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4800u;
        // 0x2a4804: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4808u;
        goto label_2a4808;
    }
    ctx->pc = 0x2A4800u;
    SET_GPR_U32(ctx, 31, 0x2A4808u);
    ctx->pc = 0x2A4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4800u;
    // 0x2a4804: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A4800u, 0x2A4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4808u;
label_2a4808:
    // 0x2a4808: 0xc10587a  jal         func_4161E8
label_2a480c:
    if (ctx->pc == 0x2A480Cu) {
        ctx->pc = 0x2A480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4808u;
        // 0x2a480c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4810u;
        goto label_2a4810;
    }
    ctx->pc = 0x2A4808u;
    SET_GPR_U32(ctx, 31, 0x2A4810u);
    ctx->pc = 0x2A480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4808u;
    // 0x2a480c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A4808u, 0x2A4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4810u;
label_2a4810:
    // 0x2a4810: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a4814:
    // 0x2a4814: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a4814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a4818:
    // 0x2a4818: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a481c:
    // 0x2a481c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4820:
    // 0x2a4820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4824:
    // 0x2a4824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a4828:
    // 0x2a4828: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a482c:
    // 0x2a482c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a482cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a4830:
    // 0x2a4830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4834:
    // 0x2a4834: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a4834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4838:
    // 0x2a4838: 0xc0bee7a  jal         func_2FB9E8
label_2a483c:
    if (ctx->pc == 0x2A483Cu) {
        ctx->pc = 0x2A483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4838u;
        // 0x2a483c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4840u;
        goto label_2a4840;
    }
    ctx->pc = 0x2A4838u;
    SET_GPR_U32(ctx, 31, 0x2A4840u);
    ctx->pc = 0x2A483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4838u;
    // 0x2a483c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A4838u, 0x2A4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4840u;
label_2a4840:
    // 0x2a4840: 0x1000008f  b           . + 4 + (0x8F << 2)
label_2a4844:
    if (ctx->pc == 0x2A4844u) {
        ctx->pc = 0x2A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4840u;
        // 0x2a4844: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4848u;
        goto label_2a4848;
    }
    ctx->pc = 0x2A4840u;
    {
        const bool branch_taken_0x2a4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4840u;
        // 0x2a4844: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4840) {
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A4848u;
label_2a4848:
    // 0x2a4848: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a484c:
    // 0x2a484c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a484cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a4850:
    // 0x2a4850: 0x1c60008b  bgtz        $v1, . + 4 + (0x8B << 2)
label_2a4854:
    if (ctx->pc == 0x2A4854u) {
        ctx->pc = 0x2A4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4850u;
        // 0x2a4854: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4858u;
        goto label_2a4858;
    }
    ctx->pc = 0x2A4850u;
    {
        const bool branch_taken_0x2a4850 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4850u;
        // 0x2a4854: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4850) {
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A4858u;
label_2a4858:
    // 0x2a4858: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a485c:
    // 0x2a485c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a4860:
    // 0x2a4860: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4864:
    // 0x2a4864: 0x40f809  jalr        $v0
label_2a4868:
    if (ctx->pc == 0x2A4868u) {
        ctx->pc = 0x2A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4864u;
        // 0x2a4868: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A486Cu;
        goto label_2a486c;
    }
    ctx->pc = 0x2A4864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A486Cu);
        ctx->pc = 0x2A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4864u;
        // 0x2a4868: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4864u, 0x2A486Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A486Cu;
label_2a486c:
    // 0x2a486c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a486cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a4870:
    // 0x2a4870: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a4874:
    // 0x2a4874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4878:
    // 0x2a4878: 0x26100bc8  addiu       $s0, $s0, 0xBC8
    ctx->pc = 0x2a4878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3016));
label_2a487c:
    // 0x2a487c: 0xc0cd4e4  jal         func_335390
label_2a4880:
    if (ctx->pc == 0x2A4880u) {
        ctx->pc = 0x2A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A487Cu;
        // 0x2a4880: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4884u;
        goto label_2a4884;
    }
    ctx->pc = 0x2A487Cu;
    SET_GPR_U32(ctx, 31, 0x2A4884u);
    ctx->pc = 0x2A4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A487Cu;
    // 0x2a4880: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A487Cu, 0x2A4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4884u;
label_2a4884:
    // 0x2a4884: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2a4884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2a4888:
    // 0x2a4888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a488c:
    // 0x2a488c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2a488cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a4890:
    // 0x2a4890: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2a4894:
    if (ctx->pc == 0x2A4894u) {
        ctx->pc = 0x2A4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4890u;
        // 0x2a4894: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4898u;
        goto label_2a4898;
    }
    ctx->pc = 0x2A4890u;
    {
        const bool branch_taken_0x2a4890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4890) {
            ctx->pc = 0x2A4894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4890u;
            // 0x2a4894: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4898u;
            goto label_2a4898;
        }
    }
    ctx->pc = 0x2A4898u;
label_2a4898:
    // 0x2a4898: 0x1810  mfhi        $v1
    ctx->pc = 0x2a4898u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a489c:
    // 0x2a489c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a489cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a48a0:
    // 0x2a48a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2a48a4:
    // 0x2a48a4: 0xc08e150  jal         func_238540
label_2a48a8:
    if (ctx->pc == 0x2A48A8u) {
        ctx->pc = 0x2A48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48A4u;
        // 0x2a48a8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48ACu;
        goto label_2a48ac;
    }
    ctx->pc = 0x2A48A4u;
    SET_GPR_U32(ctx, 31, 0x2A48ACu);
    ctx->pc = 0x2A48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48A4u;
    // 0x2a48a8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A48A4u, 0x2A48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48ACu;
label_2a48ac:
    // 0x2a48ac: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2a48acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2a48b0:
    // 0x2a48b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2a48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2a48b4:
    // 0x2a48b4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_2a48b8:
    if (ctx->pc == 0x2A48B8u) {
        ctx->pc = 0x2A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B4u;
        // 0x2a48b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48BCu;
        goto label_2a48bc;
    }
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B4u;
        // 0x2a48b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A4908u;
            goto label_2a4908;
        }
    }
    ctx->pc = 0x2A48BCu;
label_2a48bc:
    // 0x2a48bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a48c0:
    // 0x2a48c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a48c4:
    // 0x2a48c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a48c8:
    // 0x2a48c8: 0x40f809  jalr        $v0
label_2a48cc:
    if (ctx->pc == 0x2A48CCu) {
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48D0u;
        goto label_2a48d0;
    }
    ctx->pc = 0x2A48C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A48D0u);
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A48C8u, 0x2A48D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A48D0u;
label_2a48d0:
    // 0x2a48d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a48d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a48d4:
    // 0x2a48d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a48d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a48d8:
    // 0x2a48d8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2a48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2a48dc:
    // 0x2a48dc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a48e0:
    // 0x2a48e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a48e4:
    // 0x2a48e4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a48e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a48e8:
    // 0x2a48e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a48e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a48ec:
    // 0x2a48ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a48ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a48f0:
    // 0x2a48f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a48f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a48f4:
    // 0x2a48f4: 0xc0b68b0  jal         func_2DA2C0
label_2a48f8:
    if (ctx->pc == 0x2A48F8u) {
        ctx->pc = 0x2A48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48F4u;
        // 0x2a48f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48FCu;
        goto label_2a48fc;
    }
    ctx->pc = 0x2A48F4u;
    SET_GPR_U32(ctx, 31, 0x2A48FCu);
    ctx->pc = 0x2A48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48F4u;
    // 0x2a48f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A48F4u, 0x2A48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48FCu;
label_2a48fc:
    // 0x2a48fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a4900:
    // 0x2a4900: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2a4904:
    if (ctx->pc == 0x2A4904u) {
        ctx->pc = 0x2A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4900u;
        // 0x2a4904: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4908u;
        goto label_2a4908;
    }
    ctx->pc = 0x2A4900u;
    {
        const bool branch_taken_0x2a4900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4900u;
        // 0x2a4904: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4900) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A4908u;
label_2a4908:
    // 0x2a4908: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a490c:
    // 0x2a490c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a4910:
    // 0x2a4910: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a4914:
    // 0x2a4914: 0xc0cd4e4  jal         func_335390
label_2a4918:
    if (ctx->pc == 0x2A4918u) {
        ctx->pc = 0x2A4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4914u;
        // 0x2a4918: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A491Cu;
        goto label_2a491c;
    }
    ctx->pc = 0x2A4914u;
    SET_GPR_U32(ctx, 31, 0x2A491Cu);
    ctx->pc = 0x2A4918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4914u;
    // 0x2a4918: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A4914u, 0x2A491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A491Cu;
label_2a491c:
    // 0x2a491c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a4920:
    // 0x2a4920: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2a4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a4924:
    // 0x2a4924: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2a4924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2a4928:
    // 0x2a4928: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a492c:
    // 0x2a492c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2a4930:
    // 0x2a4930: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x2a4930u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a4934:
    // 0x2a4934: 0x10000051  b           . + 4 + (0x51 << 2)
label_2a4938:
    if (ctx->pc == 0x2A4938u) {
        ctx->pc = 0x2A4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4934u;
        // 0x2a4938: 0xae500020  sw          $s0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A493Cu;
        goto label_2a493c;
    }
    ctx->pc = 0x2A4934u;
    {
        const bool branch_taken_0x2a4934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4934u;
        // 0x2a4938: 0xae500020  sw          $s0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4934) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A493Cu;
label_2a493c:
    // 0x2a493c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a4940:
    // 0x2a4940: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a4940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a4944:
    // 0x2a4944: 0x1c60004e  bgtz        $v1, . + 4 + (0x4E << 2)
label_2a4948:
    if (ctx->pc == 0x2A4948u) {
        ctx->pc = 0x2A4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4944u;
        // 0x2a4948: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A494Cu;
        goto label_2a494c;
    }
    ctx->pc = 0x2A4944u;
    {
        const bool branch_taken_0x2a4944 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4944u;
        // 0x2a4948: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4944) {
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A494Cu;
label_2a494c:
    // 0x2a494c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a494cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a4950:
    // 0x2a4950: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a4954:
    // 0x2a4954: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a4958:
    // 0x2a4958: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a495c:
    // 0x2a495c: 0xc0cd4e4  jal         func_335390
label_2a4960:
    if (ctx->pc == 0x2A4960u) {
        ctx->pc = 0x2A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A495Cu;
        // 0x2a4960: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4964u;
        goto label_2a4964;
    }
    ctx->pc = 0x2A495Cu;
    SET_GPR_U32(ctx, 31, 0x2A4964u);
    ctx->pc = 0x2A4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A495Cu;
    // 0x2a4960: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A495Cu, 0x2A4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4964u;
label_2a4964:
    // 0x2a4964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a4964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a4968:
    // 0x2a4968: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2a4968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a496c:
    // 0x2a496c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a496cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2a4970:
    // 0x2a4970: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a4970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a4974:
    // 0x2a4974: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x2a4974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
label_2a4978:
    // 0x2a4978: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a497c:
    // 0x2a497c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a497cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a4980:
    // 0x2a4980: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a4984:
    // 0x2a4984: 0x40f809  jalr        $v0
label_2a4988:
    if (ctx->pc == 0x2A4988u) {
        ctx->pc = 0x2A4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4984u;
        // 0x2a4988: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A498Cu;
        goto label_2a498c;
    }
    ctx->pc = 0x2A4984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A498Cu);
        ctx->pc = 0x2A4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4984u;
        // 0x2a4988: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4984u, 0x2A498Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A498Cu;
label_2a498c:
    // 0x2a498c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a4990:
    // 0x2a4990: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a4994:
    // 0x2a4994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4998:
    // 0x2a4998: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2a4998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2a499c:
    // 0x2a499c: 0xc0bf6e4  jal         func_2FDB90
label_2a49a0:
    if (ctx->pc == 0x2A49A0u) {
        ctx->pc = 0x2A49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A499Cu;
        // 0x2a49a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49A4u;
        goto label_2a49a4;
    }
    ctx->pc = 0x2A499Cu;
    SET_GPR_U32(ctx, 31, 0x2A49A4u);
    ctx->pc = 0x2A49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A499Cu;
    // 0x2a49a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x2A499Cu, 0x2A49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A4u;
label_2a49a4:
    // 0x2a49a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a49a8:
    // 0x2a49a8: 0x10000034  b           . + 4 + (0x34 << 2)
label_2a49ac:
    if (ctx->pc == 0x2A49ACu) {
        ctx->pc = 0x2A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49A8u;
        // 0x2a49ac: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49B0u;
        goto label_2a49b0;
    }
    ctx->pc = 0x2A49A8u;
    {
        const bool branch_taken_0x2a49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49A8u;
        // 0x2a49ac: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49a8) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A49B0u;
label_2a49b0:
    // 0x2a49b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a49b4:
    // 0x2a49b4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2a49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a49b8:
    // 0x2a49b8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a49bc:
    // 0x2a49bc: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a49c0:
    // 0x2a49c0: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2a49c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a49c4:
    // 0x2a49c4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_2a49c8:
    if (ctx->pc == 0x2A49C8u) {
        ctx->pc = 0x2A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C4u;
        // 0x2a49c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49CCu;
        goto label_2a49cc;
    }
    ctx->pc = 0x2A49C4u;
    {
        const bool branch_taken_0x2a49c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C4u;
        // 0x2a49c8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49c4) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A49CCu;
label_2a49cc:
    // 0x2a49cc: 0xc0cd4e4  jal         func_335390
label_2a49d0:
    if (ctx->pc == 0x2A49D0u) {
        ctx->pc = 0x2A49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49CCu;
        // 0x2a49d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49D4u;
        goto label_2a49d4;
    }
    ctx->pc = 0x2A49CCu;
    SET_GPR_U32(ctx, 31, 0x2A49D4u);
    ctx->pc = 0x2A49D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49CCu;
    // 0x2a49d0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A49CCu, 0x2A49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49D4u;
label_2a49d4:
    // 0x2a49d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a49d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a49d8:
    // 0x2a49d8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a49dc:
    // 0x2a49dc: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2a49dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a49e0:
    // 0x2a49e0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2a49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2a49e4:
    // 0x2a49e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a49e8:
    // 0x2a49e8: 0xc0874fa  jal         func_21D3E8
label_2a49ec:
    if (ctx->pc == 0x2A49ECu) {
        ctx->pc = 0x2A49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49E8u;
        // 0x2a49ec: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49F0u;
        goto label_2a49f0;
    }
    ctx->pc = 0x2A49E8u;
    SET_GPR_U32(ctx, 31, 0x2A49F0u);
    ctx->pc = 0x2A49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49E8u;
    // 0x2a49ec: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A49E8u, 0x2A49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F0u;
label_2a49f0:
    // 0x2a49f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a49f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a49f4:
    // 0x2a49f4: 0xc051fbc  jal         func_147EF0
label_2a49f8:
    if (ctx->pc == 0x2A49F8u) {
        ctx->pc = 0x2A49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49F4u;
        // 0x2a49f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49FCu;
        goto label_2a49fc;
    }
    ctx->pc = 0x2A49F4u;
    SET_GPR_U32(ctx, 31, 0x2A49FCu);
    ctx->pc = 0x2A49F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49F4u;
    // 0x2a49f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A49F4u, 0x2A49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49FCu;
label_2a49fc:
    // 0x2a49fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a4a00:
    // 0x2a4a00: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2a4a04:
    if (ctx->pc == 0x2A4A04u) {
        ctx->pc = 0x2A4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A00u;
        // 0x2a4a04: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A08u;
        goto label_2a4a08;
    }
    ctx->pc = 0x2A4A00u;
    {
        const bool branch_taken_0x2a4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A00u;
        // 0x2a4a04: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a00) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A4A08u;
label_2a4a08:
    // 0x2a4a08: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a4a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a4a0c:
    // 0x2a4a0c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2a4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a4a10:
    // 0x2a4a10: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a4a14:
    // 0x2a4a14: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a4a18:
    // 0x2a4a18: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a4a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a4a1c:
    // 0x2a4a1c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2a4a20:
    if (ctx->pc == 0x2A4A20u) {
        ctx->pc = 0x2A4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A1Cu;
        // 0x2a4a20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A24u;
        goto label_2a4a24;
    }
    ctx->pc = 0x2A4A1Cu;
    {
        const bool branch_taken_0x2a4a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A1Cu;
        // 0x2a4a20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a1c) {
            ctx->pc = 0x2A4A7Cu;
            goto label_2a4a7c;
        }
    }
    ctx->pc = 0x2A4A24u;
label_2a4a24:
    // 0x2a4a24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a4a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a4a28:
    // 0x2a4a28: 0xc0a367c  jal         func_28D9F0
label_2a4a2c:
    if (ctx->pc == 0x2A4A2Cu) {
        ctx->pc = 0x2A4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A28u;
        // 0x2a4a2c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A30u;
        goto label_2a4a30;
    }
    ctx->pc = 0x2A4A28u;
    SET_GPR_U32(ctx, 31, 0x2A4A30u);
    ctx->pc = 0x2A4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A28u;
    // 0x2a4a2c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A4A28u, 0x2A4A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A30u;
label_2a4a30:
    // 0x2a4a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a34:
    // 0x2a4a34: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_2a4a38:
    if (ctx->pc == 0x2A4A38u) {
        ctx->pc = 0x2A4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A34u;
        // 0x2a4a38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A3Cu;
        goto label_2a4a3c;
    }
    ctx->pc = 0x2A4A34u;
    {
        const bool branch_taken_0x2a4a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4a34) {
            ctx->pc = 0x2A4A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4A34u;
            // 0x2a4a38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4A80u;
            goto label_2a4a80;
        }
    }
    ctx->pc = 0x2A4A3Cu;
label_2a4a3c:
    // 0x2a4a3c: 0xc0e40a2  jal         func_390288
label_2a4a40:
    if (ctx->pc == 0x2A4A40u) {
        ctx->pc = 0x2A4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A3Cu;
        // 0x2a4a40: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A44u;
        goto label_2a4a44;
    }
    ctx->pc = 0x2A4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4A44u);
    ctx->pc = 0x2A4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A3Cu;
    // 0x2a4a40: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A4A3Cu, 0x2A4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A44u;
label_2a4a44:
    // 0x2a4a44: 0xc10587a  jal         func_4161E8
label_2a4a48:
    if (ctx->pc == 0x2A4A48u) {
        ctx->pc = 0x2A4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A44u;
        // 0x2a4a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A4Cu;
        goto label_2a4a4c;
    }
    ctx->pc = 0x2A4A44u;
    SET_GPR_U32(ctx, 31, 0x2A4A4Cu);
    ctx->pc = 0x2A4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A44u;
    // 0x2a4a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A4A44u, 0x2A4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A4Cu;
label_2a4a4c:
    // 0x2a4a4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a4a50:
    // 0x2a4a50: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a4a54:
    // 0x2a4a54: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a4a54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a4a58:
    // 0x2a4a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a5c:
    // 0x2a4a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4a60:
    // 0x2a4a60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a4a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a4a64:
    // 0x2a4a64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a68:
    // 0x2a4a68: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2a4a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a4a6c:
    // 0x2a4a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a70:
    // 0x2a4a70: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a4a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4a74:
    // 0x2a4a74: 0xc0bee7a  jal         func_2FB9E8
label_2a4a78:
    if (ctx->pc == 0x2A4A78u) {
        ctx->pc = 0x2A4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A74u;
        // 0x2a4a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A7Cu;
        goto label_2a4a7c;
    }
    ctx->pc = 0x2A4A74u;
    SET_GPR_U32(ctx, 31, 0x2A4A7Cu);
    ctx->pc = 0x2A4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A74u;
    // 0x2a4a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A4A74u, 0x2A4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A7Cu;
label_2a4a7c:
    // 0x2a4a7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a4a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4a80:
    // 0x2a4a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a84:
    // 0x2a4a84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a4a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4a88:
    // 0x2a4a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4a8c:
    // 0x2a4a8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a4a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4a90:
    // 0x2a4a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4a94:
    // 0x2a4a94: 0x3e00008  jr          $ra
label_2a4a98:
    if (ctx->pc == 0x2A4A98u) {
        ctx->pc = 0x2A4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A94u;
        // 0x2a4a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A9Cu;
        goto label_2a4a9c;
    }
    ctx->pc = 0x2A4A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A94u;
        // 0x2a4a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4A9Cu;
label_2a4a9c:
    // 0x2a4a9c: 0x0  nop
    ctx->pc = 0x2a4a9cu;
    // NOP
    ctx->pc = 0x2a4aa0u;
}
