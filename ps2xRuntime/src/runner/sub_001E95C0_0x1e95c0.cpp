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

// Function: sub_001E95C0
// Address: 0x1e95c0 - 0x1e99f8
void sub_001E95C0_0x1e95c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E95C0_0x1e95c0");
#endif

    switch (ctx->pc) {
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        case 0x1e9648u: goto label_1e9648;
        case 0x1e964cu: goto label_1e964c;
        case 0x1e9650u: goto label_1e9650;
        case 0x1e9654u: goto label_1e9654;
        case 0x1e9658u: goto label_1e9658;
        case 0x1e965cu: goto label_1e965c;
        case 0x1e9660u: goto label_1e9660;
        case 0x1e9664u: goto label_1e9664;
        case 0x1e9668u: goto label_1e9668;
        case 0x1e966cu: goto label_1e966c;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9674u: goto label_1e9674;
        case 0x1e9678u: goto label_1e9678;
        case 0x1e967cu: goto label_1e967c;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9684u: goto label_1e9684;
        case 0x1e9688u: goto label_1e9688;
        case 0x1e968cu: goto label_1e968c;
        case 0x1e9690u: goto label_1e9690;
        case 0x1e9694u: goto label_1e9694;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e969cu: goto label_1e969c;
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96a4u: goto label_1e96a4;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96acu: goto label_1e96ac;
        case 0x1e96b0u: goto label_1e96b0;
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96b8u: goto label_1e96b8;
        case 0x1e96bcu: goto label_1e96bc;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c4u: goto label_1e96c4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96ccu: goto label_1e96cc;
        case 0x1e96d0u: goto label_1e96d0;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96d8u: goto label_1e96d8;
        case 0x1e96dcu: goto label_1e96dc;
        case 0x1e96e0u: goto label_1e96e0;
        case 0x1e96e4u: goto label_1e96e4;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e96f4u: goto label_1e96f4;
        case 0x1e96f8u: goto label_1e96f8;
        case 0x1e96fcu: goto label_1e96fc;
        case 0x1e9700u: goto label_1e9700;
        case 0x1e9704u: goto label_1e9704;
        case 0x1e9708u: goto label_1e9708;
        case 0x1e970cu: goto label_1e970c;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e974cu: goto label_1e974c;
        case 0x1e9750u: goto label_1e9750;
        case 0x1e9754u: goto label_1e9754;
        case 0x1e9758u: goto label_1e9758;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9760u: goto label_1e9760;
        case 0x1e9764u: goto label_1e9764;
        case 0x1e9768u: goto label_1e9768;
        case 0x1e976cu: goto label_1e976c;
        case 0x1e9770u: goto label_1e9770;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9780u: goto label_1e9780;
        case 0x1e9784u: goto label_1e9784;
        case 0x1e9788u: goto label_1e9788;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9790u: goto label_1e9790;
        case 0x1e9794u: goto label_1e9794;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e979cu: goto label_1e979c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97a4u: goto label_1e97a4;
        case 0x1e97a8u: goto label_1e97a8;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97b0u: goto label_1e97b0;
        case 0x1e97b4u: goto label_1e97b4;
        case 0x1e97b8u: goto label_1e97b8;
        case 0x1e97bcu: goto label_1e97bc;
        case 0x1e97c0u: goto label_1e97c0;
        case 0x1e97c4u: goto label_1e97c4;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e97ccu: goto label_1e97cc;
        case 0x1e97d0u: goto label_1e97d0;
        case 0x1e97d4u: goto label_1e97d4;
        case 0x1e97d8u: goto label_1e97d8;
        case 0x1e97dcu: goto label_1e97dc;
        case 0x1e97e0u: goto label_1e97e0;
        case 0x1e97e4u: goto label_1e97e4;
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e97f0u: goto label_1e97f0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e97fcu: goto label_1e97fc;
        case 0x1e9800u: goto label_1e9800;
        case 0x1e9804u: goto label_1e9804;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9814u: goto label_1e9814;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e981cu: goto label_1e981c;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9828u: goto label_1e9828;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9838u: goto label_1e9838;
        case 0x1e983cu: goto label_1e983c;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e9844u: goto label_1e9844;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e984cu: goto label_1e984c;
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9854u: goto label_1e9854;
        case 0x1e9858u: goto label_1e9858;
        case 0x1e985cu: goto label_1e985c;
        case 0x1e9860u: goto label_1e9860;
        case 0x1e9864u: goto label_1e9864;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e986cu: goto label_1e986c;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9874u: goto label_1e9874;
        case 0x1e9878u: goto label_1e9878;
        case 0x1e987cu: goto label_1e987c;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9884u: goto label_1e9884;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9890u: goto label_1e9890;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e9898u: goto label_1e9898;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98a0u: goto label_1e98a0;
        case 0x1e98a4u: goto label_1e98a4;
        case 0x1e98a8u: goto label_1e98a8;
        case 0x1e98acu: goto label_1e98ac;
        case 0x1e98b0u: goto label_1e98b0;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98b8u: goto label_1e98b8;
        case 0x1e98bcu: goto label_1e98bc;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98ccu: goto label_1e98cc;
        case 0x1e98d0u: goto label_1e98d0;
        case 0x1e98d4u: goto label_1e98d4;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98dcu: goto label_1e98dc;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e98e4u: goto label_1e98e4;
        case 0x1e98e8u: goto label_1e98e8;
        case 0x1e98ecu: goto label_1e98ec;
        case 0x1e98f0u: goto label_1e98f0;
        case 0x1e98f4u: goto label_1e98f4;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e98fcu: goto label_1e98fc;
        case 0x1e9900u: goto label_1e9900;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e990cu: goto label_1e990c;
        case 0x1e9910u: goto label_1e9910;
        case 0x1e9914u: goto label_1e9914;
        case 0x1e9918u: goto label_1e9918;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9920u: goto label_1e9920;
        case 0x1e9924u: goto label_1e9924;
        case 0x1e9928u: goto label_1e9928;
        case 0x1e992cu: goto label_1e992c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9934u: goto label_1e9934;
        case 0x1e9938u: goto label_1e9938;
        case 0x1e993cu: goto label_1e993c;
        case 0x1e9940u: goto label_1e9940;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9948u: goto label_1e9948;
        case 0x1e994cu: goto label_1e994c;
        case 0x1e9950u: goto label_1e9950;
        case 0x1e9954u: goto label_1e9954;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e995cu: goto label_1e995c;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9964u: goto label_1e9964;
        case 0x1e9968u: goto label_1e9968;
        case 0x1e996cu: goto label_1e996c;
        case 0x1e9970u: goto label_1e9970;
        case 0x1e9974u: goto label_1e9974;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e997cu: goto label_1e997c;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e9984u: goto label_1e9984;
        case 0x1e9988u: goto label_1e9988;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e9990u: goto label_1e9990;
        case 0x1e9994u: goto label_1e9994;
        case 0x1e9998u: goto label_1e9998;
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        default: break;
    }

    ctx->pc = 0x1e95c0u;

