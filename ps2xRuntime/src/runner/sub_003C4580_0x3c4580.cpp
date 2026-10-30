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

// Function: sub_003C4580
// Address: 0x3c4580 - 0x3c4a48
void sub_003C4580_0x3c4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4580_0x3c4580");
#endif

    switch (ctx->pc) {
        case 0x3c4580u: goto label_3c4580;
        case 0x3c4584u: goto label_3c4584;
        case 0x3c4588u: goto label_3c4588;
        case 0x3c458cu: goto label_3c458c;
        case 0x3c4590u: goto label_3c4590;
        case 0x3c4594u: goto label_3c4594;
        case 0x3c4598u: goto label_3c4598;
        case 0x3c459cu: goto label_3c459c;
        case 0x3c45a0u: goto label_3c45a0;
        case 0x3c45a4u: goto label_3c45a4;
        case 0x3c45a8u: goto label_3c45a8;
        case 0x3c45acu: goto label_3c45ac;
        case 0x3c45b0u: goto label_3c45b0;
        case 0x3c45b4u: goto label_3c45b4;
        case 0x3c45b8u: goto label_3c45b8;
        case 0x3c45bcu: goto label_3c45bc;
        case 0x3c45c0u: goto label_3c45c0;
        case 0x3c45c4u: goto label_3c45c4;
        case 0x3c45c8u: goto label_3c45c8;
        case 0x3c45ccu: goto label_3c45cc;
        case 0x3c45d0u: goto label_3c45d0;
        case 0x3c45d4u: goto label_3c45d4;
        case 0x3c45d8u: goto label_3c45d8;
        case 0x3c45dcu: goto label_3c45dc;
        case 0x3c45e0u: goto label_3c45e0;
        case 0x3c45e4u: goto label_3c45e4;
        case 0x3c45e8u: goto label_3c45e8;
        case 0x3c45ecu: goto label_3c45ec;
        case 0x3c45f0u: goto label_3c45f0;
        case 0x3c45f4u: goto label_3c45f4;
        case 0x3c45f8u: goto label_3c45f8;
        case 0x3c45fcu: goto label_3c45fc;
        case 0x3c4600u: goto label_3c4600;
        case 0x3c4604u: goto label_3c4604;
        case 0x3c4608u: goto label_3c4608;
        case 0x3c460cu: goto label_3c460c;
        case 0x3c4610u: goto label_3c4610;
        case 0x3c4614u: goto label_3c4614;
        case 0x3c4618u: goto label_3c4618;
        case 0x3c461cu: goto label_3c461c;
        case 0x3c4620u: goto label_3c4620;
        case 0x3c4624u: goto label_3c4624;
        case 0x3c4628u: goto label_3c4628;
        case 0x3c462cu: goto label_3c462c;
        case 0x3c4630u: goto label_3c4630;
        case 0x3c4634u: goto label_3c4634;
        case 0x3c4638u: goto label_3c4638;
        case 0x3c463cu: goto label_3c463c;
        case 0x3c4640u: goto label_3c4640;
        case 0x3c4644u: goto label_3c4644;
        case 0x3c4648u: goto label_3c4648;
        case 0x3c464cu: goto label_3c464c;
        case 0x3c4650u: goto label_3c4650;
        case 0x3c4654u: goto label_3c4654;
        case 0x3c4658u: goto label_3c4658;
        case 0x3c465cu: goto label_3c465c;
        case 0x3c4660u: goto label_3c4660;
        case 0x3c4664u: goto label_3c4664;
        case 0x3c4668u: goto label_3c4668;
        case 0x3c466cu: goto label_3c466c;
        case 0x3c4670u: goto label_3c4670;
        case 0x3c4674u: goto label_3c4674;
        case 0x3c4678u: goto label_3c4678;
        case 0x3c467cu: goto label_3c467c;
        case 0x3c4680u: goto label_3c4680;
        case 0x3c4684u: goto label_3c4684;
        case 0x3c4688u: goto label_3c4688;
        case 0x3c468cu: goto label_3c468c;
        case 0x3c4690u: goto label_3c4690;
        case 0x3c4694u: goto label_3c4694;
        case 0x3c4698u: goto label_3c4698;
        case 0x3c469cu: goto label_3c469c;
        case 0x3c46a0u: goto label_3c46a0;
        case 0x3c46a4u: goto label_3c46a4;
        case 0x3c46a8u: goto label_3c46a8;
        case 0x3c46acu: goto label_3c46ac;
        case 0x3c46b0u: goto label_3c46b0;
        case 0x3c46b4u: goto label_3c46b4;
        case 0x3c46b8u: goto label_3c46b8;
        case 0x3c46bcu: goto label_3c46bc;
        case 0x3c46c0u: goto label_3c46c0;
        case 0x3c46c4u: goto label_3c46c4;
        case 0x3c46c8u: goto label_3c46c8;
        case 0x3c46ccu: goto label_3c46cc;
        case 0x3c46d0u: goto label_3c46d0;
        case 0x3c46d4u: goto label_3c46d4;
        case 0x3c46d8u: goto label_3c46d8;
        case 0x3c46dcu: goto label_3c46dc;
        case 0x3c46e0u: goto label_3c46e0;
        case 0x3c46e4u: goto label_3c46e4;
        case 0x3c46e8u: goto label_3c46e8;
        case 0x3c46ecu: goto label_3c46ec;
        case 0x3c46f0u: goto label_3c46f0;
        case 0x3c46f4u: goto label_3c46f4;
        case 0x3c46f8u: goto label_3c46f8;
        case 0x3c46fcu: goto label_3c46fc;
        case 0x3c4700u: goto label_3c4700;
        case 0x3c4704u: goto label_3c4704;
        case 0x3c4708u: goto label_3c4708;
        case 0x3c470cu: goto label_3c470c;
        case 0x3c4710u: goto label_3c4710;
        case 0x3c4714u: goto label_3c4714;
        case 0x3c4718u: goto label_3c4718;
        case 0x3c471cu: goto label_3c471c;
        case 0x3c4720u: goto label_3c4720;
        case 0x3c4724u: goto label_3c4724;
        case 0x3c4728u: goto label_3c4728;
        case 0x3c472cu: goto label_3c472c;
        case 0x3c4730u: goto label_3c4730;
        case 0x3c4734u: goto label_3c4734;
        case 0x3c4738u: goto label_3c4738;
        case 0x3c473cu: goto label_3c473c;
        case 0x3c4740u: goto label_3c4740;
        case 0x3c4744u: goto label_3c4744;
        case 0x3c4748u: goto label_3c4748;
        case 0x3c474cu: goto label_3c474c;
        case 0x3c4750u: goto label_3c4750;
        case 0x3c4754u: goto label_3c4754;
        case 0x3c4758u: goto label_3c4758;
        case 0x3c475cu: goto label_3c475c;
        case 0x3c4760u: goto label_3c4760;
        case 0x3c4764u: goto label_3c4764;
        case 0x3c4768u: goto label_3c4768;
        case 0x3c476cu: goto label_3c476c;
        case 0x3c4770u: goto label_3c4770;
        case 0x3c4774u: goto label_3c4774;
        case 0x3c4778u: goto label_3c4778;
        case 0x3c477cu: goto label_3c477c;
        case 0x3c4780u: goto label_3c4780;
        case 0x3c4784u: goto label_3c4784;
        case 0x3c4788u: goto label_3c4788;
        case 0x3c478cu: goto label_3c478c;
        case 0x3c4790u: goto label_3c4790;
        case 0x3c4794u: goto label_3c4794;
        case 0x3c4798u: goto label_3c4798;
        case 0x3c479cu: goto label_3c479c;
        case 0x3c47a0u: goto label_3c47a0;
        case 0x3c47a4u: goto label_3c47a4;
        case 0x3c47a8u: goto label_3c47a8;
        case 0x3c47acu: goto label_3c47ac;
        case 0x3c47b0u: goto label_3c47b0;
        case 0x3c47b4u: goto label_3c47b4;
        case 0x3c47b8u: goto label_3c47b8;
        case 0x3c47bcu: goto label_3c47bc;
        case 0x3c47c0u: goto label_3c47c0;
        case 0x3c47c4u: goto label_3c47c4;
        case 0x3c47c8u: goto label_3c47c8;
        case 0x3c47ccu: goto label_3c47cc;
        case 0x3c47d0u: goto label_3c47d0;
        case 0x3c47d4u: goto label_3c47d4;
        case 0x3c47d8u: goto label_3c47d8;
        case 0x3c47dcu: goto label_3c47dc;
        case 0x3c47e0u: goto label_3c47e0;
        case 0x3c47e4u: goto label_3c47e4;
        case 0x3c47e8u: goto label_3c47e8;
        case 0x3c47ecu: goto label_3c47ec;
        case 0x3c47f0u: goto label_3c47f0;
        case 0x3c47f4u: goto label_3c47f4;
        case 0x3c47f8u: goto label_3c47f8;
        case 0x3c47fcu: goto label_3c47fc;
        case 0x3c4800u: goto label_3c4800;
        case 0x3c4804u: goto label_3c4804;
        case 0x3c4808u: goto label_3c4808;
        case 0x3c480cu: goto label_3c480c;
        case 0x3c4810u: goto label_3c4810;
        case 0x3c4814u: goto label_3c4814;
        case 0x3c4818u: goto label_3c4818;
        case 0x3c481cu: goto label_3c481c;
        case 0x3c4820u: goto label_3c4820;
        case 0x3c4824u: goto label_3c4824;
        case 0x3c4828u: goto label_3c4828;
        case 0x3c482cu: goto label_3c482c;
        case 0x3c4830u: goto label_3c4830;
        case 0x3c4834u: goto label_3c4834;
        case 0x3c4838u: goto label_3c4838;
        case 0x3c483cu: goto label_3c483c;
        case 0x3c4840u: goto label_3c4840;
        case 0x3c4844u: goto label_3c4844;
        case 0x3c4848u: goto label_3c4848;
        case 0x3c484cu: goto label_3c484c;
        case 0x3c4850u: goto label_3c4850;
        case 0x3c4854u: goto label_3c4854;
        case 0x3c4858u: goto label_3c4858;
        case 0x3c485cu: goto label_3c485c;
        case 0x3c4860u: goto label_3c4860;
        case 0x3c4864u: goto label_3c4864;
        case 0x3c4868u: goto label_3c4868;
        case 0x3c486cu: goto label_3c486c;
        case 0x3c4870u: goto label_3c4870;
        case 0x3c4874u: goto label_3c4874;
        case 0x3c4878u: goto label_3c4878;
        case 0x3c487cu: goto label_3c487c;
        case 0x3c4880u: goto label_3c4880;
        case 0x3c4884u: goto label_3c4884;
        case 0x3c4888u: goto label_3c4888;
        case 0x3c488cu: goto label_3c488c;
        case 0x3c4890u: goto label_3c4890;
        case 0x3c4894u: goto label_3c4894;
        case 0x3c4898u: goto label_3c4898;
        case 0x3c489cu: goto label_3c489c;
        case 0x3c48a0u: goto label_3c48a0;
        case 0x3c48a4u: goto label_3c48a4;
        case 0x3c48a8u: goto label_3c48a8;
        case 0x3c48acu: goto label_3c48ac;
        case 0x3c48b0u: goto label_3c48b0;
        case 0x3c48b4u: goto label_3c48b4;
        case 0x3c48b8u: goto label_3c48b8;
        case 0x3c48bcu: goto label_3c48bc;
        case 0x3c48c0u: goto label_3c48c0;
        case 0x3c48c4u: goto label_3c48c4;
        case 0x3c48c8u: goto label_3c48c8;
        case 0x3c48ccu: goto label_3c48cc;
        case 0x3c48d0u: goto label_3c48d0;
        case 0x3c48d4u: goto label_3c48d4;
        case 0x3c48d8u: goto label_3c48d8;
        case 0x3c48dcu: goto label_3c48dc;
        case 0x3c48e0u: goto label_3c48e0;
        case 0x3c48e4u: goto label_3c48e4;
        case 0x3c48e8u: goto label_3c48e8;
        case 0x3c48ecu: goto label_3c48ec;
        case 0x3c48f0u: goto label_3c48f0;
        case 0x3c48f4u: goto label_3c48f4;
        case 0x3c48f8u: goto label_3c48f8;
        case 0x3c48fcu: goto label_3c48fc;
        case 0x3c4900u: goto label_3c4900;
        case 0x3c4904u: goto label_3c4904;
        case 0x3c4908u: goto label_3c4908;
        case 0x3c490cu: goto label_3c490c;
        case 0x3c4910u: goto label_3c4910;
        case 0x3c4914u: goto label_3c4914;
        case 0x3c4918u: goto label_3c4918;
        case 0x3c491cu: goto label_3c491c;
        case 0x3c4920u: goto label_3c4920;
        case 0x3c4924u: goto label_3c4924;
        case 0x3c4928u: goto label_3c4928;
        case 0x3c492cu: goto label_3c492c;
        case 0x3c4930u: goto label_3c4930;
        case 0x3c4934u: goto label_3c4934;
        case 0x3c4938u: goto label_3c4938;
        case 0x3c493cu: goto label_3c493c;
        case 0x3c4940u: goto label_3c4940;
        case 0x3c4944u: goto label_3c4944;
        case 0x3c4948u: goto label_3c4948;
        case 0x3c494cu: goto label_3c494c;
        case 0x3c4950u: goto label_3c4950;
        case 0x3c4954u: goto label_3c4954;
        case 0x3c4958u: goto label_3c4958;
        case 0x3c495cu: goto label_3c495c;
        case 0x3c4960u: goto label_3c4960;
        case 0x3c4964u: goto label_3c4964;
        case 0x3c4968u: goto label_3c4968;
        case 0x3c496cu: goto label_3c496c;
        case 0x3c4970u: goto label_3c4970;
        case 0x3c4974u: goto label_3c4974;
        case 0x3c4978u: goto label_3c4978;
        case 0x3c497cu: goto label_3c497c;
        case 0x3c4980u: goto label_3c4980;
        case 0x3c4984u: goto label_3c4984;
        case 0x3c4988u: goto label_3c4988;
        case 0x3c498cu: goto label_3c498c;
        case 0x3c4990u: goto label_3c4990;
        case 0x3c4994u: goto label_3c4994;
        case 0x3c4998u: goto label_3c4998;
        case 0x3c499cu: goto label_3c499c;
        case 0x3c49a0u: goto label_3c49a0;
        case 0x3c49a4u: goto label_3c49a4;
        case 0x3c49a8u: goto label_3c49a8;
        case 0x3c49acu: goto label_3c49ac;
        case 0x3c49b0u: goto label_3c49b0;
        case 0x3c49b4u: goto label_3c49b4;
        case 0x3c49b8u: goto label_3c49b8;
        case 0x3c49bcu: goto label_3c49bc;
        case 0x3c49c0u: goto label_3c49c0;
        case 0x3c49c4u: goto label_3c49c4;
        case 0x3c49c8u: goto label_3c49c8;
        case 0x3c49ccu: goto label_3c49cc;
        case 0x3c49d0u: goto label_3c49d0;
        case 0x3c49d4u: goto label_3c49d4;
        case 0x3c49d8u: goto label_3c49d8;
        case 0x3c49dcu: goto label_3c49dc;
        case 0x3c49e0u: goto label_3c49e0;
        case 0x3c49e4u: goto label_3c49e4;
        case 0x3c49e8u: goto label_3c49e8;
        case 0x3c49ecu: goto label_3c49ec;
        case 0x3c49f0u: goto label_3c49f0;
        case 0x3c49f4u: goto label_3c49f4;
        case 0x3c49f8u: goto label_3c49f8;
        case 0x3c49fcu: goto label_3c49fc;
        case 0x3c4a00u: goto label_3c4a00;
        case 0x3c4a04u: goto label_3c4a04;
        case 0x3c4a08u: goto label_3c4a08;
        case 0x3c4a0cu: goto label_3c4a0c;
        case 0x3c4a10u: goto label_3c4a10;
        case 0x3c4a14u: goto label_3c4a14;
        case 0x3c4a18u: goto label_3c4a18;
        case 0x3c4a1cu: goto label_3c4a1c;
        case 0x3c4a20u: goto label_3c4a20;
        case 0x3c4a24u: goto label_3c4a24;
        case 0x3c4a28u: goto label_3c4a28;
        case 0x3c4a2cu: goto label_3c4a2c;
        case 0x3c4a30u: goto label_3c4a30;
        case 0x3c4a34u: goto label_3c4a34;
        case 0x3c4a38u: goto label_3c4a38;
        case 0x3c4a3cu: goto label_3c4a3c;
        case 0x3c4a40u: goto label_3c4a40;
        case 0x3c4a44u: goto label_3c4a44;
        default: break;
    }

    ctx->pc = 0x3c4580u;

