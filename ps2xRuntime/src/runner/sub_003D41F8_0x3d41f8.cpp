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

// Function: sub_003D41F8
// Address: 0x3d41f8 - 0x3d48e8
void sub_003D41F8_0x3d41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D41F8_0x3d41f8");
#endif

    switch (ctx->pc) {
        case 0x3d41f8u: goto label_3d41f8;
        case 0x3d41fcu: goto label_3d41fc;
        case 0x3d4200u: goto label_3d4200;
        case 0x3d4204u: goto label_3d4204;
        case 0x3d4208u: goto label_3d4208;
        case 0x3d420cu: goto label_3d420c;
        case 0x3d4210u: goto label_3d4210;
        case 0x3d4214u: goto label_3d4214;
        case 0x3d4218u: goto label_3d4218;
        case 0x3d421cu: goto label_3d421c;
        case 0x3d4220u: goto label_3d4220;
        case 0x3d4224u: goto label_3d4224;
        case 0x3d4228u: goto label_3d4228;
        case 0x3d422cu: goto label_3d422c;
        case 0x3d4230u: goto label_3d4230;
        case 0x3d4234u: goto label_3d4234;
        case 0x3d4238u: goto label_3d4238;
        case 0x3d423cu: goto label_3d423c;
        case 0x3d4240u: goto label_3d4240;
        case 0x3d4244u: goto label_3d4244;
        case 0x3d4248u: goto label_3d4248;
        case 0x3d424cu: goto label_3d424c;
        case 0x3d4250u: goto label_3d4250;
        case 0x3d4254u: goto label_3d4254;
        case 0x3d4258u: goto label_3d4258;
        case 0x3d425cu: goto label_3d425c;
        case 0x3d4260u: goto label_3d4260;
        case 0x3d4264u: goto label_3d4264;
        case 0x3d4268u: goto label_3d4268;
        case 0x3d426cu: goto label_3d426c;
        case 0x3d4270u: goto label_3d4270;
        case 0x3d4274u: goto label_3d4274;
        case 0x3d4278u: goto label_3d4278;
        case 0x3d427cu: goto label_3d427c;
        case 0x3d4280u: goto label_3d4280;
        case 0x3d4284u: goto label_3d4284;
        case 0x3d4288u: goto label_3d4288;
        case 0x3d428cu: goto label_3d428c;
        case 0x3d4290u: goto label_3d4290;
        case 0x3d4294u: goto label_3d4294;
        case 0x3d4298u: goto label_3d4298;
        case 0x3d429cu: goto label_3d429c;
        case 0x3d42a0u: goto label_3d42a0;
        case 0x3d42a4u: goto label_3d42a4;
        case 0x3d42a8u: goto label_3d42a8;
        case 0x3d42acu: goto label_3d42ac;
        case 0x3d42b0u: goto label_3d42b0;
        case 0x3d42b4u: goto label_3d42b4;
        case 0x3d42b8u: goto label_3d42b8;
        case 0x3d42bcu: goto label_3d42bc;
        case 0x3d42c0u: goto label_3d42c0;
        case 0x3d42c4u: goto label_3d42c4;
        case 0x3d42c8u: goto label_3d42c8;
        case 0x3d42ccu: goto label_3d42cc;
        case 0x3d42d0u: goto label_3d42d0;
        case 0x3d42d4u: goto label_3d42d4;
        case 0x3d42d8u: goto label_3d42d8;
        case 0x3d42dcu: goto label_3d42dc;
        case 0x3d42e0u: goto label_3d42e0;
        case 0x3d42e4u: goto label_3d42e4;
        case 0x3d42e8u: goto label_3d42e8;
        case 0x3d42ecu: goto label_3d42ec;
        case 0x3d42f0u: goto label_3d42f0;
        case 0x3d42f4u: goto label_3d42f4;
        case 0x3d42f8u: goto label_3d42f8;
        case 0x3d42fcu: goto label_3d42fc;
        case 0x3d4300u: goto label_3d4300;
        case 0x3d4304u: goto label_3d4304;
        case 0x3d4308u: goto label_3d4308;
        case 0x3d430cu: goto label_3d430c;
        case 0x3d4310u: goto label_3d4310;
        case 0x3d4314u: goto label_3d4314;
        case 0x3d4318u: goto label_3d4318;
        case 0x3d431cu: goto label_3d431c;
        case 0x3d4320u: goto label_3d4320;
        case 0x3d4324u: goto label_3d4324;
        case 0x3d4328u: goto label_3d4328;
        case 0x3d432cu: goto label_3d432c;
        case 0x3d4330u: goto label_3d4330;
        case 0x3d4334u: goto label_3d4334;
        case 0x3d4338u: goto label_3d4338;
        case 0x3d433cu: goto label_3d433c;
        case 0x3d4340u: goto label_3d4340;
        case 0x3d4344u: goto label_3d4344;
        case 0x3d4348u: goto label_3d4348;
        case 0x3d434cu: goto label_3d434c;
        case 0x3d4350u: goto label_3d4350;
        case 0x3d4354u: goto label_3d4354;
        case 0x3d4358u: goto label_3d4358;
        case 0x3d435cu: goto label_3d435c;
        case 0x3d4360u: goto label_3d4360;
        case 0x3d4364u: goto label_3d4364;
        case 0x3d4368u: goto label_3d4368;
        case 0x3d436cu: goto label_3d436c;
        case 0x3d4370u: goto label_3d4370;
        case 0x3d4374u: goto label_3d4374;
        case 0x3d4378u: goto label_3d4378;
        case 0x3d437cu: goto label_3d437c;
        case 0x3d4380u: goto label_3d4380;
        case 0x3d4384u: goto label_3d4384;
        case 0x3d4388u: goto label_3d4388;
        case 0x3d438cu: goto label_3d438c;
        case 0x3d4390u: goto label_3d4390;
        case 0x3d4394u: goto label_3d4394;
        case 0x3d4398u: goto label_3d4398;
        case 0x3d439cu: goto label_3d439c;
        case 0x3d43a0u: goto label_3d43a0;
        case 0x3d43a4u: goto label_3d43a4;
        case 0x3d43a8u: goto label_3d43a8;
        case 0x3d43acu: goto label_3d43ac;
        case 0x3d43b0u: goto label_3d43b0;
        case 0x3d43b4u: goto label_3d43b4;
        case 0x3d43b8u: goto label_3d43b8;
        case 0x3d43bcu: goto label_3d43bc;
        case 0x3d43c0u: goto label_3d43c0;
        case 0x3d43c4u: goto label_3d43c4;
        case 0x3d43c8u: goto label_3d43c8;
        case 0x3d43ccu: goto label_3d43cc;
        case 0x3d43d0u: goto label_3d43d0;
        case 0x3d43d4u: goto label_3d43d4;
        case 0x3d43d8u: goto label_3d43d8;
        case 0x3d43dcu: goto label_3d43dc;
        case 0x3d43e0u: goto label_3d43e0;
        case 0x3d43e4u: goto label_3d43e4;
        case 0x3d43e8u: goto label_3d43e8;
        case 0x3d43ecu: goto label_3d43ec;
        case 0x3d43f0u: goto label_3d43f0;
        case 0x3d43f4u: goto label_3d43f4;
        case 0x3d43f8u: goto label_3d43f8;
        case 0x3d43fcu: goto label_3d43fc;
        case 0x3d4400u: goto label_3d4400;
        case 0x3d4404u: goto label_3d4404;
        case 0x3d4408u: goto label_3d4408;
        case 0x3d440cu: goto label_3d440c;
        case 0x3d4410u: goto label_3d4410;
        case 0x3d4414u: goto label_3d4414;
        case 0x3d4418u: goto label_3d4418;
        case 0x3d441cu: goto label_3d441c;
        case 0x3d4420u: goto label_3d4420;
        case 0x3d4424u: goto label_3d4424;
        case 0x3d4428u: goto label_3d4428;
        case 0x3d442cu: goto label_3d442c;
        case 0x3d4430u: goto label_3d4430;
        case 0x3d4434u: goto label_3d4434;
        case 0x3d4438u: goto label_3d4438;
        case 0x3d443cu: goto label_3d443c;
        case 0x3d4440u: goto label_3d4440;
        case 0x3d4444u: goto label_3d4444;
        case 0x3d4448u: goto label_3d4448;
        case 0x3d444cu: goto label_3d444c;
        case 0x3d4450u: goto label_3d4450;
        case 0x3d4454u: goto label_3d4454;
        case 0x3d4458u: goto label_3d4458;
        case 0x3d445cu: goto label_3d445c;
        case 0x3d4460u: goto label_3d4460;
        case 0x3d4464u: goto label_3d4464;
        case 0x3d4468u: goto label_3d4468;
        case 0x3d446cu: goto label_3d446c;
        case 0x3d4470u: goto label_3d4470;
        case 0x3d4474u: goto label_3d4474;
        case 0x3d4478u: goto label_3d4478;
        case 0x3d447cu: goto label_3d447c;
        case 0x3d4480u: goto label_3d4480;
        case 0x3d4484u: goto label_3d4484;
        case 0x3d4488u: goto label_3d4488;
        case 0x3d448cu: goto label_3d448c;
        case 0x3d4490u: goto label_3d4490;
        case 0x3d4494u: goto label_3d4494;
        case 0x3d4498u: goto label_3d4498;
        case 0x3d449cu: goto label_3d449c;
        case 0x3d44a0u: goto label_3d44a0;
        case 0x3d44a4u: goto label_3d44a4;
        case 0x3d44a8u: goto label_3d44a8;
        case 0x3d44acu: goto label_3d44ac;
        case 0x3d44b0u: goto label_3d44b0;
        case 0x3d44b4u: goto label_3d44b4;
        case 0x3d44b8u: goto label_3d44b8;
        case 0x3d44bcu: goto label_3d44bc;
        case 0x3d44c0u: goto label_3d44c0;
        case 0x3d44c4u: goto label_3d44c4;
        case 0x3d44c8u: goto label_3d44c8;
        case 0x3d44ccu: goto label_3d44cc;
        case 0x3d44d0u: goto label_3d44d0;
        case 0x3d44d4u: goto label_3d44d4;
        case 0x3d44d8u: goto label_3d44d8;
        case 0x3d44dcu: goto label_3d44dc;
        case 0x3d44e0u: goto label_3d44e0;
        case 0x3d44e4u: goto label_3d44e4;
        case 0x3d44e8u: goto label_3d44e8;
        case 0x3d44ecu: goto label_3d44ec;
        case 0x3d44f0u: goto label_3d44f0;
        case 0x3d44f4u: goto label_3d44f4;
        case 0x3d44f8u: goto label_3d44f8;
        case 0x3d44fcu: goto label_3d44fc;
        case 0x3d4500u: goto label_3d4500;
        case 0x3d4504u: goto label_3d4504;
        case 0x3d4508u: goto label_3d4508;
        case 0x3d450cu: goto label_3d450c;
        case 0x3d4510u: goto label_3d4510;
        case 0x3d4514u: goto label_3d4514;
        case 0x3d4518u: goto label_3d4518;
        case 0x3d451cu: goto label_3d451c;
        case 0x3d4520u: goto label_3d4520;
        case 0x3d4524u: goto label_3d4524;
        case 0x3d4528u: goto label_3d4528;
        case 0x3d452cu: goto label_3d452c;
        case 0x3d4530u: goto label_3d4530;
        case 0x3d4534u: goto label_3d4534;
        case 0x3d4538u: goto label_3d4538;
        case 0x3d453cu: goto label_3d453c;
        case 0x3d4540u: goto label_3d4540;
        case 0x3d4544u: goto label_3d4544;
        case 0x3d4548u: goto label_3d4548;
        case 0x3d454cu: goto label_3d454c;
        case 0x3d4550u: goto label_3d4550;
        case 0x3d4554u: goto label_3d4554;
        case 0x3d4558u: goto label_3d4558;
        case 0x3d455cu: goto label_3d455c;
        case 0x3d4560u: goto label_3d4560;
        case 0x3d4564u: goto label_3d4564;
        case 0x3d4568u: goto label_3d4568;
        case 0x3d456cu: goto label_3d456c;
        case 0x3d4570u: goto label_3d4570;
        case 0x3d4574u: goto label_3d4574;
        case 0x3d4578u: goto label_3d4578;
        case 0x3d457cu: goto label_3d457c;
        case 0x3d4580u: goto label_3d4580;
        case 0x3d4584u: goto label_3d4584;
        case 0x3d4588u: goto label_3d4588;
        case 0x3d458cu: goto label_3d458c;
        case 0x3d4590u: goto label_3d4590;
        case 0x3d4594u: goto label_3d4594;
        case 0x3d4598u: goto label_3d4598;
        case 0x3d459cu: goto label_3d459c;
        case 0x3d45a0u: goto label_3d45a0;
        case 0x3d45a4u: goto label_3d45a4;
        case 0x3d45a8u: goto label_3d45a8;
        case 0x3d45acu: goto label_3d45ac;
        case 0x3d45b0u: goto label_3d45b0;
        case 0x3d45b4u: goto label_3d45b4;
        case 0x3d45b8u: goto label_3d45b8;
        case 0x3d45bcu: goto label_3d45bc;
        case 0x3d45c0u: goto label_3d45c0;
        case 0x3d45c4u: goto label_3d45c4;
        case 0x3d45c8u: goto label_3d45c8;
        case 0x3d45ccu: goto label_3d45cc;
        case 0x3d45d0u: goto label_3d45d0;
        case 0x3d45d4u: goto label_3d45d4;
        case 0x3d45d8u: goto label_3d45d8;
        case 0x3d45dcu: goto label_3d45dc;
        case 0x3d45e0u: goto label_3d45e0;
        case 0x3d45e4u: goto label_3d45e4;
        case 0x3d45e8u: goto label_3d45e8;
        case 0x3d45ecu: goto label_3d45ec;
        case 0x3d45f0u: goto label_3d45f0;
        case 0x3d45f4u: goto label_3d45f4;
        case 0x3d45f8u: goto label_3d45f8;
        case 0x3d45fcu: goto label_3d45fc;
        case 0x3d4600u: goto label_3d4600;
        case 0x3d4604u: goto label_3d4604;
        case 0x3d4608u: goto label_3d4608;
        case 0x3d460cu: goto label_3d460c;
        case 0x3d4610u: goto label_3d4610;
        case 0x3d4614u: goto label_3d4614;
        case 0x3d4618u: goto label_3d4618;
        case 0x3d461cu: goto label_3d461c;
        case 0x3d4620u: goto label_3d4620;
        case 0x3d4624u: goto label_3d4624;
        case 0x3d4628u: goto label_3d4628;
        case 0x3d462cu: goto label_3d462c;
        case 0x3d4630u: goto label_3d4630;
        case 0x3d4634u: goto label_3d4634;
        case 0x3d4638u: goto label_3d4638;
        case 0x3d463cu: goto label_3d463c;
        case 0x3d4640u: goto label_3d4640;
        case 0x3d4644u: goto label_3d4644;
        case 0x3d4648u: goto label_3d4648;
        case 0x3d464cu: goto label_3d464c;
        case 0x3d4650u: goto label_3d4650;
        case 0x3d4654u: goto label_3d4654;
        case 0x3d4658u: goto label_3d4658;
        case 0x3d465cu: goto label_3d465c;
        case 0x3d4660u: goto label_3d4660;
        case 0x3d4664u: goto label_3d4664;
        case 0x3d4668u: goto label_3d4668;
        case 0x3d466cu: goto label_3d466c;
        case 0x3d4670u: goto label_3d4670;
        case 0x3d4674u: goto label_3d4674;
        case 0x3d4678u: goto label_3d4678;
        case 0x3d467cu: goto label_3d467c;
        case 0x3d4680u: goto label_3d4680;
        case 0x3d4684u: goto label_3d4684;
        case 0x3d4688u: goto label_3d4688;
        case 0x3d468cu: goto label_3d468c;
        case 0x3d4690u: goto label_3d4690;
        case 0x3d4694u: goto label_3d4694;
        case 0x3d4698u: goto label_3d4698;
        case 0x3d469cu: goto label_3d469c;
        case 0x3d46a0u: goto label_3d46a0;
        case 0x3d46a4u: goto label_3d46a4;
        case 0x3d46a8u: goto label_3d46a8;
        case 0x3d46acu: goto label_3d46ac;
        case 0x3d46b0u: goto label_3d46b0;
        case 0x3d46b4u: goto label_3d46b4;
        case 0x3d46b8u: goto label_3d46b8;
        case 0x3d46bcu: goto label_3d46bc;
        case 0x3d46c0u: goto label_3d46c0;
        case 0x3d46c4u: goto label_3d46c4;
        case 0x3d46c8u: goto label_3d46c8;
        case 0x3d46ccu: goto label_3d46cc;
        case 0x3d46d0u: goto label_3d46d0;
        case 0x3d46d4u: goto label_3d46d4;
        case 0x3d46d8u: goto label_3d46d8;
        case 0x3d46dcu: goto label_3d46dc;
        case 0x3d46e0u: goto label_3d46e0;
        case 0x3d46e4u: goto label_3d46e4;
        case 0x3d46e8u: goto label_3d46e8;
        case 0x3d46ecu: goto label_3d46ec;
        case 0x3d46f0u: goto label_3d46f0;
        case 0x3d46f4u: goto label_3d46f4;
        case 0x3d46f8u: goto label_3d46f8;
        case 0x3d46fcu: goto label_3d46fc;
        case 0x3d4700u: goto label_3d4700;
        case 0x3d4704u: goto label_3d4704;
        case 0x3d4708u: goto label_3d4708;
        case 0x3d470cu: goto label_3d470c;
        case 0x3d4710u: goto label_3d4710;
        case 0x3d4714u: goto label_3d4714;
        case 0x3d4718u: goto label_3d4718;
        case 0x3d471cu: goto label_3d471c;
        case 0x3d4720u: goto label_3d4720;
        case 0x3d4724u: goto label_3d4724;
        case 0x3d4728u: goto label_3d4728;
        case 0x3d472cu: goto label_3d472c;
        case 0x3d4730u: goto label_3d4730;
        case 0x3d4734u: goto label_3d4734;
        case 0x3d4738u: goto label_3d4738;
        case 0x3d473cu: goto label_3d473c;
        case 0x3d4740u: goto label_3d4740;
        case 0x3d4744u: goto label_3d4744;
        case 0x3d4748u: goto label_3d4748;
        case 0x3d474cu: goto label_3d474c;
        case 0x3d4750u: goto label_3d4750;
        case 0x3d4754u: goto label_3d4754;
        case 0x3d4758u: goto label_3d4758;
        case 0x3d475cu: goto label_3d475c;
        case 0x3d4760u: goto label_3d4760;
        case 0x3d4764u: goto label_3d4764;
        case 0x3d4768u: goto label_3d4768;
        case 0x3d476cu: goto label_3d476c;
        case 0x3d4770u: goto label_3d4770;
        case 0x3d4774u: goto label_3d4774;
        case 0x3d4778u: goto label_3d4778;
        case 0x3d477cu: goto label_3d477c;
        case 0x3d4780u: goto label_3d4780;
        case 0x3d4784u: goto label_3d4784;
        case 0x3d4788u: goto label_3d4788;
        case 0x3d478cu: goto label_3d478c;
        case 0x3d4790u: goto label_3d4790;
        case 0x3d4794u: goto label_3d4794;
        case 0x3d4798u: goto label_3d4798;
        case 0x3d479cu: goto label_3d479c;
        case 0x3d47a0u: goto label_3d47a0;
        case 0x3d47a4u: goto label_3d47a4;
        case 0x3d47a8u: goto label_3d47a8;
        case 0x3d47acu: goto label_3d47ac;
        case 0x3d47b0u: goto label_3d47b0;
        case 0x3d47b4u: goto label_3d47b4;
        case 0x3d47b8u: goto label_3d47b8;
        case 0x3d47bcu: goto label_3d47bc;
        case 0x3d47c0u: goto label_3d47c0;
        case 0x3d47c4u: goto label_3d47c4;
        case 0x3d47c8u: goto label_3d47c8;
        case 0x3d47ccu: goto label_3d47cc;
        case 0x3d47d0u: goto label_3d47d0;
        case 0x3d47d4u: goto label_3d47d4;
        case 0x3d47d8u: goto label_3d47d8;
        case 0x3d47dcu: goto label_3d47dc;
        case 0x3d47e0u: goto label_3d47e0;
        case 0x3d47e4u: goto label_3d47e4;
        case 0x3d47e8u: goto label_3d47e8;
        case 0x3d47ecu: goto label_3d47ec;
        case 0x3d47f0u: goto label_3d47f0;
        case 0x3d47f4u: goto label_3d47f4;
        case 0x3d47f8u: goto label_3d47f8;
        case 0x3d47fcu: goto label_3d47fc;
        case 0x3d4800u: goto label_3d4800;
        case 0x3d4804u: goto label_3d4804;
        case 0x3d4808u: goto label_3d4808;
        case 0x3d480cu: goto label_3d480c;
        case 0x3d4810u: goto label_3d4810;
        case 0x3d4814u: goto label_3d4814;
        case 0x3d4818u: goto label_3d4818;
        case 0x3d481cu: goto label_3d481c;
        case 0x3d4820u: goto label_3d4820;
        case 0x3d4824u: goto label_3d4824;
        case 0x3d4828u: goto label_3d4828;
        case 0x3d482cu: goto label_3d482c;
        case 0x3d4830u: goto label_3d4830;
        case 0x3d4834u: goto label_3d4834;
        case 0x3d4838u: goto label_3d4838;
        case 0x3d483cu: goto label_3d483c;
        case 0x3d4840u: goto label_3d4840;
        case 0x3d4844u: goto label_3d4844;
        case 0x3d4848u: goto label_3d4848;
        case 0x3d484cu: goto label_3d484c;
        case 0x3d4850u: goto label_3d4850;
        case 0x3d4854u: goto label_3d4854;
        case 0x3d4858u: goto label_3d4858;
        case 0x3d485cu: goto label_3d485c;
        case 0x3d4860u: goto label_3d4860;
        case 0x3d4864u: goto label_3d4864;
        case 0x3d4868u: goto label_3d4868;
        case 0x3d486cu: goto label_3d486c;
        case 0x3d4870u: goto label_3d4870;
        case 0x3d4874u: goto label_3d4874;
        case 0x3d4878u: goto label_3d4878;
        case 0x3d487cu: goto label_3d487c;
        case 0x3d4880u: goto label_3d4880;
        case 0x3d4884u: goto label_3d4884;
        case 0x3d4888u: goto label_3d4888;
        case 0x3d488cu: goto label_3d488c;
        case 0x3d4890u: goto label_3d4890;
        case 0x3d4894u: goto label_3d4894;
        case 0x3d4898u: goto label_3d4898;
        case 0x3d489cu: goto label_3d489c;
        case 0x3d48a0u: goto label_3d48a0;
        case 0x3d48a4u: goto label_3d48a4;
        case 0x3d48a8u: goto label_3d48a8;
        case 0x3d48acu: goto label_3d48ac;
        case 0x3d48b0u: goto label_3d48b0;
        case 0x3d48b4u: goto label_3d48b4;
        case 0x3d48b8u: goto label_3d48b8;
        case 0x3d48bcu: goto label_3d48bc;
        case 0x3d48c0u: goto label_3d48c0;
        case 0x3d48c4u: goto label_3d48c4;
        case 0x3d48c8u: goto label_3d48c8;
        case 0x3d48ccu: goto label_3d48cc;
        case 0x3d48d0u: goto label_3d48d0;
        case 0x3d48d4u: goto label_3d48d4;
        case 0x3d48d8u: goto label_3d48d8;
        case 0x3d48dcu: goto label_3d48dc;
        case 0x3d48e0u: goto label_3d48e0;
        case 0x3d48e4u: goto label_3d48e4;
        default: break;
    }

    ctx->pc = 0x3d41f8u;