label_1e95c0:
    // 0x1e95c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e95c4:
    // 0x1e95c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e95c8:
    // 0x1e95c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e95c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1e95cc:
    // 0x1e95cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e95ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1e95d0:
    // 0x1e95d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e95d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e95d4:
    // 0x1e95d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e95d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e95d8:
    // 0x1e95d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e95d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e95dc:
    // 0x1e95dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e95dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e95e0:
    // 0x1e95e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e95e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1e95e4:
    // 0x1e95e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e95e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e95e8:
    // 0x1e95e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e95ec:
    // 0x1e95ec: 0x2414006e  addiu       $s4, $zero, 0x6E
    ctx->pc = 0x1e95ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1e95f0:
    // 0x1e95f0: 0x8c46b8b8  lw          $a2, -0x4748($v0)
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e95f4:
    // 0x1e95f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e95f8:
    // 0x1e95f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e95f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e95fc:
    // 0x1e95fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e9600:
    // 0x1e9600: 0x40f809  jalr        $v0
label_1e9604:
    if (ctx->pc == 0x1E9604u) {
        ctx->pc = 0x1E9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9600u;
        // 0x1e9604: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9608u;
        goto label_1e9608;
    }
    ctx->pc = 0x1E9600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9608u);
        ctx->pc = 0x1E9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9600u;
        // 0x1e9604: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9600u, 0x1E9608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9608u;
label_1e9608:
    // 0x1e9608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e960c:
    // 0x1e960c: 0x32420030  andi        $v0, $s2, 0x30
    ctx->pc = 0x1e960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
label_1e9610:
    // 0x1e9610: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e9614:
    if (ctx->pc == 0x1E9614u) {
        ctx->pc = 0x1E9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9610u;
        // 0x1e9614: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9618u;
        goto label_1e9618;
    }
    ctx->pc = 0x1E9610u;
    {
        const bool branch_taken_0x1e9610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9610u;
        // 0x1e9614: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9610) {
            ctx->pc = 0x1E9648u;
            goto label_1e9648;
        }
    }
    ctx->pc = 0x1E9618u;
label_1e9618:
    // 0x1e9618: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e961c:
    // 0x1e961c: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
label_1e9620:
    // 0x1e9620: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e9620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e9624:
    // 0x1e9624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e9628:
    if (ctx->pc == 0x1E9628u) {
        ctx->pc = 0x1E9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9624u;
        // 0x1e9628: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E962Cu;
        goto label_1e962c;
    }
    ctx->pc = 0x1E9624u;
    {
        const bool branch_taken_0x1e9624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9624u;
        // 0x1e9628: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9624) {
            ctx->pc = 0x1E9644u;
            goto label_1e9644;
        }
    }
    ctx->pc = 0x1E962Cu;
label_1e962c:
    // 0x1e962c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e9630:
    // 0x1e9630: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e9634:
    // 0x1e9634: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e9638:
    // 0x1e9638: 0x40f809  jalr        $v0
label_1e963c:
    if (ctx->pc == 0x1E963Cu) {
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9640u;
        goto label_1e9640;
    }
    ctx->pc = 0x1E9638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9640u);
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9638u, 0x1E9640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9640u;
label_1e9640:
    // 0x1e9640: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1e9640u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e9644:
    // 0x1e9644: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x1e9644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_1e9648:
    // 0x1e9648: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1e964c:
    if (ctx->pc == 0x1E964Cu) {
        ctx->pc = 0x1E964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9648u;
        // 0x1e964c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9650u;
        goto label_1e9650;
    }
    ctx->pc = 0x1E9648u;
    {
        const bool branch_taken_0x1e9648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9648) {
            ctx->pc = 0x1E964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9648u;
            // 0x1e964c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9684u;
            goto label_1e9684;
        }
    }
    ctx->pc = 0x1E9650u;