label_3c4580:
    // 0x3c4580: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x3c4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_3c4584:
    // 0x3c4584: 0x7fb00530  sq          $s0, 0x530($sp)
    ctx->pc = 0x3c4584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 16));
label_3c4588:
    // 0x3c4588: 0x7fb10520  sq          $s1, 0x520($sp)
    ctx->pc = 0x3c4588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 17));
label_3c458c:
    // 0x3c458c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4590:
    // 0x3c4590: 0x7fb20510  sq          $s2, 0x510($sp)
    ctx->pc = 0x3c4590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 18));
label_3c4594:
    // 0x3c4594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4598:
    // 0x3c4598: 0x7fb30500  sq          $s3, 0x500($sp)
    ctx->pc = 0x3c4598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 19));
label_3c459c:
    // 0x3c459c: 0x7fb404f0  sq          $s4, 0x4F0($sp)
    ctx->pc = 0x3c459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 20));
label_3c45a0:
    // 0x3c45a0: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x3c45a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_3c45a4:
    // 0x3c45a4: 0xffbf04d0  sd          $ra, 0x4D0($sp)
    ctx->pc = 0x3c45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 31));
label_3c45a8:
    // 0x3c45a8: 0xe7b60550  swc1        $f22, 0x550($sp)
    ctx->pc = 0x3c45a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_3c45ac:
    // 0x3c45ac: 0xe7b50548  swc1        $f21, 0x548($sp)
    ctx->pc = 0x3c45acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_3c45b0:
    // 0x3c45b0: 0xe7b40540  swc1        $f20, 0x540($sp)
    ctx->pc = 0x3c45b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_3c45b4:
    // 0x3c45b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c45b8:
    // 0x3c45b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c45b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c45bc:
    // 0x3c45bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c45c0:
    // 0x3c45c0: 0x40f809  jalr        $v0