label_3d41f8:
    // 0x3d41f8: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x3d41f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_3d41fc:
    // 0x3d41fc: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3d41fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3d4200:
    // 0x3d4200: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3d4200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3d4204:
    // 0x3d4204: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d4204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d4208:
    // 0x3d4208: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3d420c:
    // 0x3d420c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d420cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d4210:
    // 0x3d4210: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3d4214:
    // 0x3d4214: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d4214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4218:
    // 0x3d4218: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3d421c:
    // 0x3d421c: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3d4220:
    // 0x3d4220: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3d4224:
    // 0x3d4224: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d4224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d4228:
    // 0x3d4228: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x3d4228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3d422c:
    // 0x3d422c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3d422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d4230:
    // 0x3d4230: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4234:
    // 0x3d4234: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4238:
    // 0x3d4238: 0x40f809  jalr        $v0
label_3d423c:
    if (ctx->pc == 0x3D423Cu) {
        ctx->pc = 0x3D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4238u;
        // 0x3d423c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4240u;
        goto label_3d4240;
    }
    ctx->pc = 0x3D4238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4240u);
        ctx->pc = 0x3D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4238u;
        // 0x3d423c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4238u, 0x3D4240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4240u;
label_3d4240:
    // 0x3d4240: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d4240u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4244:
    // 0x3d4244: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x3d4244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_3d4248:
    // 0x3d4248: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