label_1e9650:
    // 0x1e9650: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e9654:
    // 0x1e9654: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x1e9654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
label_1e9658:
    // 0x1e9658: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e965c:
    // 0x1e965c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e9660:
    if (ctx->pc == 0x1E9660u) {
        ctx->pc = 0x1E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E965Cu;
        // 0x1e9660: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9664u;
        goto label_1e9664;
    }
    ctx->pc = 0x1E965Cu;
    {
        const bool branch_taken_0x1e965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E965Cu;
        // 0x1e9660: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e965c) {
            ctx->pc = 0x1E9680u;
            goto label_1e9680;
        }
    }
    ctx->pc = 0x1E9664u;
label_1e9664:
    // 0x1e9664: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e9668:
    // 0x1e9668: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e9668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e966c:
    // 0x1e966c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e9670:
    // 0x1e9670: 0x40f809  jalr        $v0
label_1e9674:
    if (ctx->pc == 0x1E9674u) {
        ctx->pc = 0x1E9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9670u;
        // 0x1e9674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9678u;
        goto label_1e9678;
    }
    ctx->pc = 0x1E9670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9678u);
        ctx->pc = 0x1E9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9670u;
        // 0x1e9674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9670u, 0x1E9678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9678u;
label_1e9678:
    // 0x1e9678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e9678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e967c:
    // 0x1e967c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1e967cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1e9680:
    // 0x1e9680: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9684:
    // 0x1e9684: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x1e9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1e9688:
    // 0x1e9688: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e9688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e968c:
    // 0x1e968c: 0x32431000  andi        $v1, $s2, 0x1000
    ctx->pc = 0x1e968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
label_1e9690:
    // 0x1e9690: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x1e9690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1e9694:
    // 0x1e9694: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x1e9694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1e9698:
    // 0x1e9698: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x1e9698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e969c:
    // 0x1e969c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x1e969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e96a0:
    // 0x1e96a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1e96a4:
    if (ctx->pc == 0x1E96A4u) {
        ctx->pc = 0x1E96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96A0u;
        // 0x1e96a4: 0xa2a00b  movn        $s4, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E96A8u;
        goto label_1e96a8;
    }
    ctx->pc = 0x1E96A0u;
    {
        const bool branch_taken_0x1e96a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96A0u;
        // 0x1e96a4: 0xa2a00b  movn        $s4, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96a0) {
            ctx->pc = 0x1E96C8u;
            goto label_1e96c8;
        }
    }
    ctx->pc = 0x1E96A8u;
label_1e96a8:
    // 0x1e96a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e96a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e96ac:
    // 0x1e96ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e96b0:
    // 0x1e96b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e96b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e96b4:
    // 0x1e96b4: 0x0  nop
    ctx->pc = 0x1e96b4u;
    // NOP
label_1e96b8:
    // 0x1e96b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e96b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e96bc:
    // 0x1e96bc: 0x0  nop
    ctx->pc = 0x1e96bcu;
    // NOP
label_1e96c0:
    // 0x1e96c0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1e96c4:
    if (ctx->pc == 0x1E96C4u) {
        ctx->pc = 0x1E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96C0u;
        // 0x1e96c4: 0x32424000  andi        $v0, $s2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E96C8u;
        goto label_1e96c8;
    }
    ctx->pc = 0x1E96C0u;
    {
        const bool branch_taken_0x1e96c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96C0u;
        // 0x1e96c4: 0x32424000  andi        $v0, $s2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96c0) {
            ctx->pc = 0x1E9728u;
            goto label_1e9728;
        }
    }
    ctx->pc = 0x1E96C8u;
label_1e96c8:
    // 0x1e96c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e96cc:
    // 0x1e96cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e96d0:
    // 0x1e96d0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e96d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e96d4:
    // 0x1e96d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e96d8:
    if (ctx->pc == 0x1E96D8u) {
        ctx->pc = 0x1E96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96D4u;
        // 0x1e96d8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E96DCu;
        goto label_1e96dc;
    }
    ctx->pc = 0x1E96D4u;
    {
        const bool branch_taken_0x1e96d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96D4u;
        // 0x1e96d8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96d4) {
            ctx->pc = 0x1E9724u;
            goto label_1e9724;
        }
    }
    ctx->pc = 0x1E96DCu;
label_1e96dc:
    // 0x1e96dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e96dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e96e0:
    // 0x1e96e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e96e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e96e4:
    // 0x1e96e4: 0x0  nop
    ctx->pc = 0x1e96e4u;
    // NOP
label_1e96e8:
    // 0x1e96e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e96e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e96ec:
    // 0x1e96ec: 0x0  nop
    ctx->pc = 0x1e96ecu;
    // NOP