label_3c45c4:
    if (ctx->pc == 0x3C45C4u) {
        ctx->pc = 0x3C45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45C0u;
        // 0x3c45c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45C8u;
        goto label_3c45c8;
    }
    ctx->pc = 0x3C45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C45C8u);
        ctx->pc = 0x3C45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45C0u;
        // 0x3c45c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C45C0u, 0x3C45C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C45C8u;
label_3c45c8:
    // 0x3c45c8: 0xc0ea14c  jal         func_3A8530
label_3c45cc:
    if (ctx->pc == 0x3C45CCu) {
        ctx->pc = 0x3C45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45C8u;
        // 0x3c45cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45D0u;
        goto label_3c45d0;
    }
    ctx->pc = 0x3C45C8u;
    SET_GPR_U32(ctx, 31, 0x3C45D0u);
    ctx->pc = 0x3C45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45C8u;
    // 0x3c45cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C45C8u, 0x3C45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45D0u;
label_3c45d0:
    // 0x3c45d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c45d4:
    // 0x3c45d4: 0xc0ea12a  jal         func_3A84A8
label_3c45d8:
    if (ctx->pc == 0x3C45D8u) {
        ctx->pc = 0x3C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45D4u;
        // 0x3c45d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45DCu;
        goto label_3c45dc;
    }
    ctx->pc = 0x3C45D4u;
    SET_GPR_U32(ctx, 31, 0x3C45DCu);
    ctx->pc = 0x3C45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45D4u;
    // 0x3c45d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C45D4u, 0x3C45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45DCu;