label_3d424c:
    if (ctx->pc == 0x3D424Cu) {
        ctx->pc = 0x3D424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4248u;
        // 0x3d424c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4250u;
        goto label_3d4250;
    }
    ctx->pc = 0x3D4248u;
    {
        const bool branch_taken_0x3d4248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4248u;
        // 0x3d424c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4248) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D4250u;
label_3d4250:
    // 0x3d4250: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3d4250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d4254:
    // 0x3d4254: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x3d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
label_3d4258:
    // 0x3d4258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d4258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d425c:
    // 0x3d425c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4260:
    // 0x3d4260: 0x800008  jr          $a0
label_3d4264:
    if (ctx->pc == 0x3D4264u) {
        ctx->pc = 0x3D4268u;
        goto label_3d4268;
    }
    ctx->pc = 0x3D4260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D4268u: goto label_3d4268;
            case 0x3D4284u: goto label_3d4284;
            case 0x3D42B8u: goto label_3d42b8;
            case 0x3D4320u: goto label_3d4320;
            case 0x3D434Cu: goto label_3d434c;
            case 0x3D44E8u: goto label_3d44e8;
            case 0x3D4540u: goto label_3d4540;
            case 0x3D457Cu: goto label_3d457c;
            case 0x3D4664u: goto label_3d4664;
            case 0x3D469Cu: goto label_3d469c;
            case 0x3D48B8u: goto label_3d48b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D4268u;
label_3d4268:
    // 0x3d4268: 0xc0ea146  jal         func_3A8518
label_3d426c:
    if (ctx->pc == 0x3D426Cu) {
        ctx->pc = 0x3D426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4268u;
        // 0x3d426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4270u;
        goto label_3d4270;
    }
    ctx->pc = 0x3D4268u;
    SET_GPR_U32(ctx, 31, 0x3D4270u);
    ctx->pc = 0x3D426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4268u;
    // 0x3d426c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4268u, 0x3D4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4270u;
label_3d4270:
    // 0x3d4270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d4270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4274:
    // 0x3d4274: 0xc0e85fa  jal         func_3A17E8
label_3d4278:
    if (ctx->pc == 0x3D4278u) {
        ctx->pc = 0x3D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4274u;
        // 0x3d4278: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D427Cu;
        goto label_3d427c;
    }
    ctx->pc = 0x3D4274u;
    SET_GPR_U32(ctx, 31, 0x3D427Cu);
    ctx->pc = 0x3D4278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4274u;
    // 0x3d4278: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3D4274u, 0x3D427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D427Cu;
label_3d427c:
    // 0x3d427c: 0x1000018f  b           . + 4 + (0x18F << 2)
label_3d4280:
    if (ctx->pc == 0x3D4280u) {
        ctx->pc = 0x3D4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D427Cu;
        // 0x3d4280: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4284u;
        goto label_3d4284;
    }
    ctx->pc = 0x3D427Cu;
    {
        const bool branch_taken_0x3d427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D427Cu;
        // 0x3d4280: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d427c) {
            ctx->pc = 0x3D48BCu;
            goto label_3d48bc;
        }
    }
    ctx->pc = 0x3D4284u;
label_3d4284:
    // 0x3d4284: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x3d4284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3d4288:
    // 0x3d4288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d428c:
    // 0x3d428c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3d428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3d4290:
    // 0x3d4290: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4294:
    // 0x3d4294: 0xc0e94a0  jal         func_3A5280
label_3d4298:
    if (ctx->pc == 0x3D4298u) {
        ctx->pc = 0x3D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4294u;
        // 0x3d4298: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D429Cu;
        goto label_3d429c;
    }
    ctx->pc = 0x3D4294u;
    SET_GPR_U32(ctx, 31, 0x3D429Cu);
    ctx->pc = 0x3D4298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4294u;
    // 0x3d4298: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D4294u, 0x3D429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D429Cu;
label_3d429c:
    // 0x3d429c: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
label_3d42a0:
    if (ctx->pc == 0x3D42A0u) {
        ctx->pc = 0x3D42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D429Cu;
        // 0x3d42a0: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42A4u;
        goto label_3d42a4;
    }
    ctx->pc = 0x3D429Cu;
    {
        const bool branch_taken_0x3d429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D429Cu;
        // 0x3d42a0: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d429c) {
            ctx->pc = 0x3D48BCu;
            goto label_3d48bc;
        }
    }
    ctx->pc = 0x3D42A4u;
label_3d42a4:
    // 0x3d42a4: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x3d42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_3d42a8:
    // 0x3d42a8: 0x14400185  bnez        $v0, . + 4 + (0x185 << 2)
label_3d42ac:
    if (ctx->pc == 0x3D42ACu) {
        ctx->pc = 0x3D42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42A8u;
        // 0x3d42ac: 0x7bb10500  lq          $s1, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42B0u;
        goto label_3d42b0;
    }
    ctx->pc = 0x3D42A8u;
    {
        const bool branch_taken_0x3d42a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42A8u;
        // 0x3d42ac: 0x7bb10500  lq          $s1, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42a8) {
            ctx->pc = 0x3D48C0u;
            goto label_3d48c0;
        }
    }
    ctx->pc = 0x3D42B0u;