label_1e96f0:
    // 0x1e96f0: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1e96f4:
    if (ctx->pc == 0x1E96F4u) {
        ctx->pc = 0x1E96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96F0u;
        // 0x1e96f4: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E96F8u;
        goto label_1e96f8;
    }
    ctx->pc = 0x1E96F0u;
    {
        const bool branch_taken_0x1e96f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e96f0) {
            ctx->pc = 0x1E96F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E96F0u;
            // 0x1e96f4: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E971Cu;
            goto label_1e971c;
        }
    }
    ctx->pc = 0x1E96F8u;
label_1e96f8:
    // 0x1e96f8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e96f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e96fc:
    // 0x1e96fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e96fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9700:
    // 0x1e9700: 0x0  nop
    ctx->pc = 0x1e9700u;
    // NOP
label_1e9704:
    // 0x1e9704: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1e9708:
    if (ctx->pc == 0x1E9708u) {
        ctx->pc = 0x1E9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9704u;
        // 0x1e9708: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E970Cu;
        goto label_1e970c;
    }
    ctx->pc = 0x1E9704u;
    {
        const bool branch_taken_0x1e9704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9704) {
            ctx->pc = 0x1E9708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9704u;
            // 0x1e9708: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E971Cu;
            goto label_1e971c;
        }
    }
    ctx->pc = 0x1E970Cu;
label_1e970c:
    // 0x1e970c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9710:
    // 0x1e9710: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1e9714:
    if (ctx->pc == 0x1E9714u) {
        ctx->pc = 0x1E9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9710u;
        // 0x1e9714: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9718u;
        goto label_1e9718;
    }
    ctx->pc = 0x1E9710u;
    {
        const bool branch_taken_0x1e9710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9710u;
        // 0x1e9714: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9710) {
            ctx->pc = 0x1E97C8u;
            goto label_1e97c8;
        }
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e971c:
    // 0x1e971c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e9720:
    if (ctx->pc == 0x1E9720u) {
        ctx->pc = 0x1E9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E971Cu;
        // 0x1e9720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9724u;
        goto label_1e9724;
    }
    ctx->pc = 0x1E971Cu;
    {
        const bool branch_taken_0x1e971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E971Cu;
        // 0x1e9720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e971c) {
            ctx->pc = 0x1E97A8u;
            goto label_1e97a8;
        }
    }
    ctx->pc = 0x1E9724u;
label_1e9724:
    // 0x1e9724: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x1e9724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
label_1e9728:
    // 0x1e9728: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1e972c:
    if (ctx->pc == 0x1E972Cu) {
        ctx->pc = 0x1E972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9728u;
        // 0x1e972c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9730u;
        goto label_1e9730;
    }
    ctx->pc = 0x1E9728u;
    {
        const bool branch_taken_0x1e9728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9728) {
            ctx->pc = 0x1E972Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9728u;
            // 0x1e972c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9754u;
            goto label_1e9754;
        }
    }
    ctx->pc = 0x1E9730u;
label_1e9730:
    // 0x1e9730: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9734:
    // 0x1e9734: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e9734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1e9738:
    // 0x1e9738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e973c:
    // 0x1e973c: 0x0  nop
    ctx->pc = 0x1e973cu;
    // NOP
label_1e9740:
    // 0x1e9740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9744:
    // 0x1e9744: 0x0  nop
    ctx->pc = 0x1e9744u;
    // NOP
label_1e9748:
    // 0x1e9748: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1e974c:
    if (ctx->pc == 0x1E974Cu) {
        ctx->pc = 0x1E974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9748u;
        // 0x1e974c: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9750u;
        goto label_1e9750;
    }
    ctx->pc = 0x1E9748u;
    {
        const bool branch_taken_0x1e9748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9748u;
        // 0x1e974c: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9748) {
            ctx->pc = 0x1E97C8u;
            goto label_1e97c8;
        }
    }
    ctx->pc = 0x1E9750u;
label_1e9750:
    // 0x1e9750: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e9754:
    // 0x1e9754: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e9758:
    // 0x1e9758: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e9758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e975c:
    // 0x1e975c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e9760:
    if (ctx->pc == 0x1E9760u) {
        ctx->pc = 0x1E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E975Cu;
        // 0x1e9760: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9764u;
        goto label_1e9764;
    }
    ctx->pc = 0x1E975Cu;
    {
        const bool branch_taken_0x1e975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E975Cu;
        // 0x1e9760: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e975c) {
            ctx->pc = 0x1E97C4u;
            goto label_1e97c4;
        }
    }
    ctx->pc = 0x1E9764u;
label_1e9764:
    // 0x1e9764: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e9764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1e9768:
    // 0x1e9768: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e976c:
    // 0x1e976c: 0x0  nop
    ctx->pc = 0x1e976cu;
    // NOP
label_1e9770:
    // 0x1e9770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9774:
    // 0x1e9774: 0x0  nop
    ctx->pc = 0x1e9774u;
    // NOP
label_1e9778:
    // 0x1e9778: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1e977c:
    if (ctx->pc == 0x1E977Cu) {
        ctx->pc = 0x1E977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9778u;
        // 0x1e977c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9780u;
        goto label_1e9780;
    }
    ctx->pc = 0x1E9778u;
    {
        const bool branch_taken_0x1e9778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9778) {
            ctx->pc = 0x1E977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9778u;
            // 0x1e977c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E97A4u;
            goto label_1e97a4;
        }
    }
    ctx->pc = 0x1E9780u;
