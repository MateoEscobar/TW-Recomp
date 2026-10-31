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

// Function: sub_003E44E0
// Address: 0x3e44e0 - 0x3e4830
void sub_003E44E0_0x3e44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E44E0_0x3e44e0");
#endif

    switch (ctx->pc) {
        case 0x3e44e0u: goto label_3e44e0;
        case 0x3e44e4u: goto label_3e44e4;
        case 0x3e44e8u: goto label_3e44e8;
        case 0x3e44ecu: goto label_3e44ec;
        case 0x3e44f0u: goto label_3e44f0;
        case 0x3e44f4u: goto label_3e44f4;
        case 0x3e44f8u: goto label_3e44f8;
        case 0x3e44fcu: goto label_3e44fc;
        case 0x3e4500u: goto label_3e4500;
        case 0x3e4504u: goto label_3e4504;
        case 0x3e4508u: goto label_3e4508;
        case 0x3e450cu: goto label_3e450c;
        case 0x3e4510u: goto label_3e4510;
        case 0x3e4514u: goto label_3e4514;
        case 0x3e4518u: goto label_3e4518;
        case 0x3e451cu: goto label_3e451c;
        case 0x3e4520u: goto label_3e4520;
        case 0x3e4524u: goto label_3e4524;
        case 0x3e4528u: goto label_3e4528;
        case 0x3e452cu: goto label_3e452c;
        case 0x3e4530u: goto label_3e4530;
        case 0x3e4534u: goto label_3e4534;
        case 0x3e4538u: goto label_3e4538;
        case 0x3e453cu: goto label_3e453c;
        case 0x3e4540u: goto label_3e4540;
        case 0x3e4544u: goto label_3e4544;
        case 0x3e4548u: goto label_3e4548;
        case 0x3e454cu: goto label_3e454c;
        case 0x3e4550u: goto label_3e4550;
        case 0x3e4554u: goto label_3e4554;
        case 0x3e4558u: goto label_3e4558;
        case 0x3e455cu: goto label_3e455c;
        case 0x3e4560u: goto label_3e4560;
        case 0x3e4564u: goto label_3e4564;
        case 0x3e4568u: goto label_3e4568;
        case 0x3e456cu: goto label_3e456c;
        case 0x3e4570u: goto label_3e4570;
        case 0x3e4574u: goto label_3e4574;
        case 0x3e4578u: goto label_3e4578;
        case 0x3e457cu: goto label_3e457c;
        case 0x3e4580u: goto label_3e4580;
        case 0x3e4584u: goto label_3e4584;
        case 0x3e4588u: goto label_3e4588;
        case 0x3e458cu: goto label_3e458c;
        case 0x3e4590u: goto label_3e4590;
        case 0x3e4594u: goto label_3e4594;
        case 0x3e4598u: goto label_3e4598;
        case 0x3e459cu: goto label_3e459c;
        case 0x3e45a0u: goto label_3e45a0;
        case 0x3e45a4u: goto label_3e45a4;
        case 0x3e45a8u: goto label_3e45a8;
        case 0x3e45acu: goto label_3e45ac;
        case 0x3e45b0u: goto label_3e45b0;
        case 0x3e45b4u: goto label_3e45b4;
        case 0x3e45b8u: goto label_3e45b8;
        case 0x3e45bcu: goto label_3e45bc;
        case 0x3e45c0u: goto label_3e45c0;
        case 0x3e45c4u: goto label_3e45c4;
        case 0x3e45c8u: goto label_3e45c8;
        case 0x3e45ccu: goto label_3e45cc;
        case 0x3e45d0u: goto label_3e45d0;
        case 0x3e45d4u: goto label_3e45d4;
        case 0x3e45d8u: goto label_3e45d8;
        case 0x3e45dcu: goto label_3e45dc;
        case 0x3e45e0u: goto label_3e45e0;
        case 0x3e45e4u: goto label_3e45e4;
        case 0x3e45e8u: goto label_3e45e8;
        case 0x3e45ecu: goto label_3e45ec;
        case 0x3e45f0u: goto label_3e45f0;
        case 0x3e45f4u: goto label_3e45f4;
        case 0x3e45f8u: goto label_3e45f8;
        case 0x3e45fcu: goto label_3e45fc;
        case 0x3e4600u: goto label_3e4600;
        case 0x3e4604u: goto label_3e4604;
        case 0x3e4608u: goto label_3e4608;
        case 0x3e460cu: goto label_3e460c;
        case 0x3e4610u: goto label_3e4610;
        case 0x3e4614u: goto label_3e4614;
        case 0x3e4618u: goto label_3e4618;
        case 0x3e461cu: goto label_3e461c;
        case 0x3e4620u: goto label_3e4620;
        case 0x3e4624u: goto label_3e4624;
        case 0x3e4628u: goto label_3e4628;
        case 0x3e462cu: goto label_3e462c;
        case 0x3e4630u: goto label_3e4630;
        case 0x3e4634u: goto label_3e4634;
        case 0x3e4638u: goto label_3e4638;
        case 0x3e463cu: goto label_3e463c;
        case 0x3e4640u: goto label_3e4640;
        case 0x3e4644u: goto label_3e4644;
        case 0x3e4648u: goto label_3e4648;
        case 0x3e464cu: goto label_3e464c;
        case 0x3e4650u: goto label_3e4650;
        case 0x3e4654u: goto label_3e4654;
        case 0x3e4658u: goto label_3e4658;
        case 0x3e465cu: goto label_3e465c;
        case 0x3e4660u: goto label_3e4660;
        case 0x3e4664u: goto label_3e4664;
        case 0x3e4668u: goto label_3e4668;
        case 0x3e466cu: goto label_3e466c;
        case 0x3e4670u: goto label_3e4670;
        case 0x3e4674u: goto label_3e4674;
        case 0x3e4678u: goto label_3e4678;
        case 0x3e467cu: goto label_3e467c;
        case 0x3e4680u: goto label_3e4680;
        case 0x3e4684u: goto label_3e4684;
        case 0x3e4688u: goto label_3e4688;
        case 0x3e468cu: goto label_3e468c;
        case 0x3e4690u: goto label_3e4690;
        case 0x3e4694u: goto label_3e4694;
        case 0x3e4698u: goto label_3e4698;
        case 0x3e469cu: goto label_3e469c;
        case 0x3e46a0u: goto label_3e46a0;
        case 0x3e46a4u: goto label_3e46a4;
        case 0x3e46a8u: goto label_3e46a8;
        case 0x3e46acu: goto label_3e46ac;
        case 0x3e46b0u: goto label_3e46b0;
        case 0x3e46b4u: goto label_3e46b4;
        case 0x3e46b8u: goto label_3e46b8;
        case 0x3e46bcu: goto label_3e46bc;
        case 0x3e46c0u: goto label_3e46c0;
        case 0x3e46c4u: goto label_3e46c4;
        case 0x3e46c8u: goto label_3e46c8;
        case 0x3e46ccu: goto label_3e46cc;
        case 0x3e46d0u: goto label_3e46d0;
        case 0x3e46d4u: goto label_3e46d4;
        case 0x3e46d8u: goto label_3e46d8;
        case 0x3e46dcu: goto label_3e46dc;
        case 0x3e46e0u: goto label_3e46e0;
        case 0x3e46e4u: goto label_3e46e4;
        case 0x3e46e8u: goto label_3e46e8;
        case 0x3e46ecu: goto label_3e46ec;
        case 0x3e46f0u: goto label_3e46f0;
        case 0x3e46f4u: goto label_3e46f4;
        case 0x3e46f8u: goto label_3e46f8;
        case 0x3e46fcu: goto label_3e46fc;
        case 0x3e4700u: goto label_3e4700;
        case 0x3e4704u: goto label_3e4704;
        case 0x3e4708u: goto label_3e4708;
        case 0x3e470cu: goto label_3e470c;
        case 0x3e4710u: goto label_3e4710;
        case 0x3e4714u: goto label_3e4714;
        case 0x3e4718u: goto label_3e4718;
        case 0x3e471cu: goto label_3e471c;
        case 0x3e4720u: goto label_3e4720;
        case 0x3e4724u: goto label_3e4724;
        case 0x3e4728u: goto label_3e4728;
        case 0x3e472cu: goto label_3e472c;
        case 0x3e4730u: goto label_3e4730;
        case 0x3e4734u: goto label_3e4734;
        case 0x3e4738u: goto label_3e4738;
        case 0x3e473cu: goto label_3e473c;
        case 0x3e4740u: goto label_3e4740;
        case 0x3e4744u: goto label_3e4744;
        case 0x3e4748u: goto label_3e4748;
        case 0x3e474cu: goto label_3e474c;
        case 0x3e4750u: goto label_3e4750;
        case 0x3e4754u: goto label_3e4754;
        case 0x3e4758u: goto label_3e4758;
        case 0x3e475cu: goto label_3e475c;
        case 0x3e4760u: goto label_3e4760;
        case 0x3e4764u: goto label_3e4764;
        case 0x3e4768u: goto label_3e4768;
        case 0x3e476cu: goto label_3e476c;
        case 0x3e4770u: goto label_3e4770;
        case 0x3e4774u: goto label_3e4774;
        case 0x3e4778u: goto label_3e4778;
        case 0x3e477cu: goto label_3e477c;
        case 0x3e4780u: goto label_3e4780;
        case 0x3e4784u: goto label_3e4784;
        case 0x3e4788u: goto label_3e4788;
        case 0x3e478cu: goto label_3e478c;
        case 0x3e4790u: goto label_3e4790;
        case 0x3e4794u: goto label_3e4794;
        case 0x3e4798u: goto label_3e4798;
        case 0x3e479cu: goto label_3e479c;
        case 0x3e47a0u: goto label_3e47a0;
        case 0x3e47a4u: goto label_3e47a4;
        case 0x3e47a8u: goto label_3e47a8;
        case 0x3e47acu: goto label_3e47ac;
        case 0x3e47b0u: goto label_3e47b0;
        case 0x3e47b4u: goto label_3e47b4;
        case 0x3e47b8u: goto label_3e47b8;
        case 0x3e47bcu: goto label_3e47bc;
        case 0x3e47c0u: goto label_3e47c0;
        case 0x3e47c4u: goto label_3e47c4;
        case 0x3e47c8u: goto label_3e47c8;
        case 0x3e47ccu: goto label_3e47cc;
        case 0x3e47d0u: goto label_3e47d0;
        case 0x3e47d4u: goto label_3e47d4;
        case 0x3e47d8u: goto label_3e47d8;
        case 0x3e47dcu: goto label_3e47dc;
        case 0x3e47e0u: goto label_3e47e0;
        case 0x3e47e4u: goto label_3e47e4;
        case 0x3e47e8u: goto label_3e47e8;
        case 0x3e47ecu: goto label_3e47ec;
        case 0x3e47f0u: goto label_3e47f0;
        case 0x3e47f4u: goto label_3e47f4;
        case 0x3e47f8u: goto label_3e47f8;
        case 0x3e47fcu: goto label_3e47fc;
        case 0x3e4800u: goto label_3e4800;
        case 0x3e4804u: goto label_3e4804;
        case 0x3e4808u: goto label_3e4808;
        case 0x3e480cu: goto label_3e480c;
        case 0x3e4810u: goto label_3e4810;
        case 0x3e4814u: goto label_3e4814;
        case 0x3e4818u: goto label_3e4818;
        case 0x3e481cu: goto label_3e481c;
        case 0x3e4820u: goto label_3e4820;
        case 0x3e4824u: goto label_3e4824;
        case 0x3e4828u: goto label_3e4828;
        case 0x3e482cu: goto label_3e482c;
        default: break;
    }

    ctx->pc = 0x3e44e0u;