label_3d42b0:
    // 0x3d42b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d42b4:
    if (ctx->pc == 0x3D42B4u) {
        ctx->pc = 0x3D42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42B0u;
        // 0x3d42b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42B8u;
        goto label_3d42b8;
    }
    ctx->pc = 0x3D42B0u;
    {
        const bool branch_taken_0x3d42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42B0u;
        // 0x3d42b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42b0) {
            ctx->pc = 0x3D42E0u;
            goto label_3d42e0;
        }
    }
    ctx->pc = 0x3D42B8u;
label_3d42b8:
    // 0x3d42b8: 0xc0ea146  jal         func_3A8518
label_3d42bc:
    if (ctx->pc == 0x3D42BCu) {
        ctx->pc = 0x3D42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42B8u;
        // 0x3d42bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42C0u;
        goto label_3d42c0;
    }
    ctx->pc = 0x3D42B8u;
    SET_GPR_U32(ctx, 31, 0x3D42C0u);
    ctx->pc = 0x3D42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42B8u;
    // 0x3d42bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D42B8u, 0x3D42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42C0u;
label_3d42c0:
    // 0x3d42c0: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x3d42c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3d42c4:
    // 0x3d42c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d42c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d42c8:
    // 0x3d42c8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3d42c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3d42cc:
    // 0x3d42cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d42ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d42d0:
    // 0x3d42d0: 0xc0e94a0  jal         func_3A5280
label_3d42d4:
    if (ctx->pc == 0x3D42D4u) {
        ctx->pc = 0x3D42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42D0u;
        // 0x3d42d4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42D8u;
        goto label_3d42d8;
    }
    ctx->pc = 0x3D42D0u;
    SET_GPR_U32(ctx, 31, 0x3D42D8u);
    ctx->pc = 0x3D42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42D0u;
    // 0x3d42d4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D42D0u, 0x3D42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42D8u;
label_3d42d8:
    // 0x3d42d8: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
label_3d42dc:
    if (ctx->pc == 0x3D42DCu) {
        ctx->pc = 0x3D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42D8u;
        // 0x3d42dc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42E0u;
        goto label_3d42e0;
    }
    ctx->pc = 0x3D42D8u;
    {
        const bool branch_taken_0x3d42d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42D8u;
        // 0x3d42dc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42d8) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D42E0u;
label_3d42e0:
    // 0x3d42e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d42e4:
    // 0x3d42e4: 0x263144e0  addiu       $s1, $s1, 0x44E0
    ctx->pc = 0x3d42e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17632));
label_3d42e8:
    // 0x3d42e8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d42ec:
    // 0x3d42ec: 0xc0cd4ee  jal         func_3353B8
label_3d42f0:
    if (ctx->pc == 0x3D42F0u) {
        ctx->pc = 0x3D42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42ECu;
        // 0x3d42f0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D42F4u;
        goto label_3d42f4;
    }
    ctx->pc = 0x3D42ECu;
    SET_GPR_U32(ctx, 31, 0x3D42F4u);
    ctx->pc = 0x3D42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42ECu;
    // 0x3d42f0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D42ECu, 0x3D42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42F4u;
label_3d42f4:
    // 0x3d42f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3d42f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d42f8:
    // 0x3d42f8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3d42f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d42fc:
    // 0x3d42fc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3d42fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3d4300:
    // 0x3d4300: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4304:
    // 0x3d4304: 0xc0e90ca  jal         func_3A4328
label_3d4308:
    if (ctx->pc == 0x3D4308u) {
        ctx->pc = 0x3D4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4304u;
        // 0x3d4308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D430Cu;
        goto label_3d430c;
    }
    ctx->pc = 0x3D4304u;
    SET_GPR_U32(ctx, 31, 0x3D430Cu);
    ctx->pc = 0x3D4308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4304u;
    // 0x3d4308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D4304u, 0x3D430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D430Cu;
label_3d430c:
    // 0x3d430c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4310:
    // 0x3d4310: 0xc045c8e  jal         func_117238
label_3d4314:
    if (ctx->pc == 0x3D4314u) {
        ctx->pc = 0x3D4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4310u;
        // 0x3d4314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4318u;
        goto label_3d4318;
    }
    ctx->pc = 0x3D4310u;
    SET_GPR_U32(ctx, 31, 0x3D4318u);
    ctx->pc = 0x3D4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4310u;
    // 0x3d4314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D4310u, 0x3D4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4318u;
label_3d4318:
    // 0x3d4318: 0x10000168  b           . + 4 + (0x168 << 2)
label_3d431c:
    if (ctx->pc == 0x3D431Cu) {
        ctx->pc = 0x3D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4318u;
        // 0x3d431c: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4320u;
        goto label_3d4320;
    }
    ctx->pc = 0x3D4318u;
    {
        const bool branch_taken_0x3d4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4318u;
        // 0x3d431c: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4318) {
            ctx->pc = 0x3D48BCu;
            goto label_3d48bc;
        }
    }
    ctx->pc = 0x3D4320u;
label_3d4320:
    // 0x3d4320: 0xc0ea146  jal         func_3A8518
label_3d4324:
    if (ctx->pc == 0x3D4324u) {
        ctx->pc = 0x3D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4320u;
        // 0x3d4324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4328u;
        goto label_3d4328;
    }
    ctx->pc = 0x3D4320u;
    SET_GPR_U32(ctx, 31, 0x3D4328u);
    ctx->pc = 0x3D4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4320u;
    // 0x3d4324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4320u, 0x3D4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4328u;
label_3d4328:
    // 0x3d4328: 0xc0ea146  jal         func_3A8518
label_3d432c:
    if (ctx->pc == 0x3D432Cu) {
        ctx->pc = 0x3D432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4328u;
        // 0x3d432c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4330u;
        goto label_3d4330;
    }
    ctx->pc = 0x3D4328u;
    SET_GPR_U32(ctx, 31, 0x3D4330u);
    ctx->pc = 0x3D432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4328u;
    // 0x3d432c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4328u, 0x3D4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4330u;
label_3d4330:
    // 0x3d4330: 0xc0ea13a  jal         func_3A84E8
label_3d4334:
    if (ctx->pc == 0x3D4334u) {
        ctx->pc = 0x3D4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4330u;
        // 0x3d4334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4338u;
        goto label_3d4338;
    }
    ctx->pc = 0x3D4330u;
    SET_GPR_U32(ctx, 31, 0x3D4338u);
    ctx->pc = 0x3D4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4330u;
    // 0x3d4334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3D4330u, 0x3D4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4338u;
label_3d4338:
    // 0x3d4338: 0xc0ea146  jal         func_3A8518
label_3d433c:
    if (ctx->pc == 0x3D433Cu) {
        ctx->pc = 0x3D433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4338u;
        // 0x3d433c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4340u;
        goto label_3d4340;
    }
    ctx->pc = 0x3D4338u;
    SET_GPR_U32(ctx, 31, 0x3D4340u);
    ctx->pc = 0x3D433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4338u;
    // 0x3d433c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4338u, 0x3D4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4340u;
label_3d4340:
    // 0x3d4340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d4340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4344:
    // 0x3d4344: 0x1000015c  b           . + 4 + (0x15C << 2)
label_3d4348:
    if (ctx->pc == 0x3D4348u) {
        ctx->pc = 0x3D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4344u;
        // 0x3d4348: 0xaec30024  sw          $v1, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D434Cu;
        goto label_3d434c;
    }
    ctx->pc = 0x3D4344u;
    {
        const bool branch_taken_0x3d4344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4344u;
        // 0x3d4348: 0xaec30024  sw          $v1, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4344) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D434Cu;
label_3d434c:
    // 0x3d434c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4350:
    // 0x3d4350: 0xc0ea12a  jal         func_3A84A8
label_3d4354:
    if (ctx->pc == 0x3D4354u) {
        ctx->pc = 0x3D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4350u;
        // 0x3d4354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4358u;
        goto label_3d4358;
    }
    ctx->pc = 0x3D4350u;
    SET_GPR_U32(ctx, 31, 0x3D4358u);
    ctx->pc = 0x3D4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4350u;
    // 0x3d4354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4350u, 0x3D4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4358u;
label_3d4358:
    // 0x3d4358: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x3d4358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3d435c:
    // 0x3d435c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d435cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4360:
    // 0x3d4360: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4364:
    // 0x3d4364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d4364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4368:
    // 0x3d4368: 0xc0ea12a  jal         func_3A84A8
label_3d436c:
    if (ctx->pc == 0x3D436Cu) {
        ctx->pc = 0x3D436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4368u;
        // 0x3d436c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4370u;
        goto label_3d4370;
    }
    ctx->pc = 0x3D4368u;
    SET_GPR_U32(ctx, 31, 0x3D4370u);
    ctx->pc = 0x3D436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4368u;
    // 0x3d436c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4368u, 0x3D4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4370u;
label_3d4370:
    // 0x3d4370: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4374:
    // 0x3d4374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4378:
    // 0x3d4378: 0xc0ea146  jal         func_3A8518
label_3d437c:
    if (ctx->pc == 0x3D437Cu) {
        ctx->pc = 0x3D437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4378u;
        // 0x3d437c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4380u;
        goto label_3d4380;
    }
    ctx->pc = 0x3D4378u;
    SET_GPR_U32(ctx, 31, 0x3D4380u);
    ctx->pc = 0x3D437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4378u;
    // 0x3d437c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4378u, 0x3D4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4380u;
label_3d4380:
    // 0x3d4380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4384:
    // 0x3d4384: 0xc0ea146  jal         func_3A8518
label_3d4388:
    if (ctx->pc == 0x3D4388u) {
        ctx->pc = 0x3D4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4384u;
        // 0x3d4388: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D438Cu;
        goto label_3d438c;
    }
    ctx->pc = 0x3D4384u;
    SET_GPR_U32(ctx, 31, 0x3D438Cu);
    ctx->pc = 0x3D4388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4384u;
    // 0x3d4388: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D4384u, 0x3D438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D438Cu;
label_3d438c:
    // 0x3d438c: 0xc0ea14c  jal         func_3A8530
label_3d4390:
    if (ctx->pc == 0x3D4390u) {
        ctx->pc = 0x3D4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D438Cu;
        // 0x3d4390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4394u;
        goto label_3d4394;
    }
    ctx->pc = 0x3D438Cu;
    SET_GPR_U32(ctx, 31, 0x3D4394u);
    ctx->pc = 0x3D4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D438Cu;
    // 0x3d4390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D438Cu, 0x3D4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4394u;
label_3d4394:
    // 0x3d4394: 0xc0ea14c  jal         func_3A8530
label_3d4398:
    if (ctx->pc == 0x3D4398u) {
        ctx->pc = 0x3D4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4394u;
        // 0x3d4398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D439Cu;
        goto label_3d439c;
    }
    ctx->pc = 0x3D4394u;
    SET_GPR_U32(ctx, 31, 0x3D439Cu);
    ctx->pc = 0x3D4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4394u;
    // 0x3d4398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D4394u, 0x3D439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D439Cu;
label_3d439c:
    // 0x3d439c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d439cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d43a0:
    // 0x3d43a0: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3d43a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d43a4:
    // 0x3d43a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d43a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d43a8:
    // 0x3d43a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d43a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d43ac:
    // 0x3d43ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d43acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d43b0:
    // 0x3d43b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d43b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d43b4:
    // 0x3d43b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d43b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d43b8:
    // 0x3d43b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d43b8u;
    // VWAITQ (Q already resolved in this runtime)
label_3d43bc:
    // 0x3d43bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d43bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d43c0:
    // 0x3d43c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3d43c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d43c4:
    // 0x3d43c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d43c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d43c8:
    // 0x3d43c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d43cc:
    // 0x3d43cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d43ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d43d0:
    // 0x3d43d0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d43d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d43d4:
    // 0x3d43d4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3d43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3d43d8:
    // 0x3d43d8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3d43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3d43dc:
    // 0x3d43dc: 0xc0e92f4  jal         func_3A4BD0
label_3d43e0:
    if (ctx->pc == 0x3D43E0u) {
        ctx->pc = 0x3D43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43DCu;
        // 0x3d43e0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D43E4u;
        goto label_3d43e4;
    }
    ctx->pc = 0x3D43DCu;
    SET_GPR_U32(ctx, 31, 0x3D43E4u);
    ctx->pc = 0x3D43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D43DCu;
    // 0x3d43e0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3D43DCu, 0x3D43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43E4u;
label_3d43e4:
    // 0x3d43e4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d43e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d43e8:
    // 0x3d43e8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d43e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d43ec:
    // 0x3d43ec: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x3d43ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3d43f0:
    // 0x3d43f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d43f4:
    // 0x3d43f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3d43f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3d43f8:
    // 0x3d43f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d43f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d43fc:
    // 0x3d43fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d43fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d4400:
    // 0x3d4400: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3d4400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d4404:
    // 0x3d4404: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3d4404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3d4408:
    // 0x3d4408: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d440c:
    // 0x3d440c: 0x261048d8  addiu       $s0, $s0, 0x48D8
    ctx->pc = 0x3d440cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18648));