label_1e9780:
    // 0x1e9780: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e9780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9784:
    // 0x1e9784: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9788:
    // 0x1e9788: 0x0  nop
    ctx->pc = 0x1e9788u;
    // NOP
label_1e978c:
    // 0x1e978c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1e9790:
    if (ctx->pc == 0x1E9790u) {
        ctx->pc = 0x1E9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E978Cu;
        // 0x1e9790: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9794u;
        goto label_1e9794;
    }
    ctx->pc = 0x1E978Cu;
    {
        const bool branch_taken_0x1e978c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e978c) {
            ctx->pc = 0x1E9790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E978Cu;
            // 0x1e9790: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E97A4u;
            goto label_1e97a4;
        }
    }
    ctx->pc = 0x1E9794u;
label_1e9794:
    // 0x1e9794: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9798:
    // 0x1e9798: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e979c:
    if (ctx->pc == 0x1E979Cu) {
        ctx->pc = 0x1E979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9798u;
        // 0x1e979c: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97A0u;
        goto label_1e97a0;
    }
    ctx->pc = 0x1E9798u;
    {
        const bool branch_taken_0x1e9798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9798u;
        // 0x1e979c: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9798) {
            ctx->pc = 0x1E97C8u;
            goto label_1e97c8;
        }
    }
    ctx->pc = 0x1E97A0u;
label_1e97a0:
    // 0x1e97a0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e97a4:
    // 0x1e97a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e97a8:
    // 0x1e97a8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e97a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e97ac:
    // 0x1e97ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e97b0:
    // 0x1e97b0: 0x40f809  jalr        $v0
label_1e97b4:
    if (ctx->pc == 0x1E97B4u) {
        ctx->pc = 0x1E97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97B0u;
        // 0x1e97b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97B8u;
        goto label_1e97b8;
    }
    ctx->pc = 0x1E97B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E97B8u);
        ctx->pc = 0x1E97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97B0u;
        // 0x1e97b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E97B0u, 0x1E97B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E97B8u;
label_1e97b8:
    // 0x1e97b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e97bc:
    // 0x1e97bc: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1e97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_1e97c0:
    // 0x1e97c0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1e97c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1e97c4:
    // 0x1e97c4: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x1e97c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
label_1e97c8:
    // 0x1e97c8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1e97cc:
    if (ctx->pc == 0x1E97CCu) {
        ctx->pc = 0x1E97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97C8u;
        // 0x1e97cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97D0u;
        goto label_1e97d0;
    }
    ctx->pc = 0x1E97C8u;
    {
        const bool branch_taken_0x1e97c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97c8) {
            ctx->pc = 0x1E97CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E97C8u;
            // 0x1e97cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E97F4u;
            goto label_1e97f4;
        }
    }
    ctx->pc = 0x1E97D0u;
label_1e97d0:
    // 0x1e97d0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e97d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e97d4:
    // 0x1e97d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1e97d8:
    // 0x1e97d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e97d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e97dc:
    // 0x1e97dc: 0x0  nop
    ctx->pc = 0x1e97dcu;
    // NOP
label_1e97e0:
    // 0x1e97e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e97e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e97e4:
    // 0x1e97e4: 0x0  nop
    ctx->pc = 0x1e97e4u;
    // NOP
label_1e97e8:
    // 0x1e97e8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1e97ec:
    if (ctx->pc == 0x1E97ECu) {
        ctx->pc = 0x1E97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97E8u;
        // 0x1e97ec: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E97F0u;
        goto label_1e97f0;
    }
    ctx->pc = 0x1E97E8u;
    {
        const bool branch_taken_0x1e97e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97E8u;
        // 0x1e97ec: 0x32422000  andi        $v0, $s2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97e8) {
            ctx->pc = 0x1E9850u;
            goto label_1e9850;
        }
    }
    ctx->pc = 0x1E97F0u;
label_1e97f0:
    // 0x1e97f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e97f4:
    // 0x1e97f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e97f8:
    // 0x1e97f8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e97f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e97fc:
    // 0x1e97fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e9800:
    if (ctx->pc == 0x1E9800u) {
        ctx->pc = 0x1E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97FCu;
        // 0x1e9800: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9804u;
        goto label_1e9804;
    }
    ctx->pc = 0x1E97FCu;
    {
        const bool branch_taken_0x1e97fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97FCu;
        // 0x1e9800: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97fc) {
            ctx->pc = 0x1E984Cu;
            goto label_1e984c;
        }
    }
    ctx->pc = 0x1E9804u;
label_1e9804:
    // 0x1e9804: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_1e9808:
    // 0x1e9808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e980c:
    // 0x1e980c: 0x0  nop
    ctx->pc = 0x1e980cu;
    // NOP
label_1e9810:
    // 0x1e9810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9814:
    // 0x1e9814: 0x0  nop
    ctx->pc = 0x1e9814u;
    // NOP
label_1e9818:
    // 0x1e9818: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1e981c:
    if (ctx->pc == 0x1E981Cu) {
        ctx->pc = 0x1E981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9818u;
        // 0x1e981c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9820u;
        goto label_1e9820;
    }
    ctx->pc = 0x1E9818u;
    {
        const bool branch_taken_0x1e9818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9818) {
            ctx->pc = 0x1E981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9818u;
            // 0x1e981c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9844u;
            goto label_1e9844;
        }
    }
    ctx->pc = 0x1E9820u;