label_3e44e0:
    // 0x3e44e0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3e44e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3e44e4:
    // 0x3e44e4: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x3e44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_3e44e8:
    // 0x3e44e8: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x3e44e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_3e44ec:
    // 0x3e44ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e44ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e44f0:
    // 0x3e44f0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x3e44f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_3e44f4:
    // 0x3e44f4: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x3e44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_3e44f8:
    // 0x3e44f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e44f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e44fc:
    // 0x3e44fc: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x3e44fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_3e4500:
    // 0x3e4500: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x3e4500u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3e4504:
    // 0x3e4504: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x3e4504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_3e4508:
    // 0x3e4508: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x3e4508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_3e450c:
    // 0x3e450c: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x3e450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_3e4510:
    // 0x3e4510: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3e4510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3e4514:
    // 0x3e4514: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x3e4514u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3e4518:
    // 0x3e4518: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x3e4518u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3e451c:
    // 0x3e451c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x3e451cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3e4520:
    // 0x3e4520: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x3e4520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3e4524:
    // 0x3e4524: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3e4524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e4528:
    // 0x3e4528: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e4528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e452c:
    // 0x3e452c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e4530:
    // 0x3e4530: 0x40f809  jalr        $v0
label_3e4534:
    if (ctx->pc == 0x3E4534u) {
        ctx->pc = 0x3E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4530u;
        // 0x3e4534: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4538u;
        goto label_3e4538;
    }
    ctx->pc = 0x3E4530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4538u);
        ctx->pc = 0x3E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4530u;
        // 0x3e4534: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4530u, 0x3E4538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4538u;