label_3d4410:
    // 0x3d4410: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d4410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d4414:
    // 0x3d4414: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d4414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d4418:
    // 0x3d4418: 0xc0cd518  jal         func_335460
label_3d441c:
    if (ctx->pc == 0x3D441Cu) {
        ctx->pc = 0x3D441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4418u;
        // 0x3d441c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4420u;
        goto label_3d4420;
    }
    ctx->pc = 0x3D4418u;
    SET_GPR_U32(ctx, 31, 0x3D4420u);
    ctx->pc = 0x3D441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4418u;
    // 0x3d441c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D4418u, 0x3D4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4420u;
label_3d4420:
    // 0x3d4420: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3d4420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3d4424:
    // 0x3d4424: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d4424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d4428:
    // 0x3d4428: 0xc136b24  jal         func_4DAC90
label_3d442c:
    if (ctx->pc == 0x3D442Cu) {
        ctx->pc = 0x3D442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4428u;
        // 0x3d442c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4430u;
        goto label_3d4430;
    }
    ctx->pc = 0x3D4428u;
    SET_GPR_U32(ctx, 31, 0x3D4430u);
    ctx->pc = 0x3D442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4428u;
    // 0x3d442c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D4428u, 0x3D4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4430u;
label_3d4430:
    // 0x3d4430: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3d4430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d4434:
    // 0x3d4434: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d4434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d4438:
    // 0x3d4438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d443c:
    // 0x3d443c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4440:
    // 0x3d4440: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3d4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3d4444:
    // 0x3d4444: 0xc0e9f84  jal         func_3A7E10
label_3d4448:
    if (ctx->pc == 0x3D4448u) {
        ctx->pc = 0x3D4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4444u;
        // 0x3d4448: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D444Cu;
        goto label_3d444c;
    }
    ctx->pc = 0x3D4444u;
    SET_GPR_U32(ctx, 31, 0x3D444Cu);
    ctx->pc = 0x3D4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4444u;
    // 0x3d4448: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D4444u, 0x3D444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D444Cu;
label_3d444c:
    // 0x3d444c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4450:
    // 0x3d4450: 0xc0f15bc  jal         func_3C56F0
label_3d4454:
    if (ctx->pc == 0x3D4454u) {
        ctx->pc = 0x3D4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4450u;
        // 0x3d4454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4458u;
        goto label_3d4458;
    }
    ctx->pc = 0x3D4450u;
    SET_GPR_U32(ctx, 31, 0x3D4458u);
    ctx->pc = 0x3D4454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4450u;
    // 0x3d4454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D4450u, 0x3D4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4458u;
label_3d4458:
    // 0x3d4458: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3d4458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3d445c:
    // 0x3d445c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d445cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4460:
    // 0x3d4460: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3d4460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3d4464:
    // 0x3d4464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d4464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d4468:
    // 0x3d4468: 0xc0f15f6  jal         func_3C57D8
label_3d446c:
    if (ctx->pc == 0x3D446Cu) {
        ctx->pc = 0x3D446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4468u;
        // 0x3d446c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4470u;
        goto label_3d4470;
    }
    ctx->pc = 0x3D4468u;
    SET_GPR_U32(ctx, 31, 0x3D4470u);
    ctx->pc = 0x3D446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4468u;
    // 0x3d446c: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3D4468u, 0x3D4470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4470u;
label_3d4470:
    // 0x3d4470: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3d4470u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d4474:
    // 0x3d4474: 0x3c024a48  lui         $v0, 0x4A48
    ctx->pc = 0x3d4474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19016 << 16));
label_3d4478:
    // 0x3d4478: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x3d4478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3d447c:
    // 0x3d447c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3d447cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4480:
    // 0x3d4480: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3d4480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3d4484:
    // 0x3d4484: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d4484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d4488:
    // 0x3d4488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d4488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d448c:
    // 0x3d448c: 0x34424220  ori         $v0, $v0, 0x4220
    ctx->pc = 0x3d448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16928);
label_3d4490:
    // 0x3d4490: 0x7fa40460  sq          $a0, 0x460($sp)
    ctx->pc = 0x3d4490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 4));
label_3d4494:
    // 0x3d4494: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d4494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d4498:
    // 0x3d4498: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d4498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d449c:
    // 0x3d449c: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x3d449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d44a0:
    // 0x3d44a0: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3d44a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d44a4:
    // 0x3d44a4: 0x27a80480  addiu       $t0, $sp, 0x480
    ctx->pc = 0x3d44a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d44a8:
    // 0x3d44a8: 0x27a90490  addiu       $t1, $sp, 0x490
    ctx->pc = 0x3d44a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d44ac:
    // 0x3d44ac: 0x26104e28  addiu       $s0, $s0, 0x4E28
    ctx->pc = 0x3d44acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20008));
label_3d44b0:
    // 0x3d44b0: 0xafa20470  sw          $v0, 0x470($sp)
    ctx->pc = 0x3d44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
label_3d44b4:
    // 0x3d44b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d44b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d44b8:
    // 0x3d44b8: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3d44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3d44bc:
    // 0x3d44bc: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3d44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d44c0:
    // 0x3d44c0: 0xc0ea004  jal         func_3A8010
label_3d44c4:
    if (ctx->pc == 0x3D44C4u) {
        ctx->pc = 0x3D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44C0u;
        // 0x3d44c4: 0xafaa0490  sw          $t2, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44C8u;
        goto label_3d44c8;
    }
    ctx->pc = 0x3D44C0u;
    SET_GPR_U32(ctx, 31, 0x3D44C8u);
    ctx->pc = 0x3D44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44C0u;
    // 0x3d44c4: 0xafaa0490  sw          $t2, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3D44C0u, 0x3D44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44C8u;
label_3d44c8:
    // 0x3d44c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d44c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d44cc:
    // 0x3d44cc: 0xc0f15bc  jal         func_3C56F0
label_3d44d0:
    if (ctx->pc == 0x3D44D0u) {
        ctx->pc = 0x3D44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44CCu;
        // 0x3d44d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44D4u;
        goto label_3d44d4;
    }
    ctx->pc = 0x3D44CCu;
    SET_GPR_U32(ctx, 31, 0x3D44D4u);
    ctx->pc = 0x3D44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44CCu;
    // 0x3d44d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D44CCu, 0x3D44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44D4u;
label_3d44d4:
    // 0x3d44d4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3d44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d44d8:
    // 0x3d44d8: 0x128300f7  beq         $s4, $v1, . + 4 + (0xF7 << 2)