label_1e9820:
    // 0x1e9820: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1e9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9824:
    // 0x1e9824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9828:
    // 0x1e9828: 0x0  nop
    ctx->pc = 0x1e9828u;
    // NOP
label_1e982c:
    // 0x1e982c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1e9830:
    if (ctx->pc == 0x1E9830u) {
        ctx->pc = 0x1E9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E982Cu;
        // 0x1e9830: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9834u;
        goto label_1e9834;
    }
    ctx->pc = 0x1E982Cu;
    {
        const bool branch_taken_0x1e982c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e982c) {
            ctx->pc = 0x1E9830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E982Cu;
            // 0x1e9830: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9844u;
            goto label_1e9844;
        }
    }
    ctx->pc = 0x1E9834u;
label_1e9834:
    // 0x1e9834: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9838:
    // 0x1e9838: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1e983c:
    if (ctx->pc == 0x1E983Cu) {
        ctx->pc = 0x1E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9838u;
        // 0x1e983c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9840u;
        goto label_1e9840;
    }
    ctx->pc = 0x1E9838u;
    {
        const bool branch_taken_0x1e9838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9838) {
            ctx->pc = 0x1E983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9838u;
            // 0x1e983c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E98ECu;
            goto label_1e98ec;
        }
    }
    ctx->pc = 0x1E9840u;
label_1e9840:
    // 0x1e9840: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e9844:
    // 0x1e9844: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e9848:
    if (ctx->pc == 0x1E9848u) {
        ctx->pc = 0x1E9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9844u;
        // 0x1e9848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E984Cu;
        goto label_1e984c;
    }
    ctx->pc = 0x1E9844u;
    {
        const bool branch_taken_0x1e9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9844u;
        // 0x1e9848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9844) {
            ctx->pc = 0x1E98CCu;
            goto label_1e98cc;
        }
    }
    ctx->pc = 0x1E984Cu;
label_1e984c:
    // 0x1e984c: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x1e984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
label_1e9850:
    // 0x1e9850: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1e9854:
    if (ctx->pc == 0x1E9854u) {
        ctx->pc = 0x1E9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9850u;
        // 0x1e9854: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9858u;
        goto label_1e9858;
    }
    ctx->pc = 0x1E9850u;
    {
        const bool branch_taken_0x1e9850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9850u;
        // 0x1e9854: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9850) {
            ctx->pc = 0x1E9878u;
            goto label_1e9878;
        }
    }
    ctx->pc = 0x1E9858u;
label_1e9858:
    // 0x1e9858: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e985c:
    // 0x1e985c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e9860:
    // 0x1e9860: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9864:
    // 0x1e9864: 0x0  nop
    ctx->pc = 0x1e9864u;
    // NOP
label_1e9868:
    // 0x1e9868: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e986c:
    // 0x1e986c: 0x0  nop
    ctx->pc = 0x1e986cu;
    // NOP
label_1e9870:
    // 0x1e9870: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1e9874:
    if (ctx->pc == 0x1E9874u) {
        ctx->pc = 0x1E9878u;
        goto label_1e9878;
    }
    ctx->pc = 0x1E9870u;
    {
        const bool branch_taken_0x1e9870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9870) {
            ctx->pc = 0x1E98ECu;
            goto label_1e98ec;
        }
    }
    ctx->pc = 0x1E9878u;
label_1e9878:
    // 0x1e9878: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e987c:
    // 0x1e987c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1e987cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e9880:
    // 0x1e9880: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e9884:
    if (ctx->pc == 0x1E9884u) {
        ctx->pc = 0x1E9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9880u;
        // 0x1e9884: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9888u;
        goto label_1e9888;
    }
    ctx->pc = 0x1E9880u;
    {
        const bool branch_taken_0x1e9880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9880u;
        // 0x1e9884: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9880) {
            ctx->pc = 0x1E98E8u;
            goto label_1e98e8;
        }
    }
    ctx->pc = 0x1E9888u;
label_1e9888:
    // 0x1e9888: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e988c:
    // 0x1e988c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e988cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9890:
    // 0x1e9890: 0x0  nop
    ctx->pc = 0x1e9890u;
    // NOP
label_1e9894:
    // 0x1e9894: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9898:
    // 0x1e9898: 0x0  nop
    ctx->pc = 0x1e9898u;
    // NOP
label_1e989c:
    // 0x1e989c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1e98a0:
    if (ctx->pc == 0x1E98A0u) {
        ctx->pc = 0x1E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E989Cu;
        // 0x1e98a0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98A4u;
        goto label_1e98a4;
    }
    ctx->pc = 0x1E989Cu;
    {
        const bool branch_taken_0x1e989c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e989c) {
            ctx->pc = 0x1E98A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E989Cu;
            // 0x1e98a0: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E98C8u;
            goto label_1e98c8;
        }
    }
    ctx->pc = 0x1E98A4u;
label_1e98a4:
    // 0x1e98a4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1e98a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e98a8:
    // 0x1e98a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e98a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e98ac:
    // 0x1e98ac: 0x0  nop
    ctx->pc = 0x1e98acu;
    // NOP