label_3e4538:
    // 0x3e4538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e453c:
    // 0x3e453c: 0xc0ea146  jal         func_3A8518
label_3e4540:
    if (ctx->pc == 0x3E4540u) {
        ctx->pc = 0x3E4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E453Cu;
        // 0x3e4540: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4544u;
        goto label_3e4544;
    }
    ctx->pc = 0x3E453Cu;
    SET_GPR_U32(ctx, 31, 0x3E4544u);
    ctx->pc = 0x3E4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E453Cu;
    // 0x3e4540: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E453Cu, 0x3E4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4544u;
label_3e4544:
    // 0x3e4544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4548:
    // 0x3e4548: 0xc0ea146  jal         func_3A8518
label_3e454c:
    if (ctx->pc == 0x3E454Cu) {
        ctx->pc = 0x3E454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4548u;
        // 0x3e454c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4550u;
        goto label_3e4550;
    }
    ctx->pc = 0x3E4548u;
    SET_GPR_U32(ctx, 31, 0x3E4550u);
    ctx->pc = 0x3E454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4548u;
    // 0x3e454c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E4548u, 0x3E4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4550u;
label_3e4550:
    // 0x3e4550: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3e4550u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4554:
    // 0x3e4554: 0xc0ea13a  jal         func_3A84E8