label_3c45dc:
    // 0x3c45dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c45dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c45e0:
    // 0x3c45e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c45e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c45e4:
    // 0x3c45e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c45e8:
    // 0x3c45e8: 0xc0ea12a  jal         func_3A84A8
label_3c45ec:
    if (ctx->pc == 0x3C45ECu) {
        ctx->pc = 0x3C45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45E8u;
        // 0x3c45ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45F0u;
        goto label_3c45f0;
    }
    ctx->pc = 0x3C45E8u;
    SET_GPR_U32(ctx, 31, 0x3C45F0u);
    ctx->pc = 0x3C45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45E8u;
    // 0x3c45ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C45E8u, 0x3C45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45F0u;
label_3c45f0:
    // 0x3c45f0: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3c45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3c45f4:
    // 0x3c45f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c45f8:
    // 0x3c45f8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c45fc:
    // 0x3c45fc: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3c45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3c4600:
    // 0x3c4600: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c4600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4604:
    // 0x3c4604: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3c4604u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4608:
    // 0x3c4608: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3c4608u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c460c:
    // 0x3c460c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c4610:
    // 0x3c4610: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3c4610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3c4614:
    // 0x3c4614: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x3c4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_3c4618:
    // 0x3c4618: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3c4618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3c461c:
    // 0x3c461c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c4620:
    // 0x3c4620: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c4620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c4624:
    // 0x3c4624: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3c4624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3c4628:
    // 0x3c4628: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c4628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c462c:
    // 0x3c462c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c462cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c4630:
    // 0x3c4630: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c4630u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4634:
    // 0x3c4634: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c4634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4638:
    // 0x3c4638: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c4638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c463c:
    // 0x3c463c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c463cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c4640:
    // 0x3c4640: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c4640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4644:
    // 0x3c4644: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c4644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4648:
    // 0x3c4648: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c4648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c464c:
    // 0x3c464c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c464cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4650:
    // 0x3c4650: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c4650u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c4654:
    // 0x3c4654: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c4654u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4658:
    // 0x3c4658: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c4658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c465c:
    // 0x3c465c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c465cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4660:
    // 0x3c4660: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c4660u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c4664:
    // 0x3c4664: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c4668:
    // 0x3c4668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c4668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c466c:
    // 0x3c466c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x3c466cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3c4670:
    // 0x3c4670: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3c4670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4674:
    // 0x3c4674: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3c4674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3c4678:
    // 0x3c4678: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3c4678u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_3c467c:
    // 0x3c467c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c4680:
    // 0x3c4680: 0x26522e50  addiu       $s2, $s2, 0x2E50
    ctx->pc = 0x3c4680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11856));