label_1e98b0:
    // 0x1e98b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1e98b4:
    if (ctx->pc == 0x1E98B4u) {
        ctx->pc = 0x1E98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98B0u;
        // 0x1e98b4: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98B8u;
        goto label_1e98b8;
    }
    ctx->pc = 0x1E98B0u;
    {
        const bool branch_taken_0x1e98b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e98b0) {
            ctx->pc = 0x1E98B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E98B0u;
            // 0x1e98b4: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E98C8u;
            goto label_1e98c8;
        }
    }
    ctx->pc = 0x1E98B8u;
label_1e98b8:
    // 0x1e98b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e98bc:
    // 0x1e98bc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1e98c0:
    if (ctx->pc == 0x1E98C0u) {
        ctx->pc = 0x1E98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98BCu;
        // 0x1e98c0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98C4u;
        goto label_1e98c4;
    }
    ctx->pc = 0x1E98BCu;
    {
        const bool branch_taken_0x1e98bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e98bc) {
            ctx->pc = 0x1E98C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E98BCu;
            // 0x1e98c0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E98ECu;
            goto label_1e98ec;
        }
    }
    ctx->pc = 0x1E98C4u;
label_1e98c4:
    // 0x1e98c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e98c8:
    // 0x1e98c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e98c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e98cc:
    // 0x1e98cc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e98ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e98d0:
    // 0x1e98d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e98d4:
    // 0x1e98d4: 0x40f809  jalr        $v0
label_1e98d8:
    if (ctx->pc == 0x1E98D8u) {
        ctx->pc = 0x1E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98D4u;
        // 0x1e98d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98DCu;
        goto label_1e98dc;
    }
    ctx->pc = 0x1E98D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E98DCu);
        ctx->pc = 0x1E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98D4u;
        // 0x1e98d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E98D4u, 0x1E98DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E98DCu;
label_1e98dc:
    // 0x1e98dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e98dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e98e0:
    // 0x1e98e0: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1e98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_1e98e4:
    // 0x1e98e4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1e98e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1e98e8:
    // 0x1e98e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e98ec:
    // 0x1e98ec: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
label_1e98f0:
    if (ctx->pc == 0x1E98F0u) {
        ctx->pc = 0x1E98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98ECu;
        // 0x1e98f0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E98F4u;
        goto label_1e98f4;
    }
    ctx->pc = 0x1E98ECu;
    {
        const bool branch_taken_0x1e98ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1e98ec) {
            ctx->pc = 0x1E98F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E98ECu;
            // 0x1e98f0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E98F4u;
            goto label_1e98f4;
        }
    }
    ctx->pc = 0x1E98F4u;
label_1e98f4:
    // 0x1e98f4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1e98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e98f8:
    // 0x1e98f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e98fc:
    // 0x1e98fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e98fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9900:
    // 0x1e9900: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9900u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9904:
    // 0x1e9904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9908:
    // 0x1e9908: 0x0  nop
    ctx->pc = 0x1e9908u;
    // NOP
label_1e990c:
    // 0x1e990c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1e9910:
    if (ctx->pc == 0x1E9910u) {
        ctx->pc = 0x1E9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E990Cu;
        // 0x1e9910: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9914u;
        goto label_1e9914;
    }
    ctx->pc = 0x1E990Cu;
    {
        const bool branch_taken_0x1e990c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E990Cu;
        // 0x1e9910: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e990c) {
            ctx->pc = 0x1E9928u;
            goto label_1e9928;
        }
    }
    ctx->pc = 0x1E9914u;
label_1e9914:
    // 0x1e9914: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9914u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9918:
    // 0x1e9918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e991c:
    // 0x1e991c: 0x0  nop
    ctx->pc = 0x1e991cu;
    // NOP
label_1e9920:
    // 0x1e9920: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_1e9924:
    if (ctx->pc == 0x1E9924u) {
        ctx->pc = 0x1E9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9920u;
        // 0x1e9924: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9928u;
        goto label_1e9928;
    }
    ctx->pc = 0x1E9920u;
    {
        const bool branch_taken_0x1e9920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9920) {
            ctx->pc = 0x1E9924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9920u;
            // 0x1e9924: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9958u;
            goto label_1e9958;
        }
    }
    ctx->pc = 0x1E9928u;
label_1e9928:
    // 0x1e9928: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e9928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e992c:
    // 0x1e992c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e992cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9930:
    // 0x1e9930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9934:
    // 0x1e9934: 0x0  nop
    ctx->pc = 0x1e9934u;
    // NOP
label_1e9938:
    // 0x1e9938: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e993c:
    if (ctx->pc == 0x1E993Cu) {
        ctx->pc = 0x1E993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9938u;
        // 0x1e993c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9940u;
        goto label_1e9940;
    }
    ctx->pc = 0x1E9938u;
    {
        const bool branch_taken_0x1e9938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9938u;
        // 0x1e993c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9938) {
            ctx->pc = 0x1E9958u;
            goto label_1e9958;
        }
    }
    ctx->pc = 0x1E9940u;
label_1e9940:
    // 0x1e9940: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9940u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9944:
    // 0x1e9944: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9948:
    // 0x1e9948: 0x0  nop
    ctx->pc = 0x1e9948u;
    // NOP