label_3e4558:
    if (ctx->pc == 0x3E4558u) {
        ctx->pc = 0x3E4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4554u;
        // 0x3e4558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E455Cu;
        goto label_3e455c;
    }
    ctx->pc = 0x3E4554u;
    SET_GPR_U32(ctx, 31, 0x3E455Cu);
    ctx->pc = 0x3E4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4554u;
    // 0x3e4558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E4554u, 0x3E455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E455Cu;
label_3e455c:
    // 0x3e455c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e4560:
    // 0x3e4560: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e4560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e4564:
    // 0x3e4564: 0xc0ea12a  jal         func_3A84A8
label_3e4568:
    if (ctx->pc == 0x3E4568u) {
        ctx->pc = 0x3E4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4564u;
        // 0x3e4568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E456Cu;
        goto label_3e456c;
    }
    ctx->pc = 0x3E4564u;
    SET_GPR_U32(ctx, 31, 0x3E456Cu);
    ctx->pc = 0x3E4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4564u;
    // 0x3e4568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E4564u, 0x3E456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E456Cu;
label_3e456c:
    // 0x3e456c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e456cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4570:
    // 0x3e4570: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e4574:
    // 0x3e4574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e4574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4578:
    // 0x3e4578: 0xc0ea12a  jal         func_3A84A8
label_3e457c:
    if (ctx->pc == 0x3E457Cu) {
        ctx->pc = 0x3E457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4578u;
        // 0x3e457c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4580u;
        goto label_3e4580;
    }
    ctx->pc = 0x3E4578u;
    SET_GPR_U32(ctx, 31, 0x3E4580u);
    ctx->pc = 0x3E457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4578u;
    // 0x3e457c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E4578u, 0x3E4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4580u;
label_3e4580:
    // 0x3e4580: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e4580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4584:
    // 0x3e4584: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e4588:
    // 0x3e4588: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e458c:
    // 0x3e458c: 0xc0e858c  jal         func_3A1630