label_3c4684:
    // 0x3c4684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4688:
    // 0x3c4688: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c4688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c468c:
    // 0x3c468c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4690:
    // 0x3c4690: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c4690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c4694:
    // 0x3c4694: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3c4694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c4698:
    // 0x3c4698: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c4698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c469c:
    // 0x3c469c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3c469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c46a0:
    // 0x3c46a0: 0xc0e9fa6  jal         func_3A7E98
label_3c46a4:
    if (ctx->pc == 0x3C46A4u) {
        ctx->pc = 0x3C46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46A0u;
        // 0x3c46a4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46A8u;
        goto label_3c46a8;
    }
    ctx->pc = 0x3C46A0u;
    SET_GPR_U32(ctx, 31, 0x3C46A8u);
    ctx->pc = 0x3C46A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46A0u;
    // 0x3c46a4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C46A0u, 0x3C46A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46A8u;
label_3c46a8:
    // 0x3c46a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3c46a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3c46ac:
    // 0x3c46ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c46acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c46b0:
    // 0x3c46b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c46b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c46b4:
    // 0x3c46b4: 0xc0f15bc  jal         func_3C56F0
label_3c46b8:
    if (ctx->pc == 0x3C46B8u) {
        ctx->pc = 0x3C46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46B4u;
        // 0x3c46b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46BCu;
        goto label_3c46bc;
    }
    ctx->pc = 0x3C46B4u;
    SET_GPR_U32(ctx, 31, 0x3C46BCu);
    ctx->pc = 0x3C46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46B4u;
    // 0x3c46b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C46B4u, 0x3C46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46BCu;
label_3c46bc:
    // 0x3c46bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c46bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c46c0:
    // 0x3c46c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c46c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c46c4:
    // 0x3c46c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c46c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c46c8:
    // 0x3c46c8: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x3c46c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3c46cc:
    // 0x3c46cc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3c46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3c46d0:
    // 0x3c46d0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c46d4:
    // 0x3c46d4: 0xe6b60004  swc1        $f22, 0x4($s5)
    ctx->pc = 0x3c46d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_3c46d8:
    // 0x3c46d8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3c46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3c46dc:
    // 0x3c46dc: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x3c46dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3c46e0:
    // 0x3c46e0: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3c46e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c46e4:
    // 0x3c46e4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c46e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c46e8:
    // 0x3c46e8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c46ec:
    // 0x3c46ec: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c46f0:
    // 0x3c46f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c46f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c46f4:
    // 0x3c46f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c46f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c46f8:
    // 0x3c46f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c46f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c46fc:
    // 0x3c46fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c46fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c4700:
    // 0x3c4700: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c4700u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4704:
    // 0x3c4704: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c4704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4708:
    // 0x3c4708: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c4708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c470c:
    // 0x3c470c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c470cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c4710:
    // 0x3c4710: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c4710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4714:
    // 0x3c4714: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c4714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4718:
    // 0x3c4718: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c4718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c471c:
    // 0x3c471c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c471cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4720:
    // 0x3c4720: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c4720u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c4724:
    // 0x3c4724: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c4724u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4728:
    // 0x3c4728: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c4728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c472c:
    // 0x3c472c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c472cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4730:
    // 0x3c4730: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c4730u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c4734:
    // 0x3c4734: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3c4734u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4738:
    // 0x3c4738: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3c4738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c473c:
    // 0x3c473c: 0x27b30460  addiu       $s3, $sp, 0x460
    ctx->pc = 0x3c473cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c4740:
    // 0x3c4740: 0x27b40470  addiu       $s4, $sp, 0x470
    ctx->pc = 0x3c4740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c4744:
    // 0x3c4744: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x3c4744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