label_1e994c:
    // 0x1e994c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1e9950:
    if (ctx->pc == 0x1E9950u) {
        ctx->pc = 0x1E9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E994Cu;
        // 0x1e9950: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9954u;
        goto label_1e9954;
    }
    ctx->pc = 0x1E994Cu;
    {
        const bool branch_taken_0x1e994c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e994c) {
            ctx->pc = 0x1E9950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E994Cu;
            // 0x1e9950: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E995Cu;
            goto label_1e995c;
        }
    }
    ctx->pc = 0x1E9954u;
label_1e9954:
    // 0x1e9954: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e9954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1e9958:
    // 0x1e9958: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1e9958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e995c:
    // 0x1e995c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e995cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e9960:
    // 0x1e9960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9964:
    // 0x1e9964: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9964u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9968:
    // 0x1e9968: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e996c:
    // 0x1e996c: 0x0  nop
    ctx->pc = 0x1e996cu;
    // NOP
label_1e9970:
    // 0x1e9970: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1e9974:
    if (ctx->pc == 0x1E9974u) {
        ctx->pc = 0x1E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9970u;
        // 0x1e9974: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9978u;
        goto label_1e9978;
    }
    ctx->pc = 0x1E9970u;
    {
        const bool branch_taken_0x1e9970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9970u;
        // 0x1e9974: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9970) {
            ctx->pc = 0x1E998Cu;
            goto label_1e998c;
        }
    }
    ctx->pc = 0x1E9978u;
label_1e9978:
    // 0x1e9978: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9978u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e997c:
    // 0x1e997c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e997cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9980:
    // 0x1e9980: 0x0  nop
    ctx->pc = 0x1e9980u;
    // NOP
label_1e9984:
    // 0x1e9984: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1e9988:
    if (ctx->pc == 0x1E9988u) {
        ctx->pc = 0x1E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9984u;
        // 0x1e9988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E998Cu;
        goto label_1e998c;
    }
    ctx->pc = 0x1E9984u;
    {
        const bool branch_taken_0x1e9984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9984u;
        // 0x1e9988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9984) {
            ctx->pc = 0x1E99B8u;
            goto label_1e99b8;
        }
    }
    ctx->pc = 0x1E998Cu;
label_1e998c:
    // 0x1e998c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1e998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9990:
    // 0x1e9990: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9990u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e9994:
    // 0x1e9994: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9998:
    // 0x1e9998: 0x0  nop
    ctx->pc = 0x1e9998u;
    // NOP
label_1e999c:
    // 0x1e999c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e99a0:
    if (ctx->pc == 0x1E99A0u) {
        ctx->pc = 0x1E99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E999Cu;
        // 0x1e99a0: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99A4u;
        goto label_1e99a4;
    }
    ctx->pc = 0x1E999Cu;
    {
        const bool branch_taken_0x1e999c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E999Cu;
        // 0x1e99a0: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e999c) {
            ctx->pc = 0x1E99BCu;
            goto label_1e99bc;
        }
    }
    ctx->pc = 0x1E99A4u;
label_1e99a4:
    // 0x1e99a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e99a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1e99a8:
    // 0x1e99a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e99a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e99ac:
    // 0x1e99ac: 0x0  nop
    ctx->pc = 0x1e99acu;
    // NOP
label_1e99b0:
    // 0x1e99b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e99b4:
    if (ctx->pc == 0x1E99B4u) {
        ctx->pc = 0x1E99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99B0u;
        // 0x1e99b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99B8u;
        goto label_1e99b8;
    }
    ctx->pc = 0x1E99B0u;
    {
        const bool branch_taken_0x1e99b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99B0u;
        // 0x1e99b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99b0) {
            ctx->pc = 0x1E99BCu;
            goto label_1e99bc;
        }
    }
    ctx->pc = 0x1E99B8u;
label_1e99b8:
    // 0x1e99b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e99bc:
    // 0x1e99bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e99bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e99c0:
    // 0x1e99c0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1e99c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1e99c4:
    // 0x1e99c4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1e99c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1e99c8:
    // 0x1e99c8: 0xb2030013  sdl         $v1, 0x13($s0)
    ctx->pc = 0x1e99c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e99cc:
    // 0x1e99cc: 0xb603000c  sdr         $v1, 0xC($s0)
    ctx->pc = 0x1e99ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e99d0:
    // 0x1e99d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e99d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e99d4:
    // 0x1e99d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e99d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e99d8:
    // 0x1e99d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e99d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e99dc:
    // 0x1e99dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e99dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e99e0:
    // 0x1e99e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e99e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e99e4:
    // 0x1e99e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e99e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e99e8:
    // 0x1e99e8: 0x3e00008  jr          $ra
label_1e99ec:
    if (ctx->pc == 0x1E99ECu) {
        ctx->pc = 0x1E99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E8u;
        // 0x1e99ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99F0u;
        goto label_1e99f0;
    }
    ctx->pc = 0x1E99E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E8u;
        // 0x1e99ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E99E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E99F0u;
label_1e99f0:
    // 0x1e99f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e99f4:
    // 0x1e99f4: 0x0  nop
    ctx->pc = 0x1e99f4u;
    // NOP
    ctx->pc = 0x1e99f8u;
}