label_3e4590:
    if (ctx->pc == 0x3E4590u) {
        ctx->pc = 0x3E4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E458Cu;
        // 0x3e4590: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4594u;
        goto label_3e4594;
    }
    ctx->pc = 0x3E458Cu;
    SET_GPR_U32(ctx, 31, 0x3E4594u);
    ctx->pc = 0x3E4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E458Cu;
    // 0x3e4590: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E458Cu, 0x3E4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4594u;
label_3e4594:
    // 0x3e4594: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e4594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e4598:
    // 0x3e4598: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3e4598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_3e459c:
    // 0x3e459c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3e459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3e45a0:
    // 0x3e45a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e45a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e45a4:
    // 0x3e45a4: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3e45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3e45a8:
    // 0x3e45a8: 0xc1073cc  jal         func_41CF30
label_3e45ac:
    if (ctx->pc == 0x3E45ACu) {
        ctx->pc = 0x3E45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45A8u;
        // 0x3e45ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E45B0u;
        goto label_3e45b0;
    }
    ctx->pc = 0x3E45A8u;
    SET_GPR_U32(ctx, 31, 0x3E45B0u);
    ctx->pc = 0x3E45ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E45A8u;
    // 0x3e45ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E45A8u, 0x3E45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E45B0u;
label_3e45b0:
    // 0x3e45b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e45b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e45b4:
    // 0x3e45b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e45b8:
    if (ctx->pc == 0x3E45B8u) {
        ctx->pc = 0x3E45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45B4u;
        // 0x3e45b8: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E45BCu;
        goto label_3e45bc;
    }
    ctx->pc = 0x3E45B4u;
    {
        const bool branch_taken_0x3e45b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45B4u;
        // 0x3e45b8: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45b4) {
            ctx->pc = 0x3E45D0u;
            goto label_3e45d0;
        }
    }
    ctx->pc = 0x3E45BCu;
label_3e45bc:
    // 0x3e45bc: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3e45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3e45c0:
    // 0x3e45c0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3e45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3e45c4:
    // 0x3e45c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e45c8:
    // 0x3e45c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e45cc:
    // 0x3e45cc: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x3e45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
label_3e45d0:
    // 0x3e45d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e45d4:
    // 0x3e45d4: 0x2673b8b8  addiu       $s3, $s3, -0x4748
    ctx->pc = 0x3e45d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949048));
label_3e45d8:
    // 0x3e45d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e45d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e45dc:
    // 0x3e45dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e45dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e45e0:
    // 0x3e45e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e45e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e45e4:
    // 0x3e45e4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e45e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e45e8:
    // 0x3e45e8: 0xc0cd4ee  jal         func_3353B8
label_3e45ec:
    if (ctx->pc == 0x3E45ECu) {
        ctx->pc = 0x3E45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45E8u;
        // 0x3e45ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E45F0u;
        goto label_3e45f0;
    }
    ctx->pc = 0x3E45E8u;
    SET_GPR_U32(ctx, 31, 0x3E45F0u);
    ctx->pc = 0x3E45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E45E8u;
    // 0x3e45ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E45E8u, 0x3E45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E45F0u;
label_3e45f0:
    // 0x3e45f0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3e45f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3e45f4:
    // 0x3e45f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e45f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e45f8:
    // 0x3e45f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e45f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e45fc:
    // 0x3e45fc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3e45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3e4600:
    // 0x3e4600: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e4600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e4604:
    // 0x3e4604: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x3e4604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_3e4608:
    // 0x3e4608: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3e460c:
    // 0x3e460c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e4610:
    // 0x3e4610: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3e4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3e4614:
    // 0x3e4614: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e4614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e4618:
    // 0x3e4618: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e461c:
    // 0x3e461c: 0xaea000bc  sw          $zero, 0xBC($s5)
    ctx->pc = 0x3e461cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 0));
label_3e4620:
    // 0x3e4620: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3e4620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3e4624:
    // 0x3e4624: 0xaea300c4  sw          $v1, 0xC4($s5)
    ctx->pc = 0x3e4624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 3));
label_3e4628:
    // 0x3e4628: 0xc0cd518  jal         func_335460
label_3e462c:
    if (ctx->pc == 0x3E462Cu) {
        ctx->pc = 0x3E462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4628u;
        // 0x3e462c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4630u;
        goto label_3e4630;
    }
    ctx->pc = 0x3E4628u;
    SET_GPR_U32(ctx, 31, 0x3E4630u);
    ctx->pc = 0x3E462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4628u;
    // 0x3e462c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4628u, 0x3E4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4630u;