label_3d44dc:
    if (ctx->pc == 0x3D44DCu) {
        ctx->pc = 0x3D44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44D8u;
        // 0x3d44dc: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44E0u;
        goto label_3d44e0;
    }
    ctx->pc = 0x3D44D8u;
    {
        const bool branch_taken_0x3d44d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44D8u;
        // 0x3d44dc: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44d8) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D44E0u;
label_3d44e0:
    // 0x3d44e0: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_3d44e4:
    if (ctx->pc == 0x3D44E4u) {
        ctx->pc = 0x3D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44E0u;
        // 0x3d44e4: 0xaec20020  sw          $v0, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44E8u;
        goto label_3d44e8;
    }
    ctx->pc = 0x3D44E0u;
    {
        const bool branch_taken_0x3d44e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44E0u;
        // 0x3d44e4: 0xaec20020  sw          $v0, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44e0) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D44E8u;
label_3d44e8:
    // 0x3d44e8: 0xc0ea14c  jal         func_3A8530
label_3d44ec:
    if (ctx->pc == 0x3D44ECu) {
        ctx->pc = 0x3D44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44E8u;
        // 0x3d44ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D44F0u;
        goto label_3d44f0;
    }
    ctx->pc = 0x3D44E8u;
    SET_GPR_U32(ctx, 31, 0x3D44F0u);
    ctx->pc = 0x3D44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D44E8u;
    // 0x3d44ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D44E8u, 0x3D44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44F0u;
label_3d44f0:
    // 0x3d44f0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3d44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d44f4:
    // 0x3d44f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d44f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d44f8:
    // 0x3d44f8: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3d44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_3d44fc:
    // 0x3d44fc: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d44fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d4500:
    // 0x3d4500: 0x544000ee  bnel        $v0, $zero, . + 4 + (0xEE << 2)
label_3d4504:
    if (ctx->pc == 0x3D4504u) {
        ctx->pc = 0x3D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4500u;
        // 0x3d4504: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4508u;
        goto label_3d4508;
    }
    ctx->pc = 0x3D4500u;
    {
        const bool branch_taken_0x3d4500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4500) {
            ctx->pc = 0x3D4504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4500u;
            // 0x3d4504: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D48BCu;
            goto label_3d48bc;
        }
    }
    ctx->pc = 0x3D4508u;
label_3d4508:
    // 0x3d4508: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x3d4508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3d450c:
    // 0x3d450c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d450cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4510:
    // 0x3d4510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4514:
    // 0x3d4514: 0xc0ea176  jal         func_3A85D8
label_3d4518:
    if (ctx->pc == 0x3D4518u) {
        ctx->pc = 0x3D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4514u;
        // 0x3d4518: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D451Cu;
        goto label_3d451c;
    }
    ctx->pc = 0x3D4514u;
    SET_GPR_U32(ctx, 31, 0x3D451Cu);
    ctx->pc = 0x3D4518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4514u;
    // 0x3d4518: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D4514u, 0x3D451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D451Cu;
label_3d451c:
    // 0x3d451c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4520:
    // 0x3d4520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d4520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4524:
    // 0x3d4524: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3d4524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3d4528:
    // 0x3d4528: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d4528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d452c:
    // 0x3d452c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d4530:
    // 0x3d4530: 0x40f809  jalr        $v0
label_3d4534:
    if (ctx->pc == 0x3D4534u) {
        ctx->pc = 0x3D4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4530u;
        // 0x3d4534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4538u;
        goto label_3d4538;
    }
    ctx->pc = 0x3D4530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4538u);
        ctx->pc = 0x3D4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4530u;
        // 0x3d4534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4530u, 0x3D4538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4538u;
label_3d4538:
    // 0x3d4538: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_3d453c:
    if (ctx->pc == 0x3D453Cu) {
        ctx->pc = 0x3D453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4538u;
        // 0x3d453c: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4540u;
        goto label_3d4540;
    }
    ctx->pc = 0x3D4538u;
    {
        const bool branch_taken_0x3d4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4538u;
        // 0x3d453c: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4538) {
            ctx->pc = 0x3D48BCu;
            goto label_3d48bc;
        }
    }
    ctx->pc = 0x3D4540u;
label_3d4540:
    // 0x3d4540: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d4544:
    // 0x3d4544: 0xc0e90ca  jal         func_3A4328
label_3d4548:
    if (ctx->pc == 0x3D4548u) {
        ctx->pc = 0x3D4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4544u;
        // 0x3d4548: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D454Cu;
        goto label_3d454c;
    }
    ctx->pc = 0x3D4544u;
    SET_GPR_U32(ctx, 31, 0x3D454Cu);
    ctx->pc = 0x3D4548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4544u;
    // 0x3d4548: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D4544u, 0x3D454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D454Cu;
label_3d454c:
    // 0x3d454c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d454cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4550:
    // 0x3d4550: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d4554:
    // 0x3d4554: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d4554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4558:
    // 0x3d4558: 0xc0e911e  jal         func_3A4478
label_3d455c:
    if (ctx->pc == 0x3D455Cu) {
        ctx->pc = 0x3D455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4558u;
        // 0x3d455c: 0x7ea20010  sq          $v0, 0x10($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4560u;
        goto label_3d4560;
    }
    ctx->pc = 0x3D4558u;
    SET_GPR_U32(ctx, 31, 0x3D4560u);
    ctx->pc = 0x3D455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4558u;
    // 0x3d455c: 0x7ea20010  sq          $v0, 0x10($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D4558u, 0x3D4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4560u;
label_3d4560:
    // 0x3d4560: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d4564:
    // 0x3d4564: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d4564u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4568:
    // 0x3d4568: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3d4568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d456c:
    // 0x3d456c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3d456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3d4570:
    // 0x3d4570: 0x7ea30020  sq          $v1, 0x20($s5)
    ctx->pc = 0x3d4570u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 3));
label_3d4574:
    // 0x3d4574: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_3d4578:
    if (ctx->pc == 0x3D4578u) {
        ctx->pc = 0x3D4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4574u;
        // 0x3d4578: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D457Cu;
        goto label_3d457c;
    }
    ctx->pc = 0x3D4574u;
    {
        const bool branch_taken_0x3d4574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4574u;
        // 0x3d4578: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4574) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D457Cu;
label_3d457c:
    // 0x3d457c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4580:
    // 0x3d4580: 0xc0ea12a  jal         func_3A84A8
label_3d4584:
    if (ctx->pc == 0x3D4584u) {
        ctx->pc = 0x3D4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4580u;
        // 0x3d4584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4588u;
        goto label_3d4588;
    }
    ctx->pc = 0x3D4580u;
    SET_GPR_U32(ctx, 31, 0x3D4588u);
    ctx->pc = 0x3D4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4580u;
    // 0x3d4584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4580u, 0x3D4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4588u;
label_3d4588:
    // 0x3d4588: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d4588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d458c:
    // 0x3d458c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4590:
    // 0x3d4590: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d4594:
    // 0x3d4594: 0xc0ea12a  jal         func_3A84A8
label_3d4598:
    if (ctx->pc == 0x3D4598u) {
        ctx->pc = 0x3D4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4594u;
        // 0x3d4598: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D459Cu;
        goto label_3d459c;
    }
    ctx->pc = 0x3D4594u;
    SET_GPR_U32(ctx, 31, 0x3D459Cu);
    ctx->pc = 0x3D4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4594u;
    // 0x3d4598: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4594u, 0x3D459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D459Cu;
label_3d459c:
    // 0x3d459c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x3d459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d45a0:
    // 0x3d45a0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3d45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_3d45a4:
    // 0x3d45a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d45a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d45a8:
    // 0x3d45a8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x3d45a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3d45ac:
    // 0x3d45ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d45b0:
    if (ctx->pc == 0x3D45B0u) {
        ctx->pc = 0x3D45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45ACu;
        // 0x3d45b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45B4u;
        goto label_3d45b4;
    }
    ctx->pc = 0x3D45ACu;
    {
        const bool branch_taken_0x3d45ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45ACu;
        // 0x3d45b0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d45ac) {
            ctx->pc = 0x3D45BCu;
            goto label_3d45bc;
        }
    }
    ctx->pc = 0x3D45B4u;
label_3d45b4:
    // 0x3d45b4: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x3d45b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_3d45b8:
    // 0x3d45b8: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3d45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3d45bc:
    // 0x3d45bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d45bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d45c0:
    // 0x3d45c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d45c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d45c4:
    // 0x3d45c4: 0xc0f3222  jal         func_3CC888
label_3d45c8:
    if (ctx->pc == 0x3D45C8u) {
        ctx->pc = 0x3D45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45C4u;
        // 0x3d45c8: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45CCu;
        goto label_3d45cc;
    }
    ctx->pc = 0x3D45C4u;
    SET_GPR_U32(ctx, 31, 0x3D45CCu);
    ctx->pc = 0x3D45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45C4u;
    // 0x3d45c8: 0x24a51720  addiu       $a1, $a1, 0x1720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D45C4u, 0x3D45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45CCu;
label_3d45cc:
    // 0x3d45cc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d45ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d45d0:
    // 0x3d45d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d45d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d45d4:
    // 0x3d45d4: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x3d45d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
label_3d45d8:
    // 0x3d45d8: 0xc0f3222  jal         func_3CC888
label_3d45dc:
    if (ctx->pc == 0x3D45DCu) {
        ctx->pc = 0x3D45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D45D8u;
        // 0x3d45dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D45E0u;
        goto label_3d45e0;
    }
    ctx->pc = 0x3D45D8u;
    SET_GPR_U32(ctx, 31, 0x3D45E0u);
    ctx->pc = 0x3D45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D45D8u;
    // 0x3d45dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D45D8u, 0x3D45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D45E0u;
label_3d45e0:
    // 0x3d45e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d45e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d45e4:
    // 0x3d45e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d45e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d45e8:
    // 0x3d45e8: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3d45e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d45ec:
    // 0x3d45ec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3d45ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d45f0:
    // 0x3d45f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d45f4:
    // 0x3d45f4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d45f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d45f8:
    // 0x3d45f8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d45fc:
    // 0x3d45fc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d4600:
    // 0x3d4600: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3d4600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d4604:
    // 0x3d4604: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d4604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d4608:
    // 0x3d4608: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d460c:
    // 0x3d460c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d460cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4610:
    // 0x3d4610: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3d4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3d4614:
    // 0x3d4614: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d4614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d4618:
    // 0x3d4618: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d4618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d461c:
    // 0x3d461c: 0xc0cd518  jal         func_335460
label_3d4620:
    if (ctx->pc == 0x3D4620u) {
        ctx->pc = 0x3D4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D461Cu;
        // 0x3d4620: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4624u;
        goto label_3d4624;
    }
    ctx->pc = 0x3D461Cu;
    SET_GPR_U32(ctx, 31, 0x3D4624u);
    ctx->pc = 0x3D4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D461Cu;
    // 0x3d4620: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D461Cu, 0x3D4624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4624u;
label_3d4624:
    // 0x3d4624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4628:
    // 0x3d4628: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d4628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d462c:
    // 0x3d462c: 0xc136b24  jal         func_4DAC90