label_3c4748:
    // 0x3c4748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c4748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c474c:
    // 0x3c474c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4750:
    // 0x3c4750: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c4754:
    // 0x3c4754: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c4758:
    // 0x3c4758: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c4758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c475c:
    // 0x3c475c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c4760:
    // 0x3c4760: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c4760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4764:
    // 0x3c4764: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c4764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c4768:
    // 0x3c4768: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c476c:
    // 0x3c476c: 0xc0e9fa6  jal         func_3A7E98
label_3c4770:
    if (ctx->pc == 0x3C4770u) {
        ctx->pc = 0x3C4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C476Cu;
        // 0x3c4770: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4774u;
        goto label_3c4774;
    }
    ctx->pc = 0x3C476Cu;
    SET_GPR_U32(ctx, 31, 0x3C4774u);
    ctx->pc = 0x3C4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C476Cu;
    // 0x3c4770: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C476Cu, 0x3C4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4774u;
label_3c4774:
    // 0x3c4774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4778:
    // 0x3c4778: 0xc0f15bc  jal         func_3C56F0
label_3c477c:
    if (ctx->pc == 0x3C477Cu) {
        ctx->pc = 0x3C477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4778u;
        // 0x3c477c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4780u;
        goto label_3c4780;
    }
    ctx->pc = 0x3C4778u;
    SET_GPR_U32(ctx, 31, 0x3C4780u);
    ctx->pc = 0x3C477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4778u;
    // 0x3c477c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C4778u, 0x3C4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4780u;
label_3c4780:
    // 0x3c4780: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c4780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c4784:
    // 0x3c4784: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c4784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4788:
    // 0x3c4788: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x3c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_3c478c:
    // 0x3c478c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3c478cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4790:
    // 0x3c4790: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c4790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c4794:
    // 0x3c4794: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3c4794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_3c4798:
    // 0x3c4798: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c479c:
    // 0x3c479c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c479cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c47a0:
    // 0x3c47a0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3c47a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3c47a4:
    // 0x3c47a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c47a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c47a8:
    // 0x3c47a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c47a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c47ac:
    // 0x3c47ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c47acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c47b0:
    // 0x3c47b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c47b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c47b4:
    // 0x3c47b4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c47b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c47b8:
    // 0x3c47b8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c47b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c47bc:
    // 0x3c47bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c47bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c47c0:
    // 0x3c47c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c47c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c47c4:
    // 0x3c47c4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c47c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c47c8:
    // 0x3c47c8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c47c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c47cc:
    // 0x3c47cc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c47ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c47d0:
    // 0x3c47d0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c47d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c47d4:
    // 0x3c47d4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c47d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c47d8:
    // 0x3c47d8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c47d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c47dc:
    // 0x3c47dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c47dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c47e0:
    // 0x3c47e0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c47e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c47e4:
    // 0x3c47e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c47e8:
    // 0x3c47e8: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c47ec:
    // 0x3c47ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c47ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c47f0:
    // 0x3c47f0: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3c47f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3c47f4:
    // 0x3c47f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c47f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c47f8:
    // 0x3c47f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c47fc:
    // 0x3c47fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c47fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4800:
    // 0x3c4800: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c4800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c4804:
    // 0x3c4804: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c4804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c4808:
    // 0x3c4808: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c480c:
    // 0x3c480c: 0xc0e9fa6  jal         func_3A7E98
label_3c4810:
    if (ctx->pc == 0x3C4810u) {
        ctx->pc = 0x3C4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C480Cu;
        // 0x3c4810: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4814u;
        goto label_3c4814;
    }
    ctx->pc = 0x3C480Cu;
    SET_GPR_U32(ctx, 31, 0x3C4814u);
    ctx->pc = 0x3C4810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C480Cu;
    // 0x3c4810: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C480Cu, 0x3C4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4814u;
label_3c4814:
    // 0x3c4814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4818:
    // 0x3c4818: 0xc0f15bc  jal         func_3C56F0
label_3c481c:
    if (ctx->pc == 0x3C481Cu) {
        ctx->pc = 0x3C481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4818u;
        // 0x3c481c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4820u;
        goto label_3c4820;
    }
    ctx->pc = 0x3C4818u;
    SET_GPR_U32(ctx, 31, 0x3C4820u);
    ctx->pc = 0x3C481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4818u;
    // 0x3c481c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C4818u, 0x3C4820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4820u;