label_3e4630:
    // 0x3e4630: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3e4630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3e4634:
    // 0x3e4634: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e4634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e4638:
    // 0x3e4638: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e4638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e463c:
    // 0x3e463c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3e463cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3e4640:
    // 0x3e4640: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e4640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4644:
    // 0x3e4644: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x3e4644u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e4648:
    // 0x3e4648: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3e4648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3e464c:
    // 0x3e464c: 0x7ea20010  sq          $v0, 0x10($s5)
    ctx->pc = 0x3e464cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 2));
label_3e4650:
    // 0x3e4650: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x3e4650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_3e4654:
    // 0x3e4654: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x3e4654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
label_3e4658:
    // 0x3e4658: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e4658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e465c:
    // 0x3e465c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e4660:
    // 0x3e4660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e4660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3e4664:
    // 0x3e4664: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x3e4664u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e4668:
    // 0x3e4668: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3e4668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3e466c:
    // 0x3e466c: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3e466cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3e4670:
    // 0x3e4670: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x3e4670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3e4674:
    // 0x3e4674: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3e4674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3e4678:
    // 0x3e4678: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3e4678u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3e467c:
    // 0x3e467c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3e467cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3e4680:
    // 0x3e4680: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3e4680u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3e4684:
    // 0x3e4684: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3e4684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3e4688:
    // 0x3e4688: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3e4688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3e468c:
    // 0x3e468c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3e468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3e4690:
    // 0x3e4690: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x3e4690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_3e4694:
    // 0x3e4694: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e4698:
    // 0x3e4698: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3e4698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3e469c:
    // 0x3e469c: 0xc136b24  jal         func_4DAC90
label_3e46a0:
    if (ctx->pc == 0x3E46A0u) {
        ctx->pc = 0x3E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E469Cu;
        // 0x3e46a0: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E46A4u;
        goto label_3e46a4;
    }
    ctx->pc = 0x3E469Cu;
    SET_GPR_U32(ctx, 31, 0x3E46A4u);
    ctx->pc = 0x3E46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E469Cu;
    // 0x3e46a0: 0x7fa70050  sq          $a3, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E469Cu, 0x3E46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46A4u;
label_3e46a4:
    // 0x3e46a4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3e46a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e46a8:
    // 0x3e46a8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3e46a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3e46ac:
    // 0x3e46ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3e46acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3e46b0:
    // 0x3e46b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e46b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e46b4:
    // 0x3e46b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e46b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e46b8:
    // 0x3e46b8: 0xc0cd518  jal         func_335460
label_3e46bc:
    if (ctx->pc == 0x3E46BCu) {
        ctx->pc = 0x3E46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46B8u;
        // 0x3e46bc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E46C0u;
        goto label_3e46c0;
    }
    ctx->pc = 0x3E46B8u;
    SET_GPR_U32(ctx, 31, 0x3E46C0u);
    ctx->pc = 0x3E46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E46B8u;
    // 0x3e46bc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E46B8u, 0x3E46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46C0u;
label_3e46c0:
    // 0x3e46c0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x3e46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e46c4:
    // 0x3e46c4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3e46c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3e46c8:
    // 0x3e46c8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3e46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3e46cc:
    // 0x3e46cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3e46ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e46d0:
    // 0x3e46d0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3e46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3e46d4:
    // 0x3e46d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3e46d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e46d8:
    // 0x3e46d8: 0xe478000c  swc1        $f24, 0xC($v1)
    ctx->pc = 0x3e46d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3e46dc:
    // 0x3e46dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e46dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e46e0:
    // 0x3e46e0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3e46e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e46e4:
    // 0x3e46e4: 0xc136afa  jal         func_4DABE8
label_3e46e8:
    if (ctx->pc == 0x3E46E8u) {
        ctx->pc = 0x3E46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E46E4u;
        // 0x3e46e8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E46ECu;
        goto label_3e46ec;
    }
    ctx->pc = 0x3E46E4u;
    SET_GPR_U32(ctx, 31, 0x3E46ECu);
    ctx->pc = 0x3E46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E46E4u;
    // 0x3e46e8: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E46E4u, 0x3E46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46ECu;