label_3d4630:
    if (ctx->pc == 0x3D4630u) {
        ctx->pc = 0x3D4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D462Cu;
        // 0x3d4630: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4634u;
        goto label_3d4634;
    }
    ctx->pc = 0x3D462Cu;
    SET_GPR_U32(ctx, 31, 0x3D4634u);
    ctx->pc = 0x3D4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D462Cu;
    // 0x3d4630: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D462Cu, 0x3D4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4634u;
label_3d4634:
    // 0x3d4634: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3d4634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4638:
    // 0x3d4638: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3d4638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d463c:
    // 0x3d463c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d463cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4640:
    // 0x3d4640: 0x3c050420  lui         $a1, 0x420
    ctx->pc = 0x3d4640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1056 << 16));
label_3d4644:
    // 0x3d4644: 0x7ea30030  sq          $v1, 0x30($s5)
    ctx->pc = 0x3d4644u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 3));
label_3d4648:
    // 0x3d4648: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x3d4648u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
label_3d464c:
    // 0x3d464c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3d464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3d4650:
    // 0x3d4650: 0xaec40024  sw          $a0, 0x24($s6)
    ctx->pc = 0x3d4650u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 4));
label_3d4654:
    // 0x3d4654: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3d4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d4658:
    // 0x3d4658: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3d4658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3d465c:
    // 0x3d465c: 0x10000096  b           . + 4 + (0x96 << 2)
label_3d4660:
    if (ctx->pc == 0x3D4660u) {
        ctx->pc = 0x3D4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D465Cu;
        // 0x3d4660: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4664u;
        goto label_3d4664;
    }
    ctx->pc = 0x3D465Cu;
    {
        const bool branch_taken_0x3d465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D465Cu;
        // 0x3d4660: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d465c) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D4664u;
label_3d4664:
    // 0x3d4664: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d4664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d4668:
    // 0x3d4668: 0xc0ea12a  jal         func_3A84A8
label_3d466c:
    if (ctx->pc == 0x3D466Cu) {
        ctx->pc = 0x3D466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4668u;
        // 0x3d466c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4670u;
        goto label_3d4670;
    }
    ctx->pc = 0x3D4668u;
    SET_GPR_U32(ctx, 31, 0x3D4670u);
    ctx->pc = 0x3D466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4668u;
    // 0x3d466c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D4668u, 0x3D4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4670u;
label_3d4670:
    // 0x3d4670: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d4670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4674:
    // 0x3d4674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4678:
    // 0x3d4678: 0xc0ea14c  jal         func_3A8530
label_3d467c:
    if (ctx->pc == 0x3D467Cu) {
        ctx->pc = 0x3D467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4678u;
        // 0x3d467c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4680u;
        goto label_3d4680;
    }
    ctx->pc = 0x3D4678u;
    SET_GPR_U32(ctx, 31, 0x3D4680u);
    ctx->pc = 0x3D467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4678u;
    // 0x3d467c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D4678u, 0x3D4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4680u;
label_3d4680:
    // 0x3d4680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4684:
    // 0x3d4684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d4684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4688:
    // 0x3d4688: 0xaec30024  sw          $v1, 0x24($s6)
    ctx->pc = 0x3d4688u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 3));
label_3d468c:
    // 0x3d468c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3d468cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4690:
    // 0x3d4690: 0xaec40020  sw          $a0, 0x20($s6)
    ctx->pc = 0x3d4690u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 4));
label_3d4694:
    // 0x3d4694: 0x10000088  b           . + 4 + (0x88 << 2)
label_3d4698:
    if (ctx->pc == 0x3D4698u) {
        ctx->pc = 0x3D4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4694u;
        // 0x3d4698: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D469Cu;
        goto label_3d469c;
    }
    ctx->pc = 0x3D4694u;
    {
        const bool branch_taken_0x3d4694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4694u;
        // 0x3d4698: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4694) {
            ctx->pc = 0x3D48B8u;
            goto label_3d48b8;
        }
    }
    ctx->pc = 0x3D469Cu;
label_3d469c:
    // 0x3d469c: 0xc0ea146  jal         func_3A8518
label_3d46a0:
    if (ctx->pc == 0x3D46A0u) {
        ctx->pc = 0x3D46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D469Cu;
        // 0x3d46a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46A4u;
        goto label_3d46a4;
    }
    ctx->pc = 0x3D469Cu;
    SET_GPR_U32(ctx, 31, 0x3D46A4u);
    ctx->pc = 0x3D46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D469Cu;
    // 0x3d46a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D469Cu, 0x3D46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46A4u;
label_3d46a4:
    // 0x3d46a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d46a8:
    // 0x3d46a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d46a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d46ac:
    // 0x3d46ac: 0xc0ea12a  jal         func_3A84A8
label_3d46b0:
    if (ctx->pc == 0x3D46B0u) {
        ctx->pc = 0x3D46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46ACu;
        // 0x3d46b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46B4u;
        goto label_3d46b4;
    }
    ctx->pc = 0x3D46ACu;
    SET_GPR_U32(ctx, 31, 0x3D46B4u);
    ctx->pc = 0x3D46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46ACu;
    // 0x3d46b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D46ACu, 0x3D46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46B4u;
label_3d46b4:
    // 0x3d46b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d46b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d46b8:
    // 0x3d46b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d46bc:
    // 0x3d46bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d46bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d46c0:
    // 0x3d46c0: 0xc0ea12a  jal         func_3A84A8
label_3d46c4:
    if (ctx->pc == 0x3D46C4u) {
        ctx->pc = 0x3D46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46C0u;
        // 0x3d46c4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46C8u;
        goto label_3d46c8;
    }
    ctx->pc = 0x3D46C0u;
    SET_GPR_U32(ctx, 31, 0x3D46C8u);
    ctx->pc = 0x3D46C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46C0u;
    // 0x3d46c4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D46C0u, 0x3D46C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46C8u;
label_3d46c8:
    // 0x3d46c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d46c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d46cc:
    // 0x3d46cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d46ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d46d0:
    // 0x3d46d0: 0xc0ea146  jal         func_3A8518
label_3d46d4:
    if (ctx->pc == 0x3D46D4u) {
        ctx->pc = 0x3D46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46D0u;
        // 0x3d46d4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46D8u;
        goto label_3d46d8;
    }
    ctx->pc = 0x3D46D0u;
    SET_GPR_U32(ctx, 31, 0x3D46D8u);
    ctx->pc = 0x3D46D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46D0u;
    // 0x3d46d4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D46D0u, 0x3D46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46D8u;
label_3d46d8:
    // 0x3d46d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d46d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d46dc:
    // 0x3d46dc: 0xc0ea14c  jal         func_3A8530
label_3d46e0:
    if (ctx->pc == 0x3D46E0u) {
        ctx->pc = 0x3D46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D46DCu;
        // 0x3d46e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D46E4u;
        goto label_3d46e4;
    }
    ctx->pc = 0x3D46DCu;
    SET_GPR_U32(ctx, 31, 0x3D46E4u);
    ctx->pc = 0x3D46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D46DCu;
    // 0x3d46e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D46DCu, 0x3D46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D46E4u;
label_3d46e4:
    // 0x3d46e4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d46e8:
    // 0x3d46e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d46e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d46ec:
    // 0x3d46ec: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3d46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3d46f0:
    // 0x3d46f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d46f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d46f4:
    // 0x3d46f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3d46f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d46f8:
    // 0x3d46f8: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x3d46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
label_3d46fc:
    // 0x3d46fc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3d46fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3d4700:
    // 0x3d4700: 0xc0e896e  jal         func_3A25B8
label_3d4704:
    if (ctx->pc == 0x3D4704u) {
        ctx->pc = 0x3D4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4700u;
        // 0x3d4704: 0x7ea30040  sq          $v1, 0x40($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4708u;
        goto label_3d4708;
    }
    ctx->pc = 0x3D4700u;
    SET_GPR_U32(ctx, 31, 0x3D4708u);
    ctx->pc = 0x3D4704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4700u;
    // 0x3d4704: 0x7ea30040  sq          $v1, 0x40($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3D4700u, 0x3D4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4708u;
label_3d4708:
    // 0x3d4708: 0xaea20058  sw          $v0, 0x58($s5)
    ctx->pc = 0x3d4708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
label_3d470c:
    // 0x3d470c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4710:
    // 0x3d4710: 0xc0e896c  jal         func_3A25B0
label_3d4714:
    if (ctx->pc == 0x3D4714u) {
        ctx->pc = 0x3D4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4710u;
        // 0x3d4714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4718u;
        goto label_3d4718;
    }
    ctx->pc = 0x3D4710u;
    SET_GPR_U32(ctx, 31, 0x3D4718u);
    ctx->pc = 0x3D4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4710u;
    // 0x3d4714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3D4710u, 0x3D4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4718u;
label_3d4718:
    // 0x3d4718: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3d4718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d471c:
    // 0x3d471c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3d471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3d4720:
    // 0x3d4720: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x3d4720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3d4724:
    // 0x3d4724: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d4724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d4728:
    // 0x3d4728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d472c:
    if (ctx->pc == 0x3D472Cu) {
        ctx->pc = 0x3D472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4728u;
        // 0x3d472c: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4730u;
        goto label_3d4730;
    }
    ctx->pc = 0x3D4728u;
    {
        const bool branch_taken_0x3d4728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4728u;
        // 0x3d472c: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4728) {
            ctx->pc = 0x3D4738u;
            goto label_3d4738;
        }
    }
    ctx->pc = 0x3D4730u;
label_3d4730:
    // 0x3d4730: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x3d4730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_3d4734:
    // 0x3d4734: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3d4734u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3d4738:
    // 0x3d4738: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3d4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3d473c:
    // 0x3d473c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3d473cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_3d4740:
    // 0x3d4740: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3d4740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d4744:
    // 0x3d4744: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d4748:
    if (ctx->pc == 0x3D4748u) {
        ctx->pc = 0x3D4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4744u;
        // 0x3d4748: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D474Cu;
        goto label_3d474c;
    }
    ctx->pc = 0x3D4744u;
    {
        const bool branch_taken_0x3d4744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4744u;
        // 0x3d4748: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4744) {
            ctx->pc = 0x3D4750u;
            goto label_3d4750;
        }
    }
    ctx->pc = 0x3D474Cu;