label_3c4820:
    // 0x3c4820: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c4820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4824:
    // 0x3c4824: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3c4824u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c4828:
    // 0x3c4828: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c482c:
    // 0x3c482c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3c482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3c4830:
    // 0x3c4830: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3c4830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_3c4834:
    // 0x3c4834: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x3c4834u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3c4838:
    // 0x3c4838: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3c4838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c483c:
    // 0x3c483c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c483cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4840:
    // 0x3c4840: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c4844:
    // 0x3c4844: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c4848:
    // 0x3c4848: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c4848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c484c:
    // 0x3c484c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c484cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c4850:
    // 0x3c4850: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c4850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4854:
    // 0x3c4854: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c4854u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c4858:
    // 0x3c4858: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c4858u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c485c:
    // 0x3c485c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c485cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4860:
    // 0x3c4860: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c4860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4864:
    // 0x3c4864: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c4864u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c4868:
    // 0x3c4868: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c4868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c486c:
    // 0x3c486c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c486cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4870:
    // 0x3c4870: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c4870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c4874:
    // 0x3c4874: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c4874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4878:
    // 0x3c4878: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c4878u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c487c:
    // 0x3c487c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c487cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4880:
    // 0x3c4880: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c4880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4884:
    // 0x3c4884: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c4884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4888:
    // 0x3c4888: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c4888u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c488c:
    // 0x3c488c: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3c488cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4890:
    // 0x3c4890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4894:
    // 0x3c4894: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c4898:
    // 0x3c4898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c489c:
    // 0x3c489c: 0x7fa60450  sq          $a2, 0x450($sp)
    ctx->pc = 0x3c489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 6));
label_3c48a0:
    // 0x3c48a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c48a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c48a4:
    // 0x3c48a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c48a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c48a8:
    // 0x3c48a8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c48ac:
    // 0x3c48ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c48acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c48b0:
    // 0x3c48b0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c48b4:
    // 0x3c48b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c48b8:
    // 0x3c48b8: 0xc0e9fa6  jal         func_3A7E98
label_3c48bc:
    if (ctx->pc == 0x3C48BCu) {
        ctx->pc = 0x3C48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48B8u;
        // 0x3c48bc: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48C0u;
        goto label_3c48c0;
    }
    ctx->pc = 0x3C48B8u;
    SET_GPR_U32(ctx, 31, 0x3C48C0u);
    ctx->pc = 0x3C48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48B8u;
    // 0x3c48bc: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C48B8u, 0x3C48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48C0u;
label_3c48c0:
    // 0x3c48c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c48c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c48c4:
    // 0x3c48c4: 0xc0f15bc  jal         func_3C56F0
label_3c48c8:
    if (ctx->pc == 0x3C48C8u) {
        ctx->pc = 0x3C48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48C4u;
        // 0x3c48c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48CCu;
        goto label_3c48cc;
    }
    ctx->pc = 0x3C48C4u;
    SET_GPR_U32(ctx, 31, 0x3C48CCu);
    ctx->pc = 0x3C48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48C4u;
    // 0x3c48c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C48C4u, 0x3C48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48CCu;
label_3c48cc:
    // 0x3c48cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c48d0:
    // 0x3c48d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c48d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c48d4:
    // 0x3c48d4: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x3c48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_3c48d8:
    // 0x3c48d8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3c48d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3c48dc:
    // 0x3c48dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c48e0:
    // 0x3c48e0: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3c48e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_3c48e4:
    // 0x3c48e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c48e8:
    // 0x3c48e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c48e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c48ec:
    // 0x3c48ec: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3c48ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3c48f0:
    // 0x3c48f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c48f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c48f4:
    // 0x3c48f4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c48f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c48f8:
    // 0x3c48f8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c48f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c48fc:
    // 0x3c48fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c48fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4900:
    // 0x3c4900: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c4900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4904:
    // 0x3c4904: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c4904u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c4908:
    // 0x3c4908: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c4908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c490c:
    // 0x3c490c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c490cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c4910:
    // 0x3c4910: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c4910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c4914:
    // 0x3c4914: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c4914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4918:
    // 0x3c4918: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c4918u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c491c:
    // 0x3c491c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c491cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c4920:
    // 0x3c4920: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c4920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4924:
    // 0x3c4924: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c4924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c4928:
    // 0x3c4928: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c4928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c492c:
    // 0x3c492c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c492cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4930:
    // 0x3c4930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4934:
    // 0x3c4934: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c4934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c4938:
    // 0x3c4938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c4938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c493c:
    // 0x3c493c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3c493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3c4940:
    // 0x3c4940: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c4940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4944:
    // 0x3c4944: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c4944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c4948:
    // 0x3c4948: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c4948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c494c:
    // 0x3c494c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c4950:
    // 0x3c4950: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c4950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c4954:
    // 0x3c4954: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c4954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c4958:
    // 0x3c4958: 0xc0e9fa6  jal         func_3A7E98
label_3c495c:
    if (ctx->pc == 0x3C495Cu) {
        ctx->pc = 0x3C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4958u;
        // 0x3c495c: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4960u;
        goto label_3c4960;
    }
    ctx->pc = 0x3C4958u;
    SET_GPR_U32(ctx, 31, 0x3C4960u);
    ctx->pc = 0x3C495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4958u;
    // 0x3c495c: 0xe7b40470  swc1        $f20, 0x470($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C4958u, 0x3C4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4960u;
label_3c4960:
    // 0x3c4960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4964:
    // 0x3c4964: 0xc0f15bc  jal         func_3C56F0
label_3c4968:
    if (ctx->pc == 0x3C4968u) {
        ctx->pc = 0x3C4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4964u;
        // 0x3c4968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C496Cu;
        goto label_3c496c;
    }
    ctx->pc = 0x3C4964u;
    SET_GPR_U32(ctx, 31, 0x3C496Cu);
    ctx->pc = 0x3C4968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4964u;
    // 0x3c4968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C4964u, 0x3C496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C496Cu;