label_3e46ec:
    // 0x3e46ec: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x3e46ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e46f0:
    // 0x3e46f0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3e46f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e46f4:
    // 0x3e46f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e46f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e46f8:
    // 0x3e46f8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e46fc:
    // 0x3e46fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e4700:
    // 0x3e4700: 0x40f809  jalr        $v0
label_3e4704:
    if (ctx->pc == 0x3E4704u) {
        ctx->pc = 0x3E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4700u;
        // 0x3e4704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4708u;
        goto label_3e4708;
    }
    ctx->pc = 0x3E4700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4708u);
        ctx->pc = 0x3E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4700u;
        // 0x3e4704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4700u, 0x3E4708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4708u;
label_3e4708:
    // 0x3e4708: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x3e4708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e470c:
    // 0x3e470c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4710:
    // 0x3e4710: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4714:
    // 0x3e4714: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e4714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e4718:
    // 0x3e4718: 0x86500078  lh          $s0, 0x78($s2)
    ctx->pc = 0x3e4718u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
label_3e471c:
    // 0x3e471c: 0x26520078  addiu       $s2, $s2, 0x78
    ctx->pc = 0x3e471cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_3e4720:
    // 0x3e4720: 0xc0cd518  jal         func_335460
label_3e4724:
    if (ctx->pc == 0x3E4724u) {
        ctx->pc = 0x3E4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4720u;
        // 0x3e4724: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4728u;
        goto label_3e4728;
    }
    ctx->pc = 0x3E4720u;
    SET_GPR_U32(ctx, 31, 0x3E4728u);
    ctx->pc = 0x3E4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4720u;
    // 0x3e4724: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4720u, 0x3E4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4728u;
label_3e4728:
    // 0x3e4728: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e4728u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e472c:
    // 0x3e472c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e4730:
    // 0x3e4730: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4730u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4734:
    // 0x3e4734: 0xc0cd518  jal         func_335460
label_3e4738:
    if (ctx->pc == 0x3E4738u) {
        ctx->pc = 0x3E4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4734u;
        // 0x3e4738: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E473Cu;
        goto label_3e473c;
    }
    ctx->pc = 0x3E4734u;
    SET_GPR_U32(ctx, 31, 0x3E473Cu);
    ctx->pc = 0x3E4738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4734u;
    // 0x3e4738: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4734u, 0x3E473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E473Cu;
label_3e473c:
    // 0x3e473c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e473cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4740:
    // 0x3e4740: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e4740u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e4744:
    // 0x3e4744: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e4744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e4748:
    // 0x3e4748: 0xc0cd518  jal         func_335460
label_3e474c:
    if (ctx->pc == 0x3E474Cu) {
        ctx->pc = 0x3E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4748u;
        // 0x3e474c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4750u;
        goto label_3e4750;
    }
    ctx->pc = 0x3E4748u;
    SET_GPR_U32(ctx, 31, 0x3E4750u);
    ctx->pc = 0x3E474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4748u;
    // 0x3e474c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4748u, 0x3E4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4750u;
label_3e4750:
    // 0x3e4750: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3e4750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e4754:
    // 0x3e4754: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3e4754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e4758:
    // 0x3e4758: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3e4758u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3e475c:
    // 0x3e475c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4760:
    // 0x3e4760: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x3e4760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3e4764:
    // 0x3e4764: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3e4764u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3e4768:
    // 0x3e4768: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e4768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e476c:
    // 0x3e476c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e4770:
    // 0x3e4770: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3e4770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3e4774:
    // 0x3e4774: 0x60f809  jalr        $v1
label_3e4778:
    if (ctx->pc == 0x3E4778u) {
        ctx->pc = 0x3E4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4774u;
        // 0x3e4778: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E477Cu;
        goto label_3e477c;
    }
    ctx->pc = 0x3E4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E477Cu);
        ctx->pc = 0x3E4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4774u;
        // 0x3e4778: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4774u, 0x3E477Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E477Cu;