label_3d474c:
    // 0x3d474c: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3d474cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3d4750:
    // 0x3d4750: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d4750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4754:
    // 0x3d4754: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3d4754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d4758:
    // 0x3d4758: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d4758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d475c:
    // 0x3d475c: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x3d475cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
label_3d4760:
    // 0x3d4760: 0x16600029  bnez        $s3, . + 4 + (0x29 << 2)
label_3d4764:
    if (ctx->pc == 0x3D4764u) {
        ctx->pc = 0x3D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4760u;
        // 0x3d4764: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4768u;
        goto label_3d4768;
    }
    ctx->pc = 0x3D4760u;
    {
        const bool branch_taken_0x3d4760 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4760u;
        // 0x3d4764: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4760) {
            ctx->pc = 0x3D4808u;
            goto label_3d4808;
        }
    }
    ctx->pc = 0x3D4768u;
label_3d4768:
    // 0x3d4768: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d476c:
    // 0x3d476c: 0xc0e8e26  jal         func_3A3898
label_3d4770:
    if (ctx->pc == 0x3D4770u) {
        ctx->pc = 0x3D4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D476Cu;
        // 0x3d4770: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4774u;
        goto label_3d4774;
    }
    ctx->pc = 0x3D476Cu;
    SET_GPR_U32(ctx, 31, 0x3D4774u);
    ctx->pc = 0x3D4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D476Cu;
    // 0x3d4770: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3D476Cu, 0x3D4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4774u;
label_3d4774:
    // 0x3d4774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d4774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d4778:
    // 0x3d4778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d4778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d477c:
    // 0x3d477c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d4780:
    // 0x3d4780: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3d4780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3d4784:
    // 0x3d4784: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d4784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d4788:
    // 0x3d4788: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3d4788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d478c:
    // 0x3d478c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d478cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4790:
    // 0x3d4790: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x3d4790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_3d4794:
    // 0x3d4794: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d4794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d4798:
    // 0x3d4798: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d479c:
    // 0x3d479c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d479cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d47a0:
    // 0x3d47a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d47a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d47a4:
    // 0x3d47a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d47a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d47a8:
    // 0x3d47a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d47a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d47ac:
    // 0x3d47ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d47acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d47b0:
    // 0x3d47b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d47b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d47b4:
    // 0x3d47b4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d47b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d47b8:
    // 0x3d47b8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d47b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d47bc:
    // 0x3d47bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d47bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d47c0:
    // 0x3d47c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d47c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d47c4:
    // 0x3d47c4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d47c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d47c8:
    // 0x3d47c8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d47c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d47cc:
    // 0x3d47cc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d47ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d47d0:
    // 0x3d47d0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d47d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d47d4:
    // 0x3d47d4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d47d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d47d8:
    // 0x3d47d8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d47d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d47dc:
    // 0x3d47dc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d47dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d47e0:
    // 0x3d47e0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3d47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3d47e4:
    // 0x3d47e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d47e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d47e8:
    // 0x3d47e8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3d47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3d47ec:
    // 0x3d47ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d47f0:
    // 0x3d47f0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3d47f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3d47f4:
    // 0x3d47f4: 0xc136b18  jal         func_4DAC60
label_3d47f8:
    if (ctx->pc == 0x3D47F8u) {
        ctx->pc = 0x3D47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47F4u;
        // 0x3d47f8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D47FCu;
        goto label_3d47fc;
    }
    ctx->pc = 0x3D47F4u;
    SET_GPR_U32(ctx, 31, 0x3D47FCu);
    ctx->pc = 0x3D47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D47F4u;
    // 0x3d47f8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D47F4u, 0x3D47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D47FCu;
label_3d47fc:
    // 0x3d47fc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3d47fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d4800:
    // 0x3d4800: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x3d4800u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_3d4804:
    // 0x3d4804: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3d4804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3d4808:
    // 0x3d4808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d480c:
    // 0x3d480c: 0xc0ea176  jal         func_3A85D8
label_3d4810:
    if (ctx->pc == 0x3D4810u) {
        ctx->pc = 0x3D4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D480Cu;
        // 0x3d4810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4814u;
        goto label_3d4814;
    }
    ctx->pc = 0x3D480Cu;
    SET_GPR_U32(ctx, 31, 0x3D4814u);
    ctx->pc = 0x3D4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D480Cu;
    // 0x3d4810: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3D480Cu, 0x3D4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4814u;
label_3d4814:
    // 0x3d4814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d4814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d4818:
    // 0x3d4818: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d4818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d481c:
    // 0x3d481c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d4820:
    // 0x3d4820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d4820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4824:
    // 0x3d4824: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d4828:
    // 0x3d4828: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d4828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d482c:
    // 0x3d482c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d4830:
    // 0x3d4830: 0x40f809  jalr        $v0
label_3d4834:
    if (ctx->pc == 0x3D4834u) {
        ctx->pc = 0x3D4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4830u;
        // 0x3d4834: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4838u;
        goto label_3d4838;
    }
    ctx->pc = 0x3D4830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4838u);
        ctx->pc = 0x3D4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4830u;
        // 0x3d4834: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4830u, 0x3D4838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4838u;
label_3d4838:
    // 0x3d4838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d4838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d483c:
    // 0x3d483c: 0xc0e8e26  jal         func_3A3898
label_3d4840:
    if (ctx->pc == 0x3D4840u) {
        ctx->pc = 0x3D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D483Cu;
        // 0x3d4840: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4844u;
        goto label_3d4844;
    }
    ctx->pc = 0x3D483Cu;
    SET_GPR_U32(ctx, 31, 0x3D4844u);
    ctx->pc = 0x3D4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D483Cu;
    // 0x3d4840: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3D483Cu, 0x3D4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4844u;
label_3d4844:
    // 0x3d4844: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d4844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d4848:
    // 0x3d4848: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d484c:
    // 0x3d484c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3d484cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3d4850:
    // 0x3d4850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d4854:
    // 0x3d4854: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3d4854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3d4858:
    // 0x3d4858: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3d4858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d485c:
    // 0x3d485c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3d485cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4860:
    // 0x3d4860: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d4860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d4864:
    // 0x3d4864: 0xc0e8dee  jal         func_3A37B8
label_3d4868:
    if (ctx->pc == 0x3D4868u) {
        ctx->pc = 0x3D4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4864u;
        // 0x3d4868: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D486Cu;
        goto label_3d486c;
    }
    ctx->pc = 0x3D4864u;
    SET_GPR_U32(ctx, 31, 0x3D486Cu);
    ctx->pc = 0x3D4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4864u;
    // 0x3d4868: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3D4864u, 0x3D486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D486Cu;
label_3d486c:
    // 0x3d486c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d486cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d4870:
    // 0x3d4870: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d4870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d4874:
    // 0x3d4874: 0xc0ea164  jal         func_3A8590
label_3d4878:
    if (ctx->pc == 0x3D4878u) {
        ctx->pc = 0x3D4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4874u;
        // 0x3d4878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D487Cu;
        goto label_3d487c;
    }
    ctx->pc = 0x3D4874u;
    SET_GPR_U32(ctx, 31, 0x3D487Cu);
    ctx->pc = 0x3D4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4874u;
    // 0x3d4878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8590u, 0x3D4874u, 0x3D487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D487Cu;
label_3d487c:
    // 0x3d487c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d487cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d4880:
    // 0x3d4880: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d4880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d4884:
    // 0x3d4884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4888:
    // 0x3d4888: 0xc0ea158  jal         func_3A8560
label_3d488c:
    if (ctx->pc == 0x3D488Cu) {
        ctx->pc = 0x3D488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4888u;
        // 0x3d488c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4890u;
        goto label_3d4890;
    }
    ctx->pc = 0x3D4888u;
    SET_GPR_U32(ctx, 31, 0x3D4890u);
    ctx->pc = 0x3D488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4888u;
    // 0x3d488c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3D4888u, 0x3D4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4890u;
label_3d4890:
    // 0x3d4890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d4894:
    // 0x3d4894: 0xc0ea16a  jal         func_3A85A8
label_3d4898:
    if (ctx->pc == 0x3D4898u) {
        ctx->pc = 0x3D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4894u;
        // 0x3d4898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D489Cu;
        goto label_3d489c;
    }
    ctx->pc = 0x3D4894u;
    SET_GPR_U32(ctx, 31, 0x3D489Cu);
    ctx->pc = 0x3D4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4894u;
    // 0x3d4898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D4894u, 0x3D489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D489Cu;
label_3d489c:
    // 0x3d489c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d48a0:
    // 0x3d48a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d48a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d48a4:
    // 0x3d48a4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3d48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3d48a8:
    // 0x3d48a8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3d48a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3d48ac:
    // 0x3d48ac: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3d48b0:
    // 0x3d48b0: 0x40f809  jalr        $v0
label_3d48b4:
    if (ctx->pc == 0x3D48B4u) {
        ctx->pc = 0x3D48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48B0u;
        // 0x3d48b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D48B8u;
        goto label_3d48b8;
    }
    ctx->pc = 0x3D48B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D48B8u);
        ctx->pc = 0x3D48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48B0u;
        // 0x3d48b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D48B0u, 0x3D48B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D48B8u;
label_3d48b8:
    // 0x3d48b8: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3d48b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d48bc:
    // 0x3d48bc: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3d48bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d48c0:
    // 0x3d48c0: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d48c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d48c4:
    // 0x3d48c4: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d48c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d48c8:
    // 0x3d48c8: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d48c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d48cc:
    // 0x3d48cc: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d48ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d48d0:
    // 0x3d48d0: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d48d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d48d4:
    // 0x3d48d4: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d48d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d48d8:
    // 0x3d48d8: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x3d48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d48dc:
    // 0x3d48dc: 0x3e00008  jr          $ra
label_3d48e0:
    if (ctx->pc == 0x3D48E0u) {
        ctx->pc = 0x3D48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48DCu;
        // 0x3d48e0: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D48E4u;
        goto label_3d48e4;
    }
    ctx->pc = 0x3D48DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48DCu;
        // 0x3d48e0: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D48DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D48E4u;
label_3d48e4:
    // 0x3d48e4: 0x0  nop
    ctx->pc = 0x3d48e4u;
    // NOP
    ctx->pc = 0x3d48e8u;
}