label_3c496c:
    // 0x3c496c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c496cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4970:
    // 0x3c4970: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3c4970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3c4974:
    // 0x3c4974: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c4974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c4978:
    // 0x3c4978: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3c4978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3c497c:
    // 0x3c497c: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x3c497cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3c4980:
    // 0x3c4980: 0xe6b60008  swc1        $f22, 0x8($s5)
    ctx->pc = 0x3c4980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_3c4984:
    // 0x3c4984: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3c4984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4988:
    // 0x3c4988: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3c4988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c498c:
    // 0x3c498c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3c498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3c4990:
    // 0x3c4990: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3c4990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3c4994:
    // 0x3c4994: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c4994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c4998:
    // 0x3c4998: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c4998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c499c:
    // 0x3c499c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c499cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c49a0:
    // 0x3c49a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c49a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c49a4:
    // 0x3c49a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c49a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c49a8:
    // 0x3c49a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c49a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c49ac:
    // 0x3c49ac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c49acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c49b0:
    // 0x3c49b0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c49b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c49b4:
    // 0x3c49b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c49b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c49b8:
    // 0x3c49b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c49b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c49bc:
    // 0x3c49bc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c49bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c49c0:
    // 0x3c49c0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c49c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c49c4:
    // 0x3c49c4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c49c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c49c8:
    // 0x3c49c8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c49c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c49cc:
    // 0x3c49cc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c49ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c49d0:
    // 0x3c49d0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c49d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c49d4:
    // 0x3c49d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c49d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c49d8:
    // 0x3c49d8: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3c49d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c49dc:
    // 0x3c49dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c49dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c49e0:
    // 0x3c49e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c49e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c49e4:
    // 0x3c49e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c49e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c49e8:
    // 0x3c49e8: 0x7fa40450  sq          $a0, 0x450($sp)
    ctx->pc = 0x3c49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 4));
label_3c49ec:
    // 0x3c49ec: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3c49ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3c49f0:
    // 0x3c49f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c49f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c49f4:
    // 0x3c49f4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3c49f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3c49f8:
    // 0x3c49f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3c49f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3c49fc:
    // 0x3c49fc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3c49fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3c4a00:
    // 0x3c4a00: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c4a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c4a04:
    // 0x3c4a04: 0xc0e9fa6  jal         func_3A7E98
label_3c4a08:
    if (ctx->pc == 0x3C4A08u) {
        ctx->pc = 0x3C4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A04u;
        // 0x3c4a08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A0Cu;
        goto label_3c4a0c;
    }
    ctx->pc = 0x3C4A04u;
    SET_GPR_U32(ctx, 31, 0x3C4A0Cu);
    ctx->pc = 0x3C4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4A04u;
    // 0x3c4a08: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C4A04u, 0x3C4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4A0Cu;
label_3c4a0c:
    // 0x3c4a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a10:
    // 0x3c4a10: 0xc0f15bc  jal         func_3C56F0
label_3c4a14:
    if (ctx->pc == 0x3C4A14u) {
        ctx->pc = 0x3C4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A10u;
        // 0x3c4a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A18u;
        goto label_3c4a18;
    }
    ctx->pc = 0x3C4A10u;
    SET_GPR_U32(ctx, 31, 0x3C4A18u);
    ctx->pc = 0x3C4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4A10u;
    // 0x3c4a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C4A10u, 0x3C4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4A18u;
label_3c4a18:
    // 0x3c4a18: 0x7bb00530  lq          $s0, 0x530($sp)
    ctx->pc = 0x3c4a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3c4a1c:
    // 0x3c4a1c: 0x7bb10520  lq          $s1, 0x520($sp)
    ctx->pc = 0x3c4a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3c4a20:
    // 0x3c4a20: 0x7bb20510  lq          $s2, 0x510($sp)
    ctx->pc = 0x3c4a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3c4a24:
    // 0x3c4a24: 0x7bb30500  lq          $s3, 0x500($sp)
    ctx->pc = 0x3c4a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3c4a28:
    // 0x3c4a28: 0x7bb404f0  lq          $s4, 0x4F0($sp)
    ctx->pc = 0x3c4a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3c4a2c:
    // 0x3c4a2c: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x3c4a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c4a30:
    // 0x3c4a30: 0xdfbf04d0  ld          $ra, 0x4D0($sp)
    ctx->pc = 0x3c4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c4a34:
    // 0x3c4a34: 0xc7b60550  lwc1        $f22, 0x550($sp)
    ctx->pc = 0x3c4a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c4a38:
    // 0x3c4a38: 0xc7b50548  lwc1        $f21, 0x548($sp)
    ctx->pc = 0x3c4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c4a3c:
    // 0x3c4a3c: 0xc7b40540  lwc1        $f20, 0x540($sp)
    ctx->pc = 0x3c4a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4a40:
    // 0x3c4a40: 0x3e00008  jr          $ra
label_3c4a44:
    if (ctx->pc == 0x3C4A44u) {
        ctx->pc = 0x3C4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A40u;
        // 0x3c4a44: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A48u;
        goto label_fallthrough_0x3c4a40;
    }
    ctx->pc = 0x3C4A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A40u;
        // 0x3c4a44: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4a40:
    ctx->pc = 0x3C4A48u;
}