label_3e477c:
    // 0x3e477c: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3e477cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3e4780:
    // 0x3e4780: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e4780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e4784:
    // 0x3e4784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e4784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e4788:
    // 0x3e4788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e4788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e478c:
    // 0x3e478c: 0xe638000c  swc1        $f24, 0xC($s1)
    ctx->pc = 0x3e478cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3e4790:
    // 0x3e4790: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3e4790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3e4794:
    // 0x3e4794: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3e4794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3e4798:
    // 0x3e4798: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e4798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e479c:
    // 0x3e479c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e479cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e47a0:
    // 0x3e47a0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e47a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e47a4:
    // 0x3e47a4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e47a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e47a8:
    // 0x3e47a8: 0xc0cd4ee  jal         func_3353B8
label_3e47ac:
    if (ctx->pc == 0x3E47ACu) {
        ctx->pc = 0x3E47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47A8u;
        // 0x3e47ac: 0x7ec20010  sq          $v0, 0x10($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E47B0u;
        goto label_3e47b0;
    }
    ctx->pc = 0x3E47A8u;
    SET_GPR_U32(ctx, 31, 0x3E47B0u);
    ctx->pc = 0x3E47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E47A8u;
    // 0x3e47ac: 0x7ec20010  sq          $v0, 0x10($s6) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E47A8u, 0x3E47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47B0u;
label_3e47b0:
    // 0x3e47b0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3e47b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e47b4:
    // 0x3e47b4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x3e47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_3e47b8:
    // 0x3e47b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e47b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e47bc:
    // 0x3e47bc: 0x0  nop
    ctx->pc = 0x3e47bcu;
    // NOP
label_3e47c0:
    // 0x3e47c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e47c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e47c4:
    // 0x3e47c4: 0x0  nop
    ctx->pc = 0x3e47c4u;
    // NOP
label_3e47c8:
    // 0x3e47c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3e47cc:
    if (ctx->pc == 0x3E47CCu) {
        ctx->pc = 0x3E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47C8u;
        // 0x3e47cc: 0xaea200b0  sw          $v0, 0xB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E47D0u;
        goto label_3e47d0;
    }
    ctx->pc = 0x3E47C8u;
    {
        const bool branch_taken_0x3e47c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47C8u;
        // 0x3e47cc: 0xaea200b0  sw          $v0, 0xB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e47c8) {
            ctx->pc = 0x3E47D8u;
            goto label_3e47d8;
        }
    }
    ctx->pc = 0x3E47D0u;
label_3e47d0:
    // 0x3e47d0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x3e47d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_3e47d4:
    // 0x3e47d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3e47d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3e47d8:
    // 0x3e47d8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e47d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e47dc:
    // 0x3e47dc: 0xaed70020  sw          $s7, 0x20($s6)
    ctx->pc = 0x3e47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 23));
label_3e47e0:
    // 0x3e47e0: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x3e47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_3e47e4:
    // 0x3e47e4: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x3e47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
label_3e47e8:
    // 0x3e47e8: 0xaec00028  sw          $zero, 0x28($s6)
    ctx->pc = 0x3e47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 0));
label_3e47ec:
    // 0x3e47ec: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x3e47ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3e47f0:
    // 0x3e47f0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x3e47f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3e47f4:
    // 0x3e47f4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x3e47f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3e47f8:
    // 0x3e47f8: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x3e47f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3e47fc:
    // 0x3e47fc: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x3e47fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3e4800:
    // 0x3e4800: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x3e4800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e4804:
    // 0x3e4804: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x3e4804u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e4808:
    // 0x3e4808: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x3e4808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e480c:
    // 0x3e480c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3e480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3e4810:
    // 0x3e4810: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x3e4810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e4814:
    // 0x3e4814: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x3e4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e4818:
    // 0x3e4818: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x3e4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e481c:
    // 0x3e481c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x3e481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e4820:
    // 0x3e4820: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x3e4820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e4824:
    // 0x3e4824: 0x3e00008  jr          $ra
label_3e4828:
    if (ctx->pc == 0x3E4828u) {
        ctx->pc = 0x3E4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4824u;
        // 0x3e4828: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E482Cu;
        goto label_3e482c;
    }
    ctx->pc = 0x3E4824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4824u;
        // 0x3e4828: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E482Cu;
label_3e482c:
    // 0x3e482c: 0x0  nop
    ctx->pc = 0x3e482cu;
    // NOP
    ctx->pc = 0x3e4830u;
}
